/*
 * XREFs of EtwpLogKernelEvent @ 0x1402561B0
 * Callers:
 *     EtwTraceKernelEvent @ 0x140254220 (EtwTraceKernelEvent.c)
 *     KiExecuteAllDpcs @ 0x140254370 (KiExecuteAllDpcs.c)
 *     EtwpTraceLastBranchRecord @ 0x140257020 (EtwpTraceLastBranchRecord.c)
 *     PerfInfoLogInterrupt @ 0x140257560 (PerfInfoLogInterrupt.c)
 *     EtwTraceTimedEvent @ 0x140257700 (EtwTraceTimedEvent.c)
 *     EtwTraceReadyThread @ 0x140288F70 (EtwTraceReadyThread.c)
 *     KiProcessExpiredTimerList @ 0x1402EE890 (KiProcessExpiredTimerList.c)
 *     EtwTracePool @ 0x1402FE3D8 (EtwTracePool.c)
 *     EtwpTraceStackWalk @ 0x140309D40 (EtwpTraceStackWalk.c)
 *     EtwpLogSystemEventUnsafe @ 0x14030BF40 (EtwpLogSystemEventUnsafe.c)
 *     EtwTraceSiloKernelEvent @ 0x140310730 (EtwTraceSiloKernelEvent.c)
 *     EtwpTraceIo @ 0x140310890 (EtwpTraceIo.c)
 *     EtwpTraceFileIo @ 0x140310FF0 (EtwpTraceFileIo.c)
 *     HvcallFastExtended @ 0x14032C840 (HvcallFastExtended.c)
 *     EtwpLogMemInfo @ 0x1403BDEF0 (EtwpLogMemInfo.c)
 *     EtwpTraceFileName @ 0x1403D6EB0 (EtwpTraceFileName.c)
 *     PerfInfoLogSysCallExit @ 0x1403D7130 (PerfInfoLogSysCallExit.c)
 *     PerfInfoLogSysCallEntry @ 0x1403D7280 (PerfInfoLogSysCallEntry.c)
 *     EtwpTraceStackKey @ 0x1403F5C40 (EtwpTraceStackKey.c)
 *     EtwpDereferenceStackEntry @ 0x1403F6280 (EtwpDereferenceStackEntry.c)
 *     EtwpTraceCachedStack @ 0x1403F63A0 (EtwpTraceCachedStack.c)
 *     EtwpTraceImageUnload @ 0x140447EF8 (EtwpTraceImageUnload.c)
 *     PerfInfoLogInterruptHv @ 0x14044A590 (PerfInfoLogInterruptHv.c)
 *     EtwTraceSiloTimedEvent @ 0x140479DB8 (EtwTraceSiloTimedEvent.c)
 *     EtwTraceSiloDcEvent @ 0x14047F4D4 (EtwTraceSiloDcEvent.c)
 *     EtwpTraceKernelEventWithFilter @ 0x14048CC34 (EtwpTraceKernelEventWithFilter.c)
 *     PerfInfoLogIpiSend @ 0x1404AC520 (PerfInfoLogIpiSend.c)
 *     EtwpCCSwapTrace @ 0x1404EC190 (EtwpCCSwapTrace.c)
 *     EtwpTraceContextRegisters @ 0x140641088 (EtwpTraceContextRegisters.c)
 *     EtwTraceScbRundown @ 0x140641EAC (EtwTraceScbRundown.c)
 *     EtwTraceSchedulingGroupRundown @ 0x140641FCC (EtwTraceSchedulingGroupRundown.c)
 *     EtwTraceThreadSchedulingGroupRundown @ 0x140642270 (EtwTraceThreadSchedulingGroupRundown.c)
 *     EtwpWriteProcessorTrace @ 0x1406458D0 (EtwpWriteProcessorTrace.c)
 *     EtwpLogTxREvent @ 0x14079AABC (EtwpLogTxREvent.c)
 *     EtwLogPfnInfoRundown @ 0x1407A150C (EtwLogPfnInfoRundown.c)
 *     EtwpClockSourceRunDown @ 0x1407A15FC (EtwpClockSourceRunDown.c)
 *     EtwpExecutiveResourceConfigRunDown @ 0x1407A1778 (EtwpExecutiveResourceConfigRunDown.c)
 *     EtwpObjectHandleEnumCallback @ 0x1407A1960 (EtwpObjectHandleEnumCallback.c)
 *     EtwpObjectTypeRundown @ 0x1407A1C14 (EtwpObjectTypeRundown.c)
 *     EtwpPoolRunDown @ 0x1407A1D70 (EtwpPoolRunDown.c)
 *     EtwpProcessorRundown @ 0x1407A1F88 (EtwpProcessorRundown.c)
 *     EtwpSpinLockConfigRunDown @ 0x1407A2274 (EtwpSpinLockConfigRunDown.c)
 *     EtwpTraceProcessRundown @ 0x1408BDF58 (EtwpTraceProcessRundown.c)
 *     EtwpProcessPerfCtrsRundown @ 0x1408BED48 (EtwpProcessPerfCtrsRundown.c)
 *     EtwpEnumerateAddressSpace @ 0x1408C04E0 (EtwpEnumerateAddressSpace.c)
 *     EtwpLogAlwaysPresentRundown @ 0x140A11E5C (EtwpLogAlwaysPresentRundown.c)
 *     EtwpLogGroupMask @ 0x140A11EC8 (EtwpLogGroupMask.c)
 *     EtwpSystemImageEnumCallback @ 0x140A2E4D0 (EtwpSystemImageEnumCallback.c)
 *     EtwpLogMemInfoWsHelper @ 0x140A511DC (EtwpLogMemInfoWsHelper.c)
 *     EtwpSysModuleRunDown @ 0x140A60FE4 (EtwpSysModuleRunDown.c)
 *     EtwpSampledProfileRunDown @ 0x140A6582C (EtwpSampledProfileRunDown.c)
 *     EtwpLogPmcCounterRundown @ 0x140A7BA54 (EtwpLogPmcCounterRundown.c)
 * Callees:
 *     EtwEventEnabled @ 0x140252BF0 (EtwEventEnabled.c)
 *     ObGetCurrentIrql @ 0x140256C10 (ObGetCurrentIrql.c)
 *     KeAreInterruptsEnabled @ 0x140256C40 (KeAreInterruptsEnabled.c)
 *     EtwWriteEx @ 0x140256C60 (EtwWriteEx.c)
 *     EtwpTraceLastBranchRecord @ 0x140257020 (EtwpTraceLastBranchRecord.c)
 *     EtwpLevelKeywordEnabled @ 0x1402576B0 (EtwpLevelKeywordEnabled.c)
 *     KeLeaveCriticalRegionThread @ 0x14029B9C0 (KeLeaveCriticalRegionThread.c)
 *     EtwpTraceStackWalk @ 0x140309D40 (EtwpTraceStackWalk.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x14030BEC0 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     EtwpReserveTraceBuffer @ 0x14030C840 (EtwpReserveTraceBuffer.c)
 *     EtwpReserveWithPmcCounters @ 0x14030CDE0 (EtwpReserveWithPmcCounters.c)
 *     MmCanThreadFault @ 0x140348130 (MmCanThreadFault.c)
 *     EtwpUpdateEventsLostCount @ 0x1403F8AC8 (EtwpUpdateEventsLostCount.c)
 *     EtwpQueueApc @ 0x1404309F0 (EtwpQueueApc.c)
 *     EtwpSendTraceEvent @ 0x1404AB404 (EtwpSendTraceEvent.c)
 *     EtwpInvokeEventCallback @ 0x1404AB500 (EtwpInvokeEventCallback.c)
 *     EtwpTraceLostSystemEvent @ 0x1404BA54C (EtwpTraceLostSystemEvent.c)
 *     EtwpReserveWithPebsIndex @ 0x1404CC4BC (EtwpReserveWithPebsIndex.c)
 *     EtwpContextRegisterTracingDispatcher @ 0x1404CEB00 (EtwpContextRegisterTracingDispatcher.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

int __fastcall EtwpLogKernelEvent(
        struct _KTHREAD *a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        unsigned __int16 a5,
        unsigned int a6)
{
  __int64 v7; // rsi
  __int64 v8; // rdi
  char v10; // bl
  struct _KTHREAD *CurrentThread; // rax
  __int64 v12; // r8
  signed __int64 *v13; // r9
  signed __int64 v14; // rax
  signed __int64 v15; // rtt
  __int64 CurrentPrcb; // rax
  ULONGLONG v17; // rdi
  unsigned int v18; // r10d
  unsigned int v19; // r14d
  int v20; // eax
  __int64 v21; // rdx
  unsigned __int16 v22; // r11
  __int64 v23; // rdx
  __int64 v24; // r8
  int v25; // r9d
  __int64 v26; // r10
  unsigned __int16 v27; // r11
  ULONG v28; // r9d
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v29; // rcx
  LIST_ENTRY *v30; // rcx
  __int64 v31; // rdx
  __m128i v32; // xmm4
  __m128i v33; // xmm5
  unsigned int v34; // r14d
  __int64 v35; // r9
  __m128i v36; // xmm3
  __int64 v37; // r9
  __int64 v38; // rdx
  __m128i v39; // xmm2
  __int64 v40; // rcx
  __m128i v41; // xmm3
  __m128i v42; // xmm4
  __m128i v43; // xmm4
  LONG *p_LockNV; // r8
  __int64 i; // r8
  struct _KTHREAD *v46; // r9
  unsigned int v47; // r8d
  __int64 j; // rax
  __int64 v49; // rax
  unsigned int v50; // edx
  __int64 v51; // rsi
  unsigned __int16 v52; // si
  signed __int64 *v53; // roff
  signed __int64 v54; // rax
  signed __int64 v55; // rtt
  struct _KTHREAD *v56; // r15
  unsigned int v57; // r14d
  void *CurrentIrql; // r10
  char v59; // cl
  struct _KTHREAD *v60; // rdx
  __int64 v61; // r8
  char v62; // dl
  char v63; // al
  unsigned int v64; // eax
  signed __int8 v65; // cf
  __int64 m; // rdx
  unsigned __int8 NestingLevel; // cl
  __int64 k; // rcx
  __int64 n; // rdx
  _QWORD *v70; // rcx
  struct _KTHREAD *v71; // rdx
  unsigned __int16 v73; // [rsp+40h] [rbp-99h] BYREF
  __int64 v74; // [rsp+48h] [rbp-91h] BYREF
  unsigned int v75; // [rsp+50h] [rbp-89h]
  void *v76; // [rsp+58h] [rbp-81h]
  __int64 v77; // [rsp+60h] [rbp-79h] BYREF
  unsigned int v78; // [rsp+68h] [rbp-71h]
  int v79; // [rsp+6Ch] [rbp-6Dh]
  struct _KTHREAD *v80; // [rsp+70h] [rbp-69h]
  unsigned int v81; // [rsp+78h] [rbp-61h]
  struct _KTHREAD *v82; // [rsp+80h] [rbp-59h]
  __int128 v83; // [rsp+88h] [rbp-51h] BYREF
  __int64 v84; // [rsp+98h] [rbp-41h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+A0h] [rbp-39h] BYREF
  __int64 *v86; // [rsp+B0h] [rbp-29h]
  __int64 v87; // [rsp+B8h] [rbp-21h]
  __int128 v88; // [rsp+C0h] [rbp-19h]
  __int64 *v89; // [rsp+D0h] [rbp-9h]
  __int64 v90; // [rsp+D8h] [rbp-1h]

  v73 = a5;
  v7 = a2;
  v8 = a3;
  v84 = 0LL;
  v74 = 0LL;
  v10 = 0;
  v81 = a3;
  v77 = a2;
  v82 = a1;
  v83 = 0LL;
  if ( (unsigned __int8)KeAreInterruptsEnabled() && KeGetCurrentIrql() < 2u )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v12 = *(_QWORD *)(*(_QWORD *)(v7 + 448) + 8 * v8);
    v13 = (signed __int64 *)(*(_QWORD *)v12 + *(_DWORD *)(v12 + 16) * (KeGetPcr()->Prcb.Number % *(_DWORD *)(v12 + 20)));
    _m_prefetchw(v13);
    v14 = *v13;
    while ( (v14 & 1) == 0 )
    {
      v15 = v14;
      v14 = _InterlockedCompareExchange64(v13, v14 + 2, v14);
      if ( v15 == v14 )
      {
        v10 = 1;
        goto LABEL_7;
      }
    }
    goto LABEL_29;
  }
LABEL_7:
  CurrentPrcb = 8 * v8;
  v17 = *(_QWORD *)(8 * v8 + *(_QWORD *)(v7 + 456));
  if ( (v17 & 1) != 0 )
  {
    if ( !v10 )
      return CurrentPrcb;
    v29 = *(struct _EX_RUNDOWN_REF_CACHE_AWARE **)(*(_QWORD *)(v7 + 448) + CurrentPrcb);
    goto LABEL_28;
  }
  if ( v17 )
  {
    v18 = 0;
    v19 = 0;
    if ( a4 )
    {
      if ( a4 < 8 )
        goto LABEL_34;
      v32 = 0LL;
      v33 = 0LL;
      v34 = 2;
      do
      {
        v35 = 2LL * v18;
        v18 += 8;
        v36 = _mm_unpacklo_epi32(
                _mm_cvtsi32_si128((unsigned int)(&a1->Header.WaitListHead.Flink)[v35]),
                _mm_cvtsi32_si128(*((_DWORD *)&a1->Header.WaitListHead + 4 * v34 - 4)));
        v37 = 2LL * (v34 + 5);
        v38 = 2LL * (v34 + 3);
        v39 = _mm_cvtsi32_si128(*((_DWORD *)&a1->CycleTime + 4 * v34));
        v32 = _mm_add_epi32(
                v32,
                _mm_unpacklo_epi64(
                  v36,
                  _mm_unpacklo_epi32(
                    _mm_cvtsi32_si128((unsigned int)(&a1->Header.WaitListHead.Flink)[2 * v34]),
                    _mm_cvtsi32_si128(*((_DWORD *)&(&a1->Header.WaitListHead.Blink)[2 * v34] + 2)))));
        v40 = 2LL * (v34 + 2);
        v34 += 8;
        v41 = _mm_add_epi32(
                _mm_unpacklo_epi64(
                  _mm_unpacklo_epi32(
                    _mm_cvtsi32_si128((unsigned int)(&a1->Header.WaitListHead.Flink)[v40]),
                    _mm_cvtsi32_si128((unsigned int)(&a1->Header.WaitListHead.Flink)[v38])),
                  _mm_unpacklo_epi32(v39, _mm_cvtsi32_si128((unsigned int)(&a1->Header.WaitListHead.Flink)[v37]))),
                v33);
        v33 = v41;
      }
      while ( v18 < (a4 & 0xFFFFFFF8) );
      v42 = _mm_add_epi32(v32, v41);
      v43 = _mm_add_epi32(v42, _mm_srli_si128(v42, 8));
      v19 = _mm_cvtsi128_si32(_mm_add_epi32(v43, _mm_srli_si128(v43, 4)));
      if ( v18 < a4 )
      {
LABEL_34:
        v30 = &a1->Header.WaitListHead + v18;
        v31 = a4 - v18;
        do
        {
          v19 += LODWORD(v30->Flink);
          ++v30;
          --v31;
        }
        while ( v31 );
      }
    }
    if ( (a6 & 0x100) != 0 )
    {
      if ( (a6 & 0x10000000) != 0 )
      {
        CurrentPrcb = EtwpReserveTraceBuffer(v17, v19 + 24, (unsigned int)&v83, (unsigned int)&v74, a6);
        if ( !CurrentPrcb )
          goto LABEL_15;
        *(_WORD *)(CurrentPrcb + 6) = v73;
        *(_DWORD *)CurrentPrcb = (unsigned __int8)a6 | 0xC0040000;
        *(_QWORD *)(CurrentPrcb + 16) = v74;
        *(_WORD *)(CurrentPrcb + 4) = v19 + 24;
        v21 = *(_QWORD *)&KeGetCurrentThread()[1].CurrentRunTime;
        *(_DWORD *)(CurrentPrcb + 8) = v21;
        *(_DWORD *)(CurrentPrcb + 12) = KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink;
        CurrentPrcb += 24LL;
      }
      else
      {
        v80 = KeGetCurrentThread();
        CurrentPrcb = EtwpReserveTraceBuffer(v17, v19 + 32, (unsigned int)&v83, (unsigned int)&v74, a6);
        v21 = CurrentPrcb;
        if ( !CurrentPrcb )
          goto LABEL_15;
        p_LockNV = &v80->Header.LockNV;
        *(_WORD *)(CurrentPrcb + 6) = v73;
        *(_DWORD *)CurrentPrcb = (unsigned __int8)a6 | 0xC0020000;
        *(_QWORD *)(CurrentPrcb + 16) = v74;
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
      v20 = *(_DWORD *)(v17 + 816);
      if ( (v20 & 0xC00) != 0 )
      {
        if ( (v20 & 0x400) != 0 && v73 == 1316 )
        {
          CurrentPrcb = EtwpReserveWithPebsIndex(v17, 1316, v19, (unsigned int)&v83, (__int64)&v74, a6);
          goto LABEL_14;
        }
        if ( (v20 & 0x800) != 0 )
        {
          for ( i = 0LL; (unsigned int)i < *(_DWORD *)(*(_QWORD *)(v17 + 1064) + 8LL); i = (unsigned int)(i + 1) )
          {
            if ( *(_WORD *)(*(_QWORD *)(v17 + 1064) + 2 * i + 12) == v73 )
            {
              CurrentPrcb = EtwpReserveWithPmcCounters(v17, v73, v19, (unsigned int)&v83, (__int64)&v74, a6);
              goto LABEL_14;
            }
          }
        }
      }
      CurrentPrcb = EtwpReserveTraceBuffer(v17, v19 + 16, (unsigned int)&v83, (unsigned int)&v74, a6);
      v22 = v73;
      if ( !CurrentPrcb )
      {
LABEL_15:
        if ( v19 <= 0xFFF8 )
          LODWORD(CurrentPrcb) = -2147483643;
        if ( EtwpEventTracingProvRegHandle )
        {
          LOBYTE(v21) = 2;
          LODWORD(CurrentPrcb) = EtwpLevelKeywordEnabled(
                                   *(_QWORD *)(EtwpEventTracingProvRegHandle + 32) + 96LL,
                                   v21,
                                   64LL);
          if ( (_BYTE)CurrentPrcb
            || *(_BYTE *)(v26 + 101)
            && (LODWORD(CurrentPrcb) = EtwpLevelKeywordEnabled(*(_QWORD *)(v26 + 40) + 96LL, v23, v24),
                (_BYTE)CurrentPrcb) )
          {
            LODWORD(v77) = v25;
            v73 = v27;
            UserData.Ptr = (ULONGLONG)&v73;
            *(_QWORD *)&UserData.Size = 2LL;
            v86 = &v77;
            v28 = 1;
            *(_QWORD *)&v88 = *(_QWORD *)(v17 + 144);
            DWORD2(v88) = *(unsigned __int16 *)(v17 + 136);
            v89 = &EtwpNull;
            if ( (a6 & 0x200) != 0 )
              v28 = 5;
            v87 = 4LL;
            HIDWORD(v88) = 0;
            v90 = 2LL;
            if ( (a6 & 0x600) != 0 )
              v28 |= 8u;
            LODWORD(CurrentPrcb) = EtwWriteEx(
                                     EtwpEventTracingProvRegHandle,
                                     &ETW_EVENT_LOST_SYSTEM_EVENT,
                                     0LL,
                                     v28,
                                     0LL,
                                     0LL,
                                     4u,
                                     &UserData);
          }
        }
        goto LABEL_26;
      }
      *(_QWORD *)(CurrentPrcb + 8) = v74;
      *(_WORD *)(CurrentPrcb + 6) = v22;
      *(_DWORD *)CurrentPrcb = (unsigned __int8)a6 | 0xC0110000;
      *(_WORD *)(CurrentPrcb + 4) = v19 + 16;
      CurrentPrcb += 16LL;
    }
LABEL_14:
    v76 = (void *)CurrentPrcb;
    if ( !CurrentPrcb )
      goto LABEL_15;
    v46 = (struct _KTHREAD *)v76;
    v47 = v19;
    for ( j = 0LL; ; j = (unsigned int)(v79 + 1) )
    {
      v79 = j;
      v80 = v46;
      v78 = v47;
      if ( (unsigned int)j >= a4 )
      {
        v52 = v73;
        goto LABEL_55;
      }
      v49 = 2 * j;
      v50 = (unsigned int)(&v82->Header.WaitListHead.Flink)[v49];
      if ( v50 > v47 )
        break;
      v51 = v50;
      memmove(v46, *((const void **)&v82->Header.Lock + v49), v50);
      v46 = (struct _KTHREAD *)((char *)v80 + v51);
      v47 = v78 - v51;
    }
    memset_0(v76, 0, v19);
    EtwpUpdateEventsLostCount(v17);
    v52 = v73;
    if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_LOST_SYSTEM_EVENT) )
      EtwpTraceLostSystemEvent(v73, v17 + 136, a6, 3221225476LL);
LABEL_55:
    if ( (*(_DWORD *)(v17 + 12) & 0x80000) != 0
      && (!KdPitchDebugger && !(_BYTE)KdDebuggerNotPresent || KdEventLoggingPresent) )
    {
      EtwpSendTraceEvent(v17, &v83);
    }
    if ( *(_QWORD *)(v17 + 1552) )
      EtwpInvokeEventCallback(v17, &v83, 0LL, 0LL);
    v53 = (signed __int64 *)*((_QWORD *)&v83 + 1);
    _m_prefetchw(*((const void **)&v83 + 1));
    v54 = *v53;
    while ( (v54 ^ (unsigned __int64)v83) < 0xF )
    {
      v55 = v54;
      v54 = _InterlockedCompareExchange64(*((volatile signed __int64 **)&v83 + 1), v54 + 1, v54);
      if ( v55 == v54 )
        goto LABEL_61;
    }
    _InterlockedDecrement((volatile signed __int32 *)(v83 + 12));
LABEL_61:
    if ( (*(_DWORD *)(v17 + 816) & 0x80u) == 0
      || ((*(char *)(*(_QWORD *)(v17 + 1048) + ((unsigned __int64)(v52 & 0x1FFF) >> 3)) >> (v52 & 7)) & 1) == 0
      || (v56 = KeGetCurrentThread(),
          v57 = a6,
          CurrentIrql = (void *)KeGetCurrentIrql(),
          v76 = CurrentIrql,
          (a6 & 0x4000) != 0)
      && KeGetCurrentPrcb()->IdleThread == v56 )
    {
LABEL_62:
      LODWORD(CurrentPrcb) = *(_DWORD *)(v17 + 820);
      if ( (CurrentPrcb & 2) != 0 )
      {
        for ( k = 0LL; ; k = (unsigned int)(k + 1) )
        {
          LODWORD(CurrentPrcb) = *(_DWORD *)(v17 + 1284);
          if ( (unsigned int)k >= (unsigned int)CurrentPrcb )
            break;
          if ( *(_WORD *)(v17 + 2 * k + 1288) == v52 )
          {
            LODWORD(CurrentPrcb) = EtwpContextRegisterTracingDispatcher(v17, &v74, 0LL, a6);
            break;
          }
        }
      }
      if ( (*(_DWORD *)(v17 + 816) & 0x8000) != 0 )
      {
        for ( m = 0LL; ; m = (unsigned int)(m + 1) )
        {
          CurrentPrcb = *(_QWORD *)(v17 + 1072);
          if ( (unsigned int)m >= *(_DWORD *)(CurrentPrcb + 8) )
            break;
          if ( *(_WORD *)(*(_QWORD *)(v17 + 1072) + 2 * m + 12) == v52 )
          {
            LODWORD(CurrentPrcb) = EtwpTraceLastBranchRecord(v17, &v74, 0LL, a6);
            break;
          }
        }
      }
      if ( (*(_DWORD *)(v17 + 816) & 0x4000000) != 0 )
      {
        for ( n = 0LL; ; n = (unsigned int)(n + 1) )
        {
          CurrentPrcb = *(_QWORD *)(v17 + 1080);
          if ( (unsigned int)n >= *(_DWORD *)(CurrentPrcb + 24) )
            break;
          v70 = *(_QWORD **)(v17 + 1080);
          if ( *((_WORD *)v70 + n + 14) == v52 )
          {
            HIDWORD(v89) = 0;
            v88 = 0LL;
            v71 = KeGetCurrentThread();
            CurrentPrcb = (__int64)KeGetCurrentPrcb();
            if ( *(struct _KTHREAD **)(CurrentPrcb + 24) != v71 && (a6 & 0x1800) != 0 )
            {
              UserData.Ptr = v17;
              LODWORD(v89) = a6;
              LODWORD(v86) = v71[1].CycleTime;
              HIDWORD(v86) = v71[1].CurrentRunTime;
              *(_QWORD *)&UserData.Size = v74;
              v87 = v70[1];
              LODWORD(CurrentPrcb) = guard_dispatch_icall_no_overrides(*v70, &UserData);
            }
            break;
          }
        }
      }
      v7 = v77;
LABEL_26:
      if ( v10 )
      {
        v29 = *(struct _EX_RUNDOWN_REF_CACHE_AWARE **)(*(_QWORD *)(v7 + 448) + 8LL * v81);
LABEL_28:
        ExReleaseRundownProtectionCacheAwareEx(v29, 1u);
LABEL_29:
        LODWORD(CurrentPrcb) = KeLeaveCriticalRegionThread(KeGetCurrentThread());
        return CurrentPrcb;
      }
      return CurrentPrcb;
    }
    if ( (a6 & 0x1000) == 0 || (v59 = 0, (a6 & 0x2000) != 0) )
    {
LABEL_83:
      if ( (v57 & 0x1800) != 0 )
        EtwpTraceStackWalk(v17, v57, v56, &v74);
      goto LABEL_62;
    }
    v60 = KeGetCurrentThread();
    v82 = v60;
    v75 = a6 & 0x8000;
    v61 = a6 & 0x4000000;
    if ( v60 != v56 )
    {
      v62 = 0;
      goto LABEL_78;
    }
    if ( (v60->MiscFlags & 0x400) != 0 )
    {
      v62 = 0;
      goto LABEL_78;
    }
    if ( (*(_DWORD *)(&v60[1].SwapListEntry + 1) & 1) != 0 && !(_DWORD)v61 )
    {
      v62 = 0;
      goto LABEL_78;
    }
    if ( (unsigned __int8)ObGetCurrentIrql(v52 & 7, v60, v61) >= 2u )
    {
      NestingLevel = KeGetCurrentPrcb()->NestingLevel;
      if ( NestingLevel && (NestingLevel != 1 || !v75) )
      {
        v62 = 0;
        v59 = 0;
        goto LABEL_77;
      }
    }
    else if ( (unsigned int)MmCanThreadFault()
           && !BYTE6(v82[1].Queue)
           && KeGetCurrentThread()->ApcStateIndex != 1
           && (v82->SameThreadTransientFlags & 4) == 0 )
    {
      v59 = 0;
      goto LABEL_76;
    }
    v59 = 1;
LABEL_76:
    v62 = 1;
LABEL_77:
    LOBYTE(CurrentIrql) = (_BYTE)v76;
LABEL_78:
    v63 = v59;
    if ( (a6 & 0x1000000) != 0 )
      v63 = 1;
    if ( v62 )
    {
      if ( v63 )
      {
        v57 = a6 & 0xFFFFEFFF;
        v64 = (*(_WORD *)(v17 + 818) & 7) + 24;
        v65 = _interlockedbittestandset((volatile signed __int32 *)&v56->116 + 1, v64);
        v75 = v64;
        if ( !v65
          && (int)EtwpQueueApc(
                    (int)v17 + 832,
                    (_DWORD)v56,
                    (unsigned __int8)CurrentIrql,
                    (unsigned int)EtwpStackWalkApc,
                    (__int64)EtwpCancelStackWalkApc,
                    0LL,
                    HIDWORD(v74),
                    (unsigned int)v74) < 0 )
        {
          _interlockedbittestandreset((volatile signed __int32 *)&v56->116 + 1, v75);
        }
      }
    }
    else
    {
      v57 = a6 & 0xFFFFEFFF;
    }
    goto LABEL_83;
  }
  return CurrentPrcb;
}
