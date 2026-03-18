/*
 * XREFs of KeForceDetachProcess @ 0x14023A720
 * Callers:
 *     MiSharePages @ 0x140238650 (MiSharePages.c)
 *     MiTrimSharedPageFromViews @ 0x140321850 (MiTrimSharedPageFromViews.c)
 *     MmQueryCommitReleaseState @ 0x14047CE80 (MmQueryCommitReleaseState.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x1404D5BE8 (MiReleaseOutSwappedProcessCommit.c)
 *     MiReAcquireOutSwappedProcessCommit @ 0x14065E768 (MiReAcquireOutSwappedProcessCommit.c)
 *     MiReleaseCommitForResetPages @ 0x14065ED04 (MiReleaseCommitForResetPages.c)
 *     MmReleaseCommitForMemResetPages @ 0x14065EFDC (MmReleaseCommitForMemResetPages.c)
 *     PopHandleNextState @ 0x140B55D00 (PopHandleNextState.c)
 * Callees:
 *     KiAcquireThreadLockRaiseToDpc @ 0x140204DB0 (KiAcquireThreadLockRaiseToDpc.c)
 *     KiReleaseThreadLockLowerIrql @ 0x140204FF0 (KiReleaseThreadLockLowerIrql.c)
 *     HalpInterruptSendIpi @ 0x140288640 (HalpInterruptSendIpi.c)
 *     HalpDisableInterrupts @ 0x140288F50 (HalpDisableInterrupts.c)
 *     KiDetachProcess @ 0x14028A0A0 (KiDetachProcess.c)
 *     KiSetAddressPolicy @ 0x14028A690 (KiSetAddressPolicy.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     HvlSwitchVirtualAddressSpace @ 0x1403C4700 (HvlSwitchVirtualAddressSpace.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeBugCheck @ 0x1404F9260 (KeBugCheck.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

volatile _KAFFINITY_EX *__fastcall KeForceDetachProcess(volatile _KAFFINITY_EX *a1, char a2)
{
  volatile _KAFFINITY_EX *result; // rax
  unsigned int v3; // ebp
  unsigned __int64 v4; // rcx
  struct _KTHREAD *CurrentThread; // rbx
  _KPROCESS *Process; // r13
  int v7; // ebp
  unsigned __int8 CurrentIrql; // di
  unsigned int v9; // edi
  unsigned __int8 v10; // dl
  $727077A9B6E167EAE1398C74674DC5A5 *v11; // rdi
  unsigned __int64 v12; // rcx
  struct _LIST_ENTRY *Flink; // rdx
  struct _KTHREAD *v14; // rdx
  _LIST_ENTRY *v15; // rax
  struct _KPRCB *CurrentPrcb; // rax
  _KPROCESS *v17; // r8
  unsigned __int64 GroupIndex; // r15
  __int64 v19; // r14
  unsigned __int64 DirectoryTableBase; // rsi
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rsi
  char v23; // al
  __int64 v24; // r8
  int v25; // edx
  char v26; // r9
  struct _LIST_ENTRY *Blink; // rax
  unsigned __int64 v28; // rax
  unsigned __int8 v29[8]; // [rsp+20h] [rbp-88h] BYREF
  int v30; // [rsp+28h] [rbp-80h] BYREF
  __int128 v31; // [rsp+2Ch] [rbp-7Ch]
  _OWORD v32[3]; // [rsp+40h] [rbp-68h] BYREF

  result = (volatile _KAFFINITY_EX *)v32;
  if ( a1 )
    result = a1;
  memset(v32, 0, sizeof(v32));
  v3 = 2 * (a2 & 1) + 1;
  v4 = result->StaticBitmap[3];
  if ( v4 != 1 )
  {
    if ( v4 )
    {
      return (volatile _KAFFINITY_EX *)KiDetachProcess(result, v3);
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      Process = CurrentThread->ApcState.Process;
      v7 = v3 & 2;
      if ( v7 )
      {
        v10 = 15;
        v29[0] = 15;
      }
      else
      {
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags )
          KiRaiseIrqlProcessIrqlFlags(CurrentIrql);
        v29[0] = CurrentIrql;
        v9 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
        {
          do
          {
            if ( (++v9 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v4) )
            {
              HvlNotifyLongSpinWait(v9);
            }
            else
            {
              _mm_pause();
            }
          }
          while ( CurrentThread->ThreadLock );
        }
        v10 = v29[0];
      }
      if ( CurrentThread->ApcState.KernelApcPending )
      {
        while ( !CurrentThread->SpecialApcDisable )
        {
          if ( v10 )
            break;
          KiReleaseThreadLockLowerIrql((__int64)CurrentThread, 0);
          KiAcquireThreadLockRaiseToDpc((__int64)CurrentThread, v29);
          if ( !CurrentThread->ApcState.KernelApcPending )
            break;
          v10 = v29[0];
        }
      }
      if ( !CurrentThread->ApcStateIndex
        || (CurrentThread->ApcState.InProgressFlags & 1) != 0
        || (v11 = &CurrentThread->152, ($727077A9B6E167EAE1398C74674DC5A5 *)v11->ApcState.ApcListHead[0].Flink != v11)
        || (unsigned __int8 *)CurrentThread->ApcState.ApcListHead[1].Flink != &CurrentThread->ApcStateFill[16] )
      {
        KeBugCheck(6u);
      }
      CurrentThread->MiscFlags |= 0x800u;
      v12 = (unsigned __int64)&CurrentThread->600;
      CurrentThread->ApcState.Process = CurrentThread->SavedApcState.Process;
      CurrentThread->ApcState.InProgressFlags = CurrentThread->SavedApcState.InProgressFlags;
      CurrentThread->ApcState.KernelApcPending = CurrentThread->SavedApcState.KernelApcPending;
      CurrentThread->ApcState.UserApcPendingAll = CurrentThread->SavedApcState.UserApcPendingAll;
      Flink = CurrentThread->SavedApcState.ApcListHead[0].Flink;
      if ( *(_QWORD *)v12 == v12 )
      {
        CurrentThread->ApcState.ApcListHead[0].Blink = CurrentThread->ApcState.ApcListHead;
        v11->ApcState.ApcListHead[0].Flink = (struct _LIST_ENTRY *)v11;
        CurrentThread->ApcState.KernelApcPending = 0;
      }
      else
      {
        Blink = CurrentThread->SavedApcState.ApcListHead[0].Blink;
        v11->ApcState.ApcListHead[0].Flink = Flink;
        CurrentThread->ApcState.ApcListHead[0].Blink = Blink;
        Flink->Blink = (struct _LIST_ENTRY *)v11;
        Blink->Flink = (struct _LIST_ENTRY *)v11;
      }
      v14 = (struct _KTHREAD *)CurrentThread->SavedApcState.ApcListHead[1].Flink;
      v15 = &CurrentThread->ApcState.ApcListHead[1];
      if ( v14 == (struct _KTHREAD *)&CurrentThread->SavedApcStateFill[16] )
      {
        CurrentThread->ApcState.ApcListHead[1].Blink = &CurrentThread->ApcState.ApcListHead[1];
        v15->Flink = v15;
        CurrentThread->ApcState.UserApcPendingAll = 0;
      }
      else
      {
        v12 = (unsigned __int64)CurrentThread->SavedApcState.ApcListHead[1].Blink;
        v15->Flink = (struct _LIST_ENTRY *)v14;
        CurrentThread->ApcState.ApcListHead[1].Blink = (struct _LIST_ENTRY *)v12;
        v14->Header.WaitListHead.Flink = v15;
        *(_QWORD *)v12 = v15;
      }
      CurrentThread->SavedApcState.Process = 0LL;
      CurrentThread->ApcStateIndex = 0;
      if ( !v7 )
        CurrentThread->ThreadLock = 0LL;
      CurrentPrcb = KeGetCurrentPrcb();
      v17 = CurrentThread->ApcState.Process;
      GroupIndex = CurrentPrcb->GroupIndex;
      v19 = 8LL * CurrentPrcb->Group;
      _interlockedbittestandset64((volatile signed __int32 *)((char *)&v17->ActiveProcessors->8 + v19), GroupIndex);
      DirectoryTableBase = v17->DirectoryTableBase;
      if ( KiKvaShadow )
      {
        v21 = DirectoryTableBase | 0x8000000000000000uLL;
        if ( (DirectoryTableBase & 2) == 0 )
          v21 = v17->DirectoryTableBase;
        __writegsqword(0xB000u, v21);
        KiSetAddressPolicy(v17->AddressPolicy);
      }
      if ( (HvlEnlightenments & 1) != 0 )
        HvlSwitchVirtualAddressSpace(DirectoryTableBase);
      else
        __writecr3(DirectoryTableBase);
      if ( KiKvaShadow && !KiFlushPcid )
      {
        v12 = __readcr4();
        if ( (v12 & 0x20080) != 0 )
        {
          __writecr4(v12 ^ 0x80);
          __writecr4(v12);
        }
        else
        {
          v28 = __readcr3();
          __writecr3(v28);
        }
      }
      result = Process->ActiveProcessors;
      _interlockedbittestandreset64((volatile signed __int32 *)((char *)&result->8 + v19), GroupIndex);
      CurrentThread->MiscFlags &= ~0x800u;
      if ( !v7 )
      {
        v22 = v29[0];
        if ( KiIrqlFlags )
          result = (volatile _KAFFINITY_EX *)KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v29[0]);
        __writecr8(v22);
      }
      if ( ($727077A9B6E167EAE1398C74674DC5A5 *)v11->ApcState.ApcListHead[0].Flink != v11 )
      {
        CurrentThread->ApcState.KernelApcPending = 1;
        v31 = 0LL;
        if ( KiAmdTprLowerInterruptDelayDynamicWorkaround )
        {
          v23 = HalpDisableInterrupts(v12, v14, KeGetCurrentPrcb());
          v25 = *(_DWORD *)(v24 + 168);
          v26 = v23;
          *(_DWORD *)(v24 + 168) = v25 | 2;
          if ( !v25 )
            __writemsr(0xC0010015, __readmsr(0xC0010015) | 0x100000000LL);
          if ( v26 )
            _enable();
        }
        v30 = 5;
        return (volatile _KAFFINITY_EX *)HalpInterruptSendIpi(&v30, 31LL);
      }
    }
  }
  return result;
}
