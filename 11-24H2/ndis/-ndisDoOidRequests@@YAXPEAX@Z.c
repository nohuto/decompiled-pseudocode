/*
 * XREFs of ?ndisDoOidRequests@@YAXPEAX@Z @ 0x14000B1B0
 * Callers:
 *     <none>
 * Callees:
 *     NdisFreeRefCount @ 0x140007F90 (NdisFreeRefCount.c)
 *     ?ndisMDoOidRequest@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14000A5A0 (-ndisMDoOidRequest@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x14000C6D0 (-ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     WPP_RECORDER_SF_qq @ 0x14000CEB0 (WPP_RECORDER_SF_qq.c)
 *     ?ndisReferenceRefEx@@YAEPEAU_REFERENCE_EX@@EPEAW4_NDIS_REFERENCE_STATUS@@@Z @ 0x140010EE0 (-ndisReferenceRefEx@@YAEPEAU_REFERENCE_EX@@EPEAW4_NDIS_REFERENCE_STATUS@@@Z.c)
 *     ?ndisReportRefcountImbalance@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@E@Z @ 0x1400136E0 (-ndisReportRefcountImbalance@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@E@Z.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x140013990 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 *     WPP_RECORDER_SF_q @ 0x140014040 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x140014250 (WPP_RECORDER_SF_qL.c)
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x14008ADC0 (-ndisBugCheckEx@@YAX_K000@Z.c)
 */

void __fastcall ndisDoOidRequests(_QWORD *a1)
{
  __int64 v1; // rdi
  KIRQL v3; // bp
  KIRQL v4; // al
  ULONG_PTR v5; // r8
  KIRQL v6; // bp
  __int64 v7; // rdx
  bool v8; // zf
  int v9; // edx
  KIRQL v10; // al
  _BYTE *v11; // rdx
  ULONG_PTR v12; // r8
  KIRQL v13; // r14
  __int64 v14; // r9
  int v15; // ebx
  int v16; // edx
  unsigned __int8 i; // cl
  _BYTE *v18; // r9
  char v19; // al
  unsigned __int8 j; // cl
  char v21; // al
  struct _KEVENT *v22; // rcx
  ULONG_PTR v23; // r14
  unsigned int v24; // edx
  ULONG_PTR v25; // rbx
  unsigned int v26; // edx
  int v27; // [rsp+70h] [rbp+8h] BYREF

  v1 = a1[7];
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      11,
      18,
      (struct _GUID *)&WPP_40f420ec2e343311b7b49d00b668bf14_Traceguids,
      (char)a1,
      a1[7]);
  if ( *(_BYTE *)v1 != 17 )
  {
    if ( *(_BYTE *)v1 != 5 )
      goto LABEL_17;
    if ( KeExpandKernelStackAndCalloutEx(ndisFDoOidRequestInternal, (PVOID)v1, (unsigned int)Size, 0, 0LL) < 0 )
    {
      v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v1 + 144));
      *(_QWORD *)(v1 + 152) = KeGetCurrentThread();
      *(_BYTE *)(v1 + 232) = 1;
      if ( !*(_BYTE *)(v1 + 224) )
      {
        v27 = 0;
        ndisReferenceRefEx((PKSPIN_LOCK)(v1 + 72), 1u, (enum _NDIS_REFERENCE_STATUS *)&v27);
        *(_BYTE *)(v1 + 224) = 1;
        ExQueueWorkItem((PWORK_QUEUE_ITEM)(v1 + 192), NormalWorkQueue);
      }
      *(_QWORD *)(v1 + 152) = 0LL;
      KeReleaseSpinLock((PKSPIN_LOCK)(v1 + 144), v3);
    }
    v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v1 + 312));
    v5 = *(_QWORD *)(v1 + 328);
    v6 = v4;
    if ( v5 - 2 <= 1 )
      goto LABEL_15;
    if ( v5 < 2 )
      ndisBugCheckEx(0x1EuLL, 3uLL, v5, 0LL);
    if ( *(_BYTE *)(v5 + 2) <= 0xCu )
      ndisBugCheckEx(0x1EuLL, 2uLL, v5, 0xCuLL);
    if ( *(_BYTE *)(v5 + 1) )
    {
      if ( *(_BYTE *)(v5 + 1) != 1 )
        goto LABEL_15;
      v23 = v5 + 776;
      v24 = *(_DWORD *)(v5 + 832);
      if ( v24 >> 17 < 0x3FFE && (unsigned __int16)v24 >> 1 == (v24 >> 17) + 1 )
      {
        ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v5 + 776));
        *(_DWORD *)(v23 + 56) &= 0x10001u;
        goto LABEL_15;
      }
      if ( (unsigned __int16)v24 >> 1 || (v24 & 1) != 0 )
      {
        ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v5 + 776), 0);
        goto LABEL_15;
      }
    }
    else
    {
      v7 = *(_QWORD *)(v5 + 8);
      if ( v7 )
      {
        for ( i = 0; ; ++i )
        {
          if ( i >= *(_BYTE *)(v5 + 3) )
            goto LABEL_14;
          v18 = (_BYTE *)(v7 + 2LL * i);
          if ( *v18 == 12 )
          {
            v19 = v18[1];
            if ( v19 )
              break;
          }
        }
        v18[1] = v19 - 1;
        goto LABEL_15;
      }
LABEL_14:
      if ( _bittestandreset((signed __int32 *)(v5 + 16), 0xCu) )
      {
LABEL_15:
        v8 = (*(_WORD *)(v1 + 320))-- == 1;
        if ( v8 && !*(_BYTE *)(v1 + 323) )
        {
          NdisFreeRefCount(*(struct NDIS_REFCOUNT_HANDLE__ **)(v1 + 328));
          *(_QWORD *)(v1 + 328) = 1LL;
        }
        KeReleaseSpinLock((PKSPIN_LOCK)(v1 + 312), v6);
        goto LABEL_17;
      }
    }
    ndisReportRefcountImbalance(v5, 0xCu);
  }
  ndisMDoOidRequest((struct _NDIS_MINIPORT_BLOCK *)v1);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v9) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v9,
      20,
      25,
      (struct _GUID *)&WPP_91e24223ea6635c7ede0c9cfb5715ff6_Traceguids,
      v1);
  }
  v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v1 + 4432));
  v12 = *(_QWORD *)(v1 + 4896);
  v13 = v10;
  if ( !v12 || v12 - 2 <= 1 )
    goto LABEL_29;
  if ( v12 == 1 )
    ndisBugCheckEx(0x1EuLL, 3uLL, 1uLL, 0LL);
  if ( *(_BYTE *)(v12 + 2) <= 0x47u )
    ndisBugCheckEx(0x1EuLL, 2uLL, v12, 0x47uLL);
  if ( *(_BYTE *)(v12 + 1) )
  {
    if ( *(_BYTE *)(v12 + 1) != 1 )
      goto LABEL_29;
    v25 = v12 + 4552;
    v26 = *(_DWORD *)(v12 + 4608);
    if ( v26 >> 17 < 0x3FFE && (unsigned __int16)v26 >> 1 == (v26 >> 17) + 1 )
    {
      ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v12 + 4552));
      *(_DWORD *)(v25 + 56) &= 0x10001u;
      goto LABEL_29;
    }
    if ( (unsigned __int16)v26 >> 1 || (v26 & 1) != 0 )
    {
      ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v12 + 4552), 0);
      goto LABEL_29;
    }
LABEL_49:
    ndisReportRefcountImbalance(v12, 0x47u);
  }
  v14 = *(_QWORD *)(v12 + 8);
  if ( v14 )
  {
    for ( j = 0; ; ++j )
    {
      if ( j >= *(_BYTE *)(v12 + 3) )
        goto LABEL_28;
      v11 = (_BYTE *)(v14 + 2LL * j);
      if ( *v11 == 71 )
      {
        v21 = v11[1];
        if ( v21 )
          break;
      }
    }
    v11[1] = v21 - 1;
    goto LABEL_29;
  }
LABEL_28:
  if ( !_bittestandreset((signed __int32 *)(v12 + 24), 7u) )
    goto LABEL_49;
LABEL_29:
  v15 = *(_DWORD *)(v1 + 4440) - 1;
  *(_DWORD *)(v1 + 4440) = v15;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v11) = 4;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)v11,
      20,
      14,
      (struct _GUID *)&WPP_cb6db8c6f99e3ae11a098d09772ad370_Traceguids,
      v1,
      *(_DWORD *)(v1 + 4440));
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(v1 + 4432), v13);
  if ( !v15 )
  {
    v22 = *(struct _KEVENT **)(v1 + 1608);
    if ( v22 )
      KeSetEvent(v22, 0, 0);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v16) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v16,
      20,
      26,
      (struct _GUID *)&WPP_91e24223ea6635c7ede0c9cfb5715ff6_Traceguids,
      v1);
  }
LABEL_17:
  ExFreePoolWithTag(a1, 0);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      11,
      19,
      (struct _GUID *)&WPP_40f420ec2e343311b7b49d00b668bf14_Traceguids,
      0,
      v1);
}
