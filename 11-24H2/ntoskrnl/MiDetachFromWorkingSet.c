/*
 * XREFs of MiDetachFromWorkingSet @ 0x140379390
 * Callers:
 *     MiTrimOrAgeWorkingSet @ 0x140378F30 (MiTrimOrAgeWorkingSet.c)
 * Callees:
 *     KiReleaseThreadLockLowerIrql @ 0x1402067B0 (KiReleaseThreadLockLowerIrql.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiAcquireThreadLockRaiseToDpc @ 0x1402A1A20 (KiAcquireThreadLockRaiseToDpc.c)
 *     HalpInterruptSendIpi @ 0x14031FDE0 (HalpInterruptSendIpi.c)
 *     HalpDisableInterrupts @ 0x140320790 (HalpDisableInterrupts.c)
 *     KiSetAddressPolicy @ 0x140321A30 (KiSetAddressPolicy.c)
 *     KiMoveApcState @ 0x140379BF0 (KiMoveApcState.c)
 *     HvlSwitchVirtualAddressSpace @ 0x1404D48A0 (HvlSwitchVirtualAddressSpace.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheck @ 0x1404FB970 (KeBugCheck.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 */

__int64 __fastcall MiDetachFromWorkingSet(__int64 a1)
{
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rbx
  _KPROCESS *Process; // r15
  unsigned __int8 CurrentIrql; // di
  unsigned int v5; // edi
  $81B80DCEA5A02D890AB7B2872B48AC01 *v6; // rdi
  struct _KTHREAD *Flink; // rdx
  __int64 v8; // rdx
  struct _LIST_ENTRY *v9; // rax
  struct _KPRCB *CurrentPrcb; // rax
  _KPROCESS *v11; // r8
  unsigned __int64 GroupIndex; // r14
  __int64 v13; // rbp
  unsigned __int64 DirectoryTableBase; // rsi
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rsi
  bool v17; // al
  __int64 v18; // r8
  int v19; // edx
  bool v20; // r9
  struct _LIST_ENTRY *Blink; // rax
  struct _LIST_ENTRY *v22; // rcx
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // rax
  unsigned __int8 v25[8]; // [rsp+20h] [rbp-78h] BYREF
  unsigned int v26; // [rsp+28h] [rbp-70h] BYREF
  __int128 v27; // [rsp+2Ch] [rbp-6Ch]
  __int64 v28; // [rsp+40h] [rbp-58h]
  __int128 v29; // [rsp+48h] [rbp-50h]
  __int64 v30; // [rsp+58h] [rbp-40h]
  __int64 v31; // [rsp+60h] [rbp-38h]
  __int64 v32; // [rsp+68h] [rbp-30h]

  result = *(unsigned int *)(a1 + 184);
  if ( (result & 0xF) == 0 )
  {
    result = (__int64)KeGetCurrentThread();
    if ( *(_QWORD *)(result + 544) != a1 - 1024 )
    {
      CurrentThread = KeGetCurrentThread();
      v28 = 0LL;
      v29 = 0LL;
      Process = CurrentThread->ApcState.Process;
      v30 = 0LL;
      v32 = 0LL;
      v31 = 0LL;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags )
        KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
      v25[0] = CurrentIrql;
      v5 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
      {
        do
        {
          if ( (++v5 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && KiCheckVpBackingLongSpinWaitHypercall() )
          {
            HvlNotifyLongSpinWait(v5);
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
        if ( v25[0] )
          break;
        KiReleaseThreadLockLowerIrql((__int64)CurrentThread, 0);
        KiAcquireThreadLockRaiseToDpc((__int64)CurrentThread, v25);
      }
      if ( !CurrentThread->ApcStateIndex
        || (CurrentThread->ApcState.InProgressFlags & 1) != 0
        || (v6 = &CurrentThread->152, ($81B80DCEA5A02D890AB7B2872B48AC01 *)v6->ApcState.ApcListHead[0].Flink != v6)
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
        v6->ApcState.ApcListHead[0].Flink = (struct _LIST_ENTRY *)v6;
        CurrentThread->ApcState.KernelApcPending = 0;
      }
      else
      {
        Blink = CurrentThread->SavedApcState.ApcListHead[0].Blink;
        v6->ApcState.ApcListHead[0].Flink = (struct _LIST_ENTRY *)Flink;
        CurrentThread->ApcState.ApcListHead[0].Blink = Blink;
        Flink->Header.WaitListHead.Flink = (struct _LIST_ENTRY *)v6;
        Blink->Flink = (struct _LIST_ENTRY *)v6;
      }
      v8 = (__int64)CurrentThread->SavedApcState.ApcListHead[1].Flink;
      v9 = &CurrentThread->ApcState.ApcListHead[1];
      if ( (unsigned __int8 *)v8 == &CurrentThread->SavedApcStateFill[16] )
      {
        CurrentThread->ApcState.ApcListHead[1].Blink = &CurrentThread->ApcState.ApcListHead[1];
        v9->Flink = v9;
        CurrentThread->ApcState.UserApcPendingAll = 0;
      }
      else
      {
        v22 = CurrentThread->SavedApcState.ApcListHead[1].Blink;
        v9->Flink = (struct _LIST_ENTRY *)v8;
        CurrentThread->ApcState.ApcListHead[1].Blink = v22;
        *(_QWORD *)(v8 + 8) = v9;
        v22->Flink = v9;
      }
      CurrentThread->SavedApcState.Process = 0LL;
      CurrentThread->ApcStateIndex = 0;
      CurrentThread->ThreadLock = 0LL;
      CurrentPrcb = KeGetCurrentPrcb();
      v11 = CurrentThread->ApcState.Process;
      GroupIndex = CurrentPrcb->GroupIndex;
      v13 = 8LL * CurrentPrcb->Group;
      _interlockedbittestandset64((volatile signed __int32 *)((char *)&v11->ActiveProcessors->8 + v13), GroupIndex);
      DirectoryTableBase = v11->DirectoryTableBase;
      if ( KiKvaShadow )
      {
        v15 = DirectoryTableBase | 0x8000000000000000uLL;
        if ( (DirectoryTableBase & 2) == 0 )
          v15 = v11->DirectoryTableBase;
        __writegsqword(0xB000u, v15);
        KiSetAddressPolicy(v11->AddressPolicy, v8);
      }
      if ( (HvlEnlightenments & 1) != 0 )
        HvlSwitchVirtualAddressSpace(DirectoryTableBase);
      else
        __writecr3(DirectoryTableBase);
      if ( KiKvaShadow && !KiFlushPcid )
      {
        v23 = __readcr4();
        if ( (v23 & 0x20080) != 0 )
        {
          __writecr4(v23 ^ 0x80);
          __writecr4(v23);
        }
        else
        {
          v24 = __readcr3();
          __writecr3(v24);
        }
      }
      result = (__int64)Process->ActiveProcessors;
      _interlockedbittestandreset64((volatile signed __int32 *)(result + v13 + 8), GroupIndex);
      CurrentThread->MiscFlags &= ~0x800u;
      v16 = v25[0];
      if ( KiIrqlFlags )
        result = KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v25[0]);
      __writecr8(v16);
      if ( ($81B80DCEA5A02D890AB7B2872B48AC01 *)v6->ApcState.ApcListHead[0].Flink != v6 )
      {
        CurrentThread->ApcState.KernelApcPending = 1;
        v27 = 0LL;
        if ( KiAmdTprLowerInterruptDelayDynamicWorkaround )
        {
          v17 = HalpDisableInterrupts();
          v19 = *(_DWORD *)(v18 + 168);
          v20 = v17;
          *(_DWORD *)(v18 + 168) = v19 | 2;
          if ( !v19 )
            __writemsr(0xC0010015, __readmsr(0xC0010015) | 0x100000000LL);
          if ( v20 )
            _enable();
        }
        v26 = 5;
        return HalpInterruptSendIpi(&v26, 0x1Fu);
      }
    }
  }
  return result;
}
