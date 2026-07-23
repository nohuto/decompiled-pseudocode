/*
 * XREFs of MiDetachFromWorkingSet @ 0x1403E1C30
 * Callers:
 *     MiTrimOrAgeWorkingSet @ 0x1402F35B0 (MiTrimOrAgeWorkingSet.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     HalpInterruptSendIpi @ 0x1402C8970 (HalpInterruptSendIpi.c)
 *     HalpDisableInterrupts @ 0x1402C9320 (HalpDisableInterrupts.c)
 *     KiSetAddressPolicy @ 0x1402CA5C0 (KiSetAddressPolicy.c)
 *     KiAcquireThreadLockRaiseToDpc @ 0x1402D1150 (KiAcquireThreadLockRaiseToDpc.c)
 *     KiReleaseThreadLockLowerIrql @ 0x14032DD90 (KiReleaseThreadLockLowerIrql.c)
 *     KiMoveApcState @ 0x1403E2070 (KiMoveApcState.c)
 *     HvlSwitchVirtualAddressSpace @ 0x1403E20F0 (HvlSwitchVirtualAddressSpace.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheck @ 0x1404F9230 (KeBugCheck.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 __fastcall MiDetachFromWorkingSet(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rbx
  _KPROCESS *Process; // r15
  unsigned __int8 CurrentIrql; // di
  unsigned int v8; // edi
  $727077A9B6E167EAE1398C74674DC5A5 *v9; // rdi
  struct _KTHREAD *Flink; // rdx
  __int64 v11; // rdx
  struct _LIST_ENTRY *v12; // rax
  struct _KPRCB *CurrentPrcb; // rax
  __int64 v14; // r8
  unsigned __int64 GroupIndex; // r14
  __int64 v16; // rbp
  unsigned __int64 v17; // rsi
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rsi
  bool v20; // al
  __int64 v21; // r8
  int v22; // edx
  bool v23; // r9
  struct _LIST_ENTRY *Blink; // rax
  struct _LIST_ENTRY *v25; // rcx
  unsigned __int64 v26; // rcx
  unsigned __int64 v27; // rax
  unsigned __int8 v28[8]; // [rsp+20h] [rbp-78h] BYREF
  unsigned int v29; // [rsp+28h] [rbp-70h] BYREF
  __int128 v30; // [rsp+2Ch] [rbp-6Ch]
  __int64 v31; // [rsp+40h] [rbp-58h]
  __int128 v32; // [rsp+48h] [rbp-50h]
  __int64 v33; // [rsp+58h] [rbp-40h]
  __int64 v34; // [rsp+60h] [rbp-38h]
  __int64 v35; // [rsp+68h] [rbp-30h]

  result = *(unsigned int *)(a1 + 184);
  if ( (result & 0xF) == 0 )
  {
    result = (__int64)KeGetCurrentThread();
    if ( *(_QWORD *)(result + 544) != a1 - 1024 )
    {
      CurrentThread = KeGetCurrentThread();
      v31 = 0LL;
      v32 = 0LL;
      Process = CurrentThread->ApcState.Process;
      v33 = 0LL;
      v35 = 0LL;
      v34 = 0LL;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags )
        KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
      v28[0] = CurrentIrql;
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
      while ( CurrentThread->ApcState.KernelApcPending )
      {
        if ( CurrentThread->SpecialApcDisable )
          break;
        if ( v28[0] )
          break;
        KiReleaseThreadLockLowerIrql((__int64)CurrentThread, 0);
        KiAcquireThreadLockRaiseToDpc((__int64)CurrentThread, v28);
      }
      if ( !CurrentThread->ApcStateIndex
        || (CurrentThread->ApcState.InProgressFlags & 1) != 0
        || (v9 = &CurrentThread->152, ($727077A9B6E167EAE1398C74674DC5A5 *)v9->ApcState.ApcListHead[0].Flink != v9)
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
        v9->ApcState.ApcListHead[0].Flink = (struct _LIST_ENTRY *)v9;
        CurrentThread->ApcState.KernelApcPending = 0;
      }
      else
      {
        Blink = CurrentThread->SavedApcState.ApcListHead[0].Blink;
        v9->ApcState.ApcListHead[0].Flink = (struct _LIST_ENTRY *)Flink;
        CurrentThread->ApcState.ApcListHead[0].Blink = Blink;
        Flink->Header.WaitListHead.Flink = (struct _LIST_ENTRY *)v9;
        Blink->Flink = (struct _LIST_ENTRY *)v9;
      }
      v11 = (__int64)CurrentThread->SavedApcState.ApcListHead[1].Flink;
      v12 = &CurrentThread->ApcState.ApcListHead[1];
      if ( (unsigned __int8 *)v11 == &CurrentThread->SavedApcStateFill[16] )
      {
        CurrentThread->ApcState.ApcListHead[1].Blink = &CurrentThread->ApcState.ApcListHead[1];
        v12->Flink = v12;
        CurrentThread->ApcState.UserApcPendingAll = 0;
      }
      else
      {
        v25 = CurrentThread->SavedApcState.ApcListHead[1].Blink;
        v12->Flink = (struct _LIST_ENTRY *)v11;
        CurrentThread->ApcState.ApcListHead[1].Blink = v25;
        *(_QWORD *)(v11 + 8) = v12;
        v25->Flink = v12;
      }
      CurrentThread->SavedApcState.Process = 0LL;
      CurrentThread->ApcStateIndex = 0;
      CurrentThread->ThreadLock = 0LL;
      CurrentPrcb = KeGetCurrentPrcb();
      v14 = (__int64)CurrentThread->ApcState.Process;
      GroupIndex = CurrentPrcb->GroupIndex;
      v16 = 8LL * CurrentPrcb->Group;
      _interlockedbittestandset64((volatile signed __int32 *)(*(_QWORD *)(v14 + 128) + v16 + 8), GroupIndex);
      v17 = *(_QWORD *)(v14 + 40);
      if ( KiKvaShadow )
      {
        v18 = v17 | 0x8000000000000000uLL;
        if ( (v17 & 2) == 0 )
          v18 = *(_QWORD *)(v14 + 40);
        __writegsqword(0xB000u, v18);
        KiSetAddressPolicy(*(unsigned __int8 *)(v14 + 352), v11, v14, a4);
      }
      if ( (HvlEnlightenments & 1) != 0 )
        HvlSwitchVirtualAddressSpace(v17);
      else
        __writecr3(v17);
      if ( KiKvaShadow && !KiFlushPcid )
      {
        v26 = __readcr4();
        if ( (v26 & 0x20080) != 0 )
        {
          __writecr4(v26 ^ 0x80);
          __writecr4(v26);
        }
        else
        {
          v27 = __readcr3();
          __writecr3(v27);
        }
      }
      result = (__int64)Process->ActiveProcessors;
      _interlockedbittestandreset64((volatile signed __int32 *)(result + v16 + 8), GroupIndex);
      CurrentThread->MiscFlags &= ~0x800u;
      v19 = v28[0];
      if ( KiIrqlFlags )
        result = KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v28[0]);
      __writecr8(v19);
      if ( ($727077A9B6E167EAE1398C74674DC5A5 *)v9->ApcState.ApcListHead[0].Flink != v9 )
      {
        CurrentThread->ApcState.KernelApcPending = 1;
        v30 = 0LL;
        if ( KiAmdTprLowerInterruptDelayDynamicWorkaround )
        {
          v20 = HalpDisableInterrupts();
          v22 = *(_DWORD *)(v21 + 168);
          v23 = v20;
          *(_DWORD *)(v21 + 168) = v22 | 2;
          if ( !v22 )
            __writemsr(0xC0010015, __readmsr(0xC0010015) | 0x100000000LL);
          if ( v23 )
            _enable();
        }
        v29 = 5;
        return HalpInterruptSendIpi(&v29, 0x1Fu);
      }
    }
  }
  return result;
}
