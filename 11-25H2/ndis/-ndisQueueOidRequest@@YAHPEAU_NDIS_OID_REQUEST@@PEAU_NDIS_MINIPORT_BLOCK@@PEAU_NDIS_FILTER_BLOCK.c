/*
 * XREFs of ?ndisQueueOidRequest@@YAHPEAU_NDIS_OID_REQUEST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@2@Z @ 0x140013AB0
 * Callers:
 *     ?ndisMOidRequest@@YAHPEAXPEAU_NDIS_OID_REQUEST@@@Z @ 0x140012DA0 (-ndisMOidRequest@@YAHPEAXPEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisQuerySetMiniportEx@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQUEST@@EPEAU_NDIS_FILTER_BLOCK@@3@Z @ 0x140013110 (-ndisQuerySetMiniportEx@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_R.c)
 *     NdisFOidRequest @ 0x140013740 (NdisFOidRequest.c)
 *     ?ndisLegacyRequest@@YAHPEAXPEAU_NDIS_REQUEST@@@Z @ 0x140077B10 (-ndisLegacyRequest@@YAHPEAXPEAU_NDIS_REQUEST@@@Z.c)
 *     ?ndisProcessRequestAsync@@YAXPEAX@Z @ 0x1400C4910 (-ndisProcessRequestAsync@@YAXPEAX@Z.c)
 * Callees:
 *     ?ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x140007E60 (-ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     ?ndisReferenceRefEx@@YAEPEAU_REFERENCE_EX@@EPEAW4_NDIS_REFERENCE_STATUS@@@Z @ 0x14000E770 (-ndisReferenceRefEx@@YAEPEAU_REFERENCE_EX@@EPEAW4_NDIS_REFERENCE_STATUS@@@Z.c)
 *     NdisReferenceWithTag @ 0x14000E820 (NdisReferenceWithTag.c)
 *     WPP_RECORDER_SF_qL @ 0x14000EA50 (WPP_RECORDER_SF_qL.c)
 *     ?ndisReportRefcountImbalance@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@E@Z @ 0x140010990 (-ndisReportRefcountImbalance@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@E@Z.c)
 *     WPP_RECORDER_SF_q @ 0x140010C40 (WPP_RECORDER_SF_q.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x140010F10 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 *     ?ndisQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQUEST@@EPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1400130E0 (-ndisQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQ.c)
 *     ?ndisOidTranslateBetweenOids@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EPEAU_NDIS_OID_REQUEST@@@Z @ 0x140014A40 (-ndisOidTranslateBetweenOids@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EPEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisQueueRequestWorkItem@@YAHPEAXPEAU_NDIS_OID_REQUEST@@I@Z @ 0x140015040 (-ndisQueueRequestWorkItem@@YAHPEAXPEAU_NDIS_OID_REQUEST@@I@Z.c)
 *     NdisFreeRefCount @ 0x140015A20 (NdisFreeRefCount.c)
 *     WPP_RECORDER_SF_Dq @ 0x140016A70 (WPP_RECORDER_SF_Dq.c)
 *     ?ndisMDoOidRequest@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400229C0 (-ndisMDoOidRequest@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x140096020 (-ndisBugCheckEx@@YAX_K000@Z.c)
 *     ??$TraceLoggingWriteOidRequestQueuedActivity@$00U_NDIS_MINIPORT_BLOCK@@@@YAXPEBU_NDIS_MINIPORT_BLOCK@@PEBU_NDIS_OID_REQUEST@@@Z @ 0x140099430 (--$TraceLoggingWriteOidRequestQueuedActivity@$00U_NDIS_MINIPORT_BLOCK@@@@YAXPEBU_NDIS_MINIPORT_B.c)
 *     ??$TraceLoggingWriteOidRequestQueuedActivity@$0A@U_NDIS_FILTER_BLOCK@@@@YAXPEBU_NDIS_FILTER_BLOCK@@PEBU_NDIS_OID_REQUEST@@@Z @ 0x140099560 (--$TraceLoggingWriteOidRequestQueuedActivity@$0A@U_NDIS_FILTER_BLOCK@@@@YAXPEBU_NDIS_FILTER_BLOC.c)
 *     ??$TraceLoggingWriteOidRequestQueuedActivity@$0A@U_NDIS_MINIPORT_BLOCK@@@@YAXPEBU_NDIS_MINIPORT_BLOCK@@PEBU_NDIS_OID_REQUEST@@@Z @ 0x140099690 (--$TraceLoggingWriteOidRequestQueuedActivity@$0A@U_NDIS_MINIPORT_BLOCK@@@@YAXPEBU_NDIS_MINIPORT_.c)
 *     ??$TraceLoggingWriteOidRequestQueuedActivity@$00U_NDIS_FILTER_BLOCK@@@@YAXPEBU_NDIS_FILTER_BLOCK@@PEBU_NDIS_OID_REQUEST@@@Z @ 0x1400997C0 (--$TraceLoggingWriteOidRequestQueuedActivity@$00U_NDIS_FILTER_BLOCK@@@@YAXPEBU_NDIS_FILTER_BLOCK.c)
 *     __security_check_cookie @ 0x1400EDF40 (__security_check_cookie.c)
 *     memset @ 0x1400EE380 (memset.c)
 */

__int64 __fastcall ndisQueueOidRequest(
        struct _NDIS_OID_REQUEST *a1,
        struct _NDIS_MINIPORT_BLOCK *a2,
        struct _NDIS_FILTER_BLOCK *a3,
        struct _NDIS_MINIPORT_BLOCK *a4)
{
  char *v7; // r13
  NDIS_OID Oid; // ecx
  int *v10; // rdx
  unsigned __int64 *p_Lock; // r12
  KIRQL v12; // r13
  struct _NDIS_MINIPORT_BLOCK *NextRequestHandle; // rdi
  char v14; // r14
  KIRQL v15; // r15
  NDIS_REFCOUNT_HANDLE__ *RefCountTracker; // rcx
  unsigned int ReferenceCount; // ecx
  KIRQL v18; // al
  _LIST_ENTRY *v19; // r14
  KIRQL v20; // r13
  _LIST_ENTRY *p_OidRequestList; // r15
  _LIST_ENTRY *n; // rax
  _LIST_ENTRY *Blink; // rax
  unsigned int v24; // esi
  KIRQL v26; // r15
  unsigned __int16 v27; // cx
  _REFERENCE_EX *p_DeferredContext; // r15
  KIRQL v29; // al
  unsigned __int16 SystemArgument1; // cx
  KIRQL v31; // al
  NDIS_REFCOUNT_HANDLE__ *SystemArgument2; // r8
  KIRQL v33; // r14
  __int64 v34; // r9
  bool v35; // zf
  KIRQL v36; // dl
  KSPIN_LOCK *v37; // r14
  KIRQL v38; // al
  struct _NDIS_REFCOUNT_BLOCK *v39; // rcx
  KIRQL v40; // di
  KIRQL v41; // al
  KSPIN_LOCK *v42; // r15
  _QWORD *v43; // rdi
  UCHAR *NdisReserved; // r13
  UCHAR **v45; // rdi
  UCHAR *j; // rax
  UCHAR **v47; // rax
  PVOID v48; // rdi
  KIRQL v49; // bl
  KIRQL v50; // al
  ULONG_PTR v51; // r8
  KIRQL v52; // bl
  __int64 v53; // r9
  int v54; // edx
  KIRQL v55; // al
  NDIS_REFCOUNT_HANDLE__ *v56; // r8
  KIRQL v57; // r15
  __int64 v58; // r9
  unsigned int v59; // r14d
  int v60; // edx
  unsigned __int8 i; // cl
  _BYTE *v62; // rdx
  char v63; // al
  unsigned __int8 jj; // cl
  _BYTE *v65; // rdx
  char v66; // al
  unsigned __int8 m; // cl
  _BYTE *v68; // rdx
  char v69; // al
  struct _KEVENT *RemoveReadyEvent; // rcx
  NDIS_REFCOUNT_HANDLE__ *v71; // r14
  unsigned int v72; // edx
  NDIS_REFCOUNT_HANDLE__ *v73; // r14
  unsigned int v74; // edx
  ULONG_PTR v75; // rdi
  unsigned int v76; // edx
  unsigned __int8 kk; // cl
  _BYTE *v78; // rdx
  char v79; // al
  char *v80; // rbx
  KIRQL v81; // al
  ULONG_PTR v82; // r8
  KIRQL v83; // di
  __int64 v84; // r9
  ULONG_PTR v85; // r14
  unsigned int v86; // edx
  char v87; // cl
  unsigned int v88; // eax
  char v89; // cl
  unsigned int v90; // eax
  int v91; // eax
  int v92; // eax
  unsigned __int64 k; // rax
  unsigned __int64 ii; // rax
  int v95; // ecx
  int v96; // ecx
  char v97[8]; // [rsp+30h] [rbp-D0h]
  KIRQL v98; // [rsp+40h] [rbp-C0h]
  KIRQL v99; // [rsp+40h] [rbp-C0h]
  KIRQL v100; // [rsp+40h] [rbp-C0h]
  int v101; // [rsp+44h] [rbp-BCh] BYREF
  PVOID Parameter; // [rsp+48h] [rbp-B8h]
  _BYTE v103[248]; // [rsp+50h] [rbp-B0h] BYREF

  v7 = 0LL;
  Parameter = 0LL;
  memset(v103, 0, sizeof(v103));
  Oid = a1->DATA.QUERY_INFORMATION.Oid;
  v10 = &WPP_RECORDER_INITIALIZED;
  v101 = 0;
  if ( Oid == 66055 )
  {
    if ( a2->MajorNdisVersion < 6u )
    {
      memset(&v103[112], 0, 136);
      memset(v103, 0, 104);
      *(_QWORD *)&v103[104] = &ndisIntReqNsi;
      *(_DWORD *)&v103[88] = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 8)) | 8;
      EtwActivityIdControl(3u, (LPGUID)&v103[168]);
      *(_DWORD *)v103 = 15466902;
      *(_QWORD *)&v103[40] = &v101;
      *(_DWORD *)&v103[32] = 65799;
      *(_QWORD *)&v103[4] = 2LL;
      *(_DWORD *)&v103[48] = 4;
      ndisQuerySetMiniport(a2, 0LL, (struct _NDIS_OID_REQUEST *)v103, 0, 0LL);
      *(_QWORD *)&v103[104] = &ndisIntReqNsi;
      memset(&v103[112], 0, 136);
      memset(v103, 0, 104);
      *(_DWORD *)&v103[88] = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 8)) | 8;
      EtwActivityIdControl(3u, (LPGUID)&v103[168]);
      *(_DWORD *)v103 = 15466902;
      *(_QWORD *)&v103[40] = &v101;
      *(_DWORD *)&v103[32] = 65812;
      *(_QWORD *)&v103[4] = 2LL;
      *(_DWORD *)&v103[48] = 4;
      ndisQuerySetMiniport(a2, 0LL, (struct _NDIS_OID_REQUEST *)v103, 0, 0LL);
    }
  }
  else if ( Oid == 65798 || Oid == 65799 || Oid == 65812 || (*(_DWORD *)&a1->NdisReserved[16] & 0x100000) != 0 )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v10) = 4;
      WPP_RECORDER_SF_Dq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        (int)v10,
        (int)a3,
        203,
        (struct _GUID *)&WPP_4b0223d673a33a9431a2fd521e3a3c3a_Traceguids,
        Oid,
        (char)a1);
    }
    NextRequestHandle = a2;
    p_Lock = &a2->Lock;
    goto LABEL_9;
  }
  p_Lock = &a2->Lock;
  v12 = KeAcquireSpinLockRaiseToDpc(&a2->Lock);
  a2->MiniportThread = KeGetCurrentThread();
  if ( a3 )
    NextRequestHandle = (struct _NDIS_MINIPORT_BLOCK *)a3->NextRequestHandle;
  else
    NextRequestHandle = (struct _NDIS_MINIPORT_BLOCK *)a2->Next.RequestHandle;
  if ( !a4 )
    goto LABEL_7;
  p_DeferredContext = (_REFERENCE_EX *)&a4->WakeUpDpcTimer.Dpc.DeferredContext;
  v29 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&a4->WakeUpDpcTimer.Dpc.DeferredContext);
  v98 = v29;
  if ( !BYTE2(a4->WakeUpDpcTimer.Dpc.SystemArgument1) )
  {
    SystemArgument1 = (unsigned __int16)a4->WakeUpDpcTimer.Dpc.SystemArgument1;
    if ( SystemArgument1 < 0xFFEBu )
    {
      LOWORD(a4->WakeUpDpcTimer.Dpc.SystemArgument1) = SystemArgument1 + 1;
      NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)a4->WakeUpDpcTimer.Dpc.SystemArgument2, 0x11u);
      KeReleaseSpinLock((PKSPIN_LOCK)&a4->WakeUpDpcTimer.Dpc.DeferredContext, v98);
      if ( a4->BaseMiniport->WakeUpDpcTimer.Timer.TimerListEntry.Flink )
      {
        NextRequestHandle = a4;
      }
      else if ( a4->Unused2 )
      {
        NextRequestHandle = (struct _NDIS_MINIPORT_BLOCK *)a4->Unused2;
      }
      v31 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&a4->WakeUpDpcTimer.Dpc.DeferredContext);
      SystemArgument2 = (NDIS_REFCOUNT_HANDLE__ *)a4->WakeUpDpcTimer.Dpc.SystemArgument2;
      v33 = v31;
      v99 = v31;
      if ( (unsigned __int64)SystemArgument2 - 2 <= 1 )
        goto LABEL_46;
      if ( (unsigned __int64)SystemArgument2 < 2 )
        ndisBugCheckEx(0x1EuLL, 3uLL, (ULONG_PTR)SystemArgument2, 0LL);
      if ( *((_BYTE *)SystemArgument2 + 2) <= 0x11u )
        ndisBugCheckEx(0x1EuLL, 2uLL, (ULONG_PTR)SystemArgument2, 0x11uLL);
      if ( *((_BYTE *)SystemArgument2 + 1) )
      {
        if ( *((_BYTE *)SystemArgument2 + 1) != 1 )
          goto LABEL_46;
        v71 = SystemArgument2 + 274;
        v72 = *((_DWORD *)SystemArgument2 + 288);
        if ( v72 >> 17 < 0x3FFE && (unsigned __int16)v72 >> 1 == (v72 >> 17) + 1 )
        {
          ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(SystemArgument2 + 274));
          *((_DWORD *)v71 + 14) &= 0x10001u;
          v33 = v99;
          goto LABEL_46;
        }
        if ( (unsigned __int16)v72 >> 1 || (v72 & 1) != 0 )
        {
          ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(SystemArgument2 + 274), 0);
          v33 = v99;
          goto LABEL_46;
        }
      }
      else
      {
        v34 = *((_QWORD *)SystemArgument2 + 1);
        if ( v34 )
        {
          for ( i = 0; ; ++i )
          {
            if ( i >= *((_BYTE *)SystemArgument2 + 3) )
              goto LABEL_45;
            v62 = (_BYTE *)(v34 + 2LL * i);
            if ( *v62 == 17 )
            {
              v63 = v62[1];
              if ( v63 )
                break;
            }
          }
          v62[1] = v63 - 1;
          goto LABEL_46;
        }
LABEL_45:
        if ( _bittestandreset((signed __int32 *)SystemArgument2 + 4, 0x11u) )
        {
LABEL_46:
          v35 = p_DeferredContext->ReferenceCount-- == 1;
          if ( v35 && !p_DeferredContext->ZeroBased )
          {
            NdisFreeRefCount((ULONG_PTR)p_DeferredContext->RefCountTracker);
            p_DeferredContext->RefCountTracker = (NDIS_REFCOUNT_HANDLE__ *)1;
          }
          v36 = v33;
          goto LABEL_48;
        }
      }
      ndisReportRefcountImbalance((ULONG_PTR)SystemArgument2, 0x11u);
    }
    ndisRefCountReferenceCountOverflow = 1;
  }
  v36 = v29;
LABEL_48:
  KeReleaseSpinLock(&p_DeferredContext->SpinLock, v36);
LABEL_7:
  if ( NextRequestHandle->Header.Type != 5 )
    goto LABEL_8;
  while ( 1 )
  {
    Parameter = NextRequestHandle;
    v26 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&NextRequestHandle->WakeUpDpcTimer.Dpc.DeferredContext);
    if ( !BYTE2(NextRequestHandle->WakeUpDpcTimer.Dpc.SystemArgument1) )
      break;
LABEL_134:
    KeReleaseSpinLock((PKSPIN_LOCK)&NextRequestHandle->WakeUpDpcTimer.Dpc.DeferredContext, v26);
    NextRequestHandle = (struct _NDIS_MINIPORT_BLOCK *)NextRequestHandle->Unused2;
    Parameter = 0LL;
    if ( NextRequestHandle->Header.Type != 5 )
      goto LABEL_8;
  }
  v27 = (unsigned __int16)NextRequestHandle->WakeUpDpcTimer.Dpc.SystemArgument1;
  if ( v27 >= 0xFFEBu )
  {
    ndisRefCountReferenceCountOverflow = 1;
    goto LABEL_134;
  }
  LOWORD(NextRequestHandle->WakeUpDpcTimer.Dpc.SystemArgument1) = v27 + 1;
  NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)NextRequestHandle->WakeUpDpcTimer.Dpc.SystemArgument2, 0xFu);
  KeReleaseSpinLock((PKSPIN_LOCK)&NextRequestHandle->WakeUpDpcTimer.Dpc.DeferredContext, v26);
LABEL_8:
  a2->MiniportThread = 0LL;
  KeReleaseSpinLock(&a2->Lock, v12);
  v7 = (char *)Parameter;
LABEL_9:
  if ( NextRequestHandle->Header.Type == 17 )
    ndisOidTranslateBetweenOids(a2, (unsigned __int8)v10, a1);
  if ( KeGetCurrentIrql() || !PsIsSystemThread(KeGetCurrentThread()) )
  {
    v24 = ndisQueueRequestWorkItem(NextRequestHandle, a1, NextRequestHandle->Header.Type);
    goto LABEL_30;
  }
  if ( v7 )
  {
    v37 = (KSPIN_LOCK *)(v7 + 312);
    v38 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v7 + 39);
    v39 = (struct _NDIS_REFCOUNT_BLOCK *)*((_QWORD *)v7 + 41);
    ++*((_WORD *)v7 + 160);
    v40 = v38;
    NdisReferenceWithTag(v39, 0xDu);
    KeReleaseSpinLock((PKSPIN_LOCK)v7 + 39, v40);
    v41 = KeAcquireSpinLockRaiseToDpc(p_Lock);
    v42 = (KSPIN_LOCK *)(v7 + 144);
    a2->MiniportThread = KeGetCurrentThread();
    v100 = v41;
    KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)v7 + 18);
    v43 = Parameter;
    *((_QWORD *)v7 + 19) = KeGetCurrentThread();
    NdisReserved = a1->NdisReserved;
    *(_QWORD *)a1->NdisReserved = 0LL;
    *(_QWORD *)&a1->NdisReserved[8] = 0LL;
    if ( (*(_DWORD *)(v43[4] + 124LL) & 0x100) != 0 )
    {
      v43[19] = 0LL;
      v24 = -1073741823;
      KeReleaseSpinLockFromDpcLevel(v42);
      a2->MiniportThread = 0LL;
      KeReleaseSpinLock(p_Lock, v100);
      goto LABEL_60;
    }
    v45 = (UCHAR **)(v43 + 20);
    for ( j = *v45; j != (UCHAR *)v45; j = *(UCHAR **)j )
    {
      if ( j == NdisReserved )
      {
        *((_QWORD *)Parameter + 19) = 0LL;
        KeReleaseSpinLockFromDpcLevel(v42);
        a2->MiniportThread = 0LL;
        KeReleaseSpinLock(p_Lock, v100);
        v24 = -1073741823;
        goto LABEL_60;
      }
    }
    if ( (unsigned int)dword_1401247B0 > 4
      && (qword_1401247C0 & 0x400) != 0
      && (qword_1401247C8 & 0x400) == qword_1401247C8 )
    {
      v92 = *(_DWORD *)&a1->NdisReserved[16] & 0x30000000;
      if ( v92 != 0x10000000 )
      {
        if ( !v92 )
        {
          if ( (ndisAzOidTelemetryFilter & 1) != 0 && Ndis::BindEngine::s_NumBindOperationsInProgress )
          {
LABEL_191:
            v89 = 1;
            v90 = *(_DWORD *)&a1->NdisReserved[16] & 0xCFFFFFFF | 0x20000000;
          }
          else
          {
            if ( (ndisAzOidTelemetryFilter & 2) != 0 )
            {
              for ( k = 0LL; k < 0x40; k += 4LL )
              {
                v95 = *(_DWORD *)((char *)&ndisAzOidTelemetryList + k);
                if ( !v95 )
                  break;
                if ( v95 == a1->DATA.QUERY_INFORMATION.Oid )
                  goto LABEL_191;
              }
            }
            v89 = 0;
            v90 = *(_DWORD *)&a1->NdisReserved[16] & 0xCFFFFFFF | 0x10000000;
          }
          *(_DWORD *)&a1->NdisReserved[16] = v90;
          if ( !v89 )
            goto LABEL_54;
          goto LABEL_193;
        }
        if ( v92 == 0x20000000 )
        {
LABEL_193:
          if ( *(_QWORD *)&a1->NdisReserved[24] )
            TraceLoggingWriteOidRequestQueuedActivity<0,_NDIS_FILTER_BLOCK>(Parameter, a1);
          else
            TraceLoggingWriteOidRequestQueuedActivity<1,_NDIS_FILTER_BLOCK>(Parameter, a1);
        }
      }
    }
LABEL_54:
    v47 = (UCHAR **)v45[1];
    if ( *v47 != (UCHAR *)v45 )
      goto LABEL_28;
    *(_QWORD *)NdisReserved = v45;
    *(_QWORD *)&a1->NdisReserved[8] = v47;
    *v47 = NdisReserved;
    v45[1] = NdisReserved;
    v48 = Parameter;
    *((_QWORD *)Parameter + 19) = 0LL;
    KeReleaseSpinLockFromDpcLevel(v42);
    a2->MiniportThread = 0LL;
    KeReleaseSpinLock(p_Lock, v100);
    if ( KeExpandKernelStackAndCalloutEx(ndisFDoOidRequestInternal, v48, (unsigned int)Size, 0, 0LL) < 0 )
    {
      v49 = KeAcquireSpinLockRaiseToDpc(v42);
      *((_QWORD *)v48 + 19) = KeGetCurrentThread();
      *((_BYTE *)v48 + 232) = 1;
      if ( !*((_BYTE *)v48 + 224) )
      {
        v101 = 0;
        ndisReferenceRefEx((PKSPIN_LOCK)v48 + 9, 1u, (enum _NDIS_REFERENCE_STATUS *)&v101);
        *((_BYTE *)v48 + 224) = 1;
        ExQueueWorkItem((PWORK_QUEUE_ITEM)v48 + 6, NormalWorkQueue);
      }
      *((_QWORD *)v48 + 19) = 0LL;
      KeReleaseSpinLock(v42, v49);
    }
    v24 = 259;
LABEL_60:
    v50 = KeAcquireSpinLockRaiseToDpc(v37);
    v51 = v37[2];
    v52 = v50;
    if ( v51 - 2 <= 1 )
      goto LABEL_66;
    if ( v51 < 2 )
      ndisBugCheckEx(0x1EuLL, 3uLL, v51, 0LL);
    if ( *(_BYTE *)(v51 + 2) <= 0xDu )
      ndisBugCheckEx(0x1EuLL, 2uLL, v51, 0xDuLL);
    if ( *(_BYTE *)(v51 + 1) )
    {
      if ( *(_BYTE *)(v51 + 1) != 1 )
        goto LABEL_66;
      v75 = v51 + 840;
      v76 = *(_DWORD *)(v51 + 896);
      if ( v76 >> 17 < 0x3FFE && (unsigned __int16)v76 >> 1 == (v76 >> 17) + 1 )
      {
        ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v51 + 840));
        *(_DWORD *)(v75 + 56) &= 0x10001u;
        goto LABEL_66;
      }
      if ( (unsigned __int16)v76 >> 1 || (v76 & 1) != 0 )
      {
        ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v51 + 840), 0);
        goto LABEL_66;
      }
    }
    else
    {
      v53 = *(_QWORD *)(v51 + 8);
      if ( v53 )
      {
        for ( m = 0; ; ++m )
        {
          if ( m >= *(_BYTE *)(v51 + 3) )
            goto LABEL_65;
          v68 = (_BYTE *)(v53 + 2LL * m);
          if ( *v68 == 13 )
          {
            v69 = v68[1];
            if ( v69 )
              break;
          }
        }
        v68[1] = v69 - 1;
        goto LABEL_66;
      }
LABEL_65:
      if ( _bittestandreset((signed __int32 *)(v51 + 16), 0xDu) )
      {
LABEL_66:
        v35 = (*((_WORD *)v37 + 4))-- == 1;
        if ( v35 && !*((_BYTE *)v37 + 11) )
        {
          NdisFreeRefCount(v37[2]);
          v37[2] = 1LL;
        }
        KeReleaseSpinLock(v37, v52);
        goto LABEL_30;
      }
    }
    ndisReportRefcountImbalance(v51, 0xDu);
  }
  v14 = 1;
  v15 = KeAcquireSpinLockRaiseToDpc(&a2->Ref.SpinLock);
  if ( a2->Ref.Closing )
    goto LABEL_19;
  RefCountTracker = a2->RefCountTracker;
  if ( RefCountTracker )
    NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)RefCountTracker, 0x48u);
  ReferenceCount = a2->Ref.ReferenceCount;
  a2->Ref.ReferenceCount = ReferenceCount + 1;
  if ( ReferenceCount == -1 )
  {
    a2->Ref.ReferenceCount = -1;
LABEL_19:
    v14 = 0;
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v97 = a2->Ref.ReferenceCount;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x14u,
      0xCu,
      (struct _GUID *)&WPP_72d2fa87a3a93fc51dc3e318202acea4_Traceguids,
      (char)a2,
      *(_QWORD *)v97);
  }
  KeReleaseSpinLock(&a2->Ref.SpinLock, v15);
  if ( v14 )
  {
    v18 = KeAcquireSpinLockRaiseToDpc(p_Lock);
    v19 = (_LIST_ENTRY *)a1->NdisReserved;
    a2->MiniportThread = KeGetCurrentThread();
    *(_QWORD *)a1->NdisReserved = 0LL;
    v20 = v18;
    *(_QWORD *)&a1->NdisReserved[8] = 0LL;
    if ( (a2->PnPFlags & 0x100) == 0 )
    {
      p_OidRequestList = &a2->OidRequestList;
      for ( n = a2->OidRequestList.Flink; n != p_OidRequestList; n = n->Flink )
      {
        if ( n == v19 )
        {
          a2->MiniportThread = 0LL;
          KeReleaseSpinLock(p_Lock, v20);
          v24 = -1073741823;
          goto LABEL_78;
        }
      }
      if ( (unsigned int)dword_1401247B0 > 4
        && (qword_1401247C0 & 0x400) != 0
        && (qword_1401247C8 & 0x400) == qword_1401247C8 )
      {
        v91 = *(_DWORD *)&a1->NdisReserved[16] & 0x30000000;
        if ( v91 != 0x10000000 )
        {
          if ( v91 )
          {
            if ( v91 == 0x20000000 )
              goto LABEL_183;
          }
          else
          {
            if ( (ndisAzOidTelemetryFilter & 1) != 0 && Ndis::BindEngine::s_NumBindOperationsInProgress )
            {
              v87 = 1;
              v88 = *(_DWORD *)&a1->NdisReserved[16] & 0xCFFFFFFF | 0x20000000;
            }
            else
            {
              if ( (ndisAzOidTelemetryFilter & 2) != 0 )
              {
                for ( ii = 0LL; ii < 0x40; ii += 4LL )
                {
                  v96 = *(_DWORD *)((char *)&ndisAzOidTelemetryList + ii);
                  if ( !v96 )
                    break;
                  if ( v96 == a1->DATA.QUERY_INFORMATION.Oid )
                  {
                    v87 = 1;
                    v88 = *(_DWORD *)&a1->NdisReserved[16] & 0xCFFFFFFF | 0x20000000;
                    goto LABEL_182;
                  }
                }
              }
              v87 = 0;
              v88 = *(_DWORD *)&a1->NdisReserved[16] & 0xCFFFFFFF | 0x10000000;
            }
LABEL_182:
            *(_DWORD *)&a1->NdisReserved[16] = v88;
            if ( v87 )
            {
LABEL_183:
              if ( *(_QWORD *)&a1->NdisReserved[24] )
                TraceLoggingWriteOidRequestQueuedActivity<0,_NDIS_MINIPORT_BLOCK>(a2, a1);
              else
                TraceLoggingWriteOidRequestQueuedActivity<1,_NDIS_MINIPORT_BLOCK>(a2, a1);
            }
          }
        }
      }
      Blink = a2->OidRequestList.Blink;
      if ( Blink->Flink == p_OidRequestList )
      {
        v19->Flink = p_OidRequestList;
        *(_QWORD *)&a1->NdisReserved[8] = Blink;
        Blink->Flink = v19;
        a2->OidRequestList.Blink = v19;
        a2->MiniportThread = 0LL;
        KeReleaseSpinLock(p_Lock, v20);
        ndisMDoOidRequest(a2);
        v24 = 259;
        goto LABEL_78;
      }
LABEL_28:
      __fastfail(3u);
    }
    a2->MiniportThread = 0LL;
    v24 = -1073741823;
    KeReleaseSpinLock(p_Lock, v18);
LABEL_78:
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v54) = 4;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v54,
        20,
        25,
        (struct _GUID *)&WPP_524f971b55653c5011f9984343ca9332_Traceguids,
        (char)a2);
    }
    v55 = KeAcquireSpinLockRaiseToDpc(&a2->Ref.SpinLock);
    v56 = a2->RefCountTracker;
    v57 = v55;
    if ( v56 && (unsigned __int64)v56 - 2 > 1 )
    {
      if ( v56 == (NDIS_REFCOUNT_HANDLE__ *)1 )
        ndisBugCheckEx(0x1EuLL, 3uLL, 1uLL, 0LL);
      if ( *((_BYTE *)v56 + 2) <= 0x48u )
        ndisBugCheckEx(0x1EuLL, 2uLL, (ULONG_PTR)v56, 0x48uLL);
      if ( *((_BYTE *)v56 + 1) )
      {
        if ( *((_BYTE *)v56 + 1) == 1 )
        {
          v73 = v56 + 1154;
          v74 = *((_DWORD *)v56 + 1168);
          if ( v74 >> 17 < 0x3FFE && (unsigned __int16)v74 >> 1 == (v74 >> 17) + 1 )
          {
            ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v56 + 1154));
            *((_DWORD *)v73 + 14) &= 0x10001u;
          }
          else
          {
            if ( !((unsigned __int16)v74 >> 1) && (v74 & 1) == 0 )
              goto LABEL_114;
            ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v56 + 1154), 0);
          }
        }
      }
      else
      {
        v58 = *((_QWORD *)v56 + 1);
        if ( !v58 )
        {
LABEL_86:
          if ( _bittestandreset((signed __int32 *)v56 + 6, 8u) )
            goto LABEL_87;
LABEL_114:
          ndisReportRefcountImbalance((ULONG_PTR)v56, 0x48u);
        }
        for ( jj = 0; ; ++jj )
        {
          if ( jj >= *((_BYTE *)v56 + 3) )
            goto LABEL_86;
          v65 = (_BYTE *)(v58 + 2LL * jj);
          if ( *v65 == 72 )
          {
            v66 = v65[1];
            if ( v66 )
              break;
          }
        }
        v65[1] = v66 - 1;
      }
    }
LABEL_87:
    v59 = a2->Ref.ReferenceCount - 1;
    a2->Ref.ReferenceCount = v59;
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      *(_DWORD *)v97 = a2->Ref.ReferenceCount;
      WPP_RECORDER_SF_qL(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0x14u,
        0xEu,
        (struct _GUID *)&WPP_72d2fa87a3a93fc51dc3e318202acea4_Traceguids,
        (char)a2,
        *(_QWORD *)v97);
    }
    KeReleaseSpinLock(&a2->Ref.SpinLock, v57);
    if ( !v59 )
    {
      RemoveReadyEvent = a2->RemoveReadyEvent;
      if ( RemoveReadyEvent )
        KeSetEvent(RemoveReadyEvent, 0, 0);
    }
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v60) = 4;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v60,
        20,
        26,
        (struct _GUID *)&WPP_524f971b55653c5011f9984343ca9332_Traceguids,
        (char)a2);
    }
LABEL_30:
    if ( v24 != 259 && Parameter )
    {
      v80 = (char *)Parameter + 312;
      v81 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Parameter + 39);
      v82 = *((_QWORD *)v80 + 2);
      v83 = v81;
      if ( v82 - 2 > 1 )
      {
        if ( v82 < 2 )
          ndisBugCheckEx(0x1EuLL, 3uLL, v82, 0LL);
        if ( *(_BYTE *)(v82 + 2) <= 0xFu )
          ndisBugCheckEx(0x1EuLL, 2uLL, v82, 0xFuLL);
        if ( *(_BYTE *)(v82 + 1) )
        {
          if ( *(_BYTE *)(v82 + 1) != 1 )
            goto LABEL_165;
          v85 = v82 + 968;
          v86 = *(_DWORD *)(v82 + 1024);
          if ( v86 >> 17 < 0x3FFE && (unsigned __int16)v86 >> 1 == (v86 >> 17) + 1 )
          {
            ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v82 + 968));
            *(_DWORD *)(v85 + 56) &= 0x10001u;
            goto LABEL_165;
          }
          if ( (unsigned __int16)v86 >> 1 || (v86 & 1) != 0 )
          {
            ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v82 + 968), 0);
            goto LABEL_165;
          }
          goto LABEL_168;
        }
        v84 = *(_QWORD *)(v82 + 8);
        if ( !v84 )
        {
LABEL_164:
          if ( _bittestandreset((signed __int32 *)(v82 + 16), 0xFu) )
            goto LABEL_165;
LABEL_168:
          ndisReportRefcountImbalance(v82, 0xFu);
        }
        for ( kk = 0; ; ++kk )
        {
          if ( kk >= *(_BYTE *)(v82 + 3) )
            goto LABEL_164;
          v78 = (_BYTE *)(v84 + 2LL * kk);
          if ( *v78 == 15 )
          {
            v79 = v78[1];
            if ( v79 )
              break;
          }
        }
        v78[1] = v79 - 1;
      }
LABEL_165:
      v35 = (*((_WORD *)v80 + 4))-- == 1;
      if ( v35 && !v80[11] )
      {
        NdisFreeRefCount(*((_QWORD *)v80 + 2));
        *((_QWORD *)v80 + 2) = 1LL;
      }
      KeReleaseSpinLock((PKSPIN_LOCK)v80, v83);
    }
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return v24;
}
