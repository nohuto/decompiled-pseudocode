/*
 * XREFs of ndisQueueDpcWorkItem @ 0x140046A50
 * Callers:
 *     ndisInterruptDpc @ 0x14000BD40 (ndisInterruptDpc.c)
 * Callees:
 *     ?ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x14000C6D0 (-ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     NdisReferenceWithTag @ 0x140010F90 (NdisReferenceWithTag.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x140013990 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 *     WPP_RECORDER_SF_q @ 0x140014040 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x140014250 (WPP_RECORDER_SF_qL.c)
 *     ?ndisTraceQueueWorkItem@@YAXXZ @ 0x1400C53A8 (-ndisTraceQueueWorkItem@@YAXXZ.c)
 */

void __fastcall ndisQueueDpcWorkItem(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  __int64 v5; // rdi
  unsigned int Number; // r15d
  int v11; // eax
  KIRQL v12; // al
  struct _NDIS_REFCOUNT_BLOCK *v13; // rcx
  KIRQL v14; // bl
  int v15; // eax
  __int64 v16; // rbx
  int v17; // edx
  char *v18; // rdi
  __int64 *v19; // rax
  __int64 v20; // rax
  LARGE_INTEGER v21; // rdx
  struct _KDPC *v22; // r8
  KIRQL v23; // al
  ULONG_PTR v24; // r9
  KIRQL v25; // bp
  __int64 v26; // r8
  int v27; // ebx
  int v28; // edx
  __int64 v29; // rdx
  __int64 v30; // rax
  unsigned __int8 i; // cl
  _BYTE *v32; // rdx
  char v33; // al
  struct _KEVENT *v34; // rcx
  ULONG_PTR v35; // rbx
  unsigned int v36; // edx
  __int64 v37; // [rsp+30h] [rbp-38h]
  KSPIN_LOCK *SpinLock; // [rsp+78h] [rbp+10h]

  v5 = *(_QWORD *)(a2 + 96);
  Number = KeGetPcr()->Prcb.Number;
  v11 = *(_DWORD *)(v5 + 48);
  if ( v11 || *(_DWORD *)(v5 + 80) )
  {
    v29 = *(_QWORD *)(v5 + 40);
    if ( !v29 )
      v29 = *(_QWORD *)(v5 + 40);
    if ( (v11 & 0x800000) != 0 )
    {
      v30 = v29 + ndisPcwPerCpuDataStride * KeGetPcr()->Prcb.Number;
      ++*(_QWORD *)(ndisPcwOffsetToPerCpuData + v30 + 288);
    }
  }
  v12 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v5 + 4432));
  v13 = *(struct _NDIS_REFCOUNT_BLOCK **)(v5 + 4896);
  v14 = v12;
  if ( v13 )
    NdisReferenceWithTag(v13, 0x4Du);
  ++*(_DWORD *)(v5 + 4440);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x14u,
      0xDu,
      (struct _GUID *)&WPP_cb6db8c6f99e3ae11a098d09772ad370_Traceguids,
      v5,
      *(_DWORD *)(v5 + 4440));
  KeReleaseSpinLock((PKSPIN_LOCK)(v5 + 4432), v14);
  v15 = a3;
  if ( !*(_BYTE *)(a2 + 193) )
    v15 = 0;
  v16 = *(_QWORD *)(a2 + 216) + 80LL * (Number + ndisMaxNumberOfProcessors * v15);
  SpinLock = (KSPIN_LOCK *)(v16 + 72);
  KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v16 + 72));
  if ( (*(_DWORD *)(v16 + 68) & 1) == 0 )
  {
    *(_DWORD *)(v16 + 68) = 1;
    *(_QWORD *)(v16 + 32) = a1;
    *(_QWORD *)(v16 + 40) = a2;
    *(_QWORD *)(v16 + 48) = a3;
    *(_QWORD *)(v16 + 56) = a4;
    *(_DWORD *)(v16 + 64) = Number;
    if ( a5 )
    {
      if ( HIBYTE(word_14011D064) )
        ndisTraceQueueWorkItem();
      *(_DWORD *)(v16 + 68) |= 2u;
      v18 = (char *)qword_14011B500 + 64 * (unsigned __int64)KeGetPcr()->Prcb.Number;
      KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)v18 + 2);
      v19 = (__int64 *)*((_QWORD *)v18 + 1);
      if ( (char *)*v19 != v18 )
        __fastfail(3u);
      *(_QWORD *)v16 = v18;
      *(_QWORD *)(v16 + 8) = v19;
      *v19 = v16;
      *((_QWORD *)v18 + 1) = v16;
      ++*((_DWORD *)v18 + 6);
      KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)v18 + 2);
      KeReleaseSemaphore((PRKSEMAPHORE)v18 + 1, 0, 1, 0);
      LODWORD(v20) = KeGetPcr()->Prcb.Number;
      if ( !_InterlockedExchange((volatile __int32 *)qword_14011B4F8 + v20, 1) )
      {
        v21.QuadPart = -1LL;
        v22 = (struct _KDPC *)((char *)qword_14011B4F0 + 128 * (unsigned __int64)KeGetPcr()->Prcb.Number + 64);
        if ( DueTime.QuadPart )
          v21 = DueTime;
        KeSetTimer((PKTIMER)qword_14011B4F0 + 2 * (unsigned __int64)KeGetPcr()->Prcb.Number, v21, v22);
      }
    }
    else
    {
      ExQueueWorkItem((PWORK_QUEUE_ITEM)v16, CustomPriorityWorkQueue|RealTimeWorkQueue|0x8);
    }
    goto LABEL_19;
  }
  _InterlockedDecrement((volatile signed __int32 *)(a2 + 104));
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v17) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v17,
      20,
      25,
      (struct _GUID *)&WPP_91e24223ea6635c7ede0c9cfb5715ff6_Traceguids,
      v5);
  }
  v23 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v5 + 4432));
  v24 = *(_QWORD *)(v5 + 4896);
  v25 = v23;
  if ( !v24 || v24 - 2 <= 1 )
    goto LABEL_29;
  if ( v24 == 1 )
    KeBugCheckEx(0x7Cu, 0x1EuLL, 3uLL, 1uLL, 0LL);
  if ( *(_BYTE *)(v24 + 2) <= 0x4Du )
    KeBugCheckEx(0x7Cu, 0x1EuLL, 2uLL, v24, 0x4DuLL);
  if ( *(_BYTE *)(v24 + 1) )
  {
    if ( *(_BYTE *)(v24 + 1) != 1 )
      goto LABEL_29;
    v35 = v24 + 4936;
    v36 = *(_DWORD *)(v24 + 4992);
    if ( v36 >> 17 < 0x3FFE && (unsigned __int16)v36 >> 1 == (v36 >> 17) + 1 )
    {
      ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v24 + 4936));
      *(_DWORD *)(v35 + 56) &= 0x10001u;
      goto LABEL_29;
    }
    if ( (unsigned __int16)v36 >> 1 || (v36 & 1) != 0 )
    {
      ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v24 + 4936), 0);
      goto LABEL_29;
    }
LABEL_45:
    KeBugCheckEx(0x7Cu, 0x1EuLL, 0LL, v24, 0x4DuLL);
  }
  v26 = *(_QWORD *)(v24 + 8);
  if ( v26 )
  {
    for ( i = 0; ; ++i )
    {
      if ( i >= *(_BYTE *)(v24 + 3) )
        goto LABEL_28;
      v32 = (_BYTE *)(v26 + 2LL * i);
      if ( *v32 == 77 )
      {
        v33 = v32[1];
        if ( v33 )
          break;
      }
    }
    v32[1] = v33 - 1;
    goto LABEL_29;
  }
LABEL_28:
  if ( !_bittestandreset((signed __int32 *)(v24 + 24), 0xDu) )
    goto LABEL_45;
LABEL_29:
  v27 = *(_DWORD *)(v5 + 4440) - 1;
  *(_DWORD *)(v5 + 4440) = v27;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v37) = *(_DWORD *)(v5 + 4440);
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x14u,
      0xEu,
      (struct _GUID *)&WPP_cb6db8c6f99e3ae11a098d09772ad370_Traceguids,
      v5,
      v37);
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(v5 + 4432), v25);
  if ( !v27 )
  {
    v34 = *(struct _KEVENT **)(v5 + 1608);
    if ( v34 )
      KeSetEvent(v34, 0, 0);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v28) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v28,
      20,
      26,
      (struct _GUID *)&WPP_91e24223ea6635c7ede0c9cfb5715ff6_Traceguids,
      v5);
  }
LABEL_19:
  KeReleaseSpinLockFromDpcLevel(SpinLock);
}
