/*
 * XREFs of ?ndisQueueOidRequest@@YAHPEAU_NDIS_OID_REQUEST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@2@Z @ 0x140008A10
 * Callers:
 *     ?ndisLegacyRequest@@YAHPEAXPEAU_NDIS_REQUEST@@@Z @ 0x140007950 (-ndisLegacyRequest@@YAHPEAXPEAU_NDIS_REQUEST@@@Z.c)
 *     ?ndisMOidRequest@@YAHPEAXPEAU_NDIS_OID_REQUEST@@@Z @ 0x140008340 (-ndisMOidRequest@@YAHPEAXPEAU_NDIS_OID_REQUEST@@@Z.c)
 *     NdisFOidRequest @ 0x1400086A0 (NdisFOidRequest.c)
 *     ?ndisQuerySetMiniportEx@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQUEST@@EPEAU_NDIS_FILTER_BLOCK@@3@Z @ 0x14000AD80 (-ndisQuerySetMiniportEx@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_R.c)
 *     ?ndisProcessRequestAsync@@YAXPEAX@Z @ 0x1400BD6E0 (-ndisProcessRequestAsync@@YAXPEAX@Z.c)
 * Callees:
 *     NdisFreeRefCount @ 0x140007F90 (NdisFreeRefCount.c)
 *     ?ndisOidTranslateBetweenOids@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EPEAU_NDIS_OID_REQUEST@@@Z @ 0x1400099A0 (-ndisOidTranslateBetweenOids@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EPEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisQueueRequestWorkItem@@YAHPEAXPEAU_NDIS_OID_REQUEST@@I@Z @ 0x140009FA0 (-ndisQueueRequestWorkItem@@YAHPEAXPEAU_NDIS_OID_REQUEST@@I@Z.c)
 *     ?ndisMDoOidRequest@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14000A5A0 (-ndisMDoOidRequest@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQUEST@@EPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x14000AD50 (-ndisQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQ.c)
 *     ?ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x14000C6D0 (-ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     ?ndisReferenceRefEx@@YAEPEAU_REFERENCE_EX@@EPEAW4_NDIS_REFERENCE_STATUS@@@Z @ 0x140010EE0 (-ndisReferenceRefEx@@YAEPEAU_REFERENCE_EX@@EPEAW4_NDIS_REFERENCE_STATUS@@@Z.c)
 *     NdisReferenceWithTag @ 0x140010F90 (NdisReferenceWithTag.c)
 *     ?ndisReportRefcountImbalance@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@E@Z @ 0x1400136E0 (-ndisReportRefcountImbalance@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@E@Z.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x140013990 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 *     WPP_RECORDER_SF_q @ 0x140014040 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x140014250 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_Dq @ 0x14004A7F0 (WPP_RECORDER_SF_Dq.c)
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x14008ADC0 (-ndisBugCheckEx@@YAX_K000@Z.c)
 *     ??$TraceLoggingWriteOidRequestQueuedActivity@$00U_NDIS_MINIPORT_BLOCK@@@@YAXPEBU_NDIS_MINIPORT_BLOCK@@PEBU_NDIS_OID_REQUEST@@@Z @ 0x14008DBD0 (--$TraceLoggingWriteOidRequestQueuedActivity@$00U_NDIS_MINIPORT_BLOCK@@@@YAXPEBU_NDIS_MINIPORT_B.c)
 *     ??$TraceLoggingWriteOidRequestQueuedActivity@$0A@U_NDIS_FILTER_BLOCK@@@@YAXPEBU_NDIS_FILTER_BLOCK@@PEBU_NDIS_OID_REQUEST@@@Z @ 0x14008DD00 (--$TraceLoggingWriteOidRequestQueuedActivity@$0A@U_NDIS_FILTER_BLOCK@@@@YAXPEBU_NDIS_FILTER_BLOC.c)
 *     ??$TraceLoggingWriteOidRequestQueuedActivity@$0A@U_NDIS_MINIPORT_BLOCK@@@@YAXPEBU_NDIS_MINIPORT_BLOCK@@PEBU_NDIS_OID_REQUEST@@@Z @ 0x14008DE30 (--$TraceLoggingWriteOidRequestQueuedActivity@$0A@U_NDIS_MINIPORT_BLOCK@@@@YAXPEBU_NDIS_MINIPORT_.c)
 *     ??$TraceLoggingWriteOidRequestQueuedActivity@$00U_NDIS_FILTER_BLOCK@@@@YAXPEBU_NDIS_FILTER_BLOCK@@PEBU_NDIS_OID_REQUEST@@@Z @ 0x14008DF60 (--$TraceLoggingWriteOidRequestQueuedActivity@$00U_NDIS_FILTER_BLOCK@@@@YAXPEBU_NDIS_FILTER_BLOCK.c)
 *     __security_check_cookie @ 0x1400E70B0 (__security_check_cookie.c)
 *     memset @ 0x1400E7500 (memset.c)
 */

__int64 __fastcall ndisQueueOidRequest(
        struct _NDIS_OID_REQUEST *a1,
        struct _NDIS_MINIPORT_BLOCK *a2,
        struct _NDIS_FILTER_BLOCK *a3,
        struct _NDIS_MINIPORT_BLOCK *a4)
{
  KSPIN_LOCK *v7; // r13
  NDIS_OID Oid; // ecx
  _UNKNOWN **v10; // rdx
  unsigned __int64 *p_Lock; // r12
  KIRQL v12; // r13
  struct _NDIS_MINIPORT_BLOCK *NextRequestHandle; // rdi
  char v14; // r14
  __int64 v15; // rdx
  KIRQL v16; // r15
  NDIS_REFCOUNT_HANDLE__ *RefCountTracker; // rcx
  unsigned int ReferenceCount; // ecx
  KIRQL v19; // al
  _LIST_ENTRY *v20; // r14
  KIRQL v21; // r13
  _LIST_ENTRY *p_OidRequestList; // r15
  _LIST_ENTRY *n; // rax
  _LIST_ENTRY *Blink; // rax
  unsigned int v25; // esi
  __int64 v27; // rdx
  KIRQL v28; // r15
  unsigned __int16 v29; // cx
  _REFERENCE_EX *p_DeferredContext; // r15
  KIRQL v31; // al
  unsigned __int16 SystemArgument1; // cx
  __int64 v33; // rdx
  KIRQL v34; // al
  NDIS_REFCOUNT_HANDLE__ *SystemArgument2; // r8
  KIRQL v36; // r14
  __int64 v37; // r9
  bool v38; // zf
  KIRQL v39; // dl
  KSPIN_LOCK *v40; // r14
  KIRQL v41; // al
  KSPIN_LOCK v42; // rcx
  __int64 v43; // rdx
  KIRQL v44; // di
  KIRQL v45; // al
  KSPIN_LOCK *v46; // r15
  _QWORD *v47; // rdi
  UCHAR *NdisReserved; // r13
  UCHAR **v49; // rdi
  UCHAR *j; // rax
  UCHAR **v51; // rax
  PVOID v52; // rdi
  KIRQL v53; // bl
  KIRQL v54; // al
  ULONG_PTR v55; // r8
  KIRQL v56; // bl
  __int64 v57; // r9
  int v58; // edx
  KIRQL v59; // al
  _BYTE *v60; // rdx
  NDIS_REFCOUNT_HANDLE__ *v61; // r8
  KIRQL v62; // r15
  __int64 v63; // r9
  unsigned int v64; // r14d
  int v65; // edx
  unsigned __int8 i; // cl
  _BYTE *v67; // rdx
  char v68; // al
  unsigned __int8 jj; // cl
  char v70; // al
  unsigned __int8 m; // cl
  _BYTE *v72; // rdx
  char v73; // al
  struct _KEVENT *RemoveReadyEvent; // rcx
  NDIS_REFCOUNT_HANDLE__ *v75; // r14
  unsigned int v76; // edx
  NDIS_REFCOUNT_HANDLE__ *v77; // r14
  unsigned int v78; // edx
  ULONG_PTR v79; // rdi
  unsigned int v80; // edx
  unsigned __int8 kk; // cl
  _BYTE *v82; // rdx
  char v83; // al
  char *v84; // rbx
  KIRQL v85; // al
  ULONG_PTR v86; // r8
  KIRQL v87; // di
  __int64 v88; // r9
  ULONG_PTR v89; // r14
  unsigned int v90; // edx
  char v91; // cl
  unsigned int v92; // eax
  char v93; // cl
  unsigned int v94; // eax
  int v95; // eax
  int v96; // eax
  unsigned __int64 k; // rax
  unsigned __int64 ii; // rax
  int v99; // ecx
  int v100; // ecx
  KIRQL v101; // [rsp+40h] [rbp-C0h]
  KIRQL v102; // [rsp+40h] [rbp-C0h]
  KIRQL v103; // [rsp+40h] [rbp-C0h]
  int v104; // [rsp+44h] [rbp-BCh] BYREF
  PVOID Parameter; // [rsp+48h] [rbp-B8h]
  _BYTE v106[248]; // [rsp+50h] [rbp-B0h] BYREF

  v7 = 0LL;
  Parameter = 0LL;
  memset(v106, 0, sizeof(v106));
  Oid = a1->DATA.QUERY_INFORMATION.Oid;
  v10 = &WPP_RECORDER_INITIALIZED;
  v104 = 0;
  if ( Oid == 66055 )
  {
    if ( a2->MajorNdisVersion < 6u )
    {
      memset(&v106[112], 0, 136);
      memset(v106, 0, 104);
      *(_QWORD *)&v106[104] = &ndisIntReqNsi;
      *(_DWORD *)&v106[88] = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 8)) | 8;
      EtwActivityIdControl(3u, (LPGUID)&v106[168]);
      *(_DWORD *)v106 = 15466902;
      *(_QWORD *)&v106[40] = &v104;
      *(_DWORD *)&v106[32] = 65799;
      *(_QWORD *)&v106[4] = 2LL;
      *(_DWORD *)&v106[48] = 4;
      ndisQuerySetMiniport(a2, 0LL, (struct _NDIS_OID_REQUEST *)v106, 0, 0LL);
      *(_QWORD *)&v106[104] = &ndisIntReqNsi;
      memset(&v106[112], 0, 136);
      memset(v106, 0, 104);
      *(_DWORD *)&v106[88] = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 8)) | 8;
      EtwActivityIdControl(3u, (LPGUID)&v106[168]);
      *(_DWORD *)v106 = 15466902;
      *(_QWORD *)&v106[40] = &v104;
      *(_DWORD *)&v106[32] = 65812;
      *(_QWORD *)&v106[4] = 2LL;
      *(_DWORD *)&v106[48] = 4;
      ndisQuerySetMiniport(a2, 0LL, (struct _NDIS_OID_REQUEST *)v106, 0, 0LL);
    }
  }
  else if ( Oid == 65798 || Oid == 65799 || Oid == 65812 || (*(_DWORD *)&a1->NdisReserved[16] & 0x100000) != 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v10) = 4;
      WPP_RECORDER_SF_Dq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        (int)v10,
        (int)a3,
        203,
        (struct _GUID *)&WPP_40f420ec2e343311b7b49d00b668bf14_Traceguids,
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
  v31 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&a4->WakeUpDpcTimer.Dpc.DeferredContext);
  v101 = v31;
  if ( !BYTE2(a4->WakeUpDpcTimer.Dpc.SystemArgument1) )
  {
    SystemArgument1 = (unsigned __int16)a4->WakeUpDpcTimer.Dpc.SystemArgument1;
    v33 = 65515LL;
    if ( SystemArgument1 < 0xFFEBu )
    {
      LOBYTE(v33) = 17;
      LOWORD(a4->WakeUpDpcTimer.Dpc.SystemArgument1) = SystemArgument1 + 1;
      NdisReferenceWithTag(a4->WakeUpDpcTimer.Dpc.SystemArgument2, v33);
      KeReleaseSpinLock((PKSPIN_LOCK)&a4->WakeUpDpcTimer.Dpc.DeferredContext, v101);
      if ( a4->BaseMiniport->WakeUpDpcTimer.Timer.TimerListEntry.Flink )
      {
        NextRequestHandle = a4;
      }
      else if ( a4->Unused2 )
      {
        NextRequestHandle = (struct _NDIS_MINIPORT_BLOCK *)a4->Unused2;
      }
      v34 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&a4->WakeUpDpcTimer.Dpc.DeferredContext);
      SystemArgument2 = (NDIS_REFCOUNT_HANDLE__ *)a4->WakeUpDpcTimer.Dpc.SystemArgument2;
      v36 = v34;
      v102 = v34;
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
        v75 = SystemArgument2 + 274;
        v76 = *((_DWORD *)SystemArgument2 + 288);
        if ( v76 >> 17 < 0x3FFE && (unsigned __int16)v76 >> 1 == (v76 >> 17) + 1 )
        {
          ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(SystemArgument2 + 274));
          *((_DWORD *)v75 + 14) &= 0x10001u;
          v36 = v102;
          goto LABEL_46;
        }
        if ( (unsigned __int16)v76 >> 1 || (v76 & 1) != 0 )
        {
          ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(SystemArgument2 + 274), 0);
          v36 = v102;
          goto LABEL_46;
        }
      }
      else
      {
        v37 = *((_QWORD *)SystemArgument2 + 1);
        if ( v37 )
        {
          for ( i = 0; ; ++i )
          {
            if ( i >= *((_BYTE *)SystemArgument2 + 3) )
              goto LABEL_45;
            v67 = (_BYTE *)(v37 + 2LL * i);
            if ( *v67 == 17 )
            {
              v68 = v67[1];
              if ( v68 )
                break;
            }
          }
          v67[1] = v68 - 1;
          goto LABEL_46;
        }
LABEL_45:
        if ( _bittestandreset((signed __int32 *)SystemArgument2 + 4, 0x11u) )
        {
LABEL_46:
          v38 = p_DeferredContext->ReferenceCount-- == 1;
          if ( v38 && !p_DeferredContext->ZeroBased )
          {
            NdisFreeRefCount(p_DeferredContext->RefCountTracker);
            p_DeferredContext->RefCountTracker = (NDIS_REFCOUNT_HANDLE__ *)1;
          }
          v39 = v36;
          goto LABEL_48;
        }
      }
      ndisReportRefcountImbalance((ULONG_PTR)SystemArgument2, 0x11u);
    }
    ndisRefCountReferenceCountOverflow = 1;
  }
  v39 = v31;
LABEL_48:
  KeReleaseSpinLock(&p_DeferredContext->SpinLock, v39);
LABEL_7:
  if ( NextRequestHandle->Header.Type != 5 )
    goto LABEL_8;
  while ( 1 )
  {
    Parameter = NextRequestHandle;
    v28 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&NextRequestHandle->WakeUpDpcTimer.Dpc.DeferredContext);
    if ( !BYTE2(NextRequestHandle->WakeUpDpcTimer.Dpc.SystemArgument1) )
      break;
LABEL_134:
    KeReleaseSpinLock((PKSPIN_LOCK)&NextRequestHandle->WakeUpDpcTimer.Dpc.DeferredContext, v28);
    NextRequestHandle = (struct _NDIS_MINIPORT_BLOCK *)NextRequestHandle->Unused2;
    Parameter = 0LL;
    if ( NextRequestHandle->Header.Type != 5 )
      goto LABEL_8;
  }
  v29 = (unsigned __int16)NextRequestHandle->WakeUpDpcTimer.Dpc.SystemArgument1;
  if ( v29 >= 0xFFEBu )
  {
    ndisRefCountReferenceCountOverflow = 1;
    goto LABEL_134;
  }
  LOBYTE(v27) = 15;
  LOWORD(NextRequestHandle->WakeUpDpcTimer.Dpc.SystemArgument1) = v29 + 1;
  NdisReferenceWithTag(NextRequestHandle->WakeUpDpcTimer.Dpc.SystemArgument2, v27);
  KeReleaseSpinLock((PKSPIN_LOCK)&NextRequestHandle->WakeUpDpcTimer.Dpc.DeferredContext, v28);
LABEL_8:
  a2->MiniportThread = 0LL;
  KeReleaseSpinLock(&a2->Lock, v12);
  v7 = (KSPIN_LOCK *)Parameter;
LABEL_9:
  if ( NextRequestHandle->Header.Type == 17 )
    ndisOidTranslateBetweenOids(a2, (unsigned __int8)v10, a1);
  if ( KeGetCurrentIrql() || !PsIsSystemThread(KeGetCurrentThread()) )
  {
    v25 = ndisQueueRequestWorkItem(NextRequestHandle, a1, NextRequestHandle->Header.Type);
    goto LABEL_30;
  }
  if ( v7 )
  {
    v40 = v7 + 39;
    v41 = KeAcquireSpinLockRaiseToDpc(v7 + 39);
    v42 = v7[41];
    LOBYTE(v43) = 13;
    ++*((_WORD *)v7 + 160);
    v44 = v41;
    NdisReferenceWithTag(v42, v43);
    KeReleaseSpinLock(v7 + 39, v44);
    v45 = KeAcquireSpinLockRaiseToDpc(p_Lock);
    v46 = v7 + 18;
    a2->MiniportThread = KeGetCurrentThread();
    v103 = v45;
    KeAcquireSpinLockAtDpcLevel(v7 + 18);
    v47 = Parameter;
    v7[19] = (KSPIN_LOCK)KeGetCurrentThread();
    NdisReserved = a1->NdisReserved;
    *(_QWORD *)a1->NdisReserved = 0LL;
    *(_QWORD *)&a1->NdisReserved[8] = 0LL;
    if ( (*(_DWORD *)(v47[4] + 124LL) & 0x100) != 0 )
    {
      v47[19] = 0LL;
      v25 = -1073741823;
      KeReleaseSpinLockFromDpcLevel(v46);
      a2->MiniportThread = 0LL;
      KeReleaseSpinLock(p_Lock, v103);
      goto LABEL_60;
    }
    v49 = (UCHAR **)(v47 + 20);
    for ( j = *v49; j != (UCHAR *)v49; j = *(UCHAR **)j )
    {
      if ( j == NdisReserved )
      {
        *((_QWORD *)Parameter + 19) = 0LL;
        KeReleaseSpinLockFromDpcLevel(v46);
        a2->MiniportThread = 0LL;
        KeReleaseSpinLock(p_Lock, v103);
        v25 = -1073741823;
        goto LABEL_60;
      }
    }
    if ( (unsigned int)dword_14011A7B0 > 4
      && (qword_14011A7C0 & 0x400) != 0
      && (qword_14011A7C8 & 0x400) == qword_14011A7C8 )
    {
      v96 = *(_DWORD *)&a1->NdisReserved[16] & 0x30000000;
      if ( v96 != 0x10000000 )
      {
        if ( !v96 )
        {
          if ( (ndisAzOidTelemetryFilter & 1) != 0 && Ndis::BindEngine::s_NumBindOperationsInProgress )
          {
LABEL_191:
            v93 = 1;
            v94 = *(_DWORD *)&a1->NdisReserved[16] & 0xCFFFFFFF | 0x20000000;
          }
          else
          {
            if ( (ndisAzOidTelemetryFilter & 2) != 0 )
            {
              for ( k = 0LL; k < 0x40; k += 4LL )
              {
                v99 = *(_DWORD *)((char *)&ndisAzOidTelemetryList + k);
                if ( !v99 )
                  break;
                if ( v99 == a1->DATA.QUERY_INFORMATION.Oid )
                  goto LABEL_191;
              }
            }
            v93 = 0;
            v94 = *(_DWORD *)&a1->NdisReserved[16] & 0xCFFFFFFF | 0x10000000;
          }
          *(_DWORD *)&a1->NdisReserved[16] = v94;
          if ( !v93 )
            goto LABEL_54;
          goto LABEL_193;
        }
        if ( v96 == 0x20000000 )
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
    v51 = (UCHAR **)v49[1];
    if ( *v51 != (UCHAR *)v49 )
      goto LABEL_28;
    *(_QWORD *)NdisReserved = v49;
    *(_QWORD *)&a1->NdisReserved[8] = v51;
    *v51 = NdisReserved;
    v49[1] = NdisReserved;
    v52 = Parameter;
    *((_QWORD *)Parameter + 19) = 0LL;
    KeReleaseSpinLockFromDpcLevel(v46);
    a2->MiniportThread = 0LL;
    KeReleaseSpinLock(p_Lock, v103);
    if ( KeExpandKernelStackAndCalloutEx(ndisFDoOidRequestInternal, v52, (unsigned int)Size, 0, 0LL) < 0 )
    {
      v53 = KeAcquireSpinLockRaiseToDpc(v46);
      *((_QWORD *)v52 + 19) = KeGetCurrentThread();
      *((_BYTE *)v52 + 232) = 1;
      if ( !*((_BYTE *)v52 + 224) )
      {
        v104 = 0;
        ndisReferenceRefEx((PKSPIN_LOCK)v52 + 9, 1u, (enum _NDIS_REFERENCE_STATUS *)&v104);
        *((_BYTE *)v52 + 224) = 1;
        ExQueueWorkItem((PWORK_QUEUE_ITEM)v52 + 6, NormalWorkQueue);
      }
      *((_QWORD *)v52 + 19) = 0LL;
      KeReleaseSpinLock(v46, v53);
    }
    v25 = 259;
LABEL_60:
    v54 = KeAcquireSpinLockRaiseToDpc(v40);
    v55 = v40[2];
    v56 = v54;
    if ( v55 - 2 <= 1 )
      goto LABEL_66;
    if ( v55 < 2 )
      ndisBugCheckEx(0x1EuLL, 3uLL, v55, 0LL);
    if ( *(_BYTE *)(v55 + 2) <= 0xDu )
      ndisBugCheckEx(0x1EuLL, 2uLL, v55, 0xDuLL);
    if ( *(_BYTE *)(v55 + 1) )
    {
      if ( *(_BYTE *)(v55 + 1) != 1 )
        goto LABEL_66;
      v79 = v55 + 840;
      v80 = *(_DWORD *)(v55 + 896);
      if ( v80 >> 17 < 0x3FFE && (unsigned __int16)v80 >> 1 == (v80 >> 17) + 1 )
      {
        ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v55 + 840));
        *(_DWORD *)(v79 + 56) &= 0x10001u;
        goto LABEL_66;
      }
      if ( (unsigned __int16)v80 >> 1 || (v80 & 1) != 0 )
      {
        ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v55 + 840), 0);
        goto LABEL_66;
      }
    }
    else
    {
      v57 = *(_QWORD *)(v55 + 8);
      if ( v57 )
      {
        for ( m = 0; ; ++m )
        {
          if ( m >= *(_BYTE *)(v55 + 3) )
            goto LABEL_65;
          v72 = (_BYTE *)(v57 + 2LL * m);
          if ( *v72 == 13 )
          {
            v73 = v72[1];
            if ( v73 )
              break;
          }
        }
        v72[1] = v73 - 1;
        goto LABEL_66;
      }
LABEL_65:
      if ( _bittestandreset((signed __int32 *)(v55 + 16), 0xDu) )
      {
LABEL_66:
        v38 = (*((_WORD *)v40 + 4))-- == 1;
        if ( v38 && !*((_BYTE *)v40 + 11) )
        {
          NdisFreeRefCount((struct NDIS_REFCOUNT_HANDLE__ *)v40[2]);
          v40[2] = 1LL;
        }
        KeReleaseSpinLock(v40, v56);
        goto LABEL_30;
      }
    }
    ndisReportRefcountImbalance(v55, 0xDu);
  }
  v14 = 1;
  v16 = KeAcquireSpinLockRaiseToDpc(&a2->Ref.SpinLock);
  if ( a2->Ref.Closing )
    goto LABEL_19;
  RefCountTracker = a2->RefCountTracker;
  if ( RefCountTracker )
  {
    LOBYTE(v15) = 72;
    NdisReferenceWithTag(RefCountTracker, v15);
  }
  ReferenceCount = a2->Ref.ReferenceCount;
  a2->Ref.ReferenceCount = ReferenceCount + 1;
  if ( ReferenceCount == -1 )
  {
    a2->Ref.ReferenceCount = -1;
LABEL_19:
    v14 = 0;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v15) = 4;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v15,
      20,
      12,
      (struct _GUID *)&WPP_cb6db8c6f99e3ae11a098d09772ad370_Traceguids,
      (char)a2,
      a2->Ref.ReferenceCount);
  }
  KeReleaseSpinLock(&a2->Ref.SpinLock, v16);
  if ( v14 )
  {
    v19 = KeAcquireSpinLockRaiseToDpc(p_Lock);
    v20 = (_LIST_ENTRY *)a1->NdisReserved;
    a2->MiniportThread = KeGetCurrentThread();
    *(_QWORD *)a1->NdisReserved = 0LL;
    v21 = v19;
    *(_QWORD *)&a1->NdisReserved[8] = 0LL;
    if ( (a2->PnPFlags & 0x100) == 0 )
    {
      p_OidRequestList = &a2->OidRequestList;
      for ( n = a2->OidRequestList.Flink; n != p_OidRequestList; n = n->Flink )
      {
        if ( n == v20 )
        {
          a2->MiniportThread = 0LL;
          KeReleaseSpinLock(p_Lock, v21);
          v25 = -1073741823;
          goto LABEL_78;
        }
      }
      if ( (unsigned int)dword_14011A7B0 > 4
        && (qword_14011A7C0 & 0x400) != 0
        && (qword_14011A7C8 & 0x400) == qword_14011A7C8 )
      {
        v95 = *(_DWORD *)&a1->NdisReserved[16] & 0x30000000;
        if ( v95 != 0x10000000 )
        {
          if ( v95 )
          {
            if ( v95 == 0x20000000 )
              goto LABEL_183;
          }
          else
          {
            if ( (ndisAzOidTelemetryFilter & 1) != 0 && Ndis::BindEngine::s_NumBindOperationsInProgress )
            {
              v91 = 1;
              v92 = *(_DWORD *)&a1->NdisReserved[16] & 0xCFFFFFFF | 0x20000000;
            }
            else
            {
              if ( (ndisAzOidTelemetryFilter & 2) != 0 )
              {
                for ( ii = 0LL; ii < 0x40; ii += 4LL )
                {
                  v100 = *(_DWORD *)((char *)&ndisAzOidTelemetryList + ii);
                  if ( !v100 )
                    break;
                  if ( v100 == a1->DATA.QUERY_INFORMATION.Oid )
                  {
                    v91 = 1;
                    v92 = *(_DWORD *)&a1->NdisReserved[16] & 0xCFFFFFFF | 0x20000000;
                    goto LABEL_182;
                  }
                }
              }
              v91 = 0;
              v92 = *(_DWORD *)&a1->NdisReserved[16] & 0xCFFFFFFF | 0x10000000;
            }
LABEL_182:
            *(_DWORD *)&a1->NdisReserved[16] = v92;
            if ( v91 )
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
        v20->Flink = p_OidRequestList;
        *(_QWORD *)&a1->NdisReserved[8] = Blink;
        Blink->Flink = v20;
        a2->OidRequestList.Blink = v20;
        a2->MiniportThread = 0LL;
        KeReleaseSpinLock(p_Lock, v21);
        ndisMDoOidRequest(a2);
        v25 = 259;
        goto LABEL_78;
      }
LABEL_28:
      __fastfail(3u);
    }
    a2->MiniportThread = 0LL;
    v25 = -1073741823;
    KeReleaseSpinLock(p_Lock, v19);
LABEL_78:
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v58) = 4;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v58,
        20,
        25,
        (struct _GUID *)&WPP_91e24223ea6635c7ede0c9cfb5715ff6_Traceguids,
        (char)a2);
    }
    v59 = KeAcquireSpinLockRaiseToDpc(&a2->Ref.SpinLock);
    v61 = a2->RefCountTracker;
    v62 = v59;
    if ( v61 && (unsigned __int64)v61 - 2 > 1 )
    {
      if ( v61 == (NDIS_REFCOUNT_HANDLE__ *)1 )
        ndisBugCheckEx(0x1EuLL, 3uLL, 1uLL, 0LL);
      if ( *((_BYTE *)v61 + 2) <= 0x48u )
        ndisBugCheckEx(0x1EuLL, 2uLL, (ULONG_PTR)v61, 0x48uLL);
      if ( *((_BYTE *)v61 + 1) )
      {
        if ( *((_BYTE *)v61 + 1) == 1 )
        {
          v77 = v61 + 1154;
          v78 = *((_DWORD *)v61 + 1168);
          if ( v78 >> 17 < 0x3FFE && (unsigned __int16)v78 >> 1 == (v78 >> 17) + 1 )
          {
            ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v61 + 1154));
            *((_DWORD *)v77 + 14) &= 0x10001u;
          }
          else
          {
            if ( !((unsigned __int16)v78 >> 1) && (v78 & 1) == 0 )
              goto LABEL_114;
            ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v61 + 1154), 0);
          }
        }
      }
      else
      {
        v63 = *((_QWORD *)v61 + 1);
        if ( !v63 )
        {
LABEL_86:
          if ( _bittestandreset((signed __int32 *)v61 + 6, 8u) )
            goto LABEL_87;
LABEL_114:
          ndisReportRefcountImbalance((ULONG_PTR)v61, 0x48u);
        }
        for ( jj = 0; ; ++jj )
        {
          if ( jj >= *((_BYTE *)v61 + 3) )
            goto LABEL_86;
          v60 = (_BYTE *)(v63 + 2LL * jj);
          if ( *v60 == 72 )
          {
            v70 = v60[1];
            if ( v70 )
              break;
          }
        }
        v60[1] = v70 - 1;
      }
    }
LABEL_87:
    v64 = a2->Ref.ReferenceCount - 1;
    a2->Ref.ReferenceCount = v64;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v60) = 4;
      WPP_RECORDER_SF_qL(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        (int)v60,
        20,
        14,
        (struct _GUID *)&WPP_cb6db8c6f99e3ae11a098d09772ad370_Traceguids,
        (char)a2,
        a2->Ref.ReferenceCount);
    }
    KeReleaseSpinLock(&a2->Ref.SpinLock, v62);
    if ( !v64 )
    {
      RemoveReadyEvent = a2->RemoveReadyEvent;
      if ( RemoveReadyEvent )
        KeSetEvent(RemoveReadyEvent, 0, 0);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v65) = 4;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v65,
        20,
        26,
        (struct _GUID *)&WPP_91e24223ea6635c7ede0c9cfb5715ff6_Traceguids,
        (char)a2);
    }
LABEL_30:
    if ( v25 != 259 && Parameter )
    {
      v84 = (char *)Parameter + 312;
      v85 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Parameter + 39);
      v86 = *((_QWORD *)v84 + 2);
      v87 = v85;
      if ( v86 - 2 > 1 )
      {
        if ( v86 < 2 )
          ndisBugCheckEx(0x1EuLL, 3uLL, v86, 0LL);
        if ( *(_BYTE *)(v86 + 2) <= 0xFu )
          ndisBugCheckEx(0x1EuLL, 2uLL, v86, 0xFuLL);
        if ( *(_BYTE *)(v86 + 1) )
        {
          if ( *(_BYTE *)(v86 + 1) != 1 )
            goto LABEL_165;
          v89 = v86 + 968;
          v90 = *(_DWORD *)(v86 + 1024);
          if ( v90 >> 17 < 0x3FFE && (unsigned __int16)v90 >> 1 == (v90 >> 17) + 1 )
          {
            ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v86 + 968));
            *(_DWORD *)(v89 + 56) &= 0x10001u;
            goto LABEL_165;
          }
          if ( (unsigned __int16)v90 >> 1 || (v90 & 1) != 0 )
          {
            ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v86 + 968), 0);
            goto LABEL_165;
          }
          goto LABEL_168;
        }
        v88 = *(_QWORD *)(v86 + 8);
        if ( !v88 )
        {
LABEL_164:
          if ( _bittestandreset((signed __int32 *)(v86 + 16), 0xFu) )
            goto LABEL_165;
LABEL_168:
          ndisReportRefcountImbalance(v86, 0xFu);
        }
        for ( kk = 0; ; ++kk )
        {
          if ( kk >= *(_BYTE *)(v86 + 3) )
            goto LABEL_164;
          v82 = (_BYTE *)(v88 + 2LL * kk);
          if ( *v82 == 15 )
          {
            v83 = v82[1];
            if ( v83 )
              break;
          }
        }
        v82[1] = v83 - 1;
      }
LABEL_165:
      v38 = (*((_WORD *)v84 + 4))-- == 1;
      if ( v38 && !v84[11] )
      {
        NdisFreeRefCount(*((struct NDIS_REFCOUNT_HANDLE__ **)v84 + 2));
        *((_QWORD *)v84 + 2) = 1LL;
      }
      KeReleaseSpinLock((PKSPIN_LOCK)v84, v87);
    }
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return v25;
}
