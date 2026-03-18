/*
 * XREFs of MiUnlockStealVm @ 0x1402BB590
 * Callers:
 *     MiLockStealSystemVm @ 0x140218E00 (MiLockStealSystemVm.c)
 *     MiStealPage @ 0x1402C80F0 (MiStealPage.c)
 *     MiLockStealUserVm @ 0x1402C97A0 (MiLockStealUserVm.c)
 * Callees:
 *     KiAcquireThreadLockRaiseToDpc @ 0x140204DB0 (KiAcquireThreadLockRaiseToDpc.c)
 *     KiReleaseThreadLockLowerIrql @ 0x140204FF0 (KiReleaseThreadLockLowerIrql.c)
 *     HalpInterruptSendIpi @ 0x140288640 (HalpInterruptSendIpi.c)
 *     HalpDisableInterrupts @ 0x140288F50 (HalpDisableInterrupts.c)
 *     KiDetachProcess @ 0x14028A0A0 (KiDetachProcess.c)
 *     KiSetAddressPolicy @ 0x14028A690 (KiSetAddressPolicy.c)
 *     MiUnlockWorkingSetExclusive @ 0x1402B7680 (MiUnlockWorkingSetExclusive.c)
 *     MiUnlockWorkingSetShared @ 0x1402B9D50 (MiUnlockWorkingSetShared.c)
 *     MiUnlockFaultPageTable @ 0x1402B9F30 (MiUnlockFaultPageTable.c)
 *     MiAttachThreadDone @ 0x1402BC1A0 (MiAttachThreadDone.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiMoveApcState @ 0x1403C3A10 (KiMoveApcState.c)
 *     HvlSwitchVirtualAddressSpace @ 0x1403C4700 (HvlSwitchVirtualAddressSpace.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeBugCheck @ 0x1404F9260 (KeBugCheck.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
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
  $727077A9B6E167EAE1398C74674DC5A5 *v10; // rsi
  bool v11; // al
  __int64 v12; // r8
  int v13; // edx
  bool v14; // r9
  struct _KTHREAD *Flink; // rdx
  __int64 v16; // rdx
  struct _LIST_ENTRY *v17; // rax
  struct _KPRCB *CurrentPrcb; // rax
  _KPROCESS *v19; // r8
  unsigned __int64 GroupIndex; // r15
  __int64 v21; // r14
  unsigned __int64 DirectoryTableBase; // rbp
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rbp
  struct _LIST_ENTRY *Blink; // rax
  struct _LIST_ENTRY *v26; // rcx
  unsigned __int64 v27; // rcx
  unsigned __int64 v28; // rax
  unsigned __int8 v29[8]; // [rsp+20h] [rbp-88h] BYREF
  int v30; // [rsp+28h] [rbp-80h] BYREF
  __int128 v31; // [rsp+2Ch] [rbp-7Ch]
  _OWORD v32[3]; // [rsp+40h] [rbp-68h] BYREF

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
      v4 = v32;
      v32[0] = 0LL;
      if ( a1 != -72 )
        v4 = (_OWORD *)(a1 + 72);
      memset(&v32[1], 0, 32);
      v5 = *((_QWORD *)v4 + 4);
      if ( v5 != 1 )
      {
        if ( v5 )
        {
          KiDetachProcess((__int64)v4, 1);
        }
        else
        {
          CurrentThread = KeGetCurrentThread();
          Process = CurrentThread->ApcState.Process;
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
          while ( CurrentThread->ApcState.KernelApcPending )
          {
            if ( CurrentThread->SpecialApcDisable )
              break;
            if ( v29[0] )
              break;
            KiReleaseThreadLockLowerIrql((__int64)CurrentThread, 0);
            KiAcquireThreadLockRaiseToDpc((__int64)CurrentThread, v29);
          }
          if ( !CurrentThread->ApcStateIndex
            || (CurrentThread->ApcState.InProgressFlags & 1) != 0
            || (v10 = &CurrentThread->152, ($727077A9B6E167EAE1398C74674DC5A5 *)v10->ApcState.ApcListHead[0].Flink != v10)
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
            v10->ApcState.ApcListHead[0].Flink = (struct _LIST_ENTRY *)v10;
            CurrentThread->ApcState.KernelApcPending = 0;
          }
          else
          {
            Blink = CurrentThread->SavedApcState.ApcListHead[0].Blink;
            v10->ApcState.ApcListHead[0].Flink = (struct _LIST_ENTRY *)Flink;
            CurrentThread->ApcState.ApcListHead[0].Blink = Blink;
            Flink->Header.WaitListHead.Flink = (struct _LIST_ENTRY *)v10;
            Blink->Flink = (struct _LIST_ENTRY *)v10;
          }
          v16 = (__int64)CurrentThread->SavedApcState.ApcListHead[1].Flink;
          v17 = &CurrentThread->ApcState.ApcListHead[1];
          if ( (unsigned __int8 *)v16 == &CurrentThread->SavedApcStateFill[16] )
          {
            CurrentThread->ApcState.ApcListHead[1].Blink = &CurrentThread->ApcState.ApcListHead[1];
            v17->Flink = v17;
            CurrentThread->ApcState.UserApcPendingAll = 0;
          }
          else
          {
            v26 = CurrentThread->SavedApcState.ApcListHead[1].Blink;
            v17->Flink = (struct _LIST_ENTRY *)v16;
            CurrentThread->ApcState.ApcListHead[1].Blink = v26;
            *(_QWORD *)(v16 + 8) = v17;
            v26->Flink = v17;
          }
          CurrentThread->SavedApcState.Process = 0LL;
          CurrentThread->ApcStateIndex = 0;
          CurrentThread->ThreadLock = 0LL;
          CurrentPrcb = KeGetCurrentPrcb();
          v19 = CurrentThread->ApcState.Process;
          GroupIndex = CurrentPrcb->GroupIndex;
          v21 = 8LL * CurrentPrcb->Group;
          _interlockedbittestandset64((volatile signed __int32 *)((char *)&v19->ActiveProcessors->8 + v21), GroupIndex);
          DirectoryTableBase = v19->DirectoryTableBase;
          if ( KiKvaShadow )
          {
            v23 = DirectoryTableBase | 0x8000000000000000uLL;
            if ( (DirectoryTableBase & 2) == 0 )
              v23 = v19->DirectoryTableBase;
            __writegsqword(0xB000u, v23);
            KiSetAddressPolicy(v19->AddressPolicy, v16);
          }
          if ( (HvlEnlightenments & 1) != 0 )
            HvlSwitchVirtualAddressSpace(DirectoryTableBase);
          else
            __writecr3(DirectoryTableBase);
          if ( KiKvaShadow && !KiFlushPcid )
          {
            v27 = __readcr4();
            if ( (v27 & 0x20080) != 0 )
            {
              __writecr4(v27 ^ 0x80);
              __writecr4(v27);
            }
            else
            {
              v28 = __readcr3();
              __writecr3(v28);
            }
          }
          _interlockedbittestandreset64(
            (volatile signed __int32 *)((char *)&Process->ActiveProcessors->8 + v21),
            GroupIndex);
          CurrentThread->MiscFlags &= ~0x800u;
          v24 = v29[0];
          if ( KiIrqlFlags )
            KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v29[0]);
          __writecr8(v24);
          if ( ($727077A9B6E167EAE1398C74674DC5A5 *)v10->ApcState.ApcListHead[0].Flink != v10 )
          {
            CurrentThread->ApcState.KernelApcPending = 1;
            v31 = 0LL;
            if ( KiAmdTprLowerInterruptDelayDynamicWorkaround )
            {
              v11 = HalpDisableInterrupts();
              v13 = *(_DWORD *)(v12 + 168);
              v14 = v11;
              *(_DWORD *)(v12 + 168) = v13 | 2;
              if ( !v13 )
                __writemsr(0xC0010015, __readmsr(0xC0010015) | 0x100000000LL);
              if ( v14 )
                _enable();
            }
            v30 = 5;
            HalpInterruptSendIpi(&v30, 0x1Fu);
          }
        }
      }
    }
    MiAttachThreadDone(*(_QWORD *)(a1 + 56));
  }
}
