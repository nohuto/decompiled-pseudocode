/*
 * XREFs of IopCheckVpbMounted @ 0x1402FE890
 * Callers:
 *     IopParseDevice @ 0x14085F1F0 (IopParseDevice.c)
 * Callees:
 *     KeWakeAddressAll @ 0x14028A700 (KeWakeAddressAll.c)
 *     KeDisableInterrupts @ 0x14028A900 (KeDisableInterrupts.c)
 *     KxWaitForLockChainValid @ 0x14028A940 (KxWaitForLockChainValid.c)
 *     KeReleaseQueuedSpinLock @ 0x14028B980 (KeReleaseQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028BBC0 (KiRemoveSystemWorkPriorityKick.c)
 *     IopDecrementDeviceObjectRef @ 0x1402FED30 (IopDecrementDeviceObjectRef.c)
 *     IopCompleteUnloadOrDelete @ 0x1402FEF84 (IopCompleteUnloadOrDelete.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1402FF4DC (KiReleaseQueuedSpinLockInstrumented.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140301030 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KxWaitForLockOwnerShip @ 0x140301110 (KxWaitForLockOwnerShip.c)
 *     KeAcquireQueuedSpinLock @ 0x140301270 (KeAcquireQueuedSpinLock.c)
 *     IoAddTriageDumpDataBlock @ 0x14041F7F0 (IoAddTriageDumpDataBlock.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiHaltOnAddressWakeEntireList @ 0x1404F668C (KiHaltOnAddressWakeEntireList.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     IopMountVolume @ 0x140A1F624 (IopMountVolume.c)
 */

__int64 __fastcall IopCheckVpbMounted(__int64 a1, ULONG_PTR a2, __int64 a3, int *a4)
{
  unsigned __int8 CurrentIrql; // si
  void *ArbitraryUserPointer; // rax
  __int64 v8; // rcx
  volatile __int64 *v9; // r8
  __int64 v10; // rdx
  ULONG_PTR v11; // rdi
  __int16 v12; // ax
  int v13; // eax
  volatile signed __int64 **v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rcx
  bool v17; // bl
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  __int64 result; // rax
  unsigned __int8 v24; // si
  char *v25; // rcx
  volatile __int64 *v26; // r8
  __int64 v27; // rdx
  int v28; // eax
  volatile signed __int64 **v29; // rbx
  __int64 v30; // rax
  __int64 v31; // rdx
  signed __int32 v32; // eax
  signed __int32 v33; // ett
  int v34; // eax
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // rcx
  signed __int32 v38[8]; // [rsp+0h] [rbp-58h] BYREF
  void *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v40; // [rsp+68h] [rbp+10h] BYREF

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql);
  ArbitraryUserPointer = KeGetPcr()->NtTib.ArbitraryUserPointer;
  v8 = (__int64)ArbitraryUserPointer + 144;
  v9 = (volatile __int64 *)*((_QWORD *)ArbitraryUserPointer + 19);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    v10 = _InterlockedExchange64(v9, v8);
    if ( v10 )
      KxWaitForLockOwnerShip(v8, v10, v9, a4);
  }
  else
  {
    KiAcquireQueuedSpinLockInstrumented(v8, v9);
  }
  while ( 1 )
  {
    v11 = *(_QWORD *)(a2 + 56);
    v12 = *(_WORD *)(v11 + 4);
    if ( (v12 & 1) != 0 )
    {
      if ( (v12 & 2) != 0 )
      {
        *a4 = -1073741790;
        v11 = 0LL;
      }
      else
      {
        v13 = *(_DWORD *)(v11 + 28) + 1;
        *(_DWORD *)(v11 + 28) = v13;
        if ( v13 <= 0 )
        {
          v35 = *(_QWORD *)(v11 + 8);
          if ( v35 )
          {
            IoAddTriageDumpDataBlock(v35, (PVOID)0x150);
            v36 = *(_QWORD *)(*(_QWORD *)(v11 + 8) + 8LL);
            if ( v36 )
            {
              IoAddTriageDumpDataBlock(v36, (PVOID)0x150);
              IoAddTriageDumpDataBlock(
                *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v11 + 8) + 8LL) + 64LL),
                (PVOID)*(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(v11 + 8) + 8LL) + 56LL));
            }
          }
          KeBugCheckEx(0x18u, 0LL, v11, 7uLL, *(unsigned int *)(v11 + 28));
        }
      }
      v14 = (volatile signed __int64 **)((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 144);
      if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
      {
        _m_prefetchw(v14);
        v15 = (__int64)*v14;
        if ( !*v14 )
        {
          if ( v14 == (volatile signed __int64 **)_InterlockedCompareExchange64(v14[1], 0LL, (signed __int64)v14) )
            goto LABEL_17;
          v15 = KxWaitForLockChainValid((__int64 *)v14);
        }
        *v14 = 0LL;
        v16 = (__int64)v14[1];
        if ( (((unsigned __int8)v16 ^ (unsigned __int8)_InterlockedExchange64((volatile __int64 *)(v15 + 8), v16)) & 4) != 0 )
        {
          _InterlockedOr(v38, 0);
          v17 = KeDisableInterrupts();
          KiHaltOnAddressWakeEntireList(v20, _InterlockedExchange64((volatile __int64 *)(v19 + 8 * v18), 0LL));
          if ( v17 )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
            if ( SchedulerAssist )
            {
              _m_prefetchw(SchedulerAssist);
              v32 = *SchedulerAssist;
              do
              {
                v33 = v32;
                v32 = _InterlockedCompareExchange(SchedulerAssist, v32 & 0xFFDFFFFF, v32);
              }
              while ( v33 != v32 );
              if ( (v32 & 0x200000) != 0 )
                KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
            }
            _enable();
          }
        }
      }
      else
      {
        KiReleaseQueuedSpinLockInstrumented(v14, retaddr);
      }
LABEL_17:
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
      __writecr8(CurrentIrql);
      if ( v11 )
        return v11;
      v24 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags )
        KiRaiseIrqlProcessIrqlFlags(v24);
      v25 = (char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 160;
      v26 = (volatile __int64 *)*((_QWORD *)v25 + 1);
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
      {
        v27 = _InterlockedExchange64(v26, (__int64)v25);
        if ( v27 )
          KxWaitForLockOwnerShip(v25, v27, v26, a4);
      }
      else
      {
        KiAcquireQueuedSpinLockInstrumented(v25, v26);
      }
      v28 = *(_DWORD *)(a2 + 4) - 1;
      *(_DWORD *)(a2 + 4) = v28;
      if ( v28 < 0 )
      {
        v37 = *(_QWORD *)(a2 + 8);
        if ( v37 )
        {
          IoAddTriageDumpDataBlock(v37, (PVOID)0x150);
          IoAddTriageDumpDataBlock(
            *(_QWORD *)(*(_QWORD *)(a2 + 8) + 64LL),
            (PVOID)*(unsigned __int16 *)(*(_QWORD *)(a2 + 8) + 56LL));
        }
        KeBugCheckEx(0x18u, 0LL, a2, 6uLL, *(int *)(a2 + 4));
      }
      if ( !v28 && (*(_DWORD *)(*(_QWORD *)(a2 + 312) + 32LL) & 7) != 0 )
      {
        IopCompleteUnloadOrDelete((PVOID)a2);
        return v11;
      }
      v29 = (volatile signed __int64 **)((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 160);
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 && !PopHibernateInProgress )
      {
        KiReleaseQueuedSpinLockInstrumented(v29, retaddr);
        goto LABEL_35;
      }
      _m_prefetchw(v29);
      v30 = (__int64)*v29;
      if ( !*v29 )
      {
        if ( v29 == (volatile signed __int64 **)_InterlockedCompareExchange64(v29[1], 0LL, (signed __int64)v29) )
        {
LABEL_35:
          if ( KiIrqlFlags )
            KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v24);
          __writecr8(v24);
          return v11;
        }
        v30 = KxWaitForLockChainValid((__int64 *)v29);
      }
      *v29 = 0LL;
      v31 = (__int64)v29[1];
      if ( (((unsigned __int8)v31 ^ (unsigned __int8)_InterlockedExchange64((volatile __int64 *)(v30 + 8), v31)) & 4) != 0 )
        KeWakeAddressAll(v30 + 8, v31);
      goto LABEL_35;
    }
    KeReleaseQueuedSpinLock(9uLL, CurrentIrql);
    v40 = 0LL;
    v34 = IopMountVolume((PVOID)a2, (__int64)&v40);
    *a4 = v34;
    if ( v34 < 0 || v34 == 257 || v34 == 192 )
      break;
    result = v40;
    if ( v40 )
      return result;
    CurrentIrql = KeAcquireQueuedSpinLock(9uLL);
  }
  IopDecrementDeviceObjectRef(a2);
  result = 0LL;
  if ( *a4 >= 0 )
    *a4 = -1073741806;
  return result;
}
