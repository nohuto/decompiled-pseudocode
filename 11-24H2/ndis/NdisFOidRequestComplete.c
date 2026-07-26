/*
 * XREFs of NdisFOidRequestComplete @ 0x14000C810
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qDqqd @ 0x14000C730 (WPP_RECORDER_SF_qDqqd.c)
 *     WPP_RECORDER_SF_qq @ 0x14000CEB0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qqD @ 0x1400158F0 (WPP_RECORDER_SF_qqD.c)
 *     WPP_RECORDER_SF_qDqd @ 0x140015CC0 (WPP_RECORDER_SF_qDqd_ea_140015CC0.c)
 *     WPP_RECORDER_SF_ @ 0x14001DD50 (WPP_RECORDER_SF_.c)
 *     ?NDIS_ACQUIRE_FILTER_SPIN_LOCK@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAE@Z @ 0x1400482F0 (-NDIS_ACQUIRE_FILTER_SPIN_LOCK@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAE@Z.c)
 *     ?ndisQueueStackExpansionFallbackWorkItem@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x14008C360 (-ndisQueueStackExpansionFallbackWorkItem@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 */

void __stdcall NdisFOidRequestComplete(NDIS_HANDLE NdisFilterHandle, PNDIS_OID_REQUEST OidRequest, NDIS_STATUS Status)
{
  __int64 v3; // rdi
  UCHAR *NdisReserved; // rsi
  PNDIS_OID_REQUEST v6; // rbx
  KSPIN_LOCK *v8; // r13
  KSPIN_LOCK v9; // rbp
  KSPIN_LOCK *v10; // rsi
  KIRQL v11; // al
  KSPIN_LOCK *v12; // rcx
  __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // r8
  int v16; // edx
  KIRQL v17; // dl
  int Context; // [rsp+20h] [rbp-58h]
  unsigned __int8 v19; // [rsp+80h] [rbp+8h] BYREF

  v3 = *((_QWORD *)NdisFilterHandle + 23);
  NdisReserved = OidRequest->NdisReserved;
  v6 = OidRequest;
  if ( v3 != -1 )
  {
    if ( KeCancelTimer((PKTIMER)(v3 + 64)) )
    {
      KeSetEvent((PRKEVENT)(v3 + 168), 0, 0);
      *(_DWORD *)(v3 + 160) = 0;
    }
    else
    {
      _InterlockedAnd((volatile signed __int32 *)(v3 + 160), 0);
    }
  }
  if ( (*((_DWORD *)NdisReserved + 4) & 0x8000000) == 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qDqd(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        (int)OidRequest,
        Status,
        22,
        (struct _GUID *)&WPP_405c908af2143fed945d9a560d683c7b_Traceguids,
        (char)NdisFilterHandle,
        v6->DATA.QUERY_INFORMATION.Oid,
        (char)v6,
        Status);
LABEL_7:
    *((_DWORD *)NdisReserved + 2) = Status;
    if ( KeExpandKernelStackAndCalloutEx(ndisFOidRequestCompleteInternal, NdisFilterHandle, (unsigned int)Size, 0, 0LL) < 0 )
    {
      v19 = 0;
      NDIS_ACQUIRE_FILTER_SPIN_LOCK((struct _NDIS_FILTER_BLOCK *)NdisFilterHandle, &v19);
      *((_BYTE *)NdisFilterHandle + 233) = 1;
      ndisQueueStackExpansionFallbackWorkItem((struct _NDIS_FILTER_BLOCK *)NdisFilterHandle);
      v17 = v19;
      *((_QWORD *)NdisFilterHandle + 19) = 0LL;
      KeReleaseSpinLock((PKSPIN_LOCK)NdisFilterHandle + 18, v17);
    }
    return;
  }
  v8 = 0LL;
  v9 = *(_QWORD *)&v6->NdisReserved[24];
  v10 = (KSPIN_LOCK *)NdisFilterHandle;
  if ( *(_BYTE *)NdisFilterHandle != 5 )
  {
    v8 = (KSPIN_LOCK *)NdisFilterHandle;
    v10 = 0LL;
  }
  if ( v9 )
  {
    *(_QWORD *)&v6->NdisReserved[24] = 0LL;
    if ( v6->RequestType == NdisRequestMethod )
    {
      *(_DWORD *)(v9 + 60) = v6->DATA.METHOD_INFORMATION.BytesWritten;
      *(_DWORD *)(v9 + 64) = v6->DATA.METHOD_INFORMATION.BytesRead;
      *(_DWORD *)(v9 + 68) = v6->DATA.METHOD_INFORMATION.BytesNeeded;
      *(_QWORD *)(v9 + 40) = v6->DATA.QUERY_INFORMATION.InformationBuffer;
      *(_DWORD *)(v9 + 48) = v6->DATA.QUERY_INFORMATION.InformationBufferLength;
      *(_DWORD *)(v9 + 52) = v6->DATA.QUERY_INFORMATION.BytesWritten;
    }
    else
    {
      *(_DWORD *)(v9 + 52) = v6->DATA.QUERY_INFORMATION.BytesWritten;
      *(_DWORD *)(v9 + 56) = v6->DATA.QUERY_INFORMATION.BytesNeeded;
      *(_QWORD *)(v9 + 40) = v6->DATA.QUERY_INFORMATION.InformationBuffer;
      *(_DWORD *)(v9 + 48) = v6->DATA.QUERY_INFORMATION.InformationBufferLength;
    }
    if ( (*(_DWORD *)(v9 + 88) & 0x400) == 0 )
    {
      if ( v10 )
      {
        v11 = KeAcquireSpinLockRaiseToDpc(v10 + 18);
        v12 = v10 + 18;
        v10[22] = v9;
        v10[19] = 0LL;
      }
      else
      {
        v11 = KeAcquireSpinLockRaiseToDpc(v8 + 12);
        v12 = v8 + 12;
        v8[276] = v9;
        v8[65] = 0LL;
      }
      KeReleaseSpinLock(v12, v11);
    }
    v13 = *(_QWORD *)&v6->NdisReserved[24];
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(OidRequest) = 4;
      WPP_RECORDER_SF_qq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        (int)OidRequest,
        11,
        13,
        (struct _GUID *)&WPP_30382edc5f5534ea1982f80fa9fe2d2c_Traceguids,
        (char)v6,
        (char)v6->RequestHandle);
    }
    if ( v13 )
    {
      *(_BYTE *)(v13 + 232) = v6->SupportedRevision;
      *(_DWORD *)(v13 + 152) = *(_DWORD *)&v6->NdisReserved[80];
    }
    ExFreePoolWithTag(v6, 0);
    NdisReserved = (UCHAR *)(v9 + 72);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qDqqd(*((_QWORD *)WPP_GLOBAL_Control + 8), v14, v15, 0x15u, Context);
    goto LABEL_7;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(OidRequest) = 2;
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)OidRequest,
      11,
      16,
      (struct _GUID *)&WPP_30382edc5f5534ea1982f80fa9fe2d2c_Traceguids);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v16) = 2;
      WPP_RECORDER_SF_qqD(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v16,
        11,
        20,
        (struct _GUID *)&WPP_405c908af2143fed945d9a560d683c7b_Traceguids,
        (char)NdisFilterHandle,
        (char)v6,
        Status);
    }
  }
}
