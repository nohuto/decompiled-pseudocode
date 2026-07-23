/*
 * XREFs of MiUnlockStealVm @ 0x1402FE250
 * Callers:
 *     MiStealPage @ 0x140253D10 (MiStealPage.c)
 *     MiLockStealUserVm @ 0x14025539C (MiLockStealUserVm.c)
 *     MiLockStealSystemVm @ 0x1402FD650 (MiLockStealSystemVm.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x140241CF0 (MiUnlockWorkingSetShared.c)
 *     MiUnlockFaultPageTable @ 0x140241ED0 (MiUnlockFaultPageTable.c)
 *     MiUnlockWorkingSetExclusive @ 0x140243400 (MiUnlockWorkingSetExclusive.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     HalpInterruptSendIpi @ 0x1402C8970 (HalpInterruptSendIpi.c)
 *     HalpDisableInterrupts @ 0x1402C9320 (HalpDisableInterrupts.c)
 *     KiDetachProcess @ 0x1402C9FD0 (KiDetachProcess.c)
 *     KiSetAddressPolicy @ 0x1402CA5C0 (KiSetAddressPolicy.c)
 *     KiAcquireThreadLockRaiseToDpc @ 0x1402D1150 (KiAcquireThreadLockRaiseToDpc.c)
 *     MiAttachThreadDone @ 0x1402FE6F0 (MiAttachThreadDone.c)
 *     KiReleaseThreadLockLowerIrql @ 0x14032DD90 (KiReleaseThreadLockLowerIrql.c)
 *     KiMoveApcState @ 0x1403E2070 (KiMoveApcState.c)
 *     HvlSwitchVirtualAddressSpace @ 0x1403E20F0 (HvlSwitchVirtualAddressSpace.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheck @ 0x1404F9230 (KeBugCheck.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

void __fastcall MiUnlockStealVm(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rsi
  unsigned __int8 v6; // dl
  _OWORD *v7; // rcx
  __int64 v8; // rax
  struct _KTHREAD *CurrentThread; // rbx
  _KPROCESS *Process; // r13
  unsigned __int8 CurrentIrql; // si
  unsigned int v12; // esi
  $727077A9B6E167EAE1398C74674DC5A5 *v13; // rsi
  bool v14; // al
  __int64 v15; // r8
  int v16; // edx
  bool v17; // r9
  struct _KTHREAD *Flink; // rdx
  __int64 v19; // rdx
  struct _LIST_ENTRY *v20; // rax
  struct _KPRCB *CurrentPrcb; // rax
  __int64 v22; // r8
  unsigned __int64 GroupIndex; // r15
  __int64 v24; // r14
  unsigned __int64 v25; // rbp
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rbp
  struct _LIST_ENTRY *Blink; // rax
  struct _LIST_ENTRY *v29; // rcx
  unsigned __int64 v30; // rcx
  unsigned __int64 v31; // rax
  unsigned __int8 v32[8]; // [rsp+20h] [rbp-88h] BYREF
  unsigned int v33; // [rsp+28h] [rbp-80h] BYREF
  __int128 v34; // [rsp+2Ch] [rbp-7Ch]
  _OWORD v35[3]; // [rsp+40h] [rbp-68h] BYREF

  v4 = *(_QWORD *)(a1 + 24);
  if ( v4 )
  {
    MiUnlockFaultPageTable((__int64 *)(a1 + 24));
    v6 = *(_BYTE *)(a1 + 36);
    if ( (*(_BYTE *)(a1 + 37) & 1) != 0 )
      MiUnlockWorkingSetExclusive(v4, v6);
    else
      MiUnlockWorkingSetShared(v4, v6);
    *(_QWORD *)(a1 + 24) = 0LL;
  }
  if ( *(_QWORD *)(a1 + 56) )
  {
    if ( *(_BYTE *)(a1 + 64) )
    {
      v7 = v35;
      v35[0] = 0LL;
      if ( a1 != -72 )
        v7 = (_OWORD *)(a1 + 72);
      memset(&v35[1], 0, 32);
      v8 = *((_QWORD *)v7 + 4);
      if ( v8 != 1 )
      {
        if ( v8 )
        {
          KiDetachProcess((__int64)v7, 1);
        }
        else
        {
          CurrentThread = KeGetCurrentThread();
          Process = CurrentThread->ApcState.Process;
          CurrentIrql = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( KiIrqlFlags )
            KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
          v32[0] = CurrentIrql;
          v12 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
          {
            do
            {
              if ( (++v12 & HvlLongSpinCountMask) == 0
                && (HvlEnlightenments & 0x40) != 0
                && KiCheckVpBackingLongSpinWaitHypercall() )
              {
                HvlNotifyLongSpinWait(v12);
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
            if ( v32[0] )
              break;
            KiReleaseThreadLockLowerIrql(CurrentThread);
            KiAcquireThreadLockRaiseToDpc((__int64)CurrentThread, v32);
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
          v19 = (__int64)CurrentThread->SavedApcState.ApcListHead[1].Flink;
          v20 = &CurrentThread->ApcState.ApcListHead[1];
          if ( (unsigned __int8 *)v19 == &CurrentThread->SavedApcStateFill[16] )
          {
            CurrentThread->ApcState.ApcListHead[1].Blink = &CurrentThread->ApcState.ApcListHead[1];
            v20->Flink = v20;
            CurrentThread->ApcState.UserApcPendingAll = 0;
          }
          else
          {
            v29 = CurrentThread->SavedApcState.ApcListHead[1].Blink;
            v20->Flink = (struct _LIST_ENTRY *)v19;
            CurrentThread->ApcState.ApcListHead[1].Blink = v29;
            *(_QWORD *)(v19 + 8) = v20;
            v29->Flink = v20;
          }
          CurrentThread->SavedApcState.Process = 0LL;
          CurrentThread->ApcStateIndex = 0;
          CurrentThread->ThreadLock = 0LL;
          CurrentPrcb = KeGetCurrentPrcb();
          v22 = (__int64)CurrentThread->ApcState.Process;
          GroupIndex = CurrentPrcb->GroupIndex;
          v24 = 8LL * CurrentPrcb->Group;
          _interlockedbittestandset64((volatile signed __int32 *)(*(_QWORD *)(v22 + 128) + v24 + 8), GroupIndex);
          v25 = *(_QWORD *)(v22 + 40);
          if ( KiKvaShadow )
          {
            v26 = v25 | 0x8000000000000000uLL;
            if ( (v25 & 2) == 0 )
              v26 = *(_QWORD *)(v22 + 40);
            __writegsqword(0xB000u, v26);
            KiSetAddressPolicy(*(unsigned __int8 *)(v22 + 352), v19, v22, a4);
          }
          if ( (HvlEnlightenments & 1) != 0 )
            HvlSwitchVirtualAddressSpace(v25);
          else
            __writecr3(v25);
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
          _interlockedbittestandreset64(
            (volatile signed __int32 *)((char *)&Process->ActiveProcessors->8 + v24),
            GroupIndex);
          CurrentThread->MiscFlags &= ~0x800u;
          v27 = v32[0];
          if ( KiIrqlFlags )
            KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v32[0]);
          __writecr8(v27);
          if ( ($727077A9B6E167EAE1398C74674DC5A5 *)v13->ApcState.ApcListHead[0].Flink != v13 )
          {
            CurrentThread->ApcState.KernelApcPending = 1;
            v34 = 0LL;
            if ( KiAmdTprLowerInterruptDelayDynamicWorkaround )
            {
              v14 = HalpDisableInterrupts();
              v16 = *(_DWORD *)(v15 + 168);
              v17 = v14;
              *(_DWORD *)(v15 + 168) = v16 | 2;
              if ( !v16 )
                __writemsr(0xC0010015, __readmsr(0xC0010015) | 0x100000000LL);
              if ( v17 )
                _enable();
            }
            v33 = 5;
            HalpInterruptSendIpi(&v33, 0x1Fu);
          }
        }
      }
    }
    MiAttachThreadDone(*(_QWORD *)(a1 + 56));
  }
}
