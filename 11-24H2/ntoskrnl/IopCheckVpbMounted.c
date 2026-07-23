/*
 * XREFs of IopCheckVpbMounted @ 0x1403E5C10
 * Callers:
 *     IopParseDevice @ 0x1408A7F20 (IopParseDevice.c)
 * Callees:
 *     KeWakeAddressAll @ 0x1402CA630 (KeWakeAddressAll.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1402CA820 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KxWaitForLockChainValid @ 0x1402CA8D0 (KxWaitForLockChainValid.c)
 *     KeReleaseQueuedSpinLock @ 0x1402CB820 (KeReleaseQueuedSpinLock.c)
 *     KxWaitForLockOwnerShip @ 0x140357C10 (KxWaitForLockOwnerShip.c)
 *     KeAcquireQueuedSpinLock @ 0x140357D70 (KeAcquireQueuedSpinLock.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140359870 (KiAcquireQueuedSpinLockInstrumented.c)
 *     IopDecrementDeviceObjectRef @ 0x1403E6060 (IopDecrementDeviceObjectRef.c)
 *     IopCompleteUnloadOrDelete @ 0x1403E62B0 (IopCompleteUnloadOrDelete.c)
 *     IoAddTriageDumpDataBlock @ 0x1403E65A0 (IoAddTriageDumpDataBlock.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     IopMountVolume @ 0x140A1DB24 (IopMountVolume.c)
 */

__int64 __fastcall IopCheckVpbMounted(__int64 a1, ULONG_PTR a2, __int64 a3, int *a4)
{
  unsigned __int8 CurrentIrql; // si
  char *v7; // rcx
  volatile __int64 *v8; // rdx
  _QWORD *v9; // rax
  ULONG_PTR v10; // rdi
  __int16 v11; // ax
  int v12; // eax
  volatile signed __int64 **v13; // rbx
  unsigned __int8 v14; // si
  char *v15; // rcx
  volatile __int64 *v16; // rdx
  _QWORD *v17; // rax
  int v18; // eax
  volatile signed __int64 **v19; // rbx
  __int64 result; // rax
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rdx
  int v25; // eax
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 retaddr; // [rsp+58h] [rbp+0h]
  __int64 v30; // [rsp+68h] [rbp+10h] BYREF

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
  v7 = (char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 144;
  v8 = (volatile __int64 *)*((_QWORD *)v7 + 1);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    v9 = (_QWORD *)_InterlockedExchange64(v8, (__int64)v7);
    if ( v9 )
      KxWaitForLockOwnerShip((__int64)v7, v9);
  }
  else
  {
    KiAcquireQueuedSpinLockInstrumented((__int64)v7, v8);
  }
  while ( 1 )
  {
    v10 = *(_QWORD *)(a2 + 56);
    v11 = *(_WORD *)(v10 + 4);
    if ( (v11 & 1) != 0 )
    {
      if ( (v11 & 2) != 0 )
      {
        *a4 = -1073741790;
        v10 = 0LL;
      }
      else
      {
        v12 = *(_DWORD *)(v10 + 28) + 1;
        *(_DWORD *)(v10 + 28) = v12;
        if ( v12 <= 0 )
        {
          v26 = *(_QWORD *)(v10 + 8);
          if ( v26 )
          {
            IoAddTriageDumpDataBlock(v26, (PVOID)0x150);
            v27 = *(_QWORD *)(*(_QWORD *)(v10 + 8) + 8LL);
            if ( v27 )
            {
              IoAddTriageDumpDataBlock(v27, (PVOID)0x150);
              IoAddTriageDumpDataBlock(
                *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v10 + 8) + 8LL) + 64LL),
                (PVOID)*(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(v10 + 8) + 8LL) + 56LL));
            }
          }
          KeBugCheckEx(0x18u, 0LL, v10, 7uLL, *(unsigned int *)(v10 + 28));
        }
      }
      v13 = (volatile signed __int64 **)((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 144);
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 && !PopHibernateInProgress )
      {
        KiReleaseQueuedSpinLockInstrumented(v13, retaddr);
        goto LABEL_12;
      }
      _m_prefetchw(v13);
      v21 = (__int64)*v13;
      if ( !*v13 )
      {
        if ( v13 == (volatile signed __int64 **)_InterlockedCompareExchange64(v13[1], 0LL, (signed __int64)v13) )
          goto LABEL_12;
        v21 = KxWaitForLockChainValid((__int64 *)v13);
      }
      *v13 = 0LL;
      v22 = (__int64)v13[1];
      if ( (((unsigned __int8)v22 ^ (unsigned __int8)_InterlockedExchange64((volatile __int64 *)(v21 + 8), v22)) & 4) != 0 )
        KeWakeAddressAll(v21 + 8, v22);
LABEL_12:
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
      __writecr8(CurrentIrql);
      if ( v10 )
        return v10;
      v14 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags )
        KiRaiseIrqlProcessIrqlFlags(v14, 2LL);
      v15 = (char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 160;
      v16 = (volatile __int64 *)*((_QWORD *)v15 + 1);
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
      {
        v17 = (_QWORD *)_InterlockedExchange64(v16, (__int64)v15);
        if ( v17 )
          KxWaitForLockOwnerShip((__int64)v15, v17);
      }
      else
      {
        KiAcquireQueuedSpinLockInstrumented((__int64)v15, v16);
      }
      v18 = *(_DWORD *)(a2 + 4) - 1;
      *(_DWORD *)(a2 + 4) = v18;
      if ( v18 < 0 )
      {
        v28 = *(_QWORD *)(a2 + 8);
        if ( v28 )
        {
          IoAddTriageDumpDataBlock(v28, (PVOID)0x150);
          IoAddTriageDumpDataBlock(
            *(_QWORD *)(*(_QWORD *)(a2 + 8) + 64LL),
            (PVOID)*(unsigned __int16 *)(*(_QWORD *)(a2 + 8) + 56LL));
        }
        KeBugCheckEx(0x18u, 0LL, a2, 6uLL, *(int *)(a2 + 4));
      }
      if ( !v18 && (*(_DWORD *)(*(_QWORD *)(a2 + 312) + 32LL) & 7) != 0 )
      {
        IopCompleteUnloadOrDelete(a2);
        return v10;
      }
      v19 = (volatile signed __int64 **)((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 160);
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 && !PopHibernateInProgress )
      {
        KiReleaseQueuedSpinLockInstrumented(v19, retaddr);
LABEL_25:
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v14);
        __writecr8(v14);
        return v10;
      }
      _m_prefetchw(v19);
      v23 = (__int64)*v19;
      if ( !*v19 )
      {
        if ( v19 == (volatile signed __int64 **)_InterlockedCompareExchange64(v19[1], 0LL, (signed __int64)v19) )
          goto LABEL_25;
        v23 = KxWaitForLockChainValid((__int64 *)v19);
      }
      *v19 = 0LL;
      v24 = (__int64)v19[1];
      if ( (((unsigned __int8)v24 ^ (unsigned __int8)_InterlockedExchange64((volatile __int64 *)(v23 + 8), v24)) & 4) != 0 )
        KeWakeAddressAll(v23 + 8, v24);
      goto LABEL_25;
    }
    KeReleaseQueuedSpinLock(9uLL, CurrentIrql);
    v30 = 0LL;
    v25 = IopMountVolume((PVOID)a2, (__int64)&v30);
    *a4 = v25;
    if ( v25 < 0 || v25 == 257 || v25 == 192 )
      break;
    result = v30;
    if ( v30 )
      return result;
    CurrentIrql = KeAcquireQueuedSpinLock(9uLL);
  }
  IopDecrementDeviceObjectRef(a2);
  result = 0LL;
  if ( *a4 >= 0 )
    *a4 = -1073741806;
  return result;
}
