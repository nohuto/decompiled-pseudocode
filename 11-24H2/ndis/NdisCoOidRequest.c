/*
 * XREFs of NdisCoOidRequest @ 0x140089750
 * Callers:
 *     NdisCoRequest @ 0x1400D23A0 (NdisCoRequest.c)
 * Callees:
 *     NdisMCoOidRequestComplete @ 0x140006A10 (NdisMCoOidRequestComplete.c)
 *     ?ndisDereferenceAf@@YAXPEAU_NDIS_CO_AF_BLOCK@@@Z @ 0x140006DD0 (-ndisDereferenceAf@@YAXPEAU_NDIS_CO_AF_BLOCK@@@Z.c)
 *     WPP_RECORDER_SF_qq @ 0x14000CEB0 (WPP_RECORDER_SF_qq.c)
 *     NdisReferenceWithTag @ 0x140010F90 (NdisReferenceWithTag.c)
 *     WPP_RECORDER_SF_qD @ 0x140014130 (WPP_RECORDER_SF_qD.c)
 *     WPP_RECORDER_SF_qqq @ 0x14003E6D0 (WPP_RECORDER_SF_qqq.c)
 *     ndisCoOidRequestToRequest @ 0x140074D50 (ndisCoOidRequestToRequest.c)
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 */

NDIS_STATUS __stdcall NdisCoOidRequest(
        NDIS_HANDLE NdisBindingHandle,
        NDIS_HANDLE NdisAfHandle,
        NDIS_HANDLE NdisVcHandle,
        NDIS_HANDLE NdisPartyHandle,
        PNDIS_OID_REQUEST OidRequest)
{
  PNDIS_OID_REQUEST v5; // rsi
  unsigned int v10; // ebx
  __int64 (__fastcall *v11)(__int64, PNDIS_OID_REQUEST, __int64, PNDIS_OID_REQUEST); // rbp
  __int64 (__fastcall *v12)(__int64, __int64, __int64, __int64); // rbx
  KIRQL v13; // al
  KSPIN_LOCK *v14; // rcx
  int v15; // edx
  char v16; // r15
  __int64 v17; // r12
  __int64 v18; // r14
  bool v19; // zf
  unsigned int v21; // eax
  __int64 v22; // rax
  __int64 v23; // r13
  KIRQL v24; // cl
  int v25; // edx
  KIRQL v26; // bl
  KIRQL v27; // dl
  __int64 v28; // rbp
  __int64 v29; // rax
  struct _GUID *v30; // [rsp+20h] [rbp-58h]
  char v31[8]; // [rsp+30h] [rbp-48h]
  __int64 (__fastcall *v32)(__int64, __int64, __int64, __int64); // [rsp+80h] [rbp+8h] BYREF
  __int64 v33; // [rsp+90h] [rbp+18h]

  v5 = OidRequest;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xCu,
      (struct _GUID *)&WPP_f2e723125d8f3d1097c3ab5c6e889825_Traceguids,
      (char)NdisBindingHandle,
      (char)NdisAfHandle,
      OidRequest);
  *(_QWORD *)&v5->NdisReserved[32] = NdisBindingHandle;
  if ( v5->Header.Type != 0x96 || v5->Header.Size < 0xECu )
  {
    v10 = -1073741823;
    goto LABEL_29;
  }
  if ( !v5->Header.Revision )
  {
    v10 = -1071448020;
    goto LABEL_29;
  }
  if ( !NdisAfHandle )
  {
    v23 = *((_QWORD *)NdisBindingHandle + 2);
    v24 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v23 + 96));
    *(_QWORD *)(v23 + 520) = KeGetCurrentThread();
    v25 = *((_DWORD *)NdisBindingHandle + 56);
    LOBYTE(OidRequest) = v24;
    if ( (v25 & 0x8000) != 0 )
    {
      v10 = -1073676286;
    }
    else
    {
      if ( (*(_DWORD *)(v23 + 120) & 0x300000) == 0 )
      {
        v26 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)NdisBindingHandle + 75);
        NdisReferenceWithTag(*((struct _NDIS_REFCOUNT_BLOCK **)NdisBindingHandle + 74), 6u);
        ++*((_DWORD *)NdisBindingHandle + 57);
        KeReleaseSpinLock((PKSPIN_LOCK)NdisBindingHandle + 75, v26);
        v27 = (unsigned __int8)OidRequest;
        v28 = 0LL;
        *(_QWORD *)(v23 + 520) = 0LL;
        KeReleaseSpinLock((PKSPIN_LOCK)(v23 + 96), v27);
        *(_DWORD *)&v5->NdisReserved[16] |= 0x20u;
        *(_QWORD *)&v5->NdisReserved[32] = NdisBindingHandle;
        *(_QWORD *)&v5->NdisReserved[56] = 0LL;
        if ( NdisVcHandle )
        {
          if ( *((NDIS_HANDLE *)NdisVcHandle + 10) == NdisBindingHandle )
            v29 = *((_QWORD *)NdisVcHandle + 3);
          else
            v29 = *((_QWORD *)NdisVcHandle + 18);
          *(_QWORD *)&v5->NdisReserved[56] = v29;
        }
        if ( (*(_DWORD *)(*((_QWORD *)NdisBindingHandle + 2) + 124LL) & 0x100) != 0 )
        {
          if ( v5->RequestType != NdisRequestSetInformation )
            LODWORD(v28) = -1073741823;
          v10 = v28;
        }
        else
        {
          if ( NdisVcHandle )
            v28 = *((_QWORD *)NdisVcHandle + 25);
          v10 = (*(__int64 (__fastcall **)(_QWORD, __int64, PNDIS_OID_REQUEST))(*(_QWORD *)(v23 + 3760) + 552LL))(
                  *(_QWORD *)(v23 + 2232),
                  v28,
                  v5);
        }
        if ( v10 != 259 )
        {
          NdisMCoOidRequestComplete(*((NDIS_HANDLE *)NdisBindingHandle + 2), NdisVcHandle, v5, v10);
          v10 = 259;
        }
        goto LABEL_29;
      }
      v10 = -1073676275;
    }
    *(_QWORD *)(v23 + 520) = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)(v23 + 96), v24);
    goto LABEL_29;
  }
  v11 = 0LL;
  v12 = 0LL;
  v32 = 0LL;
  v13 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)NdisAfHandle + 48);
  v14 = (KSPIN_LOCK *)((char *)NdisAfHandle + 384);
  if ( *((int *)NdisAfHandle + 2) < 0 )
  {
    KeReleaseSpinLock(v14, v13);
    v10 = -1073741823;
    goto LABEL_29;
  }
  ++*((_DWORD *)NdisAfHandle + 3);
  KeReleaseSpinLock(v14, v13);
  *(_DWORD *)&v5->NdisReserved[16] |= 8u;
  OidRequest = 0LL;
  v33 = 0LL;
  KeInitializeEvent((PRKEVENT)&v5->NdisReserved[40], NotificationEvent, 0);
  if ( *((NDIS_HANDLE *)NdisAfHandle + 46) == NdisBindingHandle )
  {
    if ( *((_DWORD *)NdisAfHandle + 98) < 6u )
    {
      v16 = 1;
      v12 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(*((_QWORD *)NdisAfHandle + 3) + 120LL);
      v32 = v12;
    }
    else
    {
      v16 = 0;
      v11 = *(__int64 (__fastcall **)(__int64, PNDIS_OID_REQUEST, __int64, PNDIS_OID_REQUEST))(*((_QWORD *)NdisAfHandle
                                                                                               + 4)
                                                                                             + 120LL);
    }
    v17 = *((_QWORD *)NdisAfHandle + 6);
    *(_QWORD *)&v5->NdisReserved[64] = *((_QWORD *)NdisAfHandle + 47);
    if ( NdisVcHandle )
    {
      *(_QWORD *)&v5->NdisReserved[56] = *((_QWORD *)NdisVcHandle + 3);
      OidRequest = (PNDIS_OID_REQUEST)*((_QWORD *)NdisVcHandle + 18);
    }
    if ( NdisPartyHandle )
    {
      *(_QWORD *)&v5->NdisReserved[40] = *((_QWORD *)NdisPartyHandle + 2);
      v18 = *((_QWORD *)NdisPartyHandle + 1);
      goto LABEL_25;
    }
  }
  else
  {
    if ( *((_DWORD *)NdisAfHandle + 99) < 6u )
    {
      v12 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))*((_QWORD *)NdisAfHandle + 10);
      v16 = 1;
      v32 = v12;
    }
    else
    {
      v11 = (__int64 (__fastcall *)(__int64, PNDIS_OID_REQUEST, __int64, PNDIS_OID_REQUEST))*((_QWORD *)NdisAfHandle + 29);
      v16 = 0;
    }
    v17 = *((_QWORD *)NdisAfHandle + 47);
    *(_QWORD *)&v5->NdisReserved[64] = *((_QWORD *)NdisAfHandle + 6);
    if ( NdisVcHandle )
    {
      *(_QWORD *)&v5->NdisReserved[56] = *((_QWORD *)NdisVcHandle + 18);
      OidRequest = (PNDIS_OID_REQUEST)*((_QWORD *)NdisVcHandle + 3);
    }
    if ( NdisPartyHandle )
    {
      *(_QWORD *)&v5->NdisReserved[40] = *((_QWORD *)NdisPartyHandle + 1);
      v18 = *((_QWORD *)NdisPartyHandle + 2);
      goto LABEL_25;
    }
  }
  v18 = v33;
LABEL_25:
  if ( v16 )
    v19 = v12 == 0LL;
  else
    v19 = v11 == 0LL;
  if ( v19 )
  {
    v10 = -1073741637;
    ndisDereferenceAf((KSPIN_LOCK *)NdisAfHandle);
    goto LABEL_29;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v15) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v15,
      11,
      13,
      (struct _GUID *)&WPP_f2e723125d8f3d1097c3ab5c6e889825_Traceguids,
      (char)v12,
      (char)v5);
  }
  if ( v16 )
    v21 = ndisCoOidRequestToRequest(&v32, v17, (__int64)OidRequest, v18, (__int64)v5);
  else
    v21 = v11(v17, OidRequest, v18, v5);
  v10 = v21;
  if ( v21 != 259 )
  {
    v22 = *(_QWORD *)&v5->NdisReserved[32];
    if ( v22 )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, PNDIS_OID_REQUEST, unsigned int))(v22 + 1160))(
        *(_QWORD *)&v5->NdisReserved[64],
        *(_QWORD *)&v5->NdisReserved[56],
        *(_QWORD *)&v5->NdisReserved[40],
        v5,
        v10);
    }
    else
    {
      if ( *((_DWORD *)NdisAfHandle + 98) < 6u )
      {
        v30 = *(struct _GUID **)&v5->NdisReserved[24];
        *(_DWORD *)&v30[3].Data4[4] = v5->DATA.QUERY_INFORMATION.BytesWritten;
        v30[4].Data1 = v5->DATA.QUERY_INFORMATION.BytesNeeded;
        (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, struct _GUID *))(*((_QWORD *)NdisAfHandle + 3) + 128LL))(
          v10,
          *(_QWORD *)&v5->NdisReserved[64],
          *(_QWORD *)&v5->NdisReserved[56],
          *(_QWORD *)&v5->NdisReserved[40],
          v30);
        ExFreePoolWithTag(v5, 0);
        ndisDereferenceAf((KSPIN_LOCK *)NdisAfHandle);
        v10 = 259;
        goto LABEL_29;
      }
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, PNDIS_OID_REQUEST, unsigned int))(*((_QWORD *)NdisAfHandle + 4)
                                                                                      + 128LL))(
        *(_QWORD *)&v5->NdisReserved[64],
        *(_QWORD *)&v5->NdisReserved[56],
        *(_QWORD *)&v5->NdisReserved[40],
        v5,
        v10);
    }
    ndisDereferenceAf((KSPIN_LOCK *)NdisAfHandle);
    v10 = 259;
  }
LABEL_29:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v31 = v10;
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xEu,
      (struct _GUID *)&WPP_f2e723125d8f3d1097c3ab5c6e889825_Traceguids,
      (char)v5,
      *(_QWORD *)v31);
  }
  return v10;
}
