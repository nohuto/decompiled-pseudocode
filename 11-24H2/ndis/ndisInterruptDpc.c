/*
 * XREFs of ndisInterruptDpc @ 0x14000BD40
 * Callers:
 *     <none>
 * Callees:
 *     ?MiniportSupportsReceiveThrottle@@YA_NPEBU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14000C680 (-MiniportSupportsReceiveThrottle@@YA_NPEBU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x14000C6D0 (-ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     NdisReferenceWithTag @ 0x140010F90 (NdisReferenceWithTag.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x140013990 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 *     WPP_RECORDER_SF_q @ 0x140014040 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x140014250 (WPP_RECORDER_SF_qL.c)
 *     ?ndisTraceDpcStart@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x140040D60 (-ndisTraceDpcStart@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ndisQueueDpcWorkItem @ 0x140046A50 (ndisQueueDpcWorkItem.c)
 *     ?ndisTraceDpcEnd@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K_K@Z @ 0x140074C20 (-ndisTraceDpcEnd@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K_K@Z.c)
 *     ?ndisTraceQueueWorkItem@@YAXXZ @ 0x1400C53A8 (-ndisTraceQueueWorkItem@@YAXXZ.c)
 *     __security_check_cookie @ 0x1400E70B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 */

void __fastcall ndisInterruptDpc(
        struct _KDPC *Dpc,
        char *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  const struct _NDIS_MINIPORT_BLOCK *v4; // r10
  unsigned int Number; // r9d
  int PcwDatapathEventMask; // r11d
  __int64 v10; // rsi
  unsigned int v11; // ebp
  char v12; // r14
  int v13; // eax
  KIRQL v14; // al
  __int64 v15; // rdx
  __int64 v16; // rcx
  KIRQL v17; // r15
  int v18; // eax
  __int64 v19; // rbx
  int v20; // edx
  char *v21; // rdi
  __int64 *v22; // rax
  __int64 v23; // rax
  LARGE_INTEGER v24; // rdx
  struct _KDPC *v25; // r8
  __int64 v26; // rcx
  KIRQL v27; // al
  _BYTE *v28; // rdx
  ULONG_PTR v29; // r9
  KIRQL v30; // r14
  __int64 v31; // r8
  int v32; // ebp
  int v33; // edx
  NTSTATUS v34; // ecx
  ULONG v35; // eax
  struct _NDIS_MINIPORT_BLOCK *v36; // rbp
  int PcwDatapathCycleMask; // ebx
  void (__fastcall *v38)(_QWORD, _QWORD, _QWORD, _QWORD); // r11
  unsigned int v39; // r15d
  void (__fastcall *v40)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD); // r10
  char v41; // r14
  unsigned int v42; // ecx
  int v43; // ebx
  __int64 v44; // rcx
  char *v45; // rcx
  unsigned __int64 v46; // rax
  __int64 v47; // rax
  wchar_t *Buffer; // rbx
  char *v49; // r8
  unsigned __int64 v50; // rax
  __int64 v51; // rdx
  __int64 v52; // rax
  unsigned __int8 i; // cl
  char v54; // al
  struct _KEVENT *v55; // rcx
  ULONG_PTR v56; // rbp
  unsigned int v57; // r8d
  __int64 Clock; // rax
  wchar_t *v59; // [rsp+40h] [rbp-88h]
  __int64 v60; // [rsp+48h] [rbp-80h] BYREF
  struct _KDPC *v61; // [rsp+50h] [rbp-78h]
  __int64 v62; // [rsp+58h] [rbp-70h]
  void (__fastcall *v63)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD); // [rsp+60h] [rbp-68h]
  void (__fastcall *v64)(_QWORD, _QWORD, _QWORD, _QWORD); // [rsp+68h] [rbp-60h]
  _KDPC_WATCHDOG_INFORMATION WatchdogInformation; // [rsp+70h] [rbp-58h] BYREF

  v4 = (const struct _NDIS_MINIPORT_BLOCK *)*((_QWORD *)DeferredContext + 12);
  v61 = Dpc;
  Number = -1;
  PcwDatapathEventMask = v4->PcwDatapathEventMask;
  if ( PcwDatapathEventMask || v4->PcwDatapathCycleMask )
  {
    Buffer = v4->Reserved4.Buffer;
    if ( !Buffer )
      Buffer = v4->Reserved4.Buffer;
    if ( (v4->PcwDatapathCycleMask & 0x1000) != 0 )
    {
      Number = KeGetPcr()->Prcb.Number;
      v49 = (char *)Buffer + ndisPcwPerCpuDataStride * Number + ndisPcwOffsetToPerCpuData;
      v50 = __rdtsc();
      *((_QWORD *)v49 + 35) += (((unsigned __int64)HIDWORD(v50) << 32) | (unsigned int)v50) - *((_QWORD *)v49 + 50);
      *((_QWORD *)v49 + 50) = 0LL;
    }
    if ( (PcwDatapathEventMask & 1) != 0 )
    {
      if ( Number == -1 )
        Number = KeGetPcr()->Prcb.Number;
      ++*(_QWORD *)((char *)Buffer + ndisPcwPerCpuDataStride * Number + ndisPcwOffsetToPerCpuData);
    }
  }
  if ( dword_14011B4C4 != -1 && MiniportSupportsReceiveThrottle(v4)
    || (memset(&WatchdogInformation, 0, sizeof(WatchdogInformation)),
        v34 = KeQueryDpcWatchdogInformation(&WatchdogInformation),
        v35 = 30 * (WatchdogInformation.DpcWatchdogLimit / 0x64),
        v34 >= 0)
    && v35
    && WatchdogInformation.DpcWatchdogCount < v35 )
  {
    v10 = *((_QWORD *)DeferredContext + 12);
    v11 = KeGetPcr()->Prcb.Number;
    v12 = byte_14011B4C1;
    v13 = *(_DWORD *)(v10 + 48);
    if ( v13 || *(_DWORD *)(v10 + 80) )
    {
      v51 = *(_QWORD *)(v10 + 40);
      if ( !v51 )
        v51 = *(_QWORD *)(v10 + 40);
      if ( (v13 & 0x800000) != 0 )
      {
        v52 = v51 + ndisPcwPerCpuDataStride * KeGetPcr()->Prcb.Number;
        ++*(_QWORD *)(ndisPcwOffsetToPerCpuData + v52 + 288);
      }
    }
    v14 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v10 + 4432));
    v16 = *(_QWORD *)(v10 + 4896);
    v17 = v14;
    if ( v16 )
    {
      LOBYTE(v15) = 77;
      NdisReferenceWithTag(v16, v15);
    }
    ++*(_DWORD *)(v10 + 4440);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v15) = 4;
      WPP_RECORDER_SF_qL(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v15,
        20,
        13,
        (struct _GUID *)&WPP_cb6db8c6f99e3ae11a098d09772ad370_Traceguids,
        v10,
        *(_DWORD *)(v10 + 4440));
    }
    KeReleaseSpinLock((PKSPIN_LOCK)(v10 + 4432), v17);
    v18 = 0;
    if ( DeferredContext[193] )
      v18 = (int)SystemArgument1;
    v19 = *((_QWORD *)DeferredContext + 27) + 80LL * (v11 + ndisMaxNumberOfProcessors * v18);
    KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v19 + 72));
    if ( (*(_DWORD *)(v19 + 68) & 1) == 0 )
    {
      *(_QWORD *)(v19 + 32) = v61;
      *(_DWORD *)(v19 + 68) = 1;
      *(_QWORD *)(v19 + 40) = DeferredContext;
      *(_QWORD *)(v19 + 48) = SystemArgument1;
      *(_QWORD *)(v19 + 56) = SystemArgument2;
      *(_DWORD *)(v19 + 64) = v11;
      if ( v12 )
      {
        if ( HIBYTE(word_14011D064) )
          ndisTraceQueueWorkItem();
        *(_DWORD *)(v19 + 68) |= 2u;
        v21 = (char *)qword_14011B500 + 64 * (unsigned __int64)KeGetPcr()->Prcb.Number;
        KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)v21 + 2);
        v22 = (__int64 *)*((_QWORD *)v21 + 1);
        if ( (char *)*v22 != v21 )
          __fastfail(3u);
        *(_QWORD *)v19 = v21;
        *(_QWORD *)(v19 + 8) = v22;
        *v22 = v19;
        *((_QWORD *)v21 + 1) = v19;
        ++*((_DWORD *)v21 + 6);
        KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)v21 + 2);
        KeReleaseSemaphore((PRKSEMAPHORE)v21 + 1, 0, 1, 0);
        LODWORD(v23) = KeGetPcr()->Prcb.Number;
        if ( !_InterlockedExchange((volatile __int32 *)qword_14011B4F8 + v23, 1) )
        {
          v24.QuadPart = -1LL;
          v25 = (struct _KDPC *)((char *)qword_14011B4F0 + 128 * (unsigned __int64)KeGetPcr()->Prcb.Number + 64);
          HIDWORD(v26) = DueTime.HighPart;
          if ( DueTime.QuadPart )
            v24 = DueTime;
          LODWORD(v26) = KeGetPcr()->Prcb.Number;
          KeSetTimer((PKTIMER)qword_14011B4F0 + 2 * v26, v24, v25);
        }
      }
      else
      {
        ExQueueWorkItem((PWORK_QUEUE_ITEM)v19, CustomPriorityWorkQueue|RealTimeWorkQueue|0x8);
      }
LABEL_23:
      KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v19 + 72));
      return;
    }
    _InterlockedDecrement((volatile signed __int32 *)DeferredContext + 26);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v20) = 4;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v20,
        20,
        25,
        (struct _GUID *)&WPP_91e24223ea6635c7ede0c9cfb5715ff6_Traceguids,
        v10);
    }
    v27 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v10 + 4432));
    v29 = *(_QWORD *)(v10 + 4896);
    v30 = v27;
    if ( !v29 || v29 - 2 <= 1 )
      goto LABEL_34;
    if ( v29 == 1 )
      KeBugCheckEx(0x7Cu, 0x1EuLL, 3uLL, 1uLL, 0LL);
    if ( *(_BYTE *)(v29 + 2) <= 0x4Du )
      KeBugCheckEx(0x7Cu, 0x1EuLL, 2uLL, v29, 0x4DuLL);
    if ( *(_BYTE *)(v29 + 1) )
    {
      if ( *(_BYTE *)(v29 + 1) != 1 )
        goto LABEL_34;
      v56 = v29 + 4936;
      v57 = *(_DWORD *)(v29 + 4992);
      if ( v57 >> 17 < 0x3FFE && (unsigned __int16)v57 >> 1 == (v57 >> 17) + 1 )
      {
        ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v29 + 4936));
        *(_DWORD *)(v56 + 56) &= 0x10001u;
        goto LABEL_34;
      }
      if ( (unsigned __int16)v57 >> 1 || (v57 & 1) != 0 )
      {
        ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v29 + 4936), 0);
        goto LABEL_34;
      }
    }
    else
    {
      v31 = *(_QWORD *)(v29 + 8);
      if ( v31 )
      {
        for ( i = 0; ; ++i )
        {
          if ( i >= *(_BYTE *)(v29 + 3) )
            goto LABEL_33;
          v28 = (_BYTE *)(v31 + 2LL * i);
          if ( *v28 == 77 )
          {
            v54 = v28[1];
            if ( v54 )
              break;
          }
        }
        v28[1] = v54 - 1;
        goto LABEL_34;
      }
LABEL_33:
      if ( _bittestandreset((signed __int32 *)(v29 + 24), 0xDu) )
      {
LABEL_34:
        v32 = *(_DWORD *)(v10 + 4440) - 1;
        *(_DWORD *)(v10 + 4440) = v32;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v28) = 4;
          WPP_RECORDER_SF_qL(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            (int)v28,
            20,
            14,
            (struct _GUID *)&WPP_cb6db8c6f99e3ae11a098d09772ad370_Traceguids,
            v10,
            *(_DWORD *)(v10 + 4440));
        }
        KeReleaseSpinLock((PKSPIN_LOCK)(v10 + 4432), v30);
        if ( !v32 )
        {
          v55 = *(struct _KEVENT **)(v10 + 1608);
          if ( v55 )
            KeSetEvent(v55, 0, 0);
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v33) = 4;
          WPP_RECORDER_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v33,
            20,
            26,
            (struct _GUID *)&WPP_91e24223ea6635c7ede0c9cfb5715ff6_Traceguids,
            v10);
        }
        goto LABEL_23;
      }
    }
    KeBugCheckEx(0x7Cu, 0x1EuLL, 0LL, v29, 0x4DuLL);
  }
  v36 = (struct _NDIS_MINIPORT_BLOCK *)*((_QWORD *)DeferredContext + 12);
  LOBYTE(PcwDatapathCycleMask) = 0;
  v38 = (void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))*((_QWORD *)DeferredContext + 3);
  v39 = -1;
  v40 = (void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))*((_QWORD *)DeferredContext + 23);
  v60 = 0LL;
  v64 = v38;
  v63 = v40;
  v62 = 0LL;
  v59 = 0LL;
  if ( v36->PcwDatapathEventMask || v36->PcwDatapathCycleMask )
  {
    PcwDatapathCycleMask = v36->PcwDatapathCycleMask;
    v59 = v36->Reserved4.Buffer;
    if ( !v59 )
      v59 = v36->Reserved4.Buffer;
  }
  if ( HIBYTE(dword_14011D060) )
  {
    v41 = 1;
    ndisTraceDpcStart(v36, 1u);
    Clock = WmiGetClock(0LL, 0LL);
    v40 = v63;
    v38 = v64;
    v62 = Clock;
  }
  else
  {
    v41 = 0;
  }
  if ( DeferredContext[4] )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)DeferredContext + 26, 0xFFFFFFFF) == 1 )
LABEL_62:
      KeSetEvent((PRKEVENT)(DeferredContext + 128), 0, 0);
  }
  else
  {
    if ( byte_14011B4C1 )
    {
      if ( dword_14011B4CC )
      {
        v42 = dword_14011B4C4;
      }
      else
      {
        v42 = ndisPeriodicReceivesNblCounts[*(unsigned int *)((char *)v36->PeriodicReceivesNblCountIndex
                                                            + (KeGetPcr()->Prcb.Number << 12))];
        if ( dword_14011B4C4 < v42 )
          v42 = dword_14011B4C4;
      }
    }
    else
    {
      v42 = -1;
    }
    LODWORD(v60) = v42;
    v43 = PcwDatapathCycleMask & 1;
    if ( v43 )
    {
      v39 = KeGetPcr()->Prcb.Number;
      *(_QWORD *)((char *)v59 + ndisPcwPerCpuDataStride * v39 + ndisPcwOffsetToPerCpuData + 304) = __rdtsc();
    }
    v44 = *((_QWORD *)DeferredContext + 1);
    if ( DeferredContext[193] == 1 )
      v40(v44, (unsigned int)SystemArgument1, SystemArgument2, &v60, 0LL);
    else
      v38(v44, SystemArgument2, &v60, 0LL);
    if ( v43 )
    {
      if ( v39 == -1 )
        v39 = KeGetPcr()->Prcb.Number;
      v45 = (char *)v59 + ndisPcwPerCpuDataStride * v39 + ndisPcwOffsetToPerCpuData;
      v46 = __rdtsc();
      *((_QWORD *)v45 + 13) += (((unsigned __int64)HIDWORD(v46) << 32) | (unsigned int)v46) - *((_QWORD *)v45 + 38);
      *((_QWORD *)v45 + 38) = 0LL;
    }
    if ( (v60 & 0x100000000LL) != 0 )
    {
      ndisQueueDpcWorkItem(
        (_DWORD)v61,
        (_DWORD)DeferredContext,
        (_DWORD)SystemArgument1,
        (_DWORD)SystemArgument2,
        byte_14011B4C1);
    }
    else if ( _InterlockedExchangeAdd((volatile signed __int32 *)DeferredContext + 26, 0xFFFFFFFF) == 1
           && DeferredContext[4] )
    {
      goto LABEL_62;
    }
  }
  if ( v41 )
  {
    v47 = WmiGetClock(0LL, 0LL);
    ndisTraceDpcEnd(v36, 1u, v47 - v62);
  }
}
