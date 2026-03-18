/*
 * XREFs of IopDecrementVpbRefCount @ 0x1402FE6C0
 * Callers:
 *     IopDeleteFile @ 0x140844B30 (IopDeleteFile.c)
 *     IoVerifyVolume @ 0x140AB22D0 (IoVerifyVolume.c)
 * Callees:
 *     KeDisableInterrupts @ 0x14028A900 (KeDisableInterrupts.c)
 *     KxWaitForLockChainValid @ 0x14028A940 (KxWaitForLockChainValid.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028BBC0 (KiRemoveSystemWorkPriorityKick.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1402FF4DC (KiReleaseQueuedSpinLockInstrumented.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140301030 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KxWaitForLockOwnerShip @ 0x140301110 (KxWaitForLockOwnerShip.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiHaltOnAddressWakeEntireList @ 0x1404F668C (KiHaltOnAddressWakeEntireList.c)
 */

__int64 __fastcall IopDecrementVpbRefCount(__int64 a1, char a2, __int64 a3, __int64 a4)
{
  unsigned __int8 CurrentIrql; // si
  void *ArbitraryUserPointer; // rax
  __int64 v7; // rcx
  volatile __int64 *v8; // r8
  __int64 v9; // rdx
  unsigned int v10; // ebp
  volatile signed __int64 **v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  bool v16; // di
  __int64 v17; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v21; // eax
  signed __int32 v22; // ett
  signed __int32 v23[10]; // [rsp+0h] [rbp-28h] BYREF
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( !a2 )
    return (unsigned int)--*(_DWORD *)(a1 + 28);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql);
  ArbitraryUserPointer = KeGetPcr()->NtTib.ArbitraryUserPointer;
  v7 = (__int64)ArbitraryUserPointer + 144;
  v8 = (volatile __int64 *)*((_QWORD *)ArbitraryUserPointer + 19);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    v9 = _InterlockedExchange64(v8, v7);
    if ( v9 )
      KxWaitForLockOwnerShip(v7, v9, v8, a4);
  }
  else
  {
    KiAcquireQueuedSpinLockInstrumented(v7, v8);
  }
  v10 = --*(_DWORD *)(a1 + 28);
  v11 = (volatile signed __int64 **)((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 144);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 && !PopHibernateInProgress )
  {
    KiReleaseQueuedSpinLockInstrumented(v11, retaddr);
    goto LABEL_15;
  }
  _m_prefetchw(v11);
  v12 = (__int64)*v11;
  if ( *v11 )
  {
LABEL_11:
    *v11 = 0LL;
    v13 = (__int64)v11[1];
    if ( (((unsigned __int8)v13 ^ (unsigned __int8)_InterlockedExchange64((volatile __int64 *)(v12 + 8), v13)) & 4) != 0 )
    {
      _InterlockedOr(v23, 0);
      v16 = KeDisableInterrupts();
      KiHaltOnAddressWakeEntireList(v17, _InterlockedExchange64((volatile __int64 *)(v15 + 8 * v14), 0LL));
      if ( v16 )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
        if ( SchedulerAssist )
        {
          _m_prefetchw(SchedulerAssist);
          v21 = *SchedulerAssist;
          do
          {
            v22 = v21;
            v21 = _InterlockedCompareExchange(SchedulerAssist, v21 & 0xFFDFFFFF, v21);
          }
          while ( v22 != v21 );
          if ( (v21 & 0x200000) != 0 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
        _enable();
      }
    }
    goto LABEL_15;
  }
  if ( v11 != (volatile signed __int64 **)_InterlockedCompareExchange64(v11[1], 0LL, (signed __int64)v11) )
  {
    v12 = KxWaitForLockChainValid((__int64 *)v11);
    goto LABEL_11;
  }
LABEL_15:
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  return v10;
}
