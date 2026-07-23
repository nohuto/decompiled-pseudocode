/*
 * XREFs of EtwpLogKernelEvent @ 0x140287790
 * Callers:
 *     EtwpLogMemInfo @ 0x140261FE0 (EtwpLogMemInfo.c)
 *     EtwTraceKernelEvent @ 0x140285790 (EtwTraceKernelEvent.c)
 *     KiExecuteAllDpcs @ 0x1402858E0 (KiExecuteAllDpcs.c)
 *     EtwpLogKernelEvent @ 0x140287790 (EtwpLogKernelEvent.c)
 *     EtwpTraceLastBranchRecord @ 0x14028A010 (EtwpTraceLastBranchRecord.c)
 *     EtwTraceReadyThread @ 0x1402C9340 (EtwTraceReadyThread.c)
 *     EtwpLogSystemEventUnsafe @ 0x1402D0080 (EtwpLogSystemEventUnsafe.c)
 *     EtwpTraceFileIo @ 0x1402D1360 (EtwpTraceFileIo.c)
 *     KiProcessExpiredTimerList @ 0x140315CC0 (KiProcessExpiredTimerList.c)
 *     EtwTracePool @ 0x1403971E8 (EtwTracePool.c)
 *     HvcallFastExtended @ 0x14039DBD0 (HvcallFastExtended.c)
 *     EtwTraceTimedEvent @ 0x14039F830 (EtwTraceTimedEvent.c)
 *     PerfInfoLogInterrupt @ 0x1403AEB10 (PerfInfoLogInterrupt.c)
 *     EtwpTraceImageUnload @ 0x1403B36B8 (EtwpTraceImageUnload.c)
 *     EtwTraceSiloKernelEvent @ 0x1403C1FD0 (EtwTraceSiloKernelEvent.c)
 *     EtwpTraceIo @ 0x1403C2130 (EtwpTraceIo.c)
 *     EtwpTraceFileName @ 0x1403C2F70 (EtwpTraceFileName.c)
 *     PerfInfoLogSysCallExit @ 0x1403C31F0 (PerfInfoLogSysCallExit.c)
 *     PerfInfoLogSysCallEntry @ 0x1403C3340 (PerfInfoLogSysCallEntry.c)
 *     EtwpTraceStackWalk @ 0x1403DDBA0 (EtwpTraceStackWalk.c)
 *     EtwpTraceStackKey @ 0x1403DE5B0 (EtwpTraceStackKey.c)
 *     EtwpDereferenceStackEntry @ 0x1403DEC00 (EtwpDereferenceStackEntry.c)
 *     EtwpTraceCachedStack @ 0x1403DED20 (EtwpTraceCachedStack.c)
 *     PerfInfoLogInterruptHv @ 0x140440F90 (PerfInfoLogInterruptHv.c)
 *     EtwTraceSiloTimedEvent @ 0x140475938 (EtwTraceSiloTimedEvent.c)
 *     EtwTraceSiloDcEvent @ 0x14047AF60 (EtwTraceSiloDcEvent.c)
 *     EtwpTraceKernelEventWithFilter @ 0x140487710 (EtwpTraceKernelEventWithFilter.c)
 *     PerfInfoLogIpiSend @ 0x1404A8470 (PerfInfoLogIpiSend.c)
 *     EtwpCCSwapTrace @ 0x1404ED100 (EtwpCCSwapTrace.c)
 *     EtwpTraceContextRegisters @ 0x14064B6B8 (EtwpTraceContextRegisters.c)
 *     EtwTraceScbRundown @ 0x14064C47C (EtwTraceScbRundown.c)
 *     EtwTraceSchedulingGroupRundown @ 0x14064C59C (EtwTraceSchedulingGroupRundown.c)
 *     EtwTraceThreadSchedulingGroupRundown @ 0x14064C840 (EtwTraceThreadSchedulingGroupRundown.c)
 *     EtwpWriteProcessorTrace @ 0x14064FFD0 (EtwpWriteProcessorTrace.c)
 *     EtwpLogTxREvent @ 0x1407A9FCC (EtwpLogTxREvent.c)
 *     EtwLogPfnInfoRundown @ 0x1407B0D2C (EtwLogPfnInfoRundown.c)
 *     EtwpClockSourceRunDown @ 0x1407B0E1C (EtwpClockSourceRunDown.c)
 *     EtwpExecutiveResourceConfigRunDown @ 0x1407B0F98 (EtwpExecutiveResourceConfigRunDown.c)
 *     EtwpObjectHandleEnumCallback @ 0x1407B1180 (EtwpObjectHandleEnumCallback.c)
 *     EtwpObjectTypeRundown @ 0x1407B1434 (EtwpObjectTypeRundown.c)
 *     EtwpPoolRunDown @ 0x1407B1590 (EtwpPoolRunDown.c)
 *     EtwpProcessorRundown @ 0x1407B17A8 (EtwpProcessorRundown.c)
 *     EtwpSpinLockConfigRunDown @ 0x1407B1A94 (EtwpSpinLockConfigRunDown.c)
 *     EtwpLogMemInfoWsHelper @ 0x140861ADC (EtwpLogMemInfoWsHelper.c)
 *     EtwpTraceProcessRundown @ 0x1408EF628 (EtwpTraceProcessRundown.c)
 *     EtwpProcessPerfCtrsRundown @ 0x1408F0418 (EtwpProcessPerfCtrsRundown.c)
 *     EtwpSysModuleRunDown @ 0x1408F1048 (EtwpSysModuleRunDown.c)
 *     EtwpEnumerateAddressSpace @ 0x140951B80 (EtwpEnumerateAddressSpace.c)
 *     EtwpLogAlwaysPresentRundown @ 0x140A0F418 (EtwpLogAlwaysPresentRundown.c)
 *     EtwpLogGroupMask @ 0x140A0F484 (EtwpLogGroupMask.c)
 *     EtwpSystemImageEnumCallback @ 0x140A26A60 (EtwpSystemImageEnumCallback.c)
 *     EtwpSampledProfileRunDown @ 0x140A6192C (EtwpSampledProfileRunDown.c)
 *     EtwpLogPmcCounterRundown @ 0x140A7871C (EtwpLogPmcCounterRundown.c)
 * Callees:
 *     MmCanThreadFault @ 0x1402331D0 (MmCanThreadFault.c)
 *     EtwpLogKernelEvent @ 0x140287790 (EtwpLogKernelEvent.c)
 *     KeGetEffectiveIrql @ 0x1402883D0 (KeGetEffectiveIrql.c)
 *     KeAreInterruptsEnabled @ 0x140288430 (KeAreInterruptsEnabled.c)
 *     KeLeaveCriticalRegionThread @ 0x140289BB0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x140289C10 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     EtwWriteEx @ 0x140289C90 (EtwWriteEx.c)
 *     KeQueryCurrentStackInformationEx @ 0x14028A1E0 (KeQueryCurrentStackInformationEx.c)
 *     EtwpReserveTraceBuffer @ 0x1402D0980 (EtwpReserveTraceBuffer.c)
 *     KeIsTraceCallbackAllowed @ 0x1402D0E7C (KeIsTraceCallbackAllowed.c)
 *     EtwpReserveWithPmcCounters @ 0x1402D0EE0 (EtwpReserveWithPmcCounters.c)
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     EtwpLevelKeywordEnabled @ 0x1402D1760 (EtwpLevelKeywordEnabled.c)
 *     EtwpTraceStackWalk @ 0x1403DDBA0 (EtwpTraceStackWalk.c)
 *     EtwpQueueApc @ 0x1403DE1A0 (EtwpQueueApc.c)
 *     EtwpUpdateEventsLostCount @ 0x1403FB298 (EtwpUpdateEventsLostCount.c)
 *     EtwpSendTraceEvent @ 0x1404A70B8 (EtwpSendTraceEvent.c)
 *     EtwpGetNextEventOffsetType @ 0x1404A7234 (EtwpGetNextEventOffsetType.c)
 *     EtwpTraceLostSystemEvent @ 0x1404B434C (EtwpTraceLostSystemEvent.c)
 *     EtwpReserveWithPebsIndex @ 0x1404C54FC (EtwpReserveWithPebsIndex.c)
 *     EtwpContextRegisterTracingDispatcher @ 0x1404C7B30 (EtwpContextRegisterTracingDispatcher.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     KeGetCurrentStackPointer @ 0x1406AB330 (KeGetCurrentStackPointer.c)
 *     RtlpInterlockedPopEntrySList @ 0x1406B4830 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406B4870 (RtlpInterlockedPushEntrySList.c)
 *     _alloca_probe @ 0x1406B4C20 (_alloca_probe.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

int __fastcall EtwpLogKernelEvent(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        __int16 a5,
        unsigned int a6)
{
  __int64 v8; // rdi
  char v10; // bl
  unsigned __int64 CurrentPrcb; // rax
  struct _KTHREAD *CurrentThread; // rax
  __int64 v13; // r8
  unsigned __int64 *v14; // r9
  unsigned __int64 v15; // rtt
  __int64 v16; // rsi
  __int64 v17; // rdi
  ULONGLONG v18; // rdi
  unsigned int v19; // r14d
  unsigned int v20; // r10d
  int v21; // eax
  unsigned __int64 v22; // rdx
  __int16 v23; // r11
  __int64 v24; // r9
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // r10
  __int16 v29; // r11
  ULONG v30; // r9d
  __int64 v31; // rcx
  _DWORD *v32; // rcx
  __int64 v33; // rdx
  __m128i v34; // xmm4
  __m128i v35; // xmm5
  unsigned int v36; // r14d
  __int64 v37; // r9
  __m128i v38; // xmm3
  __int64 v39; // r9
  __int64 v40; // rdx
  __m128i v41; // xmm2
  __int64 v42; // rcx
  __m128i v43; // xmm3
  __m128i v44; // xmm4
  __m128i v45; // xmm4
  LONG *p_LockNV; // r8
  __int64 i; // r8
  struct _KTHREAD *v48; // r9
  unsigned int v49; // r8d
  __int64 j; // rax
  __int64 v51; // rax
  unsigned int v52; // edx
  __int64 v53; // rsi
  __int16 v54; // si
  signed __int64 *v55; // roff
  signed __int64 v56; // rax
  signed __int64 v57; // rtt
  struct _KTHREAD *v58; // r14
  unsigned int v59; // r15d
  void *CurrentIrql; // r8
  struct _KTHREAD *v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // rdx
  __int64 v64; // rcx
  char v65; // al
  unsigned int v66; // eax
  signed __int8 v67; // cf
  unsigned __int8 NestingLevel; // cl
  __int64 v69; // r14
  __int64 v70; // r9
  unsigned int v71; // r10d
  __int64 m; // rdx
  __int64 k; // rcx
  __int64 n; // rdx
  _QWORD *v75; // rcx
  struct _KTHREAD *v76; // rdx
  struct _KTHREAD *v77; // rcx
  __int64 CurrentStackPointer; // rax
  int v79; // ecx
  __int64 v80; // r14
  PSLIST_ENTRY v81; // rax
  __int64 v82; // rdx
  __int64 v83; // rcx
  unsigned int *v84; // r15
  __int64 v85; // rax
  __int64 v86; // rax
  void *v87; // rsp
  int v88; // ecx
  int v89; // r8d
  __int64 v90; // rdx
  LPCGUID ActivityId; // [rsp+20h] [rbp-20h]
  unsigned int v93; // [rsp+40h] [rbp+0h] BYREF
  ULONGLONG v94; // [rsp+48h] [rbp+8h] BYREF
  unsigned int v95; // [rsp+50h] [rbp+10h]
  int v96; // [rsp+58h] [rbp+18h] BYREF
  void *v97; // [rsp+60h] [rbp+20h]
  struct _KTHREAD *v98; // [rsp+68h] [rbp+28h]
  unsigned int v99; // [rsp+70h] [rbp+30h]
  int v100; // [rsp+74h] [rbp+34h]
  unsigned int v101; // [rsp+78h] [rbp+38h] BYREF
  __int64 v102; // [rsp+80h] [rbp+40h]
  __int64 v103; // [rsp+88h] [rbp+48h] BYREF
  __int128 v104; // [rsp+90h] [rbp+50h] BYREF
  __int64 v105; // [rsp+A0h] [rbp+60h]
  __int64 v106; // [rsp+A8h] [rbp+68h] BYREF
  __int64 v107; // [rsp+B0h] [rbp+70h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+C0h] [rbp+80h] BYREF
  __int128 v109; // [rsp+D0h] [rbp+90h]
  __int128 v110; // [rsp+E0h] [rbp+A0h]
  int *v111; // [rsp+F0h] [rbp+B0h]
  __int64 v112; // [rsp+F8h] [rbp+B8h]
  _QWORD v113[3]; // [rsp+100h] [rbp+C0h] BYREF
  int v114; // [rsp+118h] [rbp+D8h]
  int v115; // [rsp+11Ch] [rbp+DCh]

  LOWORD(v93) = a5;
  v8 = a3;
  v105 = 0LL;
  v94 = 0LL;
  v10 = 0;
  v107 = a2;
  v103 = a1;
  v104 = 0LL;
  LODWORD(CurrentPrcb) = KeAreInterruptsEnabled(a1, a2);
  if ( (_BYTE)CurrentPrcb )
  {
    LODWORD(CurrentPrcb) = KeGetCurrentIrql();
    if ( (unsigned __int8)CurrentPrcb < 2u )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v13 = *(_QWORD *)(*(_QWORD *)(a2 + 704) + 8 * v8);
      v14 = (unsigned __int64 *)(*(_QWORD *)v13
                               + *(_DWORD *)(v13 + 16) * (KeGetPcr()->Prcb.Number % *(_DWORD *)(v13 + 20)));
      _m_prefetchw(v14);
      CurrentPrcb = *v14;
      while ( (CurrentPrcb & 1) == 0 )
      {
        v15 = CurrentPrcb;
        CurrentPrcb = _InterlockedCompareExchange64((volatile signed __int64 *)v14, CurrentPrcb + 2, CurrentPrcb);
        if ( v15 == CurrentPrcb )
        {
          v10 = 1;
          goto LABEL_7;
        }
      }
      goto LABEL_30;
    }
  }
LABEL_7:
  v16 = 8 * v8;
  v17 = *(_QWORD *)(a2 + 712);
  v102 = v16;
  v18 = *(_QWORD *)(v16 + v17);
  if ( (v18 & 1) != 0 )
  {
    if ( !v10 )
      return CurrentPrcb;
    v31 = *(_QWORD *)(a2 + 704);
    goto LABEL_29;
  }
  if ( v18 )
  {
    v19 = 0;
    v20 = 0;
    if ( a4 )
    {
      if ( a4 < 8 )
        goto LABEL_35;
      v34 = 0LL;
      v35 = 0LL;
      v36 = 2;
      do
      {
        v37 = 2LL * v20;
        v20 += 8;
        v38 = _mm_unpacklo_epi32(
                _mm_cvtsi32_si128(*(_DWORD *)(a1 + 8 * v37 + 8)),
                _mm_cvtsi32_si128(*(_DWORD *)(a1 + 16LL * (v36 - 1) + 8)));
        v39 = 2LL * (v36 + 5);
        v40 = 2LL * (v36 + 3);
        v41 = _mm_cvtsi32_si128(*(_DWORD *)(a1 + 16LL * (v36 + 4) + 8));
        v34 = _mm_add_epi32(
                v34,
                _mm_unpacklo_epi64(
                  v38,
                  _mm_unpacklo_epi32(
                    _mm_cvtsi32_si128(*(_DWORD *)(a1 + 16LL * v36 + 8)),
                    _mm_cvtsi32_si128(*(_DWORD *)(a1 + 16LL * (v36 + 1) + 8)))));
        v42 = 2LL * (v36 + 2);
        v36 += 8;
        v43 = _mm_add_epi32(
                _mm_unpacklo_epi64(
                  _mm_unpacklo_epi32(
                    _mm_cvtsi32_si128(*(_DWORD *)(a1 + 8 * v42 + 8)),
                    _mm_cvtsi32_si128(*(_DWORD *)(a1 + 8 * v40 + 8))),
                  _mm_unpacklo_epi32(v41, _mm_cvtsi32_si128(*(_DWORD *)(a1 + 8 * v39 + 8)))),
                v35);
        v35 = v43;
      }
      while ( v20 < (a4 & 0xFFFFFFF8) );
      v44 = _mm_add_epi32(v34, v43);
      v45 = _mm_add_epi32(v44, _mm_srli_si128(v44, 8));
      v19 = _mm_cvtsi128_si32(_mm_add_epi32(v45, _mm_srli_si128(v45, 4)));
      if ( v20 < a4 )
      {
LABEL_35:
        v32 = (_DWORD *)(a1 + 16LL * v20 + 8);
        v33 = a4 - v20;
        do
        {
          v19 += *v32;
          v32 += 4;
          --v33;
        }
        while ( v33 );
      }
    }
    if ( (a6 & 0x100) != 0 )
    {
      if ( (a6 & 0x10000000) != 0 )
      {
        CurrentPrcb = EtwpReserveTraceBuffer(v18, v19 + 24, (unsigned int)&v104, (unsigned int)&v94, a6);
        if ( !CurrentPrcb )
          goto LABEL_15;
        *(_WORD *)(CurrentPrcb + 6) = v93;
        *(_DWORD *)CurrentPrcb = (unsigned __int8)a6 | 0xC0040000;
        *(_QWORD *)(CurrentPrcb + 16) = v94;
        *(_WORD *)(CurrentPrcb + 4) = v19 + 24;
        v22 = *(_QWORD *)&KeGetCurrentThread()[1].CurrentRunTime;
        *(_DWORD *)(CurrentPrcb + 8) = v22;
        *(_DWORD *)(CurrentPrcb + 12) = KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink;
        CurrentPrcb += 24LL;
      }
      else
      {
        v98 = KeGetCurrentThread();
        CurrentPrcb = EtwpReserveTraceBuffer(v18, v19 + 32, (unsigned int)&v104, (unsigned int)&v94, a6);
        v22 = CurrentPrcb;
        if ( !CurrentPrcb )
          goto LABEL_15;
        p_LockNV = &v98->Header.LockNV;
        *(_WORD *)(CurrentPrcb + 6) = v93;
        *(_DWORD *)CurrentPrcb = (unsigned __int8)a6 | 0xC0020000;
        *(_QWORD *)(CurrentPrcb + 16) = v94;
        *(_WORD *)(CurrentPrcb + 4) = v19 + 32;
        *(_DWORD *)(CurrentPrcb + 8) = p_LockNV[324];
        *(_DWORD *)(CurrentPrcb + 12) = p_LockNV[322];
        *(_DWORD *)(CurrentPrcb + 24) = p_LockNV[163];
        *(_DWORD *)(CurrentPrcb + 28) = p_LockNV[183];
        CurrentPrcb += 32LL;
      }
    }
    else
    {
      v21 = *(_DWORD *)(v18 + 816);
      if ( (v21 & 0xC00) != 0 )
      {
        if ( (v21 & 0x400) != 0 && (_WORD)v93 == 1316 )
        {
          CurrentPrcb = EtwpReserveWithPebsIndex(v18, 1316, v19, (unsigned int)&v104, (__int64)&v94, a6);
          goto LABEL_14;
        }
        if ( (v21 & 0x800) != 0 )
        {
          for ( i = 0LL; (unsigned int)i < *(_DWORD *)(*(_QWORD *)(v18 + 1064) + 8LL); i = (unsigned int)(i + 1) )
          {
            if ( *(_WORD *)(*(_QWORD *)(v18 + 1064) + 2 * i + 12) == (_WORD)v93 )
            {
              CurrentPrcb = EtwpReserveWithPmcCounters(
                              v18,
                              (unsigned __int16)v93,
                              v19,
                              (unsigned int)&v104,
                              (__int64)&v94,
                              a6);
              goto LABEL_14;
            }
          }
        }
      }
      CurrentPrcb = EtwpReserveTraceBuffer(v18, v19 + 16, (unsigned int)&v104, (unsigned int)&v94, a6);
      v23 = v93;
      if ( !CurrentPrcb )
      {
LABEL_15:
        if ( v19 > 0xFFF8 )
        {
          v24 = 3221225621LL;
        }
        else
        {
          LODWORD(CurrentPrcb) = -2147483643;
          v24 = 3221225495LL;
          if ( v19 > *(_DWORD *)(v18 + 8) )
            v24 = 2147483653LL;
        }
        if ( EtwpEventTracingProvRegHandle )
        {
          LOBYTE(v22) = 2;
          LODWORD(CurrentPrcb) = EtwpLevelKeywordEnabled(
                                   *(_QWORD *)(EtwpEventTracingProvRegHandle + 32) + 96LL,
                                   v22,
                                   64LL,
                                   v24);
          if ( (_BYTE)CurrentPrcb
            || *(_WORD *)(v28 + 102)
            && (LODWORD(CurrentPrcb) = EtwpLevelKeywordEnabled(*(_QWORD *)(v28 + 40) + 96LL, v25, v26, v27),
                (_BYTE)CurrentPrcb) )
          {
            v96 = v27;
            LOWORD(v93) = v29;
            UserData.Ptr = (ULONGLONG)&v93;
            *(_QWORD *)&UserData.Size = 2LL;
            *(_QWORD *)&v109 = &v96;
            v30 = 1;
            *(_QWORD *)&v110 = *(_QWORD *)(v18 + 144);
            DWORD2(v110) = *(unsigned __int16 *)(v18 + 136);
            v111 = &EtwpNull;
            if ( (a6 & 0x200) != 0 )
              v30 = 5;
            *((_QWORD *)&v109 + 1) = 4LL;
            HIDWORD(v110) = 0;
            v112 = 2LL;
            if ( (a6 & 0x600) != 0 )
              v30 |= 8u;
            LODWORD(CurrentPrcb) = EtwWriteEx(
                                     EtwpEventTracingProvRegHandle,
                                     &ETW_EVENT_LOST_SYSTEM_EVENT,
                                     0LL,
                                     v30,
                                     0LL,
                                     0LL,
                                     4u,
                                     &UserData);
          }
        }
        goto LABEL_27;
      }
      *(_QWORD *)(CurrentPrcb + 8) = v94;
      *(_WORD *)(CurrentPrcb + 6) = v23;
      *(_DWORD *)CurrentPrcb = (unsigned __int8)a6 | 0xC0110000;
      *(_WORD *)(CurrentPrcb + 4) = v19 + 16;
      CurrentPrcb += 16LL;
    }
LABEL_14:
    v97 = (void *)CurrentPrcb;
    if ( !CurrentPrcb )
      goto LABEL_15;
    v48 = (struct _KTHREAD *)v97;
    v49 = v19;
    for ( j = 0LL; ; j = (unsigned int)(v100 + 1) )
    {
      v100 = j;
      v98 = v48;
      v99 = v49;
      if ( (unsigned int)j >= a4 )
      {
        v54 = v93;
        goto LABEL_56;
      }
      v51 = 2 * j;
      v52 = *(_DWORD *)(v103 + 8 * v51 + 8);
      if ( v52 > v49 )
        break;
      v53 = v52;
      memmove(v48, *(const void **)(v103 + 8 * v51), v52);
      v48 = (struct _KTHREAD *)((char *)v98 + v53);
      v49 = v99 - v53;
    }
    memset_0(v97, 0, v19);
    EtwpUpdateEventsLostCount(v18);
    v54 = v93;
    if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_LOST_SYSTEM_EVENT) )
      EtwpTraceLostSystemEvent((unsigned __int16)v93, v18 + 136, a6, 3221225476LL);
LABEL_56:
    if ( (*(_DWORD *)(v18 + 12) & 0x80000) != 0
      && (!KdPitchDebugger && !(_BYTE)KdDebuggerNotPresent || KdEventLoggingPresent) )
    {
      EtwpSendTraceEvent(v18, &v104);
    }
    if ( *(_QWORD *)(v18 + 1552) )
    {
      v69 = v104;
      v101 = 0;
      if ( (unsigned int)EtwpGetNextEventOffsetType(v104, (unsigned int)v105, &v101) )
      {
        if ( (unsigned int)KeIsTraceCallbackAllowed(0LL) )
        {
          ActivityId = *(LPCGUID *)(v70 + 8);
          guard_dispatch_icall_no_overrides(v69 + v71, v101);
        }
      }
    }
    v55 = (signed __int64 *)*((_QWORD *)&v104 + 1);
    _m_prefetchw(*((const void **)&v104 + 1));
    v56 = *v55;
    while ( (v56 ^ (unsigned __int64)v104) < 0xF )
    {
      v57 = v56;
      v56 = _InterlockedCompareExchange64(*((volatile signed __int64 **)&v104 + 1), v56 + 1, v56);
      if ( v57 == v56 )
        goto LABEL_61;
    }
    _InterlockedDecrement((volatile signed __int32 *)(v104 + 12));
LABEL_61:
    if ( (*(_DWORD *)(v18 + 816) & 0x80u) == 0
      || ((*(char *)(*(_QWORD *)(v18 + 1048) + ((unsigned __int64)(v54 & 0x1FFF) >> 3)) >> (v54 & 7)) & 1) == 0
      || (v58 = KeGetCurrentThread(),
          v59 = a6,
          CurrentIrql = (void *)KeGetCurrentIrql(),
          v97 = CurrentIrql,
          (a6 & 0x4000) != 0)
      && KeGetCurrentPrcb()->IdleThread == v58 )
    {
LABEL_62:
      LODWORD(CurrentPrcb) = *(_DWORD *)(v18 + 820);
      if ( (CurrentPrcb & 2) != 0 )
      {
        for ( k = 0LL; ; k = (unsigned int)(k + 1) )
        {
          LODWORD(CurrentPrcb) = *(_DWORD *)(v18 + 1284);
          if ( (unsigned int)k >= (unsigned int)CurrentPrcb )
            break;
          if ( *(_WORD *)(v18 + 2 * k + 1288) == v54 )
          {
            LODWORD(CurrentPrcb) = EtwpContextRegisterTracingDispatcher(v18, &v94, 0LL, a6);
            break;
          }
        }
      }
      if ( (*(_DWORD *)(v18 + 816) & 0x8000) != 0 )
      {
        for ( m = 0LL; ; m = (unsigned int)(m + 1) )
        {
          CurrentPrcb = *(_QWORD *)(v18 + 1072);
          if ( (unsigned int)m >= *(_DWORD *)(CurrentPrcb + 8) )
            break;
          if ( *(_WORD *)(*(_QWORD *)(v18 + 1072) + 2 * m + 12) == v54 )
          {
            v96 = 0;
            UserData = 0LL;
            v106 = 0LL;
            v109 = 0LL;
            v103 = 0LL;
            v110 = 0LL;
            v77 = KeGetCurrentThread();
            CurrentPrcb = (unsigned __int64)KeGetCurrentPrcb();
            v93 = 0;
            v98 = v77;
            if ( *(struct _KTHREAD **)(CurrentPrcb + 24) != v77 && (a6 & 0x1800) != 0 )
            {
              CurrentStackPointer = KeGetCurrentStackPointer(v77, m);
              LODWORD(CurrentPrcb) = KeQueryCurrentStackInformationEx(CurrentStackPointer, &v93, &v103, &v106);
              if ( (_BYTE)CurrentPrcb )
              {
                LODWORD(CurrentPrcb) = v93;
                if ( v93 > 9 || (v79 = 929, !_bittest(&v79, v93)) )
                {
                  LOBYTE(v93) = 0;
                  v80 = (unsigned int)(24 * EtwpLastBranchStackSize);
                  v81 = RtlpInterlockedPopEntrySList(&EtwpLastBranchLookAsideList);
                  if ( !v81 || (v84 = (unsigned int *)&v81[1], v81 == (PSLIST_ENTRY)-16LL) )
                  {
                    v85 = KeGetCurrentStackPointer(v83, v82);
                    CurrentPrcb = v85 - v103;
                    if ( CurrentPrcb <= v80 + 3632 )
                      break;
                    v86 = v80 + 15;
                    if ( v80 + 15 <= (unsigned __int64)(unsigned int)v80 )
                      v86 = 0xFFFFFFFFFFFFFF0LL;
                    v87 = alloca(v86 & 0xFFFFFFFFFFFFFFF0uLL);
                    LOBYTE(v93) = 1;
                    v84 = &v93;
                  }
                  LODWORD(CurrentPrcb) = guard_dispatch_icall_no_overrides((unsigned int)v80, v84);
                  if ( (CurrentPrcb & 0x80000000) == 0LL && v96 )
                  {
                    UserData.Size = v98[1].CycleTime;
                    UserData.Reserved = v98[1].CurrentRunTime;
                    UserData.Ptr = v94;
                    v88 = *(_DWORD *)(*(_QWORD *)(v18 + 1072) + 4LL);
                    v89 = *(_DWORD *)v18;
                    v90 = *(_QWORD *)(v18 + 1360);
                    v113[0] = &UserData;
                    LODWORD(v109) = v88;
                    v114 = v96;
                    v113[1] = 24LL;
                    v113[2] = v84;
                    v115 = 0;
                    LODWORD(CurrentPrcb) = EtwpLogKernelEvent(
                                             (unsigned int)v113,
                                             v90,
                                             v89,
                                             2,
                                             3104,
                                             a6 & 0xFFFFE600 | 2);
                  }
                  if ( !(_BYTE)v93 )
                    LODWORD(CurrentPrcb) = (unsigned int)RtlpInterlockedPushEntrySList(
                                                           &EtwpLastBranchLookAsideList,
                                                           (PSLIST_ENTRY)v84 - 1);
                }
              }
            }
            break;
          }
        }
      }
      if ( (*(_DWORD *)(v18 + 816) & 0x4000000) != 0 )
      {
        for ( n = 0LL; ; n = (unsigned int)(n + 1) )
        {
          CurrentPrcb = *(_QWORD *)(v18 + 1080);
          if ( (unsigned int)n >= *(_DWORD *)(CurrentPrcb + 24) )
            break;
          v75 = *(_QWORD **)(v18 + 1080);
          if ( *((_WORD *)v75 + n + 14) == v54 )
          {
            HIDWORD(v111) = 0;
            v110 = 0LL;
            v76 = KeGetCurrentThread();
            CurrentPrcb = (unsigned __int64)KeGetCurrentPrcb();
            if ( *(struct _KTHREAD **)(CurrentPrcb + 24) != v76 && (a6 & 0x1800) != 0 )
            {
              UserData.Ptr = v18;
              LODWORD(v111) = a6;
              LODWORD(v109) = v76[1].CycleTime;
              DWORD1(v109) = v76[1].CurrentRunTime;
              *(_QWORD *)&UserData.Size = v94;
              *((_QWORD *)&v109 + 1) = v75[1];
              LODWORD(CurrentPrcb) = guard_dispatch_icall_no_overrides(*v75, &UserData);
            }
            break;
          }
        }
      }
      v16 = v102;
LABEL_27:
      if ( v10 )
      {
        v31 = *(_QWORD *)(v107 + 704);
LABEL_29:
        ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v31 + v16), 1u);
LABEL_30:
        LODWORD(CurrentPrcb) = KeLeaveCriticalRegionThread(KeGetCurrentThread());
        return CurrentPrcb;
      }
      return CurrentPrcb;
    }
    if ( (a6 & 0x1000) == 0 || (a6 & 0x2000) != 0 )
    {
LABEL_83:
      if ( (v59 & 0x1800) != 0 )
        EtwpTraceStackWalk(v18, v59, v58, &v94, ActivityId);
      goto LABEL_62;
    }
    v61 = KeGetCurrentThread();
    v98 = v61;
    v95 = a6 & 0x8000;
    v62 = a6 & 0x4000000;
    if ( v61 != v58 )
    {
      LOBYTE(v62) = 0;
      v65 = 0;
      goto LABEL_78;
    }
    if ( (v61->MiscFlags & 0x400) != 0 )
    {
      LOBYTE(v62) = 0;
      v65 = 0;
      goto LABEL_78;
    }
    if ( (*(_DWORD *)(&v61[1].SwapListEntry + 1) & 1) != 0 && !(_DWORD)v62 )
    {
      v65 = 0;
      goto LABEL_78;
    }
    if ( (unsigned __int8)KeGetEffectiveIrql(v62, v61) >= 2u )
    {
      NestingLevel = KeGetCurrentPrcb()->NestingLevel;
      if ( NestingLevel && (NestingLevel != 1 || !v95) )
      {
        LOBYTE(v62) = 0;
        v65 = 0;
        goto LABEL_77;
      }
    }
    else if ( MmCanThreadFault(v64, v63)
           && !BYTE6(v98[1].Queue)
           && KeGetCurrentThread()->ApcStateIndex != 1
           && (v98->SameThreadTransientFlags & 4) == 0 )
    {
      v65 = 0;
      goto LABEL_76;
    }
    v65 = 1;
LABEL_76:
    LOBYTE(v62) = 1;
LABEL_77:
    LODWORD(CurrentIrql) = (_DWORD)v97;
LABEL_78:
    if ( (a6 & 0x1000000) != 0 )
      v65 = 1;
    if ( (_BYTE)v62 )
    {
      if ( v65 )
      {
        v59 = a6 & 0xFFFFEFFF;
        v66 = (*(_WORD *)(v18 + 818) & 7) + 24;
        v67 = _interlockedbittestandset((volatile signed __int32 *)&v58->116 + 1, v66);
        v95 = v66;
        if ( !v67
          && (int)EtwpQueueApc(
                    (int)v18 + 832,
                    (_DWORD)v58,
                    (_DWORD)CurrentIrql,
                    (unsigned int)EtwpStackWalkApc,
                    (__int64)EtwpCancelStackWalkApc,
                    0LL,
                    HIDWORD(v94),
                    (unsigned int)v94) < 0 )
        {
          _interlockedbittestandreset((volatile signed __int32 *)&v58->116 + 1, v95);
        }
      }
    }
    else
    {
      v59 = a6 & 0xFFFFEFFF;
    }
    goto LABEL_83;
  }
  return CurrentPrcb;
}
