/*
 * XREFs of NdisFOidRequestComplete @ 0x140025CF0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1400129A0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qDqd @ 0x140025370 (WPP_RECORDER_SF_qDqd.c)
 *     WPP_RECORDER_SF_qDqqd @ 0x1400260D0 (WPP_RECORDER_SF_qDqqd.c)
 *     WPP_RECORDER_SF_qqD @ 0x140026FA0 (WPP_RECORDER_SF_qqD.c)
 *     WPP_RECORDER_SF_ @ 0x140036F70 (WPP_RECORDER_SF_.c)
 *     ?NDIS_ACQUIRE_FILTER_SPIN_LOCK@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAE@Z @ 0x140062190 (-NDIS_ACQUIRE_FILTER_SPIN_LOCK@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAE@Z.c)
 *     ?ndisQueueStackExpansionFallbackWorkItem@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x140097B10 (-ndisQueueStackExpansionFallbackWorkItem@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
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
  int v14; // edx
  int v15; // r8d
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
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qDqd(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        (int)OidRequest,
        Status,
        0x16u,
        (struct _GUID *)&WPP_405c908af2143fed945d9a560d683c7b_Traceguids,
        (char)NdisFilterHandle,
        v6->DATA.QUERY_INFORMATION.Oid,
        (char)v6,
        Status);
LABEL_7:
    *((_DWORD *)NdisReserved + 2) = Status;
    if ( KeExpandKernelStackAndCalloutEx(
           (PEXPAND_STACK_CALLOUT)ndisFOidRequestCompleteInternal,
           NdisFilterHandle,
           (unsigned int)Size,
           0,
           0LL) < 0 )
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
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0xBu,
        0xDu,
        (struct _GUID *)&WPP_30382edc5f5534ea1982f80fa9fe2d2c_Traceguids,
        (char)v6);
    if ( v13 )
    {
      *(_BYTE *)(v13 + 232) = v6->SupportedRevision;
      *(_DWORD *)(v13 + 152) = *(_DWORD *)&v6->NdisReserved[80];
    }
    ExFreePoolWithTag(v6, 0);
    NdisReserved = (UCHAR *)(v9 + 72);
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qDqqd(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v14,
        v15,
        21,
        Context,
        (char)NdisFilterHandle,
        *(_DWORD *)(v9 + 32),
        (char)v6,
        v9,
        Status);
    goto LABEL_7;
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(OidRequest) = 2;
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)OidRequest,
      11,
      16,
      (struct _GUID *)&WPP_30382edc5f5534ea1982f80fa9fe2d2c_Traceguids);
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
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
