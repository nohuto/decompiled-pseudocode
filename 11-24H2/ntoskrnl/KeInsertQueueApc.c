/*
 * XREFs of KeInsertQueueApc @ 0x140337240
 * Callers:
 *     IopCopyCompleteReadIrp @ 0x140268580 (IopCopyCompleteReadIrp.c)
 *     IopCompleteRequest @ 0x1402A5AC0 (IopCompleteRequest.c)
 *     MiStoreModifiedWriteDereference @ 0x1403371B8 (MiStoreModifiedWriteDereference.c)
 *     MiStoreAttemptContractPageFile @ 0x140365ED4 (MiStoreAttemptContractPageFile.c)
 *     IoRaiseHardError @ 0x1403D5B40 (IoRaiseHardError.c)
 *     IopfCompleteRequest @ 0x1403DBB10 (IopfCompleteRequest.c)
 *     EtwpQueueApc @ 0x1403EE2B0 (EtwpQueueApc.c)
 *     MiAttemptPageFileReduction @ 0x1403F9154 (MiAttemptPageFileReduction.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x140403D20 (MiTrimUnusedPageFileRegionsWorker.c)
 *     ExpTimerDpcRoutine @ 0x140496BE0 (ExpTimerDpcRoutine.c)
 *     MiQueueSyncModifiedWriterApc @ 0x1404ACE38 (MiQueueSyncModifiedWriterApc.c)
 *     IoRaiseInformationalHardError @ 0x1404ADFA0 (IoRaiseInformationalHardError.c)
 *     EtwpTraceThreadRundownWithStack @ 0x140650A6C (EtwpTraceThreadRundownWithStack.c)
 *     EtwpCovSampCaptureQueueApc @ 0x140651B10 (EtwpCovSampCaptureQueueApc.c)
 *     UcOnUnexpectedCodePath @ 0x14069466C (UcOnUnexpectedCodePath.c)
 *     DbgkpLkmdLaunchSnapApc @ 0x140708144 (DbgkpLkmdLaunchSnapApc.c)
 *     PsUpdateSvmProcessPasidAllThreads @ 0x1407741A4 (PsUpdateSvmProcessPasidAllThreads.c)
 *     PspEnableProcessOptionalXStateFeatures @ 0x1407748A0 (PspEnableProcessOptionalXStateFeatures.c)
 *     CmpCloseKeyObject @ 0x140841890 (CmpCloseKeyObject.c)
 *     CmpReportNotifyHelper @ 0x140868820 (CmpReportNotifyHelper.c)
 *     CmpPostNotify @ 0x140868D58 (CmpPostNotify.c)
 *     PspRecheckThreadOptionalXStateFeatures @ 0x1408A644C (PspRecheckThreadOptionalXStateFeatures.c)
 *     PspRecheckThreadPasidMsrState @ 0x1408A6880 (PspRecheckThreadPasidMsrState.c)
 *     PerfLogImageUnload @ 0x1408E6808 (PerfLogImageUnload.c)
 *     PspSetContextThreadInternal @ 0x1408FD220 (PspSetContextThreadInternal.c)
 *     PspGetContextThreadInternal @ 0x1408FD570 (PspGetContextThreadInternal.c)
 *     IopCancelIrpsInThreadList @ 0x14094A824 (IopCancelIrpsInThreadList.c)
 *     NtQueueApcThreadEx2 @ 0x1409F6A40 (NtQueueApcThreadEx2.c)
 *     ExSwapinWorkerThreads @ 0x140A51B34 (ExSwapinWorkerThreads.c)
 *     KeSpecialUserApcKernelRoutine @ 0x140A95740 (KeSpecialUserApcKernelRoutine.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiRequestSoftwareInterrupt @ 0x140297BA0 (KiRequestSoftwareInterrupt.c)
 *     EtwpLevelKeywordEnabled @ 0x1402A2030 (EtwpLevelKeywordEnabled.c)
 *     KiRemovePrcbWaitEntry @ 0x14031CEA0 (KiRemovePrcbWaitEntry.c)
 *     KiExitDispatcher @ 0x14031E7A0 (KiExitDispatcher.c)
 *     HalpInterruptSendIpi @ 0x14031FDE0 (HalpInterruptSendIpi.c)
 *     HalpDisableInterrupts @ 0x140320790 (HalpDisableInterrupts.c)
 *     KiSignalThread @ 0x140324240 (KiSignalThread.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     KiInsertQueueApc @ 0x1403377A0 (KiInsertQueueApc.c)
 *     KiEnterDeferredReadyState @ 0x140337910 (KiEnterDeferredReadyState.c)
 *     ObfReferenceObjectWithTag @ 0x1403403E0 (ObfReferenceObjectWithTag.c)
 *     EtwTiLogInsertQueueUserApc @ 0x1403D32E4 (EtwTiLogInsertQueueUserApc.c)
 *     KiSendSoftwareInterrupt @ 0x14041B640 (KiSendSoftwareInterrupt.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall KeInsertQueueApc(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  char v4; // r10
  __int16 v7; // dx
  __int64 v8; // r8
  __int64 v9; // r10
  char v10; // cl
  __int64 v11; // rbx
  char v12; // dl
  struct _KTHREAD *CurrentThread; // r8
  bool v14; // zf
  char v15; // r12
  unsigned __int8 CurrentIrql; // r15
  struct _KPRCB *CurrentPrcb; // r14
  unsigned int v18; // edi
  __int64 v19; // rdi
  __int64 v20; // rdx
  char v21; // al
  int v22; // eax
  __int64 v23; // rdx
  unsigned __int8 v24; // di
  bool v26; // al
  __int64 v27; // r8
  int v28; // edx
  bool v29; // r9
  __int64 v30; // rax
  char v31; // cl
  __int64 v32; // rcx
  signed __int32 v33[8]; // [rsp+0h] [rbp-A8h] BYREF
  __int64 v34; // [rsp+40h] [rbp-68h]
  __int64 v35; // [rsp+48h] [rbp-60h]
  unsigned int v36; // [rsp+50h] [rbp-58h] BYREF
  __int128 v37; // [rsp+54h] [rbp-54h]
  char v38; // [rsp+B0h] [rbp+8h]

  v4 = EtwThreatIntProvRegHandle;
  if ( EtwThreatIntProvRegHandle )
    v4 = EtwpLevelKeywordEnabled(*(_QWORD *)(EtwThreatIntProvRegHandle + 32) + 96LL, 0, 12288LL)
      || *(_WORD *)(v9 + 102) != v7 && EtwpLevelKeywordEnabled(*(_QWORD *)(v9 + 40) + 96LL, v7, v8);
  v10 = *(_BYTE *)(a1 + 81);
  v34 = *(_QWORD *)(a1 + 56);
  v35 = *(_QWORD *)(a1 + 48);
  v38 = v10 != 0;
  if ( *(__int64 (__fastcall **)(int, int, int, int, __int64))(a1 + 32) != KeSpecialUserApcKernelRoutine || v10 )
  {
    v11 = *(_QWORD *)(a1 + 8);
    v12 = 0;
    CurrentThread = KeGetCurrentThread();
    if ( v10 )
    {
      v14 = CurrentThread->Process == *(_KPROCESS **)(v11 + 544);
      goto LABEL_7;
    }
  }
  else
  {
    v11 = *(_QWORD *)(a1 + 8);
    v12 = 1;
    CurrentThread = KeGetCurrentThread();
  }
  v14 = CurrentThread->ApcState.Process == *(_KPROCESS **)(v11 + 544);
LABEL_7:
  if ( v4 && !v14 && (v10 || v12) )
  {
    v15 = 1;
    ObfReferenceObjectWithTag((PVOID)v11, 0x5149654Bu);
  }
  else
  {
    v15 = 0;
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
  CurrentPrcb = KeGetCurrentPrcb();
  v18 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v11 + 64), 0LL) )
  {
    do
    {
      if ( (++v18 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        HvlNotifyLongSpinWait(v18);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(_QWORD *)(v11 + 64) );
  }
  if ( (*(_DWORD *)(v11 + 116) & 0x4000) == 0 || *(_BYTE *)(a1 + 82) )
  {
    v24 = 0;
  }
  else
  {
    *(_QWORD *)(a1 + 64) = a2;
    *(_QWORD *)(a1 + 72) = a3;
    *(_BYTE *)(a1 + 82) = 1;
    KiInsertQueueApc(a1);
    v19 = *(_QWORD *)(a1 + 8);
    v20 = *(unsigned __int8 *)(a1 + 81);
    if ( *(char *)(a1 + 80) == *(unsigned __int8 *)(v19 + 586) )
    {
      if ( (_KTHREAD *)v19 == CurrentPrcb->CurrentThread )
      {
        if ( !(_BYTE)v20 && (!*(_DWORD *)(v19 + 484) || !*(_QWORD *)(a1 + 48) && !HIWORD(*(_DWORD *)(v19 + 484))) )
        {
          *(_BYTE *)(v19 + 193) = 1;
          if ( CurrentIrql )
          {
            v37 = 0LL;
            if ( KiAmdTprLowerInterruptDelayDynamicWorkaround )
            {
              v26 = HalpDisableInterrupts();
              v28 = *(_DWORD *)(v27 + 168);
              v29 = v26;
              *(_DWORD *)(v27 + 168) = v28 | 2;
              if ( !v28 )
                __writemsr(0xC0010015, __readmsr(0xC0010015) | 0x100000000LL);
              if ( v29 )
                _enable();
            }
            v36 = 5;
            HalpInterruptSendIpi(&v36, 0x1Fu);
          }
          else
          {
            *(_DWORD *)(v19 + 116) |= 0x40u;
          }
        }
      }
      else if ( (_BYTE)v20 )
      {
        if ( *(_BYTE *)(v19 + 388) == 5 && *(_BYTE *)(v19 + 391) == 1 )
        {
          v31 = *(_BYTE *)(v19 + 112);
          if ( (v31 & 7) != 4
            && (v31 & 7) != 3
            && ((*(_DWORD *)(v19 + 116) & 0x10) != 0 || (*(_BYTE *)(v19 + 194) & 2) != 0) )
          {
            *(_BYTE *)(v19 + 112) = v31 | 0x40;
            if ( KiSignalThread((__int64)CurrentPrcb, v19, 192LL, 0LL) )
              *(_BYTE *)(v19 + 194) |= 2u;
          }
        }
      }
      else
      {
        *(_BYTE *)(v19 + 193) = 1;
        _InterlockedOr(v33, 0);
        v21 = *(_BYTE *)(v19 + 388);
        if ( v21 == 2 )
        {
          v32 = *(unsigned int *)(v19 + 536);
          LOBYTE(v20) = 1;
          LODWORD(v32) = v32 & 0x7FFFFFFF;
          if ( KeGetPcr()->Prcb.Number == (_DWORD)v32 )
            KiRequestSoftwareInterrupt(0LL, v20);
          else
            KiSendSoftwareInterrupt(v32, v20);
        }
        else if ( v21 == 5
               && !*(_BYTE *)(v19 + 390)
               && !*(_WORD *)(v19 + 486)
               && (!*(_QWORD *)(a1 + 48) || !*(_WORD *)(v19 + 484) && !*(_BYTE *)(v19 + 192)) )
        {
          v22 = *(_BYTE *)(v19 + 112) & 7;
          if ( v22 == 1 || v22 == 4 )
          {
            v23 = *(_QWORD *)(v19 + 232);
            if ( v23 )
            {
              if ( (*(_BYTE *)v23 & 0x7F) == 0x15 )
              {
                v30 = (unsigned __int8)*(_DWORD *)(v19 + 540);
                *(_DWORD *)(v19 + 540) = v30;
                _InterlockedIncrement((volatile signed __int32 *)(v23 + 4 * v30 + 536));
              }
              else
              {
                _InterlockedIncrement((volatile signed __int32 *)(v23 + 40));
              }
            }
            KiRemovePrcbWaitEntry((_QWORD *)v19);
            KiEnterDeferredReadyState(v19);
            *(_QWORD *)(v19 + 216) = CurrentPrcb->DeferredReadyListHead.Next;
            CurrentPrcb->DeferredReadyListHead.Next = (struct _SINGLE_LIST_ENTRY *)(v19 + 216);
            *(_QWORD *)(v19 + 200) = 256LL;
            *(_QWORD *)(v19 + 976) = 0LL;
          }
          *(_BYTE *)(v19 + 112) |= 0x20u;
        }
      }
    }
    v24 = 1;
  }
  *(_QWORD *)(v11 + 64) = 0LL;
  KiExitDispatcher((unsigned __int64)CurrentPrcb, 0LL, 1u, a4, CurrentIrql);
  if ( v15 )
  {
    if ( v24 )
      EtwTiLogInsertQueueUserApc((unsigned __int8)KeGetCurrentThread()->PreviousMode, v11, v35, v34, a2, a3, v38);
    ObfDereferenceObjectWithTag((PVOID)v11, 0x5149654Bu);
  }
  return v24;
}
