/*
 * XREFs of KeUnstackDetachProcess @ 0x1402CB2C0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiAcquireKobjectLockSafe @ 0x1402C72D0 (KiAcquireKobjectLockSafe.c)
 *     HalpInterruptSendIpi @ 0x1402C8970 (HalpInterruptSendIpi.c)
 *     HalpDisableInterrupts @ 0x1402C9320 (HalpDisableInterrupts.c)
 *     KiDetachProcess @ 0x1402C9FD0 (KiDetachProcess.c)
 *     KiSetAddressPolicy @ 0x1402CA5C0 (KiSetAddressPolicy.c)
 *     KiAcquireThreadLockRaiseToDpc @ 0x1402D1150 (KiAcquireThreadLockRaiseToDpc.c)
 *     KiReleaseThreadLockLowerIrql @ 0x14032DD90 (KiReleaseThreadLockLowerIrql.c)
 *     HvlSwitchVirtualAddressSpace @ 0x1403E20F0 (HvlSwitchVirtualAddressSpace.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheck @ 0x1404F9230 (KeBugCheck.c)
 */

void __stdcall KeUnstackDetachProcess(PRKAPC_STATE ApcState)
{
  __int64 v1; // r9
  _KPROCESS *Process; // rax
  struct _KTHREAD *CurrentThread; // rbx
  _KPROCESS *v4; // r15
  unsigned __int8 CurrentIrql; // di
  unsigned int v6; // edi
  $727077A9B6E167EAE1398C74674DC5A5 *v7; // rdi
  struct _KTHREAD *Flink; // rdx
  __int64 v9; // rdx
  struct _LIST_ENTRY *v10; // rax
  struct _KPRCB *CurrentPrcb; // rax
  __int64 v12; // r8
  unsigned __int64 GroupIndex; // r14
  __int64 v14; // rbp
  unsigned __int64 v15; // rsi
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rsi
  bool v18; // al
  __int64 v19; // r8
  int v20; // edx
  bool v21; // r9
  struct _LIST_ENTRY *Blink; // rax
  struct _LIST_ENTRY *v23; // rcx
  unsigned __int64 v24; // rcx
  unsigned __int8 v25; // si
  unsigned __int32 Value; // eax
  unsigned __int32 v27; // ett
  signed __int64 *p_SwapListEntry; // rdx
  signed __int64 v29; // rax
  signed __int64 v30; // rcx
  unsigned __int64 v31; // rax
  unsigned int v32; // [rsp+20h] [rbp-48h] BYREF
  __int128 v33; // [rsp+24h] [rbp-44h]
  unsigned __int8 v34; // [rsp+70h] [rbp+8h] BYREF

  Process = ApcState->Process;
  if ( Process != (_KPROCESS *)1 )
  {
    if ( Process )
    {
      KiDetachProcess((__int64)ApcState, 0);
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      v4 = CurrentThread->ApcState.Process;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags )
        KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
      v34 = CurrentIrql;
      v6 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
      {
        do
        {
          if ( (++v6 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && KiCheckVpBackingLongSpinWaitHypercall() )
          {
            HvlNotifyLongSpinWait(v6);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( CurrentThread->ThreadLock );
      }
      while ( CurrentThread->ApcState.KernelApcPending )
      {
        if ( CurrentThread->SpecialApcDisable )
          break;
        if ( v34 )
          break;
        KiReleaseThreadLockLowerIrql(CurrentThread);
        KiAcquireThreadLockRaiseToDpc(CurrentThread, &v34);
      }
      if ( !CurrentThread->ApcStateIndex
        || (CurrentThread->ApcState.InProgressFlags & 1) != 0
        || (v7 = &CurrentThread->152, ($727077A9B6E167EAE1398C74674DC5A5 *)v7->ApcState.ApcListHead[0].Flink != v7)
        || (unsigned __int8 *)CurrentThread->ApcState.ApcListHead[1].Flink != &CurrentThread->ApcStateFill[16] )
      {
        KeBugCheck(6u);
      }
      CurrentThread->MiscFlags |= 0x800u;
      CurrentThread->ApcState.Process = CurrentThread->SavedApcState.Process;
      CurrentThread->ApcState.InProgressFlags = CurrentThread->SavedApcState.InProgressFlags;
      CurrentThread->ApcState.KernelApcPending = CurrentThread->SavedApcState.KernelApcPending;
      CurrentThread->ApcState.UserApcPendingAll = CurrentThread->SavedApcState.UserApcPendingAll;
      Flink = (struct _KTHREAD *)CurrentThread->SavedApcState.ApcListHead[0].Flink;
      if ( Flink == (struct _KTHREAD *)&CurrentThread->600 )
      {
        CurrentThread->ApcState.ApcListHead[0].Blink = CurrentThread->ApcState.ApcListHead;
        v7->ApcState.ApcListHead[0].Flink = (struct _LIST_ENTRY *)v7;
        CurrentThread->ApcState.KernelApcPending = 0;
      }
      else
      {
        Blink = CurrentThread->SavedApcState.ApcListHead[0].Blink;
        v7->ApcState.ApcListHead[0].Flink = (struct _LIST_ENTRY *)Flink;
        CurrentThread->ApcState.ApcListHead[0].Blink = Blink;
        Flink->Header.WaitListHead.Flink = (struct _LIST_ENTRY *)v7;
        Blink->Flink = (struct _LIST_ENTRY *)v7;
      }
      v9 = (__int64)CurrentThread->SavedApcState.ApcListHead[1].Flink;
      v10 = &CurrentThread->ApcState.ApcListHead[1];
      if ( (unsigned __int8 *)v9 == &CurrentThread->SavedApcStateFill[16] )
      {
        CurrentThread->ApcState.ApcListHead[1].Blink = &CurrentThread->ApcState.ApcListHead[1];
        v10->Flink = v10;
        CurrentThread->ApcState.UserApcPendingAll = 0;
      }
      else
      {
        v23 = CurrentThread->SavedApcState.ApcListHead[1].Blink;
        v10->Flink = (struct _LIST_ENTRY *)v9;
        CurrentThread->ApcState.ApcListHead[1].Blink = v23;
        *(_QWORD *)(v9 + 8) = v10;
        v23->Flink = v10;
      }
      CurrentThread->SavedApcState.Process = 0LL;
      CurrentThread->ApcStateIndex = 0;
      CurrentThread->ThreadLock = 0LL;
      CurrentPrcb = KeGetCurrentPrcb();
      v12 = (__int64)CurrentThread->ApcState.Process;
      GroupIndex = CurrentPrcb->GroupIndex;
      v14 = 8LL * CurrentPrcb->Group;
      _interlockedbittestandset64((volatile signed __int32 *)(*(_QWORD *)(v12 + 128) + v14 + 8), GroupIndex);
      v15 = *(_QWORD *)(v12 + 40);
      if ( KiKvaShadow )
      {
        v16 = v15 | 0x8000000000000000uLL;
        if ( (v15 & 2) == 0 )
          v16 = *(_QWORD *)(v12 + 40);
        __writegsqword(0xB000u, v16);
        KiSetAddressPolicy(*(unsigned __int8 *)(v12 + 352), v9, v12, v1);
      }
      if ( (HvlEnlightenments & 1) != 0 )
        HvlSwitchVirtualAddressSpace(v15);
      else
        __writecr3(v15);
      if ( KiKvaShadow && !KiFlushPcid )
      {
        v24 = __readcr4();
        if ( (v24 & 0x20080) != 0 )
        {
          __writecr4(v24 ^ 0x80);
          __writecr4(v24);
        }
        else
        {
          v31 = __readcr3();
          __writecr3(v31);
        }
      }
      _interlockedbittestandreset64((volatile signed __int32 *)((char *)&v4->ActiveProcessors->8 + v14), GroupIndex);
      CurrentThread->MiscFlags &= ~0x800u;
      v17 = v34;
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v34);
      __writecr8(v17);
      if ( (_InterlockedExchangeAdd(&v4->StackCount.Value, 0xFFFFFFF8) & 0xFFFFFFF8) == 8 )
      {
        v25 = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags )
          KiRaiseIrqlProcessIrqlFlags(v25, 2LL);
        KiAcquireKobjectLockSafe(&v4->Header.Lock);
        Value = v4->StackCount.Value;
        if ( (Value & 7) == 0 && v4->ThreadListHead.Flink != &v4->ThreadListHead )
        {
          while ( Value < 8 )
          {
            v27 = Value;
            Value = _InterlockedCompareExchange(&v4->StackCount.Value, Value & 0xFFFFFFF8 | 3, Value);
            if ( v27 == Value )
            {
              _InterlockedAnd(&v4->Header.Lock, 0xFFFFFF7F);
              p_SwapListEntry = (signed __int64 *)&v4->SwapListEntry;
              _m_prefetchw(&KiProcessOutSwapListHead);
              v29 = KiProcessOutSwapListHead;
              do
              {
                *p_SwapListEntry = v29;
                v30 = v29;
                v29 = _InterlockedCompareExchange64(&KiProcessOutSwapListHead, (signed __int64)p_SwapListEntry, v29);
              }
              while ( v29 != v30 );
              if ( !v29 )
                KeSetEvent(&KiSwapEvent, 10, 0);
              goto LABEL_57;
            }
          }
        }
        _InterlockedAnd(&v4->Header.Lock, 0xFFFFFF7F);
LABEL_57:
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v25);
        __writecr8(v25);
      }
      if ( ($727077A9B6E167EAE1398C74674DC5A5 *)v7->ApcState.ApcListHead[0].Flink != v7 )
      {
        CurrentThread->ApcState.KernelApcPending = 1;
        v33 = 0LL;
        if ( KiAmdTprLowerInterruptDelayDynamicWorkaround )
        {
          v18 = HalpDisableInterrupts();
          v20 = *(_DWORD *)(v19 + 168);
          v21 = v18;
          *(_DWORD *)(v19 + 168) = v20 | 2;
          if ( !v20 )
            __writemsr(0xC0010015, __readmsr(0xC0010015) | 0x100000000LL);
          if ( v21 )
            _enable();
        }
        v32 = 5;
        HalpInterruptSendIpi(&v32, 0x1Fu);
      }
    }
  }
}
