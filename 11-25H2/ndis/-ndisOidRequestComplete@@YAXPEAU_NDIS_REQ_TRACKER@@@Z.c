/*
 * XREFs of ?ndisOidRequestComplete@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400235C0
 * Callers:
 *     ?ndisFDoOidRequestInternal@@YAXPEAX@Z @ 0x1400218B0 (-ndisFDoOidRequestInternal@@YAXPEAX@Z.c)
 *     ?ndisFOidRequestCompleteInternal@@YAXPEAX@Z @ 0x140022730 (-ndisFOidRequestCompleteInternal@@YAXPEAX@Z.c)
 *     ?ndisMDoOidRequest@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400229C0 (-ndisMDoOidRequest@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisCancelOidRequestOnMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAXE@Z @ 0x140023320 (-ndisCancelOidRequestOnMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAXE@Z.c)
 *     ?ndisMOidRequestCompleteInternal@@YAXPEAXPEAU_NDIS_OID_REQUEST@@H1@Z @ 0x140024E00 (-ndisMOidRequestCompleteInternal@@YAXPEAXPEAU_NDIS_OID_REQUEST@@H1@Z.c)
 *     ?ndisMAbortRequests@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140086120 (-ndisMAbortRequests@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisPMAddRemoveAsync@@YAXPEAX@Z @ 0x14008EC90 (-ndisPMAddRemoveAsync@@YAXPEAX@Z.c)
 *     ?ndisCancelOidRequestOnFilter@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAXE@Z @ 0x1400C0C8C (-ndisCancelOidRequestOnFilter@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAXE@Z.c)
 *     ?ndisFDirectOidRequestCompleteInternal@@YAXPEAX@Z @ 0x1400CE770 (-ndisFDirectOidRequestCompleteInternal@@YAXPEAX@Z.c)
 * Callees:
 *     ?ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x140007E60 (-ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     ?ndisDereferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z @ 0x1400105A0 (-ndisDereferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z.c)
 *     ?ndisReportRefcountImbalance@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@E@Z @ 0x140010990 (-ndisReportRefcountImbalance@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@E@Z.c)
 *     ?ndisGetAnyActiveRefTag@@YAKPEAUNDIS_REFCOUNT_HANDLE__@@@Z @ 0x1400109B0 (-ndisGetAnyActiveRefTag@@YAKPEAUNDIS_REFCOUNT_HANDLE__@@@Z.c)
 *     ?ndisFreeRefCountAuxiliaryMemory@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@@Z @ 0x140010A70 (-ndisFreeRefCountAuxiliaryMemory@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@@Z.c)
 *     ?ndisRefCountBlockFromRefCountHandle@@YAPEAU_NDIS_REFCOUNT_BLOCK@@PEAUNDIS_REFCOUNT_HANDLE__@@@Z @ 0x140010AD0 (-ndisRefCountBlockFromRefCountHandle@@YAPEAU_NDIS_REFCOUNT_BLOCK@@PEAUNDIS_REFCOUNT_HANDLE__@@@Z.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x140010F10 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 *     WPP_RECORDER_SF_qDd @ 0x140015640 (WPP_RECORDER_SF_qDd.c)
 *     ?ShouldEnableOidTracing@@YA_NPEBU_NDIS_OID_REQUEST@@@Z @ 0x140015980 (-ShouldEnableOidTracing@@YA_NPEBU_NDIS_OID_REQUEST@@@Z.c)
 *     ?FILTER_CLEAR_FLAG@@YAXPEAU_NDIS_FILTER_BLOCK@@K@Z @ 0x1400241B0 (-FILTER_CLEAR_FLAG@@YAXPEAU_NDIS_FILTER_BLOCK@@K@Z.c)
 *     McTemplateK0jqxqdq_EtwWriteTransfer @ 0x140024200 (McTemplateK0jqxqdq_EtwWriteTransfer.c)
 *     McTemplateK0jqxd_EtwWriteTransfer @ 0x1400246C0 (McTemplateK0jqxd_EtwWriteTransfer.c)
 *     ?IsOidTelemetryFilterEnabled@@YA_NKPEAU_NDIS_OID_REQUEST_RESERVED@@@Z @ 0x140024820 (-IsOidTelemetryFilterEnabled@@YA_NKPEAU_NDIS_OID_REQUEST_RESERVED@@@Z.c)
 *     WPP_RECORDER_SF_qDq @ 0x140024890 (WPP_RECORDER_SF_qDq.c)
 *     ??$TraceLoggingWriteOidRequestCompletedActivity@$01@@YAXPEBU_NDIS_REQ_TRACKER@@@Z @ 0x1400249B0 (--$TraceLoggingWriteOidRequestCompletedActivity@$01@@YAXPEBU_NDIS_REQ_TRACKER@@@Z.c)
 *     ??$TraceLoggingWriteOidRequestCompletedActivity@$0A@@@YAXPEBU_NDIS_REQ_TRACKER@@@Z @ 0x140024B10 (--$TraceLoggingWriteOidRequestCompletedActivity@$0A@@@YAXPEBU_NDIS_REQ_TRACKER@@@Z.c)
 *     WPP_RECORDER_SF_qDqd @ 0x140025370 (WPP_RECORDER_SF_qDqd.c)
 *     WPP_RECORDER_SF_Dqqqqd @ 0x1400254B0 (WPP_RECORDER_SF_Dqqqqd.c)
 *     ?ndisMResetCompleteStage2@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14008DBB0 (-ndisMResetCompleteStage2@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisInvokeDirectOidRequestComplete @ 0x14008E740 (ndisInvokeDirectOidRequestComplete.c)
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x140096020 (-ndisBugCheckEx@@YAX_K000@Z.c)
 *     ??$TraceLoggingWriteOidRequestReturnedActivity@$0A@U_NDIS_OPEN_BLOCK@@@@YAXPEBU_NDIS_OPEN_BLOCK@@PEBU_NDIS_OID_REQUEST@@@Z @ 0x140098920 (--$TraceLoggingWriteOidRequestReturnedActivity@$0A@U_NDIS_OPEN_BLOCK@@@@YAXPEBU_NDIS_OPEN_BLOCK@.c)
 *     ??$TraceLoggingWriteOidRequestReturnedActivity@$01U_NDIS_OPEN_BLOCK@@@@YAXPEBU_NDIS_OPEN_BLOCK@@PEBU_NDIS_OID_REQUEST@@@Z @ 0x140098AB0 (--$TraceLoggingWriteOidRequestReturnedActivity@$01U_NDIS_OPEN_BLOCK@@@@YAXPEBU_NDIS_OPEN_BLOCK@@.c)
 *     ndisFInvokeDirectOidRequestComplete @ 0x1400CE874 (ndisFInvokeDirectOidRequestComplete.c)
 *     ??$TraceLoggingWriteOidRequestReturnedActivity@$01U_NDIS_FILTER_BLOCK@@@@YAXPEBU_NDIS_FILTER_BLOCK@@PEBU_NDIS_OID_REQUEST@@@Z @ 0x1400E41E0 (--$TraceLoggingWriteOidRequestReturnedActivity@$01U_NDIS_FILTER_BLOCK@@@@YAXPEBU_NDIS_FILTER_BLO.c)
 *     ??$TraceLoggingWriteOidRequestReturnedActivity@$0A@U_NDIS_FILTER_BLOCK@@@@YAXPEBU_NDIS_FILTER_BLOCK@@PEBU_NDIS_OID_REQUEST@@@Z @ 0x1400E42CC (--$TraceLoggingWriteOidRequestReturnedActivity@$0A@U_NDIS_FILTER_BLOCK@@@@YAXPEBU_NDIS_FILTER_BL.c)
 *     _guard_dispatch_icall @ 0x1400EDFC0 (_guard_dispatch_icall.c)
 *     ?ndisMFinishClose@@_Y2PAGENPNP@@AXPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x140180D10 (-ndisMFinishClose@@_Y2PAGENPNP@@AXPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 */

void __fastcall ndisOidRequestComplete(struct _NDIS_REQ_TRACKER *a1, int a2, __int64 a3, int a4)
{
  __int64 v4; // rsi
  struct _NDIS_OPEN_BLOCK *v6; // r13
  struct _NDIS_OPEN_BLOCK *v7; // rdi
  __int64 v8; // rdx
  int v9; // ecx
  int v10; // r15d
  _DWORD *v11; // r14
  ULONG_PTR v12; // rdx
  ULONG_PTR v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rcx
  int v16; // eax
  unsigned int v17; // eax
  unsigned int v18; // ecx
  _DWORD *v19; // rcx
  void (__fastcall *v20)(struct _NDIS_REQ_TRACKER *); // rax
  __int64 v21; // rbp
  _DWORD *v22; // rdx
  int v23; // eax
  int v24; // edi
  int v25; // r12d
  ULONG_PTR v26; // rdi
  struct _NDIS_FILTER_BLOCK *v27; // rdi
  KIRQL v28; // bp
  _REFERENCE_EX *p_PnPRef; // rdi
  KIRQL v30; // al
  ULONG_PTR RefCountTracker; // r8
  KIRQL v32; // bp
  __int64 v33; // r9
  bool v34; // zf
  unsigned int v35; // esi
  __int64 v36; // rdi
  _NDIS_MINIPORT_BLOCK *v37; // rbp
  int v38; // r14d
  int v39; // edx
  int v40; // r8d
  KIRQL v41; // si
  __int64 v42; // rcx
  int v43; // ecx
  int v44; // eax
  unsigned int v45; // eax
  unsigned int v46; // ecx
  KIRQL v47; // al
  unsigned __int8 j; // cl
  _BYTE *v49; // rdx
  char v50; // al
  ULONG_PTR v51; // rsi
  unsigned int v52; // r9d
  __int64 v53; // rcx
  _NDIS_MINIPORT_BLOCK *MiniportHandle; // rsi
  KIRQL v55; // bp
  struct _NDIS_REFCOUNT_BLOCK *v56; // rax
  ULONG_PTR v57; // r8
  _NDIS_REFCOUNT_TAGGED_ENTRY *Tags; // rdx
  int v59; // edi
  __int64 v60; // rax
  struct _NDIS_MINIPORT_BLOCK **v61; // rsi
  struct _NDIS_MINIPORT_BLOCK *v62; // rsi
  int v63; // r8d
  KIRQL v64; // r15
  int v65; // ecx
  unsigned __int8 NumOverflowTaggedEntries; // r10
  unsigned __int8 k; // cl
  _NDIS_REFCOUNT_TAGGED_ENTRY *v68; // r9
  unsigned __int8 RefCount; // al
  ULONG_PTR v70; // rsi
  ULONG AnyActiveRefTag; // eax
  struct _NDIS_REFCOUNT_BLOCK *v72; // rax
  struct _NDIS_REFCOUNT_BLOCK *v73; // rsi
  struct _NDIS_REFCOUNT_WITH_STACK *v74; // rdi
  unsigned int v75; // r9d
  int v76; // eax
  char v77; // cl
  unsigned int v78; // eax
  int v79; // eax
  unsigned __int64 i; // rax
  int v81; // ecx
  char v82[8]; // [rsp+38h] [rbp-60h]
  char v83; // [rsp+A0h] [rbp+8h]
  int v84; // [rsp+A8h] [rbp+10h]
  struct _NDIS_OPEN_BLOCK *v85; // [rsp+B0h] [rbp+18h]

  v4 = *((_QWORD *)a1 + 4);
  v85 = 0LL;
  v6 = 0LL;
  v83 = 0;
  v7 = *(struct _NDIS_OPEN_BLOCK **)(v4 + 104);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_QWORD *)v82 = *(_QWORD *)a1;
    WPP_RECORDER_SF_Dqqqqd(*((_QWORD *)WPP_GLOBAL_Control + 8), a2, a3, a4);
  }
  v8 = *((_QWORD *)a1 + 4);
  if ( (unsigned int)dword_1401247B0 > 4
    && (qword_1401247C0 & 0x400) != 0
    && (qword_1401247C8 & 0x400) == qword_1401247C8 )
  {
    v76 = *(_DWORD *)(v8 + 88) & 0x30000000;
    if ( v76 != 0x10000000 )
    {
      if ( v76 )
      {
        if ( v76 != 0x20000000 )
          goto LABEL_4;
        goto LABEL_158;
      }
      a3 = *(unsigned int *)(v8 + 32);
      if ( (ndisAzOidTelemetryFilter & 1) != 0 && Ndis::BindEngine::s_NumBindOperationsInProgress )
      {
LABEL_154:
        v77 = 1;
        v78 = *(_DWORD *)(v8 + 88) & 0xCFFFFFFF | 0x20000000;
      }
      else
      {
        if ( (ndisAzOidTelemetryFilter & 2) != 0 )
        {
          for ( i = 0LL; i < 0x40; i += 4LL )
          {
            v81 = *(_DWORD *)((char *)&ndisAzOidTelemetryList + i);
            if ( !v81 )
              break;
            if ( v81 == (_DWORD)a3 )
              goto LABEL_154;
          }
        }
        v77 = 0;
        v78 = *(_DWORD *)(v8 + 88) & 0xCFFFFFFF | 0x10000000;
      }
      *(_DWORD *)(v8 + 88) = v78;
      v8 = *((_QWORD *)a1 + 4);
      if ( v77 )
      {
LABEL_158:
        if ( (*(_DWORD *)(v8 + 88) & 8) != 0 )
          TraceLoggingWriteOidRequestCompletedActivity<2>(a1, v8, a3);
        else
          TraceLoggingWriteOidRequestCompletedActivity<0>(a1, v8, a3);
      }
    }
  }
LABEL_4:
  v9 = *(_DWORD *)(v4 + 88);
  v10 = v9 & 0x200000;
  *(_DWORD *)(v4 + 88) = v9 | 1;
  v11 = (_DWORD *)*((_QWORD *)a1 + 4);
  v84 = v9 & 0x200000;
  if ( (v9 & 0x220) != 0 )
  {
    *((_QWORD *)a1 + 3) = v7;
    v85 = v7;
    if ( (*(_DWORD *)(v4 + 88) & 0x200) == 0 )
      goto LABEL_7;
  }
  else
  {
    *((_QWORD *)a1 + 3) = 0LL;
    if ( v7->Header.Type == 5 )
    {
      v6 = v7;
      *((_QWORD *)a1 + 1) = v7;
      goto LABEL_7;
    }
  }
  v83 = 1;
LABEL_7:
  v12 = *(_QWORD *)a1;
  if ( *(_QWORD *)a1 )
  {
    if ( (*(_BYTE *)(v12 + 32) > 6u || *(_BYTE *)(v12 + 32) == 6 && *(_BYTE *)(v12 + 33) >= 0x28u)
      && !*((_DWORD *)a1 + 10) )
    {
      v44 = v11[1];
      if ( (v44 & 0xFFFFFFFD) != 0 )
      {
        if ( v44 != 12 )
          goto LABEL_19;
        v45 = v11[13];
        v46 = v11[15];
      }
      else
      {
        v45 = v11[12];
        v46 = v11[13];
      }
      if ( v46 > v45 )
        ndisBugCheckEx(0x1DuLL, v12, (ULONG_PTR)v11, 0LL);
    }
  }
  else
  {
    v13 = *((_QWORD *)a1 + 2);
    if ( v13 )
    {
      v14 = *(_QWORD *)(v13 + 16);
      if ( *(_BYTE *)(v14 + 100) > 6u || *(_BYTE *)(v14 + 100) == 6 && *(_BYTE *)(v14 + 101) >= 0x28u )
      {
        v15 = *(_QWORD *)(v13 + 32);
        if ( (*(_BYTE *)(v15 + 32) > 6u || *(_BYTE *)(v15 + 32) == 6 && *(_BYTE *)(v15 + 33) >= 0x28u)
          && !*((_DWORD *)a1 + 10) )
        {
          v16 = v11[1];
          if ( (v16 & 0xFFFFFFFD) != 0 )
          {
            if ( v16 != 12 )
              goto LABEL_19;
            v17 = v11[13];
            v18 = v11[15];
          }
          else
          {
            v17 = v11[12];
            v18 = v11[13];
          }
          if ( v18 > v17 )
            ndisBugCheckEx(0x1DuLL, v13, (ULONG_PTR)v11, 0LL);
        }
      }
    }
  }
LABEL_19:
  v19 = v11;
  if ( (v11[22] & 0x1240004) == 4 )
  {
    v20 = (void (__fastcall *)(struct _NDIS_REQ_TRACKER *))qword_1400FB010[3 * (unsigned int)v11[23]];
    v19 = v11;
    if ( v20 )
    {
      v20(a1);
      v19 = (_DWORD *)*((_QWORD *)a1 + 4);
    }
  }
  v21 = *(_QWORD *)a1;
  v22 = v19;
  if ( *(_QWORD *)a1 && v19[8] == -50265855 && *((_DWORD *)a1 + 10) )
  {
    v47 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v21 + 3872));
    *(_DWORD *)(v21 + 3880) = *(_DWORD *)(v21 + 3884);
    *(_DWORD *)(v21 + 3884) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(v21 + 3872), v47);
    v22 = (_DWORD *)*((_QWORD *)a1 + 4);
  }
  v23 = *(_DWORD *)(v4 + 88);
  v24 = v22[1];
  v25 = v23 & 0x2000000;
  if ( (v23 & 8) != 0 )
  {
    *(_DWORD *)(v4 + 80) = *((_DWORD *)a1 + 10);
    KeSetEvent((PRKEVENT)(v4 + 112), 0, 0);
    *((_QWORD *)a1 + 4) = 0LL;
  }
  else if ( (v23 & 2) != 0 )
  {
    if ( (v23 & 0x100) != 0 )
    {
      v60 = *((_QWORD *)a1 + 2);
      v61 = (struct _NDIS_MINIPORT_BLOCK **)(v60 + 32);
      if ( !v60 )
        v61 = (struct _NDIS_MINIPORT_BLOCK **)a1;
      v62 = *v61;
      v64 = KeAcquireSpinLockRaiseToDpc(&v62->Lock);
      v62->MiniportThread = KeGetCurrentThread();
      if ( v24 == 1 && (v62->Flags & 0x200000) != 0 )
      {
        v65 = *((_DWORD *)a1 + 10);
        if ( v65 && v65 != -1073676276 && *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          *(_DWORD *)v82 = *((_DWORD *)a1 + 10);
          WPP_RECORDER_SF_qDd(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            3u,
            v63,
            0x11u,
            (struct _GUID *)&WPP_405c908af2143fed945d9a560d683c7b_Traceguids,
            (char)v62,
            *(_DWORD *)(*((_QWORD *)a1 + 4) + 32LL),
            *(_QWORD *)v82);
        }
        ndisMResetCompleteStage2(v62);
      }
      v62->Flags &= ~0x1000000u;
      v62->MiniportThread = 0LL;
      KeReleaseSpinLock(&v62->Lock, v64);
      v10 = v84;
    }
    ExFreePoolWithTag(*((PVOID *)a1 + 4), 0);
    *((_QWORD *)a1 + 4) = 0LL;
  }
  v26 = *(_QWORD *)a1;
  if ( !*(_QWORD *)a1 )
  {
    v27 = (struct _NDIS_FILTER_BLOCK *)*((_QWORD *)a1 + 2);
    if ( !v27 )
      goto LABEL_40;
    if ( (*((_DWORD *)a1 + 11) & 1) == 0 )
    {
      v28 = KeAcquireSpinLockRaiseToDpc(&v27->Lock);
      v27->LockThread = KeGetCurrentThread();
      if ( v10 )
      {
        --v27->DirectOidRequestCount;
      }
      else
      {
        FILTER_CLEAR_FLAG(v27, 0x800u);
        v27->PendingOidRequest = 0LL;
      }
      v27->LockThread = 0LL;
      KeReleaseSpinLock(&v27->Lock, v28);
    }
    p_PnPRef = &v27->PnPRef;
    if ( v10 )
    {
      ndisDereferenceRef(&p_PnPRef->SpinLock, 0x10u);
      goto LABEL_40;
    }
    v30 = KeAcquireSpinLockRaiseToDpc(&p_PnPRef->SpinLock);
    RefCountTracker = (ULONG_PTR)p_PnPRef->RefCountTracker;
    v32 = v30;
    if ( RefCountTracker - 2 <= 1 )
      goto LABEL_38;
    if ( RefCountTracker < 2 )
      ndisBugCheckEx(0x1EuLL, 3uLL, RefCountTracker, 0LL);
    if ( *(_BYTE *)(RefCountTracker + 2) <= 0xFu )
      ndisBugCheckEx(0x1EuLL, 2uLL, RefCountTracker, 0xFuLL);
    if ( *(_BYTE *)(RefCountTracker + 1) )
    {
      if ( *(_BYTE *)(RefCountTracker + 1) != 1 )
        goto LABEL_38;
      v51 = RefCountTracker + 968;
      v52 = *(_DWORD *)(RefCountTracker + 1024);
      if ( v52 >> 17 < 0x3FFE && (unsigned __int16)v52 >> 1 == (v52 >> 17) + 1 )
      {
        ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(RefCountTracker + 968));
        *(_DWORD *)(v51 + 56) &= 0x10001u;
        goto LABEL_38;
      }
      if ( (unsigned __int16)v52 >> 1 || (v52 & 1) != 0 )
      {
        ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(RefCountTracker + 968), 0);
        goto LABEL_38;
      }
    }
    else
    {
      v33 = *(_QWORD *)(RefCountTracker + 8);
      if ( v33 )
      {
        for ( j = 0; ; ++j )
        {
          if ( j >= *(_BYTE *)(RefCountTracker + 3) )
            goto LABEL_37;
          v49 = (_BYTE *)(v33 + 2LL * j);
          if ( *v49 == 15 )
          {
            v50 = v49[1];
            if ( v50 )
              break;
          }
        }
        v49[1] = v50 - 1;
        goto LABEL_38;
      }
LABEL_37:
      if ( _bittestandreset((signed __int32 *)(RefCountTracker + 16), 0xFu) )
      {
LABEL_38:
        v34 = p_PnPRef->ReferenceCount-- == 1;
        if ( v34 && !p_PnPRef->ZeroBased )
        {
          v70 = (ULONG_PTR)p_PnPRef->RefCountTracker;
          if ( v70 )
          {
            AnyActiveRefTag = ndisGetAnyActiveRefTag(p_PnPRef->RefCountTracker);
            if ( AnyActiveRefTag != -2 )
              ndisBugCheckEx(0x1EuLL, 4uLL, v70, AnyActiveRefTag);
            v72 = ndisRefCountBlockFromRefCountHandle(v70);
            v73 = v72;
            if ( v72 )
            {
              ndisFreeRefCountAuxiliaryMemory(v72);
              ExFreePoolWithTag(v73, 0);
            }
          }
          p_PnPRef->RefCountTracker = (NDIS_REFCOUNT_HANDLE__ *)1;
        }
        KeReleaseSpinLock(&p_PnPRef->SpinLock, v32);
        goto LABEL_40;
      }
    }
    ndisReportRefcountImbalance(RefCountTracker, 0xFu);
  }
  v41 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v26 + 96));
  *(_QWORD *)(v26 + 520) = KeGetCurrentThread();
  if ( !v10 )
  {
    *(_DWORD *)(v26 + 4420) &= ~2u;
    v42 = *((unsigned int *)a1 + 11);
    if ( (v42 & 1) == 0 )
    {
      if ( (byte_140125101 & 0x40) != 0 )
        McTemplateK0jqxd_EtwWriteTransfer(
          v42,
          &ClearingOidRequest,
          v26 + 4008,
          v26 + 4008,
          *(_DWORD *)(v26 + 4056),
          *(_QWORD *)(v26 + 4024),
          65537);
      *(_DWORD *)(v26 + 4420) &= ~1u;
      *(_QWORD *)(v26 + 2216) = 0LL;
    }
    v43 = *((_DWORD *)a1 + 11);
    if ( (v43 & 3) == 2 && *(_DWORD **)(v26 + 2208) != v11 )
      ndisBugCheckEx(0x26uLL, v26, (ULONG_PTR)v11, 0LL);
    if ( (v43 & 1) == 0 && *(_QWORD *)(v26 + 2208) )
      *(_QWORD *)(v26 + 2208) = 0LL;
  }
  *(_QWORD *)(v26 + 520) = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)(v26 + 96), v41);
  *(_WORD *)(v26 + 1822) = 0;
LABEL_40:
  if ( !v85 || v25 )
    goto LABEL_41;
  if ( !v83 )
  {
    if ( v10 )
    {
      ndisInvokeDirectOidRequestComplete((char)v85, *((_QWORD *)a1 + 4), *((_DWORD *)a1 + 10));
    }
    else
    {
      if ( ShouldEnableOidTracing(*((const struct _NDIS_OID_REQUEST **)a1 + 4)) )
      {
        if ( *(_QWORD *)(v53 + 96) )
          TraceLoggingWriteOidRequestReturnedActivity<0,_NDIS_OPEN_BLOCK>(v85, v53);
        else
          TraceLoggingWriteOidRequestReturnedActivity<2,_NDIS_OPEN_BLOCK>(v85, v53);
      }
      v85->OidRequestCompleteHandler(v85, *((_NDIS_OID_REQUEST **)a1 + 4), *((_DWORD *)a1 + 10));
    }
  }
  MiniportHandle = v85->MiniportHandle;
  v55 = KeAcquireSpinLockRaiseToDpc(&MiniportHandle->Lock);
  MiniportHandle->MiniportThread = KeGetCurrentThread();
  KeAcquireSpinLockAtDpcLevel(&v85->RefCountLock);
  v56 = ndisRefCountBlockFromRefCountHandle((ULONG_PTR)v85->RefCountTracker);
  v57 = (ULONG_PTR)v56;
  if ( !v56 )
    goto LABEL_107;
  if ( v56->NumRefTags <= 6u )
    ndisBugCheckEx(0x1EuLL, 2uLL, (ULONG_PTR)v56, 6uLL);
  if ( v56->Type )
  {
    if ( v56->Type != 1 )
      goto LABEL_107;
    v74 = (struct _NDIS_REFCOUNT_WITH_STACK *)&v56[5].RefWithStack[0].Block.References[4];
    v75 = v56[6].TaggedRefCounts.RefMask[0];
    if ( v75 >> 17 < 0x3FFE && (unsigned __int16)v75 >> 1 == (v75 >> 17) + 1 )
    {
      ndisFreeRefCountStackChain(&v74->Block);
      *((_DWORD *)v74 + 14) &= 0x10001u;
      goto LABEL_107;
    }
    if ( (unsigned __int16)v75 >> 1 || (v75 & 1) != 0 )
    {
      ndisReferenceWithTagStackTrace(v74, 0);
      goto LABEL_107;
    }
LABEL_134:
    ndisReportRefcountImbalance(v57, 6u);
  }
  Tags = v56->TaggedRefCounts.Tags;
  if ( Tags )
  {
    NumOverflowTaggedEntries = v56->NumOverflowTaggedEntries;
    for ( k = 0; ; ++k )
    {
      if ( k >= NumOverflowTaggedEntries )
        goto LABEL_106;
      v68 = &Tags[k];
      if ( v68->Tag == 6 )
      {
        RefCount = v68->RefCount;
        if ( RefCount )
          break;
      }
    }
    v68->RefCount = RefCount - 1;
    goto LABEL_107;
  }
LABEL_106:
  if ( !_bittestandreset((signed __int32 *)(v57 + 16), 6u) )
    goto LABEL_134;
LABEL_107:
  v59 = --v85->References;
  KeReleaseSpinLockFromDpcLevel(&v85->RefCountLock);
  if ( !v59 )
    ndisMFinishClose(v85);
  MiniportHandle->MiniportThread = 0LL;
  KeReleaseSpinLock(&MiniportHandle->Lock, v55);
LABEL_41:
  if ( !v6 || v25 )
    goto LABEL_42;
  if ( (byte_140125101 & 0x40) != 0 )
    McTemplateK0jqxqdq_EtwWriteTransfer(
      *((_QWORD *)a1 + 4),
      (unsigned int)&CompletingOidRequestFilterEx,
      (_DWORD)v6 + 664,
      (_DWORD)v6 + 664,
      (char)v6->ProtSendCompleteHandler,
      *((_QWORD *)v6->OidRequestCompleteHandler + 164),
      *(_DWORD *)(*((_QWORD *)a1 + 4) + 32LL),
      *((_DWORD *)a1 + 10));
  v35 = *((_DWORD *)a1 + 10);
  v36 = *((_QWORD *)a1 + 4);
  if ( v10 )
  {
    ndisFInvokeDirectOidRequestComplete((char)v6, *((_QWORD *)a1 + 4));
    goto LABEL_42;
  }
  v37 = v6->MiniportHandle;
  v38 = *(_DWORD *)(v36 + 32);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qDqd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)v22,
      a3,
      10,
      (struct _GUID *)&WPP_405c908af2143fed945d9a560d683c7b_Traceguids,
      (char)v6,
      v38,
      v36,
      *((_DWORD *)a1 + 10));
  if ( (unsigned int)dword_1401247B0 > 4
    && (qword_1401247C0 & 0x400) != 0
    && (qword_1401247C8 & 0x400) == qword_1401247C8 )
  {
    v79 = *(_DWORD *)(v36 + 88) & 0x30000000;
    if ( v79 != 0x10000000 )
    {
      if ( v79 )
      {
        if ( v79 != 0x20000000 )
          goto LABEL_50;
      }
      else if ( !IsOidTelemetryFilterEnabled(*(_DWORD *)(v36 + 32), (struct _NDIS_OID_REQUEST_RESERVED *)(v36 + 72)) )
      {
        goto LABEL_50;
      }
      if ( *(_QWORD *)(v36 + 96) )
        TraceLoggingWriteOidRequestReturnedActivity<0,_NDIS_FILTER_BLOCK>(v6, v36);
      else
        TraceLoggingWriteOidRequestReturnedActivity<2,_NDIS_FILTER_BLOCK>(v6, v36);
    }
  }
LABEL_50:
  ((void (__fastcall *)(_NDIS_PROTOCOL_BLOCK *, __int64, _QWORD))v37->WakeUpDpcTimer.Timer.TimerListEntry.Blink)(
    v6->ProtocolHandle,
    v36,
    v35);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v39) = 4;
    WPP_RECORDER_SF_qDq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v39,
      v40,
      11,
      (struct _GUID *)&WPP_405c908af2143fed945d9a560d683c7b_Traceguids,
      (char)v6,
      v38,
      v36);
  }
LABEL_42:
  *((_QWORD *)a1 + 4) = 0LL;
}
