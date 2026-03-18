/*
 * XREFs of MiUnlockStealVm @ 0x1402E1FC0
 * Callers:
 *     MiStealPage @ 0x1402263B0 (MiStealPage.c)
 *     MiLockStealUserVm @ 0x140227A3C (MiLockStealUserVm.c)
 *     MiLockStealSystemVm @ 0x14022A3E0 (MiLockStealSystemVm.c)
 * Callees:
 *     KiReleaseThreadLockLowerIrql @ 0x1402067B0 (KiReleaseThreadLockLowerIrql.c)
 *     MiUnlockWorkingSetExclusive @ 0x140218550 (MiUnlockWorkingSetExclusive.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiAcquireThreadLockRaiseToDpc @ 0x1402A1A20 (KiAcquireThreadLockRaiseToDpc.c)
 *     MiUnlockWorkingSetShared @ 0x1402E0410 (MiUnlockWorkingSetShared.c)
 *     MiUnlockFaultPageTable @ 0x1402E05F0 (MiUnlockFaultPageTable.c)
 *     MiAttachThreadDone @ 0x1402E2710 (MiAttachThreadDone.c)
 *     HalpInterruptSendIpi @ 0x14031FDE0 (HalpInterruptSendIpi.c)
 *     HalpDisableInterrupts @ 0x140320790 (HalpDisableInterrupts.c)
 *     KiDetachProcess @ 0x140321440 (KiDetachProcess.c)
 *     KiSetAddressPolicy @ 0x140321A30 (KiSetAddressPolicy.c)
 *     KiMoveApcState @ 0x140379BF0 (KiMoveApcState.c)
 *     HvlSwitchVirtualAddressSpace @ 0x1404D48A0 (HvlSwitchVirtualAddressSpace.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheck @ 0x1404FB970 (KeBugCheck.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 */

void __fastcall MiUnlockStealVm(__int64 a1)
{
  __int64 v1; // rsi
  unsigned __int8 v3; // dl
  _OWORD *v4; // rcx
  __int64 v5; // rax
  struct _KTHREAD *CurrentThread; // rbx
  _KPROCESS *Process; // r13
  unsigned __int8 CurrentIrql; // si
  unsigned int v9; // esi
  $81B80DCEA5A02D890AB7B2872B48AC01 *v10; // rsi
  char v11; // al
  __int64 v12; // r8
  int v13; // edx
  char v14; // r9
  unsigned __int64 v15; // rcx
  struct _LIST_ENTRY *Flink; // rdx
  struct _KTHREAD *v17; // rdx
  _LIST_ENTRY *v18; // rax
  struct _KPRCB *CurrentPrcb; // rax
  _KPROCESS *v20; // r8
  unsigned __int64 GroupIndex; // r15
  __int64 v22; // r14
  unsigned __int64 DirectoryTableBase; // rbp
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rbp
  struct _LIST_ENTRY *Blink; // rax
  unsigned __int64 v27; // rax
  unsigned __int8 v28[8]; // [rsp+20h] [rbp-88h] BYREF
  int v29; // [rsp+28h] [rbp-80h] BYREF
  __int128 v30; // [rsp+2Ch] [rbp-7Ch]
  _OWORD v31[3]; // [rsp+40h] [rbp-68h] BYREF

  v1 = *(_QWORD *)(a1 + 24);
  if ( v1 )
  {
    MiUnlockFaultPageTable((__int64 *)(a1 + 24));
    v3 = *(_BYTE *)(a1 + 36);
    if ( (*(_BYTE *)(a1 + 37) & 1) != 0 )
      MiUnlockWorkingSetExclusive(v1, v3);
    else
      MiUnlockWorkingSetShared(v1, v3);
    *(_QWORD *)(a1 + 24) = 0LL;
  }
  if ( *(_QWORD *)(a1 + 56) )
  {
    if ( *(_BYTE *)(a1 + 64) )
    {
      v4 = v31;
      v31[0] = 0LL;
      if ( a1 != -72 )
        v4 = (_OWORD *)(a1 + 72);
      memset(&v31[1], 0, 32);
      v5 = *((_QWORD *)v4 + 4);
      if ( v5 != 1 )
      {
        if ( v5 )
        {
          KiDetachProcess(v4, 1LL);
        }
        else
        {
          CurrentThread = KeGetCurrentThread();
          Process = CurrentThread->ApcState.Process;
          CurrentIrql = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( KiIrqlFlags )
            KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
          v28[0] = CurrentIrql;
          v9 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
          {
            do
            {
              if ( (++v9 & HvlLongSpinCountMask) == 0
                && (HvlEnlightenments & 0x40) != 0
                && KiCheckVpBackingLongSpinWaitHypercall() )
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
            || (v10 = &CurrentThread->152, ($81B80DCEA5A02D890AB7B2872B48AC01 *)v10->ApcState.ApcListHead[0].Flink != v10)
            || (unsigned __int8 *)CurrentThread->ApcState.ApcListHead[1].Flink != &CurrentThread->ApcStateFill[16] )
          {
            KeBugCheck(6u);
          }
          CurrentThread->MiscFlags |= 0x800u;
          v15 = (unsigned __int64)&CurrentThread->600;
          CurrentThread->ApcState.Process = CurrentThread->SavedApcState.Process;
          CurrentThread->ApcState.InProgressFlags = CurrentThread->SavedApcState.InProgressFlags;
          CurrentThread->ApcState.KernelApcPending = CurrentThread->SavedApcState.KernelApcPending;
          CurrentThread->ApcState.UserApcPendingAll = CurrentThread->SavedApcState.UserApcPendingAll;
          Flink = CurrentThread->SavedApcState.ApcListHead[0].Flink;
          if ( *(_QWORD *)v15 == v15 )
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
          v17 = (struct _KTHREAD *)CurrentThread->SavedApcState.ApcListHead[1].Flink;
          v18 = &CurrentThread->ApcState.ApcListHead[1];
          if ( v17 == (struct _KTHREAD *)&CurrentThread->SavedApcStateFill[16] )
          {
            CurrentThread->ApcState.ApcListHead[1].Blink = &CurrentThread->ApcState.ApcListHead[1];
            v18->Flink = v18;
            CurrentThread->ApcState.UserApcPendingAll = 0;
          }
          else
          {
            v15 = (unsigned __int64)CurrentThread->SavedApcState.ApcListHead[1].Blink;
            v18->Flink = (struct _LIST_ENTRY *)v17;
            CurrentThread->ApcState.ApcListHead[1].Blink = (struct _LIST_ENTRY *)v15;
            v17->Header.WaitListHead.Flink = v18;
            *(_QWORD *)v15 = v18;
          }
          CurrentThread->SavedApcState.Process = 0LL;
          CurrentThread->ApcStateIndex = 0;
          CurrentThread->ThreadLock = 0LL;
          CurrentPrcb = KeGetCurrentPrcb();
          v20 = CurrentThread->ApcState.Process;
          GroupIndex = CurrentPrcb->GroupIndex;
          v22 = 8LL * CurrentPrcb->Group;
          _interlockedbittestandset64((volatile signed __int32 *)((char *)&v20->ActiveProcessors->8 + v22), GroupIndex);
          DirectoryTableBase = v20->DirectoryTableBase;
          if ( KiKvaShadow )
          {
            v24 = DirectoryTableBase | 0x8000000000000000uLL;
            if ( (DirectoryTableBase & 2) == 0 )
              v24 = v20->DirectoryTableBase;
            __writegsqword(0xB000u, v24);
            KiSetAddressPolicy(v20->AddressPolicy);
          }
          if ( (HvlEnlightenments & 1) != 0 )
            HvlSwitchVirtualAddressSpace(DirectoryTableBase);
          else
            __writecr3(DirectoryTableBase);
          if ( KiKvaShadow && !KiFlushPcid )
          {
            v15 = __readcr4();
            if ( (v15 & 0x20080) != 0 )
            {
              __writecr4(v15 ^ 0x80);
              __writecr4(v15);
            }
            else
            {
              v27 = __readcr3();
              __writecr3(v27);
            }
          }
          _interlockedbittestandreset64(
            (volatile signed __int32 *)((char *)&Process->ActiveProcessors->8 + v22),
            GroupIndex);
          CurrentThread->MiscFlags &= ~0x800u;
          v25 = v28[0];
          if ( KiIrqlFlags )
            KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v28[0]);
          __writecr8(v25);
          if ( ($81B80DCEA5A02D890AB7B2872B48AC01 *)v10->ApcState.ApcListHead[0].Flink != v10 )
          {
            CurrentThread->ApcState.KernelApcPending = 1;
            v30 = 0LL;
            if ( KiAmdTprLowerInterruptDelayDynamicWorkaround )
            {
              v11 = HalpDisableInterrupts(v15, v17, KeGetCurrentPrcb());
              v13 = *(_DWORD *)(v12 + 168);
              v14 = v11;
              *(_DWORD *)(v12 + 168) = v13 | 2;
              if ( !v13 )
                __writemsr(0xC0010015, __readmsr(0xC0010015) | 0x100000000LL);
              if ( v14 )
                _enable();
            }
            v29 = 5;
            HalpInterruptSendIpi(&v29, 31LL);
          }
        }
      }
    }
    MiAttachThreadDone(*(_QWORD *)(a1 + 56));
  }
}
