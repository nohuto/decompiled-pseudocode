/*
 * XREFs of IopIncrementDeviceObjectRefCount @ 0x14041A700
 * Callers:
 *     IopCompleteUnloadOrDelete @ 0x1403F2590 (IopCompleteUnloadOrDelete.c)
 *     PnpMarkDeviceForRemove @ 0x1404BE49C (PnpMarkDeviceForRemove.c)
 *     IoRegisterFileSystem @ 0x1407142F0 (IoRegisterFileSystem.c)
 *     IopDeleteFile @ 0x140841DB0 (IopDeleteFile.c)
 *     IoCreateStreamFileObjectEx2 @ 0x1409A4390 (IoCreateStreamFileObjectEx2.c)
 *     IopMountVolume @ 0x140A29164 (IopMountVolume.c)
 *     IopShutdownBaseFileSystems @ 0x140B539D0 (IopShutdownBaseFileSystems.c)
 * Callees:
 *     KxWaitForLockOwnerShip @ 0x1402D6990 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402D85F0 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KeWakeAddressAll @ 0x140321AA0 (KeWakeAddressAll.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x140321C90 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KxWaitForLockChainValid @ 0x140321D40 (KxWaitForLockChainValid.c)
 *     IoAddTriageDumpDataBlock @ 0x1403F2880 (IoAddTriageDumpDataBlock.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 */

__int64 __fastcall IopIncrementDeviceObjectRefCount(ULONG_PTR BugCheckParameter2, char a2)
{
  int v3; // ebx
  unsigned __int8 CurrentIrql; // bp
  char *v6; // rcx
  volatile __int64 *v7; // r8
  _QWORD *v8; // rdx
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
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
  v6 = (char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 160;
  v7 = (volatile __int64 *)*((_QWORD *)v6 + 1);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    v8 = (_QWORD *)_InterlockedExchange64(v7, (__int64)v6);
    if ( v8 )
      KxWaitForLockOwnerShip((__int64)v6, v8);
  }
  else
  {
    KiAcquireQueuedSpinLockInstrumented((__int64)v6, v7);
  }
  v3 = ++*(_DWORD *)(BugCheckParameter2 + 4);
  v9 = (volatile signed __int64 **)((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 160);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
  {
    _m_prefetchw(v9);
    v10 = (__int64)*v9;
    if ( !*v9 )
    {
      if ( v9 == (volatile signed __int64 **)_InterlockedCompareExchange64(v9[1], 0LL, (signed __int64)v9) )
        goto LABEL_13;
      v10 = KxWaitForLockChainValid((__int64 *)v9);
    }
    *v9 = 0LL;
    v11 = (__int64)v9[1];
    if ( (((unsigned __int8)v11 ^ (unsigned __int8)_InterlockedExchange64((volatile __int64 *)(v10 + 8), v11)) & 4) != 0 )
      KeWakeAddressAll(v10 + 8, v11);
    goto LABEL_13;
  }
  KiReleaseQueuedSpinLockInstrumented(v9, retaddr);
LABEL_13:
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
