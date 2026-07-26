/*
 * XREFs of ndisInterruptDpc @ 0x140045600
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x140007E60 (-ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     NdisReferenceWithTag @ 0x14000E820 (NdisReferenceWithTag.c)
 *     WPP_RECORDER_SF_qL @ 0x14000EA50 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_q @ 0x140010C40 (WPP_RECORDER_SF_q.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x140010F10 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 *     ?ndisTraceDpcStart@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1400451E0 (-ndisTraceDpcStart@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ndisQueueDpcWorkItem @ 0x140045F60 (ndisQueueDpcWorkItem.c)
 *     ?ndisTraceDpcEnd@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K_K@Z @ 0x140090940 (-ndisTraceDpcEnd@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K_K@Z.c)
 *     ?ndisTraceQueueWorkItem@@YAXXZ @ 0x1400CC4D8 (-ndisTraceQueueWorkItem@@YAXXZ.c)
 *     __security_check_cookie @ 0x1400EDF40 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400EDFC0 (_guard_dispatch_icall.c)
 */

void __fastcall ndisInterruptDpc(
        struct _KDPC *Dpc,
        char *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  __int64 v5; // r9
  unsigned int Number; // r10d
  int v9; // r11d
  __int64 v10; // rsi
  unsigned int v11; // ebp
  char v12; // r14
  int v13; // eax
  KIRQL v14; // al
  struct _NDIS_REFCOUNT_BLOCK *v15; // rcx
  KIRQL v16; // r15
  int v17; // eax
  __int64 v18; // rbx
  int v19; // edx
  char *v20; // rdi
  __int64 *v21; // rax
  NTSTATUS v22; // ecx
  ULONG v23; // eax
  struct _NDIS_MINIPORT_BLOCK *v24; // rbp
  int PcwDatapathCycleMask; // ebx
  void (__fastcall *v26)(_QWORD, _QWORD, _QWORD, _QWORD); // r10
  unsigned int v27; // r15d
  void (__fastcall *v28)(__int64, _QWORD, PVOID, __int64 *, _QWORD); // r13
  char v29; // r14
  unsigned int v30; // ecx
  int v31; // ebx
  __int64 v32; // rcx
  int v33; // r13d
  char *v34; // rcx
  unsigned __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  LARGE_INTEGER v38; // rdx
  struct _KDPC *v39; // r8
  __int64 v40; // rcx
  KIRQL v41; // al
  ULONG_PTR v42; // r9
  KIRQL v43; // r14
  __int64 v44; // r8
  int v45; // ebp
  int v46; // edx
  __int64 v47; // rbx
  __int64 v48; // r8
  unsigned __int64 v49; // rax
  __int64 v50; // rdx
  __int64 v51; // rax
  unsigned __int8 i; // cl
  _BYTE *v53; // rdx
  char v54; // al
  struct _KEVENT *v55; // rcx
  ULONG_PTR v56; // rbp
  unsigned int v57; // r8d
  __int64 Clock; // rax
  __int64 v59; // [rsp+30h] [rbp-98h]
  wchar_t *Buffer; // [rsp+40h] [rbp-88h]
  __int64 v61; // [rsp+48h] [rbp-80h] BYREF
  PVOID v62; // [rsp+50h] [rbp-78h]
  struct _KDPC *v63; // [rsp+58h] [rbp-70h]
  __int64 v64; // [rsp+60h] [rbp-68h]
  void (__fastcall *v65)(_QWORD, _QWORD, _QWORD, _QWORD); // [rsp+68h] [rbp-60h]
  struct _KDPC_WATCHDOG_INFORMATION WatchdogInformation; // [rsp+70h] [rbp-58h] BYREF

  v62 = SystemArgument2;
  v5 = *((_QWORD *)DeferredContext + 12);
  v63 = Dpc;
  Number = -1;
  v9 = *(_DWORD *)(v5 + 48);
  if ( v9 || *(_DWORD *)(v5 + 80) )
  {
    v47 = *(_QWORD *)(v5 + 40);
    if ( !v47 )
      v47 = *(_QWORD *)(v5 + 40);
    if ( (*(_DWORD *)(v5 + 80) & 0x1000) != 0 )
    {
      Number = KeGetPcr()->Prcb.Number;
      v48 = v47 + ndisPcwPerCpuDataStride * Number + ndisPcwOffsetToPerCpuData;
      v49 = __rdtsc();
      *(_QWORD *)(v48 + 280) += (((unsigned __int64)HIDWORD(v49) << 32) | (unsigned int)v49) - *(_QWORD *)(v48 + 400);
      *(_QWORD *)(v48 + 400) = 0LL;
    }
    if ( (v9 & 1) != 0 )
    {
      if ( Number == -1 )
        Number = KeGetPcr()->Prcb.Number;
      ++*(_QWORD *)(ndisPcwOffsetToPerCpuData + v47 + ndisPcwPerCpuDataStride * Number);
    }
  }
  if ( dword_140125504 != -1
    && (*(_BYTE *)(v5 + 32) > 6u || *(_BYTE *)(v5 + 32) == 6 && *(_BYTE *)(v5 + 33) >= 0x14u)
    && ((*(_DWORD *)(v5 + 120) & 0x80u) != 0 || (*(_DWORD *)(v5 + 124) & 0x400000) == 0)
    || (memset(&WatchdogInformation, 0, sizeof(WatchdogInformation)),
        v22 = KeQueryDpcWatchdogInformation(&WatchdogInformation),
        v23 = 30 * (WatchdogInformation.DpcWatchdogLimit / 0x64),
        v22 >= 0)
    && v23
    && WatchdogInformation.DpcWatchdogCount < v23 )
  {
    v10 = *((_QWORD *)DeferredContext + 12);
    v11 = KeGetPcr()->Prcb.Number;
    v12 = byte_140125501;
    v13 = *(_DWORD *)(v10 + 48);
    if ( v13 || *(_DWORD *)(v10 + 80) )
    {
      v50 = *(_QWORD *)(v10 + 40);
      if ( !v50 )
        v50 = *(_QWORD *)(v10 + 40);
      if ( (v13 & 0x800000) != 0 )
      {
        v51 = v50 + ndisPcwPerCpuDataStride * KeGetPcr()->Prcb.Number;
        ++*(_QWORD *)(ndisPcwOffsetToPerCpuData + v51 + 288);
      }
    }
    v14 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v10 + 4432));
    v15 = *(struct _NDIS_REFCOUNT_BLOCK **)(v10 + 4896);
    v16 = v14;
    if ( v15 )
      NdisReferenceWithTag(v15, 0x4Du);
    ++*(_DWORD *)(v10 + 4440);
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qL(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0x14u,
        0xDu,
        (struct _GUID *)&WPP_72d2fa87a3a93fc51dc3e318202acea4_Traceguids,
        v10,
        *(_DWORD *)(v10 + 4440));
    KeReleaseSpinLock((PKSPIN_LOCK)(v10 + 4432), v16);
    v17 = 0;
    if ( DeferredContext[193] )
      v17 = (int)SystemArgument1;
    v18 = *((_QWORD *)DeferredContext + 27) + 80LL * (v11 + ndisMaxNumberOfProcessors * v17);
    KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v18 + 72));
    if ( (*(_DWORD *)(v18 + 68) & 1) == 0 )
    {
      *(_QWORD *)(v18 + 32) = v63;
      *(_DWORD *)(v18 + 68) = 1;
      *(_QWORD *)(v18 + 40) = DeferredContext;
      *(_QWORD *)(v18 + 48) = SystemArgument1;
      *(_QWORD *)(v18 + 56) = SystemArgument2;
      *(_DWORD *)(v18 + 64) = v11;
      if ( v12 )
      {
        if ( HIBYTE(word_140127114) )
          ndisTraceQueueWorkItem();
        *(_DWORD *)(v18 + 68) |= 2u;
        v20 = (char *)qword_140125540 + 64 * (unsigned __int64)KeGetPcr()->Prcb.Number;
        KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)v20 + 2);
        v21 = (__int64 *)*((_QWORD *)v20 + 1);
        if ( (char *)*v21 != v20 )
          __fastfail(3u);
        *(_QWORD *)v18 = v20;
        *(_QWORD *)(v18 + 8) = v21;
        *v21 = v18;
        *((_QWORD *)v20 + 1) = v18;
        ++*((_DWORD *)v20 + 6);
        KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)v20 + 2);
        KeReleaseSemaphore((PRKSEMAPHORE)v20 + 1, 0, 1, 0);
        LODWORD(v37) = KeGetPcr()->Prcb.Number;
        if ( !_InterlockedExchange((volatile __int32 *)qword_140125538 + v37, 1) )
        {
          v38.QuadPart = -1LL;
          v39 = (struct _KDPC *)((char *)qword_140125530 + 128 * (unsigned __int64)KeGetPcr()->Prcb.Number + 64);
          HIDWORD(v40) = DueTime.HighPart;
          if ( DueTime.QuadPart )
            v38 = DueTime;
          LODWORD(v40) = KeGetPcr()->Prcb.Number;
          KeSetTimer((PKTIMER)qword_140125530 + 2 * v40, v38, v39);
        }
      }
      else
      {
        ExQueueWorkItem((PWORK_QUEUE_ITEM)v18, CustomPriorityWorkQueue|RealTimeWorkQueue|0x8);
      }
LABEL_53:
      KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v18 + 72));
      return;
    }
    _InterlockedDecrement((volatile signed __int32 *)DeferredContext + 26);
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v19) = 4;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v19,
        20,
        25,
        (struct _GUID *)&WPP_524f971b55653c5011f9984343ca9332_Traceguids,
        v10);
    }
    v41 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v10 + 4432));
    v42 = *(_QWORD *)(v10 + 4896);
    v43 = v41;
    if ( !v42 || v42 - 2 <= 1 )
      goto LABEL_64;
    if ( v42 == 1 )
      KeBugCheckEx(0x7Cu, 0x1EuLL, 3uLL, 1uLL, 0LL);
    if ( *(_BYTE *)(v42 + 2) <= 0x4Du )
      KeBugCheckEx(0x7Cu, 0x1EuLL, 2uLL, v42, 0x4DuLL);
    if ( *(_BYTE *)(v42 + 1) )
    {
      if ( *(_BYTE *)(v42 + 1) != 1 )
        goto LABEL_64;
      v56 = v42 + 4936;
      v57 = *(_DWORD *)(v42 + 4992);
      if ( v57 >> 17 < 0x3FFE && (unsigned __int16)v57 >> 1 == (v57 >> 17) + 1 )
      {
        ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v42 + 4936));
        *(_DWORD *)(v56 + 56) &= 0x10001u;
        goto LABEL_64;
      }
      if ( (unsigned __int16)v57 >> 1 || (v57 & 1) != 0 )
      {
        ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v42 + 4936), 0);
        goto LABEL_64;
      }
    }
    else
    {
      v44 = *(_QWORD *)(v42 + 8);
      if ( v44 )
      {
        for ( i = 0; ; ++i )
        {
          if ( i >= *(_BYTE *)(v42 + 3) )
            goto LABEL_63;
          v53 = (_BYTE *)(v44 + 2LL * i);
          if ( *v53 == 77 )
          {
            v54 = v53[1];
            if ( v54 )
              break;
          }
        }
        v53[1] = v54 - 1;
        goto LABEL_64;
      }
LABEL_63:
      if ( _bittestandreset((signed __int32 *)(v42 + 24), 0xDu) )
      {
LABEL_64:
        v45 = *(_DWORD *)(v10 + 4440) - 1;
        *(_DWORD *)(v10 + 4440) = v45;
        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v59) = *(_DWORD *)(v10 + 4440);
          WPP_RECORDER_SF_qL(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            4u,
            0x14u,
            0xEu,
            (struct _GUID *)&WPP_72d2fa87a3a93fc51dc3e318202acea4_Traceguids,
            v10,
            v59);
        }
        KeReleaseSpinLock((PKSPIN_LOCK)(v10 + 4432), v43);
        if ( !v45 )
        {
          v55 = *(struct _KEVENT **)(v10 + 1608);
          if ( v55 )
            KeSetEvent(v55, 0, 0);
        }
        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v46) = 4;
          WPP_RECORDER_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v46,
            20,
            26,
            (struct _GUID *)&WPP_524f971b55653c5011f9984343ca9332_Traceguids,
            v10);
        }
        goto LABEL_53;
      }
    }
    KeBugCheckEx(0x7Cu, 0x1EuLL, 0LL, v42, 0x4DuLL);
  }
  v24 = (struct _NDIS_MINIPORT_BLOCK *)*((_QWORD *)DeferredContext + 12);
  LOBYTE(PcwDatapathCycleMask) = 0;
  v26 = (void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))*((_QWORD *)DeferredContext + 3);
  v27 = -1;
  v28 = (void (__fastcall *)(__int64, _QWORD, PVOID, __int64 *, _QWORD))*((_QWORD *)DeferredContext + 23);
  v61 = 0LL;
  v65 = v26;
  v64 = 0LL;
  Buffer = 0LL;
  if ( v24->PcwDatapathEventMask || v24->PcwDatapathCycleMask )
  {
    PcwDatapathCycleMask = v24->PcwDatapathCycleMask;
    Buffer = v24->Reserved4.Buffer;
    if ( !Buffer )
      Buffer = v24->Reserved4.Buffer;
  }
  if ( HIBYTE(dword_140127110) )
  {
    v29 = 1;
    ndisTraceDpcStart(v24, 1);
    Clock = WmiGetClock(0LL, 0LL);
    v26 = v65;
    v64 = Clock;
  }
  else
  {
    v29 = 0;
  }
  if ( DeferredContext[4] )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)DeferredContext + 26, 0xFFFFFFFF) == 1 )
LABEL_46:
      KeSetEvent((PRKEVENT)(DeferredContext + 128), 0, 0);
  }
  else
  {
    if ( byte_140125501 )
    {
      if ( dword_14012550C )
      {
        v30 = dword_140125504;
      }
      else
      {
        v30 = ndisPeriodicReceivesNblCounts[*(unsigned int *)((char *)v24->PeriodicReceivesNblCountIndex
                                                            + (KeGetPcr()->Prcb.Number << 12))];
        if ( dword_140125504 < v30 )
          v30 = dword_140125504;
      }
    }
    else
    {
      v30 = -1;
    }
    LODWORD(v61) = v30;
    v31 = PcwDatapathCycleMask & 1;
    if ( v31 )
    {
      v27 = KeGetPcr()->Prcb.Number;
      *(_QWORD *)((char *)Buffer + ndisPcwPerCpuDataStride * v27 + ndisPcwOffsetToPerCpuData + 304) = __rdtsc();
    }
    v32 = *((_QWORD *)DeferredContext + 1);
    if ( DeferredContext[193] == 1 )
    {
      v28(v32, (unsigned int)SystemArgument1, v62, &v61, 0LL);
      v33 = (int)v62;
    }
    else
    {
      v33 = (int)v62;
      v26(v32, v62, &v61, 0LL);
    }
    if ( v31 )
    {
      if ( v27 == -1 )
        v27 = KeGetPcr()->Prcb.Number;
      v34 = (char *)Buffer + ndisPcwPerCpuDataStride * v27 + ndisPcwOffsetToPerCpuData;
      v35 = __rdtsc();
      *((_QWORD *)v34 + 13) += (((unsigned __int64)HIDWORD(v35) << 32) | (unsigned int)v35) - *((_QWORD *)v34 + 38);
      *((_QWORD *)v34 + 38) = 0LL;
    }
    if ( (v61 & 0x100000000LL) != 0 )
    {
      ndisQueueDpcWorkItem((_DWORD)v63, (_DWORD)DeferredContext, (_DWORD)SystemArgument1, v33, byte_140125501);
    }
    else if ( _InterlockedExchangeAdd((volatile signed __int32 *)DeferredContext + 26, 0xFFFFFFFF) == 1
           && DeferredContext[4] )
    {
      goto LABEL_46;
    }
  }
  if ( v29 )
  {
    v36 = WmiGetClock(0LL, 0LL);
    ndisTraceDpcEnd(v24, 1u, v36 - v64);
  }
}
