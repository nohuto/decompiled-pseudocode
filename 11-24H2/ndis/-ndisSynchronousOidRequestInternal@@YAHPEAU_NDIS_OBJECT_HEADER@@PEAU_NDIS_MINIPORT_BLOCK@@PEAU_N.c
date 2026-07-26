/*
 * XREFs of ?ndisSynchronousOidRequestInternal@@YAHPEAU_NDIS_OBJECT_HEADER@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x140003554
 * Callers:
 *     ?ndisEmulateRSSv1Dpc@@YAXPEAU_KDPC@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAU_NDIS_RSS_DPC_WORKER_CONTEXT@@@Z @ 0x140001BA0 (-ndisEmulateRSSv1Dpc@@YAXPEAU_KDPC@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAU_NDIS_R.c)
 *     ?ndisExecuteRSSv2DirectOid@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAU_NDIS_RSS_DPC_WORKER_CONTEXT@@U_PROCESSOR_NUMBER@@@Z @ 0x1400ABB5C (-ndisExecuteRSSv2DirectOid@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAU_NDIS_RSS_DP.c)
 *     NdisFSynchronousOidRequest @ 0x1400C7D30 (NdisFSynchronousOidRequest.c)
 *     NdisSynchronousOidRequest @ 0x1400C7E40 (NdisSynchronousOidRequest.c)
 * Callees:
 *     ?ndisReferenceRefEx@@YAEPEAU_REFERENCE_EX@@EPEAW4_NDIS_REFERENCE_STATUS@@@Z @ 0x140010EE0 (-ndisReferenceRefEx@@YAEPEAU_REFERENCE_EX@@EPEAW4_NDIS_REFERENCE_STATUS@@@Z.c)
 *     ?ndisDereferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z @ 0x1400132F0 (-ndisDereferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z.c)
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1400353A0 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x14008ADC0 (-ndisBugCheckEx@@YAX_K000@Z.c)
 *     ?ndisRssV2UpdateIndirectionTable@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1400ACE34 (-ndisRssV2UpdateIndirectionTable@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 *     KStackStorage__ndisSynchronousOidRequestInternal_::_2_::NDIS_SYNCHRONOUS_OID_CALLFRAME_7_::_KStackStorage__ndisSynchronousOidRequestInternal_::_2_::NDIS_SYNCHRONOUS_OID_CALLFRAME_7_ @ 0x1400C78B8 (KStackStorage__ndisSynchronousOidRequestInternal_--_2_--NDIS_SYNCHRONOUS_OID_CALLFRAME_7_--_KSta.c)
 *     KStackStorage__ndisSynchronousOidRequestInternal_::_2_::NDIS_SYNCHRONOUS_OID_CALLFRAME_7_::Pop @ 0x1400C78EC (KStackStorage__ndisSynchronousOidRequestInternal_--_2_--NDIS_SYNCHRONOUS_OID_CALLFRAME_7_--Pop.c)
 *     KStackStorage__ndisSynchronousOidRequestInternal_::_2_::NDIS_SYNCHRONOUS_OID_CALLFRAME_7_::Push @ 0x1400C7954 (KStackStorage__ndisSynchronousOidRequestInternal_--_2_--NDIS_SYNCHRONOUS_OID_CALLFRAME_7_--Push.c)
 *     ndisFInvokeSynchronousOidRequest @ 0x1400C79EC (ndisFInvokeSynchronousOidRequest.c)
 *     ndisFInvokeSynchronousOidRequestComplete @ 0x1400C7AC0 (ndisFInvokeSynchronousOidRequestComplete.c)
 *     ndisMInvokeSynchronousOidRequest @ 0x1400C7BC4 (ndisMInvokeSynchronousOidRequest.c)
 *     ndisVerifySynchronousOidAfterCompletion @ 0x1400C7CBC (ndisVerifySynchronousOidAfterCompletion.c)
 *     __security_check_cookie @ 0x1400E70B0 (__security_check_cookie.c)
 */

__int64 __fastcall ndisSynchronousOidRequestInternal(
        ULONG_PTR BugCheckParameter2,
        struct _NDIS_MINIPORT_BLOCK *a2,
        struct _NDIS_FILTER_BLOCK *HighestFilter,
        struct _NDIS_OID_REQUEST *a4)
{
  bool v4; // zf
  NDIS_REQUEST_TYPE RequestType; // ecx
  __int32 v10; // ecx
  _LIST_ENTRY *Flink; // rcx
  _NDIS_FILTER_DRIVER_BLOCK *FilterDriver; // rax
  KIRQL v13; // dl
  __int64 v14; // rax
  _QWORD *v15; // r14
  int v16; // eax
  KIRQL v17; // dl
  __int64 v18; // rsi
  __int64 v19; // rax
  struct _KEVENT *AllDirectRequestsCompletedEvent; // rcx
  _LIST_ENTRY *v21; // rcx
  _LIST_ENTRY *v22; // rax
  KIRQL v23; // dl
  unsigned int v24; // ebx
  KIRQL NewIrql[4]; // [rsp+20h] [rbp-B9h] BYREF
  int v27; // [rsp+24h] [rbp-B5h]
  int v28; // [rsp+28h] [rbp-B1h] BYREF
  _LIST_ENTRY *v29; // [rsp+30h] [rbp-A9h] BYREF
  _LIST_ENTRY *p_SynchronousOidCalls; // [rsp+38h] [rbp-A1h]
  struct _NDIS_OID_REQUEST *v31; // [rsp+40h] [rbp-99h]
  struct _KTHREAD *CurrentThread; // [rsp+48h] [rbp-91h]
  LARGE_INTEGER PerformanceCounter; // [rsp+50h] [rbp-89h]
  _QWORD v34[18]; // [rsp+60h] [rbp-79h] BYREF

  v27 = -1073741823;
  v4 = a4->Header.Type == 0x96;
  v34[0] = 0LL;
  v34[15] = v34;
  v34[16] = 0LL;
  NewIrql[0] = 0;
  if ( !v4
    || a4->Header.Revision < 2u
    || a4->Header.Size < 0xF8u
    || a4->Timeout
    || a4->RequestId
    || (RequestType = a4->RequestType) != NdisRequestQueryInformation && (v10 = RequestType - 1) != 0 && v10 != 11 )
  {
    ndisBugCheckEx(0x21uLL, BugCheckParameter2, (ULONG_PTR)a4, 0LL);
  }
  v31 = a4;
  CurrentThread = KeGetCurrentThread();
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a2, NewIrql);
  Flink = a2->SynchronousOidCalls.Flink;
  if ( Flink->Blink != &a2->SynchronousOidCalls )
    goto LABEL_46;
  v29 = a2->SynchronousOidCalls.Flink;
  p_SynchronousOidCalls = &a2->SynchronousOidCalls;
  Flink->Blink = (_LIST_ENTRY *)&v29;
  a2->SynchronousOidCalls.Flink = (_LIST_ENTRY *)&v29;
  ++a2->DirectOidRequestCount;
  while ( 1 )
  {
    if ( !HighestFilter )
    {
      HighestFilter = a2->HighestFilter;
      goto LABEL_17;
    }
    while ( 1 )
    {
      HighestFilter = HighestFilter->LowerFilter;
LABEL_17:
      if ( !HighestFilter )
        break;
      FilterDriver = HighestFilter->FilterDriver;
      if ( FilterDriver->DefaultFilterCharacteristics.SynchronousOidRequestHandler
        || FilterDriver->DefaultFilterCharacteristics.SynchronousOidRequestCompleteHandler )
      {
        v28 = 0;
        if ( ndisReferenceRefEx(&HighestFilter->PnPRef.SpinLock, 0x17u, (enum _NDIS_REFERENCE_STATUS *)&v28) )
          break;
      }
    }
    v13 = NewIrql[0];
    a2->MiniportThread = 0LL;
    KeReleaseSpinLock(&a2->Lock, v13);
    if ( !HighestFilter )
      break;
    v14 = KStackStorage__ndisSynchronousOidRequestInternal_::_2_::NDIS_SYNCHRONOUS_OID_CALLFRAME_7_::Push(v34);
    v15 = (_QWORD *)v14;
    if ( !v14 )
    {
      v27 = -1073741670;
LABEL_28:
      KStackStorage__ndisSynchronousOidRequestInternal_::_2_::NDIS_SYNCHRONOUS_OID_CALLFRAME_7_::Pop(v34);
      goto LABEL_39;
    }
    if ( HighestFilter->FilterDriver->DefaultFilterCharacteristics.SynchronousOidRequestHandler )
    {
      *(_QWORD *)(v14 + 8) = 0LL;
      v27 = ndisFInvokeSynchronousOidRequest((char)HighestFilter);
      ndisVerifySynchronousOidAfterCompletion((ULONG_PTR)a4);
      v16 = v27;
    }
    else
    {
      v16 = 0;
      v27 = 0;
    }
    if ( v16 )
    {
      if ( v16 == 255 )
        v27 = 0;
      goto LABEL_28;
    }
    *v15 = HighestFilter;
    NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a2, NewIrql);
  }
  if ( a2->DriverHandle->MiniportDriverCharacteristics.SynchronousOidRequestHandler )
  {
    v27 = ndisMInvokeSynchronousOidRequest((char)a2, (ULONG_PTR)a4);
    ndisVerifySynchronousOidAfterCompletion((ULONG_PTR)a4);
    if ( a4->RequestType == NdisRequestMethod
      && a4->DATA.QUERY_INFORMATION.Oid == 66240
      && (*(_DWORD *)&a4->NdisReserved[16] & 0x1000000) == 0
      && !v27 )
    {
      NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a2, NewIrql);
      ndisRssV2UpdateIndirectionTable(a2, a4);
      v17 = NewIrql[0];
      a2->MiniportThread = 0LL;
      KeReleaseSpinLock(&a2->Lock, v17);
    }
  }
  else
  {
    v27 = -1073741637;
  }
LABEL_39:
  while ( 1 )
  {
    v19 = KStackStorage__ndisSynchronousOidRequestInternal_::_2_::NDIS_SYNCHRONOUS_OID_CALLFRAME_7_::Pop(v34);
    if ( !v19 )
      break;
    v18 = *(_QWORD *)v19;
    if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v19 + 16LL) + 328LL) )
    {
      ndisFInvokeSynchronousOidRequestComplete(*(_QWORD *)v19, (ULONG_PTR)a4);
      ndisVerifySynchronousOidAfterCompletion((ULONG_PTR)a4);
    }
    ndisDereferenceRef((PKSPIN_LOCK)(v18 + 312), 0x17u);
  }
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a2, NewIrql);
  v4 = a2->DirectOidRequestCount-- == 1;
  if ( v4 )
  {
    AllDirectRequestsCompletedEvent = a2->AllDirectRequestsCompletedEvent;
    if ( AllDirectRequestsCompletedEvent )
    {
      KeSetEvent(AllDirectRequestsCompletedEvent, 0, 0);
      a2->AllDirectRequestsCompletedEvent = 0LL;
    }
  }
  v21 = v29;
  v22 = p_SynchronousOidCalls;
  if ( (_LIST_ENTRY **)v29->Blink != &v29 || (_LIST_ENTRY **)p_SynchronousOidCalls->Flink != &v29 )
LABEL_46:
    __fastfail(3u);
  v23 = NewIrql[0];
  p_SynchronousOidCalls->Flink = v29;
  v21->Blink = v22;
  a2->MiniportThread = 0LL;
  KeReleaseSpinLock(&a2->Lock, v23);
  v24 = v27;
  KStackStorage__ndisSynchronousOidRequestInternal_::_2_::NDIS_SYNCHRONOUS_OID_CALLFRAME_7_::_KStackStorage__ndisSynchronousOidRequestInternal_::_2_::NDIS_SYNCHRONOUS_OID_CALLFRAME_7_(v34);
  return v24;
}
