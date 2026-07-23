/*
 * XREFs of KeForceDetachProcess @ 0x1403422E0
 * Callers:
 *     MiSharePages @ 0x140343830 (MiSharePages.c)
 *     MiTrimSharedPageFromViews @ 0x140362D10 (MiTrimSharedPageFromViews.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x140424B70 (MiReleaseOutSwappedProcessCommit.c)
 *     MmQueryCommitReleaseState @ 0x140478DE4 (MmQueryCommitReleaseState.c)
 *     MiReAcquireOutSwappedProcessCommit @ 0x14066B458 (MiReAcquireOutSwappedProcessCommit.c)
 *     MiReleaseCommitForResetPages @ 0x14066B9B8 (MiReleaseCommitForResetPages.c)
 *     MmReleaseCommitForMemResetPages @ 0x14066BCEC (MmReleaseCommitForMemResetPages.c)
 *     PopHandleNextState @ 0x140B67F50 (PopHandleNextState.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
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
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

volatile _KAFFINITY_EX *__fastcall KeForceDetachProcess(volatile _KAFFINITY_EX *a1, char a2, __int64 a3, __int64 a4)
{
  volatile _KAFFINITY_EX *result; // rax
  char v5; // bp
  unsigned __int64 v6; // rcx
  struct _KTHREAD *CurrentThread; // rbx
  _KPROCESS *Process; // r13
  int v9; // ebp
  unsigned __int8 CurrentIrql; // di
  unsigned int v11; // edi
  unsigned __int8 v12; // dl
  $727077A9B6E167EAE1398C74674DC5A5 *v13; // rdi
  struct _KTHREAD *Flink; // rdx
  __int64 v15; // rdx
  struct _LIST_ENTRY *v16; // rax
  struct _KPRCB *CurrentPrcb; // rax
  __int64 v18; // r8
  unsigned __int64 GroupIndex; // r15
  __int64 v20; // r14
  unsigned __int64 v21; // rsi
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rsi
  bool v24; // al
  __int64 v25; // r8
  int v26; // edx
  bool v27; // r9
  struct _LIST_ENTRY *Blink; // rax
  struct _LIST_ENTRY *v29; // rcx
  unsigned __int64 v30; // rcx
  unsigned __int64 v31; // rax
  unsigned __int8 v32[8]; // [rsp+20h] [rbp-88h] BYREF
  unsigned int v33; // [rsp+28h] [rbp-80h] BYREF
  __int128 v34; // [rsp+2Ch] [rbp-7Ch]
  _OWORD v35[3]; // [rsp+40h] [rbp-68h] BYREF

  result = (volatile _KAFFINITY_EX *)v35;
  if ( a1 )
    result = a1;
  memset(v35, 0, sizeof(v35));
  v5 = 2 * (a2 & 1) + 1;
  v6 = result->StaticBitmap[3];
  if ( v6 != 1 )
  {
    if ( v6 )
    {
      return (volatile _KAFFINITY_EX *)KiDetachProcess((__int64)result, v5);
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      Process = CurrentThread->ApcState.Process;
      v9 = v5 & 2;
      if ( v9 )
      {
        v12 = 15;
        v32[0] = 15;
      }
      else
      {
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags )
          KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
        v32[0] = CurrentIrql;
        v11 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
        {
          do
          {
            if ( (++v11 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && KiCheckVpBackingLongSpinWaitHypercall() )
            {
              HvlNotifyLongSpinWait(v11);
            }
            else
            {
              _mm_pause();
            }
          }
          while ( CurrentThread->ThreadLock );
        }
        v12 = v32[0];
      }
      if ( CurrentThread->ApcState.KernelApcPending )
      {
        while ( !CurrentThread->SpecialApcDisable )
        {
          if ( v12 )
            break;
          KiReleaseThreadLockLowerIrql((__int64)CurrentThread, 0);
          KiAcquireThreadLockRaiseToDpc((__int64)CurrentThread, v32);
          if ( !CurrentThread->ApcState.KernelApcPending )
            break;
          v12 = v32[0];
        }
      }
      if ( !CurrentThread->ApcStateIndex
        || (CurrentThread->ApcState.InProgressFlags & 1) != 0
        || (v13 = &CurrentThread->152, ($727077A9B6E167EAE1398C74674DC5A5 *)v13->ApcState.ApcListHead[0].Flink != v13)
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
        v13->ApcState.ApcListHead[0].Flink = (struct _LIST_ENTRY *)v13;
        CurrentThread->ApcState.KernelApcPending = 0;
      }
      else
      {
        Blink = CurrentThread->SavedApcState.ApcListHead[0].Blink;
        v13->ApcState.ApcListHead[0].Flink = (struct _LIST_ENTRY *)Flink;
        CurrentThread->ApcState.ApcListHead[0].Blink = Blink;
        Flink->Header.WaitListHead.Flink = (struct _LIST_ENTRY *)v13;
        Blink->Flink = (struct _LIST_ENTRY *)v13;
      }
      v15 = (__int64)CurrentThread->SavedApcState.ApcListHead[1].Flink;
      v16 = &CurrentThread->ApcState.ApcListHead[1];
      if ( (unsigned __int8 *)v15 == &CurrentThread->SavedApcStateFill[16] )
      {
        CurrentThread->ApcState.ApcListHead[1].Blink = &CurrentThread->ApcState.ApcListHead[1];
        v16->Flink = v16;
        CurrentThread->ApcState.UserApcPendingAll = 0;
      }
      else
      {
        v29 = CurrentThread->SavedApcState.ApcListHead[1].Blink;
        v16->Flink = (struct _LIST_ENTRY *)v15;
        CurrentThread->ApcState.ApcListHead[1].Blink = v29;
        *(_QWORD *)(v15 + 8) = v16;
        v29->Flink = v16;
      }
      CurrentThread->SavedApcState.Process = 0LL;
      CurrentThread->ApcStateIndex = 0;
      if ( !v9 )
        CurrentThread->ThreadLock = 0LL;
      CurrentPrcb = KeGetCurrentPrcb();
      v18 = (__int64)CurrentThread->ApcState.Process;
      GroupIndex = CurrentPrcb->GroupIndex;
      v20 = 8LL * CurrentPrcb->Group;
      _interlockedbittestandset64((volatile signed __int32 *)(*(_QWORD *)(v18 + 128) + v20 + 8), GroupIndex);
      v21 = *(_QWORD *)(v18 + 40);
      if ( KiKvaShadow )
      {
        v22 = v21 | 0x8000000000000000uLL;
        if ( (v21 & 2) == 0 )
          v22 = *(_QWORD *)(v18 + 40);
        __writegsqword(0xB000u, v22);
        KiSetAddressPolicy(*(unsigned __int8 *)(v18 + 352), v15, v18, a4);
      }
      if ( (HvlEnlightenments & 1) != 0 )
        HvlSwitchVirtualAddressSpace(v21);
      else
        __writecr3(v21);
      if ( KiKvaShadow && !KiFlushPcid )
      {
        v30 = __readcr4();
        if ( (v30 & 0x20080) != 0 )
        {
          __writecr4(v30 ^ 0x80);
          __writecr4(v30);
        }
        else
        {
          v31 = __readcr3();
          __writecr3(v31);
        }
      }
      result = Process->ActiveProcessors;
      _interlockedbittestandreset64((volatile signed __int32 *)((char *)&result->8 + v20), GroupIndex);
      CurrentThread->MiscFlags &= ~0x800u;
      if ( !v9 )
      {
        v23 = v32[0];
        if ( KiIrqlFlags )
          result = (volatile _KAFFINITY_EX *)KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v32[0]);
        __writecr8(v23);
      }
      if ( ($727077A9B6E167EAE1398C74674DC5A5 *)v13->ApcState.ApcListHead[0].Flink != v13 )
      {
        CurrentThread->ApcState.KernelApcPending = 1;
        v34 = 0LL;
        if ( KiAmdTprLowerInterruptDelayDynamicWorkaround )
        {
          v24 = HalpDisableInterrupts();
          v26 = *(_DWORD *)(v25 + 168);
          v27 = v24;
          *(_DWORD *)(v25 + 168) = v26 | 2;
          if ( !v26 )
            __writemsr(0xC0010015, __readmsr(0xC0010015) | 0x100000000LL);
          if ( v27 )
            _enable();
        }
        v33 = 5;
        return (volatile _KAFFINITY_EX *)HalpInterruptSendIpi(&v33, 0x1Fu);
      }
    }
  }
  return result;
}
