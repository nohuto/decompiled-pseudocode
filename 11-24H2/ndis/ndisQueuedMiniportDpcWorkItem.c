/*
 * XREFs of ndisQueuedMiniportDpcWorkItem @ 0x140014590
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x14000C6D0 (-ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     NdisReferenceWithTag @ 0x140010F90 (NdisReferenceWithTag.c)
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1400129C0 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisReportRefcountImbalance@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@E@Z @ 0x1400136E0 (-ndisReportRefcountImbalance@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@E@Z.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x140013990 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 *     WPP_RECORDER_SF_q @ 0x140014040 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x140014250 (WPP_RECORDER_SF_qL.c)
 *     ?ndisQueuePeriodicReceivesTimer@@YAXXZ @ 0x140040CE0 (-ndisQueuePeriodicReceivesTimer@@YAXXZ.c)
 *     ?ndisTraceDpcStart@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x140040D60 (-ndisTraceDpcStart@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ?ndisTraceDpcEnd@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K_K@Z @ 0x140074C20 (-ndisTraceDpcEnd@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K_K@Z.c)
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x14008ADC0 (-ndisBugCheckEx@@YAX_K000@Z.c)
 *     ?ndisTraceQueueWorkItem@@YAXXZ @ 0x1400C53A8 (-ndisTraceQueueWorkItem@@YAXXZ.c)
 *     __security_check_cookie @ 0x1400E70B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 */

void __fastcall ndisQueuedMiniportDpcWorkItem(__int64 a1)
{
  int v1; // r14d
  __int64 v2; // rsi
  unsigned int Number; // r12d
  __int64 v4; // rax
  __int64 v5; // rdi
  char v6; // bp
  char v7; // bp
  ULONG v8; // r15d
  unsigned __int64 v9; // rdx
  struct _NDIS_MINIPORT_BLOCK *v10; // r8
  wchar_t *Buffer; // r13
  void (__fastcall *v12)(_QWORD, _QWORD, _QWORD, _QWORD); // r11
  void (__fastcall *v13)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD); // r10
  unsigned int v14; // ebx
  unsigned int v15; // ecx
  int v16; // esi
  __int64 v17; // rcx
  char *v18; // rcx
  unsigned __int64 v19; // rax
  __int64 v20; // rbp
  KIRQL v21; // al
  ULONG_PTR v22; // r8
  KIRQL v23; // si
  __int64 v24; // r9
  int v25; // edi
  int v26; // edx
  unsigned __int8 i; // al
  _BYTE *v28; // rdx
  char v29; // cl
  struct _KEVENT *v30; // rcx
  ULONG_PTR v31; // rdi
  unsigned int v32; // r9d
  struct _NDIS_MINIPORT_BLOCK *v33; // rsi
  unsigned int v34; // r13d
  int PcwDatapathEventMask; // eax
  KIRQL v36; // al
  struct _NDIS_REFCOUNT_BLOCK *RefCountTracker; // rcx
  __int64 v38; // rbx
  char *v39; // rdi
  __int64 *v40; // rax
  wchar_t *v41; // rdx
  char *v42; // rax
  __int64 Clock; // rax
  __int64 v44; // rax
  __int64 v45; // [rsp+30h] [rbp-B8h]
  KIRQL v46; // [rsp+40h] [rbp-A8h]
  char v47; // [rsp+41h] [rbp-A7h]
  KIRQL v48; // [rsp+42h] [rbp-A6h]
  char v49; // [rsp+43h] [rbp-A5h]
  _PROCESSOR_NUMBER ProcNumber; // [rsp+44h] [rbp-A4h] BYREF
  __int64 v51; // [rsp+48h] [rbp-A0h] BYREF
  __int64 v52; // [rsp+50h] [rbp-98h]
  __int64 v53; // [rsp+58h] [rbp-90h]
  __int64 v54; // [rsp+60h] [rbp-88h]
  struct _NDIS_MINIPORT_BLOCK *v55; // [rsp+68h] [rbp-80h]
  char v56[8]; // [rsp+70h] [rbp-78h]
  void (__fastcall *v57)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD); // [rsp+78h] [rbp-70h]
  void (__fastcall *v58)(_QWORD, _QWORD, _QWORD, _QWORD); // [rsp+80h] [rbp-68h]
  __int64 v59; // [rsp+88h] [rbp-60h]
  _GROUP_AFFINITY Affinity; // [rsp+90h] [rbp-58h] BYREF
  _GROUP_AFFINITY PreviousAffinity; // [rsp+A0h] [rbp-48h] BYREF

  v48 = 0;
  PreviousAffinity = 0LL;
  v1 = 0;
  v2 = a1;
  Affinity = 0LL;
  Number = KeGetPcr()->Prcb.Number;
  v4 = *(_QWORD *)(a1 + 32);
  v5 = *(_QWORD *)(a1 + 40);
  v6 = *(_BYTE *)(a1 + 68);
  ++ndisWorkitemDpcs;
  v7 = v6 & 2;
  v8 = *(_DWORD *)(a1 + 64);
  v59 = v4;
  *(_QWORD *)v56 = *(_QWORD *)(v5 + 96);
  v52 = *(_QWORD *)(a1 + 48);
  v53 = *(_QWORD *)(a1 + 56);
  if ( Number != v8 )
  {
    ProcNumber = 0;
    KeGetProcessorNumberFromIndex(v8, &ProcNumber);
    Affinity.Group = ProcNumber.Group;
    Affinity.Mask = 1LL << ProcNumber.Number;
    KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
  }
  if ( !v7 )
    v48 = KfRaiseIrql(2u);
  KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v2 + 72));
  *(_DWORD *)(v2 + 68) &= ~1u;
  KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v2 + 72));
  v10 = *(struct _NDIS_MINIPORT_BLOCK **)(v5 + 96);
  Buffer = 0LL;
  v12 = *(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(v5 + 24);
  LOBYTE(v2) = 0;
  v13 = *(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(v5 + 184);
  v14 = -1;
  v51 = 0LL;
  v55 = v10;
  v58 = v12;
  v57 = v13;
  v54 = 0LL;
  if ( v10->PcwDatapathEventMask || v10->PcwDatapathCycleMask )
  {
    Buffer = v10->Reserved4.Buffer;
    LODWORD(v2) = v10->PcwDatapathCycleMask;
    if ( !Buffer )
      Buffer = v10->Reserved4.Buffer;
  }
  if ( HIBYTE(dword_14011D060) )
  {
    v47 = 1;
    ndisTraceDpcStart(v10, 1u);
    Clock = WmiGetClock(0LL, 0LL);
    v10 = v55;
    v13 = v57;
    v12 = v58;
    v54 = Clock;
  }
  else
  {
    v47 = 0;
  }
  if ( *(_BYTE *)(v5 + 4) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v5 + 104), 0xFFFFFFFF) == 1 )
LABEL_25:
      KeSetEvent((PRKEVENT)(v5 + 128), 0, 0);
  }
  else
  {
    if ( byte_14011B4C1 )
    {
      if ( dword_14011B4CC )
      {
        v15 = dword_14011B4C4;
      }
      else
      {
        v15 = ndisPeriodicReceivesNblCounts[*(unsigned int *)((char *)v10->PeriodicReceivesNblCountIndex
                                                            + (KeGetPcr()->Prcb.Number << 12))];
        if ( dword_14011B4C4 < v15 )
          v15 = dword_14011B4C4;
      }
    }
    else
    {
      v15 = -1;
    }
    LODWORD(v51) = v15;
    v16 = v2 & 1;
    if ( v16 )
    {
      v14 = KeGetPcr()->Prcb.Number;
      *(_QWORD *)((char *)Buffer + ndisPcwPerCpuDataStride * v14 + ndisPcwOffsetToPerCpuData + 304) = __rdtsc();
    }
    v17 = *(_QWORD *)(v5 + 8);
    if ( *(_BYTE *)(v5 + 193) == 1 )
      v13(v17, (unsigned int)v52, v53, &v51, 0LL);
    else
      v12(v17, v53, &v51, 0LL);
    if ( v16 )
    {
      if ( v14 == -1 )
        v14 = KeGetPcr()->Prcb.Number;
      v18 = (char *)Buffer + ndisPcwPerCpuDataStride * v14 + ndisPcwOffsetToPerCpuData;
      v19 = __rdtsc();
      v9 = (unsigned __int64)HIDWORD(v19) << 32;
      *((_QWORD *)v18 + 13) += (v9 | (unsigned int)v19) - *((_QWORD *)v18 + 38);
      *((_QWORD *)v18 + 38) = 0LL;
    }
    if ( (v51 & 0x100000000LL) != 0 )
    {
      v33 = *(struct _NDIS_MINIPORT_BLOCK **)(v5 + 96);
      v34 = KeGetPcr()->Prcb.Number;
      v49 = byte_14011B4C1;
      PcwDatapathEventMask = v33->PcwDatapathEventMask;
      if ( PcwDatapathEventMask || v33->PcwDatapathCycleMask )
      {
        v41 = v33->Reserved4.Buffer;
        if ( !v41 )
          v41 = v33->Reserved4.Buffer;
        if ( (PcwDatapathEventMask & 0x800000) != 0 )
        {
          v42 = (char *)v41 + ndisPcwPerCpuDataStride * KeGetPcr()->Prcb.Number;
          ++*(_QWORD *)&v42[ndisPcwOffsetToPerCpuData + 288];
        }
      }
      v36 = KeAcquireSpinLockRaiseToDpc(&v33->Ref.SpinLock);
      RefCountTracker = (struct _NDIS_REFCOUNT_BLOCK *)v33->RefCountTracker;
      v46 = v36;
      if ( RefCountTracker )
      {
        NdisReferenceWithTag(RefCountTracker, 0x4Du);
        v36 = v46;
      }
      ++v33->Ref.ReferenceCount;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        WPP_RECORDER_SF_qL(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4u,
          0x14u,
          0xDu,
          (struct _GUID *)&WPP_cb6db8c6f99e3ae11a098d09772ad370_Traceguids,
          (char)v33,
          v33->Ref.ReferenceCount);
        v36 = v46;
      }
      KeReleaseSpinLock(&v33->Ref.SpinLock, v36);
      if ( *(_BYTE *)(v5 + 193) )
        v1 = v52;
      v38 = *(_QWORD *)(v5 + 216) + 80LL * (v34 + ndisMaxNumberOfProcessors * v1);
      KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v38 + 72));
      if ( (*(_DWORD *)(v38 + 68) & 1) != 0 )
      {
        _InterlockedDecrement((volatile signed __int32 *)(v5 + 104));
        ndisDereferenceMiniport(v33, 0x4Du);
      }
      else
      {
        *(_QWORD *)(v38 + 32) = v59;
        *(_QWORD *)(v38 + 48) = v52;
        *(_QWORD *)(v38 + 56) = v53;
        *(_QWORD *)(v38 + 40) = v5;
        *(_DWORD *)(v38 + 64) = v34;
        *(_DWORD *)(v38 + 68) = 1;
        if ( v49 )
        {
          if ( HIBYTE(word_14011D064) )
            ndisTraceQueueWorkItem();
          *(_DWORD *)(v38 + 68) |= 2u;
          v39 = (char *)qword_14011B500 + 64 * (unsigned __int64)KeGetPcr()->Prcb.Number;
          KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)v39 + 2);
          v40 = (__int64 *)*((_QWORD *)v39 + 1);
          if ( (char *)*v40 != v39 )
            __fastfail(3u);
          *(_QWORD *)v38 = v39;
          *(_QWORD *)(v38 + 8) = v40;
          *v40 = v38;
          *((_QWORD *)v39 + 1) = v38;
          ++*((_DWORD *)v39 + 6);
          KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)v39 + 2);
          KeReleaseSemaphore((PRKSEMAPHORE)v39 + 1, 0, 1, 0);
          ndisQueuePeriodicReceivesTimer();
        }
        else
        {
          ExQueueWorkItem((PWORK_QUEUE_ITEM)v38, CustomPriorityWorkQueue|RealTimeWorkQueue|0x8);
        }
      }
      KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v38 + 72));
    }
    else if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v5 + 104), 0xFFFFFFFF) == 1 && *(_BYTE *)(v5 + 4) )
    {
      goto LABEL_25;
    }
  }
  if ( v47 )
  {
    v44 = WmiGetClock(0LL, 0LL);
    ndisTraceDpcEnd(v55, 1u, v44 - v54);
  }
  if ( !v7 && v48 != 2 )
    KeLowerIrql(v48);
  if ( Number != v8 )
    KeRevertToUserGroupAffinityThread(&PreviousAffinity);
  v20 = *(_QWORD *)v56;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v9) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v9,
      20,
      25,
      (struct _GUID *)&WPP_91e24223ea6635c7ede0c9cfb5715ff6_Traceguids,
      v56[0]);
  }
  v21 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v20 + 4432));
  v22 = *(_QWORD *)(v20 + 4896);
  v23 = v21;
  if ( v22 && v22 - 2 > 1 )
  {
    if ( v22 == 1 )
      ndisBugCheckEx(0x1EuLL, 3uLL, 1uLL, 0LL);
    if ( *(_BYTE *)(v22 + 2) <= 0x4Du )
      ndisBugCheckEx(0x1EuLL, 2uLL, v22, 0x4DuLL);
    if ( *(_BYTE *)(v22 + 1) )
    {
      if ( *(_BYTE *)(v22 + 1) == 1 )
      {
        v31 = v22 + 4936;
        v32 = *(_DWORD *)(v22 + 4992);
        if ( v32 >> 17 < 0x3FFE && (unsigned __int16)v32 >> 1 == (v32 >> 17) + 1 )
        {
          ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v22 + 4936));
          *(_DWORD *)(v31 + 56) &= 0x10001u;
        }
        else
        {
          if ( !((unsigned __int16)v32 >> 1) && (v32 & 1) == 0 )
            goto LABEL_52;
          ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v22 + 4936), 0);
        }
      }
    }
    else
    {
      v24 = *(_QWORD *)(v22 + 8);
      if ( !v24 )
      {
LABEL_39:
        if ( _bittestandreset((signed __int32 *)(v22 + 24), 0xDu) )
          goto LABEL_40;
LABEL_52:
        ndisReportRefcountImbalance(v22, 0x4Du);
      }
      for ( i = 0; ; ++i )
      {
        if ( i >= *(_BYTE *)(v22 + 3) )
          goto LABEL_39;
        v28 = (_BYTE *)(v24 + 2LL * i);
        if ( *v28 == 77 )
        {
          v29 = v28[1];
          if ( v29 )
            break;
        }
      }
      v28[1] = v29 - 1;
    }
  }
LABEL_40:
  v25 = *(_DWORD *)(v20 + 4440) - 1;
  *(_DWORD *)(v20 + 4440) = v25;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v45) = *(_DWORD *)(v20 + 4440);
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x14u,
      0xEu,
      (struct _GUID *)&WPP_cb6db8c6f99e3ae11a098d09772ad370_Traceguids,
      v20,
      v45);
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(v20 + 4432), v23);
  if ( !v25 )
  {
    v30 = *(struct _KEVENT **)(v20 + 1608);
    if ( v30 )
      KeSetEvent(v30, 0, 0);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v26) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v26,
      20,
      26,
      (struct _GUID *)&WPP_91e24223ea6635c7ede0c9cfb5715ff6_Traceguids,
      v20);
  }
}
