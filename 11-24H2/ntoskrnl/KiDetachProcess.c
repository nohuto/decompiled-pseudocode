/*
 * XREFs of KiDetachProcess @ 0x1402C9FD0
 * Callers:
 *     KiUnstackDetachProcess @ 0x1402CAA50 (KiUnstackDetachProcess.c)
 *     KeUnstackDetachProcess @ 0x1402CB2C0 (KeUnstackDetachProcess.c)
 *     MiUnlockStealVm @ 0x1402FE250 (MiUnlockStealVm.c)
 *     KeForceDetachProcess @ 0x1403422E0 (KeForceDetachProcess.c)
 *     KeDetachProcess @ 0x1404842F0 (KeDetachProcess.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiAcquireKobjectLockSafe @ 0x1402C72D0 (KiAcquireKobjectLockSafe.c)
 *     HalpInterruptSendIpi @ 0x1402C8970 (HalpInterruptSendIpi.c)
 *     HalpDisableInterrupts @ 0x1402C9320 (HalpDisableInterrupts.c)
 *     KiSetAddressPolicy @ 0x1402CA5C0 (KiSetAddressPolicy.c)
 *     KiAcquireThreadLockRaiseToDpc @ 0x1402D1150 (KiAcquireThreadLockRaiseToDpc.c)
 *     KiReleaseThreadLockLowerIrql @ 0x14032DD90 (KiReleaseThreadLockLowerIrql.c)
 *     HvlSwitchVirtualAddressSpace @ 0x1403E20F0 (HvlSwitchVirtualAddressSpace.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheck @ 0x1404F9230 (KeBugCheck.c)
 */

__int64 __fastcall KiDetachProcess(__int64 a1, char a2)
{
  struct _KTHREAD *CurrentThread; // rbx
  _KPROCESS *Process; // r13
  int v6; // r15d
  unsigned __int8 CurrentIrql; // di
  unsigned int v8; // edi
  char v9; // dl
  $727077A9B6E167EAE1398C74674DC5A5 *v10; // rdi
  $D65F9090E290774A76330EBDFB7A4444 *v11; // rcx
  struct _LIST_ENTRY *Flink; // rdx
  struct _KTHREAD *v13; // rdx
  _LIST_ENTRY *v14; // rax
  struct _KPRCB *CurrentPrcb; // rax
  _KPROCESS *v16; // r8
  unsigned __int64 GroupIndex; // r14
  __int64 v18; // rbp
  unsigned __int64 DirectoryTableBase; // rsi
  unsigned __int64 v20; // rax
  __int64 result; // rax
  unsigned __int64 v22; // rsi
  bool v23; // al
  __int64 v24; // r8
  int v25; // edx
  bool v26; // r9
  struct _LIST_ENTRY *Blink; // rax
  struct _LIST_ENTRY *v28; // rcx
  unsigned __int64 v29; // rcx
  unsigned __int8 v30; // si
  unsigned __int32 Value; // eax
  unsigned __int32 v32; // ett
  signed __int64 *p_SwapListEntry; // rdx
  signed __int64 v34; // rax
  signed __int64 v35; // rcx
  struct _LIST_ENTRY *v36; // rcx
  struct _LIST_ENTRY *v37; // rdx
  _LIST_ENTRY *v38; // rax
  struct _LIST_ENTRY *v39; // rax
  struct _LIST_ENTRY *v40; // rcx
  unsigned __int64 v41; // rax
  unsigned int v42; // [rsp+20h] [rbp-48h] BYREF
  __int128 v43; // [rsp+24h] [rbp-44h]
  unsigned __int8 v44; // [rsp+78h] [rbp+10h] BYREF

  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  v6 = a2 & 2;
  if ( (a2 & 2) != 0 )
  {
    v9 = 15;
    v44 = 15;
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
    v44 = CurrentIrql;
    v8 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
    {
      do
      {
        if ( (++v8 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait(v8);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( CurrentThread->ThreadLock );
    }
    v9 = v44;
  }
  if ( CurrentThread->ApcState.KernelApcPending )
  {
    while ( !CurrentThread->SpecialApcDisable )
    {
      if ( v9 )
        break;
      KiReleaseThreadLockLowerIrql(CurrentThread);
      KiAcquireThreadLockRaiseToDpc(CurrentThread, &v44);
      if ( !CurrentThread->ApcState.KernelApcPending )
        break;
      v9 = v44;
    }
  }
  if ( !CurrentThread->ApcStateIndex
    || (CurrentThread->ApcState.InProgressFlags & 1) != 0
    || (v10 = &CurrentThread->152, ($727077A9B6E167EAE1398C74674DC5A5 *)v10->ApcState.ApcListHead[0].Flink != v10)
    || (unsigned __int8 *)CurrentThread->ApcState.ApcListHead[1].Flink != &CurrentThread->ApcStateFill[16] )
  {
    KeBugCheck(6u);
  }
  CurrentThread->MiscFlags |= 0x800u;
  v11 = &CurrentThread->600;
  if ( ($D65F9090E290774A76330EBDFB7A4444 *)a1 == &CurrentThread->600 )
  {
    CurrentThread->ApcState.Process = CurrentThread->SavedApcState.Process;
    CurrentThread->ApcState.InProgressFlags = CurrentThread->SavedApcState.InProgressFlags;
    CurrentThread->ApcState.KernelApcPending = CurrentThread->SavedApcState.KernelApcPending;
    CurrentThread->ApcState.UserApcPendingAll = CurrentThread->SavedApcState.UserApcPendingAll;
    Flink = v11->SavedApcState.ApcListHead[0].Flink;
    if ( ($D65F9090E290774A76330EBDFB7A4444 *)v11->SavedApcState.ApcListHead[0].Flink == v11 )
    {
      CurrentThread->ApcState.ApcListHead[0].Blink = CurrentThread->ApcState.ApcListHead;
      v10->ApcState.ApcListHead[0].Flink = (struct _LIST_ENTRY *)v10;
      CurrentThread->ApcState.KernelApcPending = 0;
    }
    else
    {
      Blink = CurrentThread->SavedApcState.ApcListHead[0].Blink;
      v10->ApcState.ApcListHead[0].Flink = Flink;
      CurrentThread->ApcState.ApcListHead[0].Blink = Blink;
      Flink->Blink = (struct _LIST_ENTRY *)v10;
      Blink->Flink = (struct _LIST_ENTRY *)v10;
    }
    v13 = (struct _KTHREAD *)CurrentThread->SavedApcState.ApcListHead[1].Flink;
    v14 = &CurrentThread->ApcState.ApcListHead[1];
    if ( v13 == (struct _KTHREAD *)&CurrentThread->SavedApcStateFill[16] )
    {
      CurrentThread->ApcState.ApcListHead[1].Blink = &CurrentThread->ApcState.ApcListHead[1];
      v14->Flink = v14;
      CurrentThread->ApcState.UserApcPendingAll = 0;
    }
    else
    {
      v28 = CurrentThread->SavedApcState.ApcListHead[1].Blink;
      v14->Flink = (struct _LIST_ENTRY *)v13;
      CurrentThread->ApcState.ApcListHead[1].Blink = v28;
      v13->Header.WaitListHead.Flink = v14;
      v28->Flink = v14;
    }
    CurrentThread->SavedApcState.Process = 0LL;
    CurrentThread->ApcStateIndex = 0;
  }
  else
  {
    CurrentThread->ApcState.Process = *(_KPROCESS **)(a1 + 32);
    CurrentThread->ApcState.InProgressFlags = *(_BYTE *)(a1 + 40);
    CurrentThread->ApcState.KernelApcPending = *(_BYTE *)(a1 + 41);
    CurrentThread->ApcState.UserApcPendingAll = *(_BYTE *)(a1 + 42);
    v36 = *(struct _LIST_ENTRY **)a1;
    if ( *(_QWORD *)a1 == a1 )
    {
      CurrentThread->ApcState.ApcListHead[0].Blink = CurrentThread->ApcState.ApcListHead;
      v10->ApcState.ApcListHead[0].Flink = (struct _LIST_ENTRY *)v10;
      CurrentThread->ApcState.KernelApcPending = 0;
    }
    else
    {
      v39 = *(struct _LIST_ENTRY **)(a1 + 8);
      v10->ApcState.ApcListHead[0].Flink = v36;
      CurrentThread->ApcState.ApcListHead[0].Blink = v39;
      v36->Blink = (struct _LIST_ENTRY *)v10;
      v39->Flink = (struct _LIST_ENTRY *)v10;
    }
    v37 = *(struct _LIST_ENTRY **)(a1 + 16);
    v38 = &CurrentThread->ApcState.ApcListHead[1];
    if ( v37 == (struct _LIST_ENTRY *)(a1 + 16) )
    {
      CurrentThread->ApcState.ApcListHead[1].Blink = &CurrentThread->ApcState.ApcListHead[1];
      v38->Flink = v38;
      CurrentThread->ApcState.UserApcPendingAll = 0;
    }
    else
    {
      v40 = *(struct _LIST_ENTRY **)(a1 + 24);
      v38->Flink = v37;
      CurrentThread->ApcState.ApcListHead[1].Blink = v40;
      v37->Blink = v38;
      v40->Flink = v38;
    }
  }
  if ( !v6 )
    CurrentThread->ThreadLock = 0LL;
  CurrentPrcb = KeGetCurrentPrcb();
  v16 = CurrentThread->ApcState.Process;
  GroupIndex = CurrentPrcb->GroupIndex;
  v18 = 8LL * CurrentPrcb->Group;
  _interlockedbittestandset64((volatile signed __int32 *)((char *)&v16->ActiveProcessors->8 + v18), GroupIndex);
  DirectoryTableBase = v16->DirectoryTableBase;
  if ( KiKvaShadow )
  {
    v20 = DirectoryTableBase | 0x8000000000000000uLL;
    if ( (DirectoryTableBase & 2) == 0 )
      v20 = v16->DirectoryTableBase;
    __writegsqword(0xB000u, v20);
    KiSetAddressPolicy(v16->AddressPolicy);
  }
  if ( (HvlEnlightenments & 1) != 0 )
    HvlSwitchVirtualAddressSpace(DirectoryTableBase);
  else
    __writecr3(DirectoryTableBase);
  if ( KiKvaShadow && !KiFlushPcid )
  {
    v29 = __readcr4();
    if ( (v29 & 0x20080) != 0 )
    {
      __writecr4(v29 ^ 0x80);
      __writecr4(v29);
    }
    else
    {
      v41 = __readcr3();
      __writecr3(v41);
    }
  }
  result = (__int64)Process->ActiveProcessors;
  _interlockedbittestandreset64((volatile signed __int32 *)(result + v18 + 8), GroupIndex);
  CurrentThread->MiscFlags &= ~0x800u;
  if ( !v6 )
  {
    v22 = v44;
    if ( KiIrqlFlags )
      result = KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v44);
    __writecr8(v22);
  }
  if ( (a2 & 1) == 0 )
  {
    result = _InterlockedExchangeAdd(&Process->StackCount.Value, 0xFFFFFFF8) & 0xFFFFFFF8;
    if ( (_DWORD)result == 8 )
    {
      v30 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags )
        KiRaiseIrqlProcessIrqlFlags(v30, 2LL);
      KiAcquireKobjectLockSafe(&Process->Header.Lock);
      Value = Process->StackCount.Value;
      if ( (Value & 7) == 0 && Process->ThreadListHead.Flink != &Process->ThreadListHead )
      {
        while ( Value < 8 )
        {
          v32 = Value;
          Value = _InterlockedCompareExchange(&Process->StackCount.Value, Value & 0xFFFFFFF8 | 3, Value);
          if ( v32 == Value )
          {
            _InterlockedAnd(&Process->Header.Lock, 0xFFFFFF7F);
            p_SwapListEntry = (signed __int64 *)&Process->SwapListEntry;
            _m_prefetchw(&KiProcessOutSwapListHead);
            v34 = KiProcessOutSwapListHead;
            do
            {
              *p_SwapListEntry = v34;
              v35 = v34;
              v34 = _InterlockedCompareExchange64(&KiProcessOutSwapListHead, (signed __int64)p_SwapListEntry, v34);
            }
            while ( v34 != v35 );
            if ( !v34 )
              KeSetEvent(&KiSwapEvent, 10, 0);
            goto LABEL_64;
          }
        }
      }
      _InterlockedAnd(&Process->Header.Lock, 0xFFFFFF7F);
LABEL_64:
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v30);
      result = v30;
      __writecr8(v30);
    }
  }
  if ( ($727077A9B6E167EAE1398C74674DC5A5 *)v10->ApcState.ApcListHead[0].Flink != v10 )
  {
    CurrentThread->ApcState.KernelApcPending = 1;
    v43 = 0LL;
    if ( KiAmdTprLowerInterruptDelayDynamicWorkaround )
    {
      v23 = HalpDisableInterrupts();
      v25 = *(_DWORD *)(v24 + 168);
      v26 = v23;
      *(_DWORD *)(v24 + 168) = v25 | 2;
      if ( !v25 )
        __writemsr(0xC0010015, __readmsr(0xC0010015) | 0x100000000LL);
      if ( v26 )
        _enable();
    }
    v42 = 5;
    return HalpInterruptSendIpi(&v42, 0x1Fu);
  }
  return result;
}
