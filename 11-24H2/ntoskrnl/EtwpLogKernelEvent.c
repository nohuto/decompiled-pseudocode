/*
 * XREFs of EtwpLogKernelEvent @ 0x140257180
 * Callers:
 *     EtwTraceKernelEvent @ 0x140255180 (EtwTraceKernelEvent.c)
 *     KiExecuteAllDpcs @ 0x1402552D0 (KiExecuteAllDpcs.c)
 *     EtwpLogKernelEvent @ 0x140257180 (EtwpLogKernelEvent.c)
 *     EtwpTraceLastBranchRecord @ 0x140259A00 (EtwpTraceLastBranchRecord.c)
 *     EtwpTraceFileIo @ 0x1402A1C30 (EtwpTraceFileIo.c)
 *     EtwTraceReadyThread @ 0x1403207B0 (EtwTraceReadyThread.c)
 *     EtwpLogSystemEventUnsafe @ 0x1403274F0 (EtwpLogSystemEventUnsafe.c)
 *     EtwpDereferenceStackEntry @ 0x14032A8D0 (EtwpDereferenceStackEntry.c)
 *     EtwpTraceCachedStack @ 0x14032AE20 (EtwpTraceCachedStack.c)
 *     KiProcessExpiredTimerList @ 0x1403358E0 (KiProcessExpiredTimerList.c)
 *     EtwTraceSiloKernelEvent @ 0x140348590 (EtwTraceSiloKernelEvent.c)
 *     EtwpTraceIo @ 0x1403486F0 (EtwpTraceIo.c)
 *     EtwpTraceFileName @ 0x140349530 (EtwpTraceFileName.c)
 *     PerfInfoLogSysCallExit @ 0x1403497B0 (PerfInfoLogSysCallExit.c)
 *     PerfInfoLogSysCallEntry @ 0x140349900 (PerfInfoLogSysCallEntry.c)
 *     EtwTracePool @ 0x1403AA0C8 (EtwTracePool.c)
 *     HvcallFastExtended @ 0x1403AF3C0 (HvcallFastExtended.c)
 *     EtwTraceTimedEvent @ 0x1403B1020 (EtwTraceTimedEvent.c)
 *     PerfInfoLogInterrupt @ 0x1403BFF50 (PerfInfoLogInterrupt.c)
 *     EtwpTraceImageUnload @ 0x1403C4AF8 (EtwpTraceImageUnload.c)
 *     EtwpLogMemInfo @ 0x1403D4060 (EtwpLogMemInfo.c)
 *     EtwpTraceStackWalk @ 0x1403EDBD0 (EtwpTraceStackWalk.c)
 *     EtwpTraceStackKey @ 0x1403EE6C0 (EtwpTraceStackKey.c)
 *     PerfInfoLogInterruptHv @ 0x140448870 (PerfInfoLogInterruptHv.c)
 *     EtwTraceSiloTimedEvent @ 0x14047A0A8 (EtwTraceSiloTimedEvent.c)
 *     EtwTraceSiloDcEvent @ 0x140480320 (EtwTraceSiloDcEvent.c)
 *     EtwpTraceKernelEventWithFilter @ 0x14048C9F0 (EtwpTraceKernelEventWithFilter.c)
 *     PerfInfoLogIpiSend @ 0x1404ADB60 (PerfInfoLogIpiSend.c)
 *     EtwpCCSwapTrace @ 0x1404EF7D0 (EtwpCCSwapTrace.c)
 *     EtwpTraceContextRegisters @ 0x14064D0A8 (EtwpTraceContextRegisters.c)
 *     EtwTraceScbRundown @ 0x14064DE6C (EtwTraceScbRundown.c)
 *     EtwTraceSchedulingGroupRundown @ 0x14064DF8C (EtwTraceSchedulingGroupRundown.c)
 *     EtwTraceThreadSchedulingGroupRundown @ 0x14064E230 (EtwTraceThreadSchedulingGroupRundown.c)
 *     EtwpWriteProcessorTrace @ 0x1406518D0 (EtwpWriteProcessorTrace.c)
 *     EtwpLogTxREvent @ 0x1407A9E8C (EtwpLogTxREvent.c)
 *     EtwLogPfnInfoRundown @ 0x1407B08DC (EtwLogPfnInfoRundown.c)
 *     EtwpClockSourceRunDown @ 0x1407B09CC (EtwpClockSourceRunDown.c)
 *     EtwpExecutiveResourceConfigRunDown @ 0x1407B0B48 (EtwpExecutiveResourceConfigRunDown.c)
 *     EtwpObjectHandleEnumCallback @ 0x1407B0D30 (EtwpObjectHandleEnumCallback.c)
 *     EtwpObjectTypeRundown @ 0x1407B0FE4 (EtwpObjectTypeRundown.c)
 *     EtwpPoolRunDown @ 0x1407B1140 (EtwpPoolRunDown.c)
 *     EtwpProcessorRundown @ 0x1407B1358 (EtwpProcessorRundown.c)
 *     EtwpSpinLockConfigRunDown @ 0x1407B1644 (EtwpSpinLockConfigRunDown.c)
 *     EtwpLogMemInfoWsHelper @ 0x1408F02DC (EtwpLogMemInfoWsHelper.c)
 *     EtwpTraceProcessRundown @ 0x14094B0B8 (EtwpTraceProcessRundown.c)
 *     EtwpProcessPerfCtrsRundown @ 0x14094BEA8 (EtwpProcessPerfCtrsRundown.c)
 *     EtwpSysModuleRunDown @ 0x14094CAD8 (EtwpSysModuleRunDown.c)
 *     EtwpEnumerateAddressSpace @ 0x1409690F0 (EtwpEnumerateAddressSpace.c)
 *     EtwpLogAlwaysPresentRundown @ 0x140A16238 (EtwpLogAlwaysPresentRundown.c)
 *     EtwpLogGroupMask @ 0x140A162A4 (EtwpLogGroupMask.c)
 *     EtwpSystemImageEnumCallback @ 0x140A32A50 (EtwpSystemImageEnumCallback.c)
 *     EtwpSampledProfileRunDown @ 0x140A6857C (EtwpSampledProfileRunDown.c)
 *     EtwpLogPmcCounterRundown @ 0x140A7EF6C (EtwpLogPmcCounterRundown.c)
 * Callees:
 *     EtwpLogKernelEvent @ 0x140257180 (EtwpLogKernelEvent.c)
 *     KeGetEffectiveIrql @ 0x140257DC0 (KeGetEffectiveIrql.c)
 *     KeAreInterruptsEnabled @ 0x140257E20 (KeAreInterruptsEnabled.c)
 *     KeLeaveCriticalRegionThread @ 0x1402595A0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x140259600 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     EtwWriteEx @ 0x140259680 (EtwWriteEx.c)
 *     KeQueryCurrentStackInformationEx @ 0x140259BD0 (KeQueryCurrentStackInformationEx.c)
 *     MmCanThreadFault @ 0x14027DC40 (MmCanThreadFault.c)
 *     EtwEventEnabled @ 0x1402A1BD0 (EtwEventEnabled.c)
 *     EtwpLevelKeywordEnabled @ 0x1402A2030 (EtwpLevelKeywordEnabled.c)
 *     EtwpReserveTraceBuffer @ 0x140327DF0 (EtwpReserveTraceBuffer.c)
 *     KeIsTraceCallbackAllowed @ 0x1403282EC (KeIsTraceCallbackAllowed.c)
 *     EtwpReserveWithPmcCounters @ 0x140328350 (EtwpReserveWithPmcCounters.c)
 *     EtwpUpdateEventsLostCount @ 0x14032BF28 (EtwpUpdateEventsLostCount.c)
 *     EtwpTraceStackWalk @ 0x1403EDBD0 (EtwpTraceStackWalk.c)
 *     EtwpQueueApc @ 0x1403EE2B0 (EtwpQueueApc.c)
 *     EtwpSendTraceEvent @ 0x1404AC8C4 (EtwpSendTraceEvent.c)
 *     EtwpGetNextEventOffsetType @ 0x1404ACA40 (EtwpGetNextEventOffsetType.c)
 *     EtwpTraceLostSystemEvent @ 0x1404B94AC (EtwpTraceLostSystemEvent.c)
 *     EtwpReserveWithPebsIndex @ 0x1404CC08C (EtwpReserveWithPebsIndex.c)
 *     EtwpContextRegisterTracingDispatcher @ 0x1404CE964 (EtwpContextRegisterTracingDispatcher.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     KeGetCurrentStackPointer @ 0x1406AA390 (KeGetCurrentStackPointer.c)
 *     RtlpInterlockedPopEntrySList @ 0x1406B3890 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406B38D0 (RtlpInterlockedPushEntrySList.c)
 *     _alloca_probe @ 0x1406B3C80 (_alloca_probe.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
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
  unsigned __int64 CurrentIrql; // r8
  __int64 j; // rax
  __int64 v51; // rax
  unsigned int v52; // edx
  __int64 v53; // rsi
  __int16 v54; // si
  __int64 v55; // r9
  signed __int64 *v56; // roff
  signed __int64 v57; // rax
  signed __int64 v58; // rtt
  struct _KTHREAD *v59; // r14
  unsigned int v60; // r15d
  struct _KTHREAD *v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // rcx
  char v64; // al
  unsigned int v65; // eax
  signed __int8 v66; // cf
  unsigned __int8 NestingLevel; // cl
  __int64 v68; // r14
  unsigned int v69; // r10d
  __int64 m; // rdx
  __int64 k; // rcx
  __int64 n; // rdx
  _QWORD *v73; // rcx
  struct _KTHREAD *v74; // rdx
  __int64 CurrentStackPointer; // rax
  int v76; // ecx
  __int64 v77; // r14
  PSLIST_ENTRY v78; // rax
  unsigned int *v79; // r15
  __int64 v80; // rax
  void *v81; // rsp
  int v82; // ecx
  int v83; // r8d
  __int64 v84; // rdx
  LPCGUID ActivityId; // [rsp+20h] [rbp-20h]
  unsigned int v87; // [rsp+40h] [rbp+0h] BYREF
  ULONGLONG v88; // [rsp+48h] [rbp+8h] BYREF
  unsigned int v89; // [rsp+50h] [rbp+10h]
  int v90; // [rsp+58h] [rbp+18h] BYREF
  void *v91; // [rsp+60h] [rbp+20h]
  struct _KTHREAD *v92; // [rsp+68h] [rbp+28h]
  int v93; // [rsp+70h] [rbp+30h]
  int v94; // [rsp+74h] [rbp+34h]
  unsigned int v95; // [rsp+78h] [rbp+38h] BYREF
  __int64 v96; // [rsp+80h] [rbp+40h]
  __int64 v97; // [rsp+88h] [rbp+48h] BYREF
  __int128 v98; // [rsp+90h] [rbp+50h] BYREF
  __int64 v99; // [rsp+A0h] [rbp+60h]
  __int64 v100; // [rsp+A8h] [rbp+68h] BYREF
  __int64 v101; // [rsp+B0h] [rbp+70h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+C0h] [rbp+80h] BYREF
  __int128 v103; // [rsp+D0h] [rbp+90h]
  __int128 v104; // [rsp+E0h] [rbp+A0h]
  __int64 *v105; // [rsp+F0h] [rbp+B0h]
  __int64 v106; // [rsp+F8h] [rbp+B8h]
  _QWORD v107[3]; // [rsp+100h] [rbp+C0h] BYREF
  int v108; // [rsp+118h] [rbp+D8h]
  int v109; // [rsp+11Ch] [rbp+DCh]

  LOWORD(v87) = a5;
  v8 = a3;
  v99 = 0LL;
  v88 = 0LL;
  v10 = 0;
  v101 = a2;
  v97 = a1;
  v98 = 0LL;
  LODWORD(CurrentPrcb) = KeAreInterruptsEnabled();
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
  v96 = v16;
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
        CurrentPrcb = EtwpReserveTraceBuffer(v18, v19 + 24, (unsigned int)&v98, (unsigned int)&v88, a6);
        if ( !CurrentPrcb )
          goto LABEL_15;
        *(_WORD *)(CurrentPrcb + 6) = v87;
        *(_DWORD *)CurrentPrcb = (unsigned __int8)a6 | 0xC0040000;
        *(_QWORD *)(CurrentPrcb + 16) = v88;
        *(_WORD *)(CurrentPrcb + 4) = v19 + 24;
        v22 = *(_QWORD *)&KeGetCurrentThread()[1].CurrentRunTime;
        *(_DWORD *)(CurrentPrcb + 8) = v22;
        *(_DWORD *)(CurrentPrcb + 12) = KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink;
        CurrentPrcb += 24LL;
      }
      else
      {
        v92 = KeGetCurrentThread();
        CurrentPrcb = EtwpReserveTraceBuffer(v18, v19 + 32, (unsigned int)&v98, (unsigned int)&v88, a6);
        v22 = CurrentPrcb;
        if ( !CurrentPrcb )
          goto LABEL_15;
        p_LockNV = &v92->Header.LockNV;
        *(_WORD *)(CurrentPrcb + 6) = v87;
        *(_DWORD *)CurrentPrcb = (unsigned __int8)a6 | 0xC0020000;
        *(_QWORD *)(CurrentPrcb + 16) = v88;
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
        if ( (v21 & 0x400) != 0 && (_WORD)v87 == 1316 )
        {
          CurrentPrcb = EtwpReserveWithPebsIndex(v18, 1316, v19, (unsigned int)&v98, (__int64)&v88, a6);
          goto LABEL_14;
        }
        if ( (v21 & 0x800) != 0 )
        {
          for ( i = 0LL; (unsigned int)i < *(_DWORD *)(*(_QWORD *)(v18 + 1064) + 8LL); i = (unsigned int)(i + 1) )
          {
            if ( *(_WORD *)(*(_QWORD *)(v18 + 1064) + 2 * i + 12) == (_WORD)v87 )
            {
              CurrentPrcb = EtwpReserveWithPmcCounters(
                              v18,
                              (unsigned __int16)v87,
                              v19,
                              (unsigned int)&v98,
                              (__int64)&v88,
                              a6);
              goto LABEL_14;
            }
          }
        }
      }
      CurrentPrcb = EtwpReserveTraceBuffer(v18, v19 + 16, (unsigned int)&v98, (unsigned int)&v88, a6);
      v23 = v87;
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
            v90 = v27;
            LOWORD(v87) = v29;
            UserData.Ptr = (ULONGLONG)&v87;
            *(_QWORD *)&UserData.Size = 2LL;
            *(_QWORD *)&v103 = &v90;
            v30 = 1;
            *(_QWORD *)&v104 = *(_QWORD *)(v18 + 144);
            DWORD2(v104) = *(unsigned __int16 *)(v18 + 136);
            v105 = &EtwpNull;
            if ( (a6 & 0x200) != 0 )
              v30 = 5;
            *((_QWORD *)&v103 + 1) = 4LL;
            HIDWORD(v104) = 0;
            v106 = 2LL;
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
      *(_QWORD *)(CurrentPrcb + 8) = v88;
      *(_WORD *)(CurrentPrcb + 6) = v23;
      *(_DWORD *)CurrentPrcb = (unsigned __int8)a6 | 0xC0110000;
      *(_WORD *)(CurrentPrcb + 4) = v19 + 16;
      CurrentPrcb += 16LL;
    }
LABEL_14:
    v91 = (void *)CurrentPrcb;
    if ( !CurrentPrcb )
      goto LABEL_15;
    v48 = (struct _KTHREAD *)v91;
    CurrentIrql = v19;
    for ( j = 0LL; ; j = (unsigned int)(v94 + 1) )
    {
      v94 = j;
      v92 = v48;
      v93 = CurrentIrql;
      if ( (unsigned int)j >= a4 )
      {
        v54 = v87;
        goto LABEL_56;
      }
      v51 = 2 * j;
      v52 = *(_DWORD *)(v97 + 8 * v51 + 8);
      if ( v52 > (unsigned int)CurrentIrql )
        break;
      v53 = v52;
      memmove(v48, *(const void **)(v97 + 8 * v51), v52);
      v48 = (struct _KTHREAD *)((char *)v92 + v53);
      CurrentIrql = (unsigned int)(v93 - v53);
    }
    memset_0(v91, 0, v19);
    EtwpUpdateEventsLostCount(v18);
    v54 = v87;
    if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_LOST_SYSTEM_EVENT) )
      EtwpTraceLostSystemEvent((unsigned __int16)v87, v18 + 136, a6, 3221225476LL);
LABEL_56:
    if ( (*(_DWORD *)(v18 + 12) & 0x80000) != 0
      && (!KdPitchDebugger && !(_BYTE)KdDebuggerNotPresent || KdEventLoggingPresent) )
    {
      EtwpSendTraceEvent(v18, &v98);
    }
    v55 = *(_QWORD *)(v18 + 1552);
    if ( v55 )
    {
      v68 = v98;
      v95 = 0;
      if ( (unsigned int)EtwpGetNextEventOffsetType(v98, (unsigned int)v99, &v95) )
      {
        if ( (unsigned int)KeIsTraceCallbackAllowed(0LL) )
        {
          ActivityId = *(LPCGUID *)(v55 + 8);
          guard_dispatch_icall_no_overrides(v68 + v69, v95, 0LL, 0LL);
        }
      }
    }
    v56 = (signed __int64 *)*((_QWORD *)&v98 + 1);
    _m_prefetchw(*((const void **)&v98 + 1));
    v57 = *v56;
    while ( (v57 ^ (unsigned __int64)v98) < 0xF )
    {
      v58 = v57;
      v57 = _InterlockedCompareExchange64(*((volatile signed __int64 **)&v98 + 1), v57 + 1, v57);
      if ( v58 == v57 )
        goto LABEL_61;
    }
    _InterlockedDecrement((volatile signed __int32 *)(v98 + 12));
LABEL_61:
    if ( (*(_DWORD *)(v18 + 816) & 0x80u) == 0
      || ((*(char *)(*(_QWORD *)(v18 + 1048) + ((unsigned __int64)(v54 & 0x1FFF) >> 3)) >> (v54 & 7)) & 1) == 0
      || (v59 = KeGetCurrentThread(),
          v60 = a6,
          CurrentIrql = KeGetCurrentIrql(),
          v91 = (void *)CurrentIrql,
          (a6 & 0x4000) != 0)
      && KeGetCurrentPrcb()->IdleThread == v59 )
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
            LODWORD(CurrentPrcb) = EtwpContextRegisterTracingDispatcher(v18, &v88, 0LL, a6);
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
            v90 = 0;
            UserData = 0LL;
            v100 = 0LL;
            v103 = 0LL;
            v97 = 0LL;
            v104 = 0LL;
            CurrentPrcb = (unsigned __int64)KeGetCurrentPrcb();
            v87 = 0;
            v92 = KeGetCurrentThread();
            if ( *(struct _KTHREAD **)(CurrentPrcb + 24) != v92 && (a6 & 0x1800) != 0 )
            {
              CurrentStackPointer = KeGetCurrentStackPointer();
              LODWORD(CurrentPrcb) = KeQueryCurrentStackInformationEx(CurrentStackPointer, &v87, &v97, &v100);
              if ( (_BYTE)CurrentPrcb )
              {
                LODWORD(CurrentPrcb) = v87;
                if ( v87 > 9 || (v76 = 929, !_bittest(&v76, v87)) )
                {
                  LOBYTE(v87) = 0;
                  v77 = (unsigned int)(24 * EtwpLastBranchStackSize);
                  v78 = RtlpInterlockedPopEntrySList(&EtwpLastBranchLookAsideList);
                  if ( !v78 || (v79 = (unsigned int *)&v78[1], v78 == (PSLIST_ENTRY)-16LL) )
                  {
                    CurrentPrcb = KeGetCurrentStackPointer() - v97;
                    if ( CurrentPrcb <= v77 + 3632 )
                      break;
                    v80 = v77 + 15;
                    if ( v77 + 15 <= (unsigned __int64)(unsigned int)v77 )
                      v80 = 0xFFFFFFFFFFFFFF0LL;
                    v81 = alloca(v80 & 0xFFFFFFFFFFFFFFF0uLL);
                    LOBYTE(v87) = 1;
                    v79 = &v87;
                  }
                  LODWORD(CurrentPrcb) = guard_dispatch_icall_no_overrides((unsigned int)v77, v79, &v90, v55);
                  if ( (CurrentPrcb & 0x80000000) == 0LL && v90 )
                  {
                    UserData.Size = v92[1].CycleTime;
                    UserData.Reserved = v92[1].CurrentRunTime;
                    UserData.Ptr = v88;
                    v82 = *(_DWORD *)(*(_QWORD *)(v18 + 1072) + 4LL);
                    v83 = *(_DWORD *)v18;
                    v84 = *(_QWORD *)(v18 + 1360);
                    v107[0] = &UserData;
                    LODWORD(v103) = v82;
                    v108 = v90;
                    v107[1] = 24LL;
                    v107[2] = v79;
                    v109 = 0;
                    LODWORD(CurrentPrcb) = EtwpLogKernelEvent(
                                             (unsigned int)v107,
                                             v84,
                                             v83,
                                             2,
                                             3104,
                                             a6 & 0xFFFFE600 | 2);
                  }
                  if ( !(_BYTE)v87 )
                    LODWORD(CurrentPrcb) = (unsigned int)RtlpInterlockedPushEntrySList(
                                                           &EtwpLastBranchLookAsideList,
                                                           (PSLIST_ENTRY)v79 - 1);
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
          v73 = *(_QWORD **)(v18 + 1080);
          if ( *((_WORD *)v73 + n + 14) == v54 )
          {
            HIDWORD(v105) = 0;
            v104 = 0LL;
            v74 = KeGetCurrentThread();
            CurrentPrcb = (unsigned __int64)KeGetCurrentPrcb();
            if ( *(struct _KTHREAD **)(CurrentPrcb + 24) != v74 && (a6 & 0x1800) != 0 )
            {
              UserData.Ptr = v18;
              LODWORD(v105) = a6;
              LODWORD(v103) = v74[1].CycleTime;
              DWORD1(v103) = v74[1].CurrentRunTime;
              *(_QWORD *)&UserData.Size = v88;
              *((_QWORD *)&v103 + 1) = v73[1];
              LODWORD(CurrentPrcb) = guard_dispatch_icall_no_overrides(*v73, &UserData, CurrentIrql, v55);
            }
            break;
          }
        }
      }
      v16 = v96;
LABEL_27:
      if ( v10 )
      {
        v31 = *(_QWORD *)(v101 + 704);
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
      if ( (v60 & 0x1800) != 0 )
        EtwpTraceStackWalk(v18, v60, v59, &v88, ActivityId);
      goto LABEL_62;
    }
    v61 = KeGetCurrentThread();
    v92 = v61;
    v89 = a6 & 0x8000;
    v62 = a6 & 0x4000000;
    if ( v61 != v59 )
    {
      LOBYTE(v62) = 0;
      v64 = 0;
      goto LABEL_78;
    }
    if ( (v61->MiscFlags & 0x400) != 0 )
    {
      LOBYTE(v62) = 0;
      v64 = 0;
      goto LABEL_78;
    }
    if ( (*(_DWORD *)(&v61[1].SwapListEntry + 1) & 1) != 0 && !(_DWORD)v62 )
    {
      v64 = 0;
      goto LABEL_78;
    }
    if ( (unsigned __int8)KeGetEffectiveIrql(v62, v61) >= 2u )
    {
      NestingLevel = KeGetCurrentPrcb()->NestingLevel;
      if ( NestingLevel && (NestingLevel != 1 || !v89) )
      {
        LOBYTE(v62) = 0;
        v64 = 0;
        goto LABEL_77;
      }
    }
    else if ( (unsigned int)MmCanThreadFault(v63)
           && !BYTE6(v92[1].Queue)
           && KeGetCurrentThread()->ApcStateIndex != 1
           && (v92->SameThreadTransientFlags & 4) == 0 )
    {
      v64 = 0;
      goto LABEL_76;
    }
    v64 = 1;
LABEL_76:
    LOBYTE(v62) = 1;
LABEL_77:
    CurrentIrql = (unsigned __int64)v91;
LABEL_78:
    if ( (a6 & 0x1000000) != 0 )
      v64 = 1;
    if ( (_BYTE)v62 )
    {
      if ( v64 )
      {
        v60 = a6 & 0xFFFFEFFF;
        v65 = (*(_WORD *)(v18 + 818) & 7) + 24;
        v66 = _interlockedbittestandset((volatile signed __int32 *)&v59->116 + 1, v65);
        v89 = v65;
        if ( !v66
          && (int)EtwpQueueApc(
                    (int)v18 + 832,
                    (_DWORD)v59,
                    CurrentIrql,
                    (unsigned int)EtwpStackWalkApc,
                    (__int64)EtwpCancelStackWalkApc,
                    0LL,
                    HIDWORD(v88),
                    (unsigned int)v88) < 0 )
        {
          _interlockedbittestandreset((volatile signed __int32 *)&v59->116 + 1, v89);
        }
      }
    }
    else
    {
      v60 = a6 & 0xFFFFEFFF;
    }
    goto LABEL_83;
  }
  return CurrentPrcb;
}
