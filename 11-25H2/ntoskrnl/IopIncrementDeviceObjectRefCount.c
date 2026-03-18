/*
 * XREFs of IopIncrementDeviceObjectRefCount @ 0x14041D000
 * Callers:
 *     IopCompleteUnloadOrDelete @ 0x1402FEF84 (IopCompleteUnloadOrDelete.c)
 *     PnpMarkDeviceForRemove @ 0x1404BFB50 (PnpMarkDeviceForRemove.c)
 *     IoRegisterFileSystem @ 0x1407081F0 (IoRegisterFileSystem.c)
 *     IopDeleteFile @ 0x140844B30 (IopDeleteFile.c)
 *     IoCreateStreamFileObjectEx2 @ 0x14099F4B0 (IoCreateStreamFileObjectEx2.c)
 *     IopMountVolume @ 0x140A1F624 (IopMountVolume.c)
 *     IopShutdownBaseFileSystems @ 0x140B439D0 (IopShutdownBaseFileSystems.c)
 * Callees:
 *     KeWakeAddressAll @ 0x14028A700 (KeWakeAddressAll.c)
 *     KxWaitForLockChainValid @ 0x14028A940 (KxWaitForLockChainValid.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1402FF4DC (KiReleaseQueuedSpinLockInstrumented.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140301030 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KxWaitForLockOwnerShip @ 0x140301110 (KxWaitForLockOwnerShip.c)
 *     IoAddTriageDumpDataBlock @ 0x14041F7F0 (IoAddTriageDumpDataBlock.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

__int64 __fastcall IopIncrementDeviceObjectRefCount(ULONG_PTR BugCheckParameter2, char a2)
{
  int v3; // ebx
  unsigned __int8 CurrentIrql; // bp
  struct _KPRCB *v6; // rcx
  volatile __int64 *p_Lock; // r8
  struct _KPRCB **v8; // rdx
  volatile signed __int64 **v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  if ( !a2 )
  {
    v3 = *(_DWORD *)(BugCheckParameter2 + 4) + 1;
    *(_DWORD *)(BugCheckParameter2 + 4) = v3;
    goto LABEL_3;
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql);
  v6 = (struct _KPRCB *)((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 160);
  p_Lock = (volatile __int64 *)&v6->CurrentThread->Header.Lock;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    v8 = (struct _KPRCB **)_InterlockedExchange64(p_Lock, (__int64)v6);
    if ( v8 )
      KxWaitForLockOwnerShip(v6, v8);
  }
  else
  {
    KiAcquireQueuedSpinLockInstrumented((__int64)v6, p_Lock);
  }
  v3 = ++*(_DWORD *)(BugCheckParameter2 + 4);
  v9 = (volatile signed __int64 **)((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 160);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 && !PopHibernateInProgress )
  {
    KiReleaseQueuedSpinLockInstrumented(v9, retaddr);
    goto LABEL_16;
  }
  _m_prefetchw(v9);
  v10 = (__int64)*v9;
  if ( *v9 )
  {
LABEL_14:
    *v9 = 0LL;
    v11 = (__int64)v9[1];
    if ( (((unsigned __int8)v11 ^ (unsigned __int8)_InterlockedExchange64((volatile __int64 *)(v10 + 8), v11)) & 4) != 0 )
      KeWakeAddressAll(v10 + 8, v11);
    goto LABEL_16;
  }
  if ( v9 != (volatile signed __int64 **)_InterlockedCompareExchange64(v9[1], 0LL, (signed __int64)v9) )
  {
    v10 = KxWaitForLockChainValid((__int64 *)v9);
    goto LABEL_14;
  }
LABEL_16:
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
LABEL_3:
  if ( v3 <= 0 )
  {
    v12 = *(_QWORD *)(BugCheckParameter2 + 8);
    if ( v12 )
    {
      IoAddTriageDumpDataBlock(v12, (PVOID)0x150);
      IoAddTriageDumpDataBlock(
        *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 8) + 64LL),
        (PVOID)*(unsigned __int16 *)(*(_QWORD *)(BugCheckParameter2 + 8) + 56LL));
    }
    KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 6uLL, *(int *)(BugCheckParameter2 + 4));
  }
  return (unsigned int)v3;
}
