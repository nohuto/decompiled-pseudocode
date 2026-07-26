/*
 * XREFs of ?ndisMOidRequest@@YAHPEAXPEAU_NDIS_OID_REQUEST@@@Z @ 0x140008340
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x140006B10 (-ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ?ndisOidPMAddRemove@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x140008000 (-ndisOidPMAddRemove@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@.c)
 *     ?ndisReferenceOpenByHandle@@YAEPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1400084F0 (-ndisReferenceOpenByHandle@@YAEPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ?ndisQueueOidRequest@@YAHPEAU_NDIS_OID_REQUEST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@2@Z @ 0x140008A10 (-ndisQueueOidRequest@@YAHPEAU_NDIS_OID_REQUEST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK.c)
 *     NdisMIndicateStatusEx @ 0x14004E030 (NdisMIndicateStatusEx.c)
 *     NdisMResetMiniport @ 0x1400A1740 (NdisMResetMiniport.c)
 *     __security_check_cookie @ 0x1400E70B0 (__security_check_cookie.c)
 */

__int64 __fastcall ndisMOidRequest(_QWORD *a1, struct _NDIS_OID_REQUEST *a2)
{
  struct _NDIS_OID_REQUEST *v2; // rbx
  struct _NDIS_MINIPORT_BLOCK *v4; // rsi
  NDIS_REQUEST_TYPE RequestType; // eax
  unsigned int v6; // eax
  int v7; // ecx
  unsigned int v8; // eax
  unsigned int v9; // edi
  int v11; // ecx
  int v12; // [rsp+20h] [rbp-A8h] BYREF
  struct _NDIS_STATUS_INDICATION StatusIndication; // [rsp+30h] [rbp-98h] BYREF

  v2 = a2;
  LOBYTE(a2) = 6;
  if ( (unsigned __int8)ndisReferenceOpenByHandle(a1, a2) )
  {
    v4 = (struct _NDIS_MINIPORT_BLOCK *)a1[2];
    if ( (v4->DriverVerifyFlags & 0x400) == 0 )
      v2->SupportedRevision = 1;
    RequestType = v2->RequestType;
    if ( RequestType == NdisRequestSetInformation )
    {
      if ( v2->DATA.QUERY_INFORMATION.Oid == 66058 )
      {
        if ( v2->DATA.QUERY_INFORMATION.InformationBufferLength >= 4 )
        {
          v11 = *(_DWORD *)v2->DATA.QUERY_INFORMATION.InformationBuffer;
          *((_DWORD *)&StatusIndication.Header + 1) = 0;
          v12 = v11;
          memset(&StatusIndication.Guid, 0, 52);
          StatusIndication.StatusBuffer = &v12;
          memset(&StatusIndication.PortNumber, 0, 32);
          StatusIndication.Header = (_NDIS_OBJECT_HEADER)7340440;
          StatusIndication.SourceHandle = v4;
          StatusIndication.StatusCode = 1073807384;
          StatusIndication.StatusBufferSize = 4;
          NdisMIndicateStatusEx(v4, &StatusIndication);
          v9 = 0;
        }
        else
        {
          v9 = -1073676266;
        }
        goto LABEL_15;
      }
      if ( v2->DATA.QUERY_INFORMATION.Oid == 66066 )
      {
        if ( (*(_DWORD *)(a1[3] + 64LL) & 0x20000000) != 0 )
        {
          v9 = 0;
          NdisMResetMiniport(v4);
        }
        else
        {
          v9 = -1073741637;
        }
        goto LABEL_15;
      }
    }
    else if ( RequestType == NdisRequestQueryInformation && v2->DATA.QUERY_INFORMATION.Oid == 66059 )
    {
      if ( v2->DATA.QUERY_INFORMATION.InformationBufferLength >= 8 )
      {
        *(_QWORD *)v2->DATA.QUERY_INFORMATION.InformationBuffer = v4->MediaSpecificAttributes;
        v2->DATA.QUERY_INFORMATION.BytesWritten = v4->MediaSpecificAttributes != 0LL ? 8 : 0;
        v9 = 0;
      }
      else
      {
        v9 = -1073676268;
      }
LABEL_15:
      ndisMDereferenceOpenUnlocked((__int64)a1, 6u);
      return v9;
    }
    *(_OWORD *)v2->NdisReserved = 0LL;
    *(_OWORD *)&v2->NdisReserved[16] = 0LL;
    *(_OWORD *)&v2->NdisReserved[32] = 0LL;
    *(_OWORD *)&v2->NdisReserved[48] = 0LL;
    *(_OWORD *)&v2->NdisReserved[64] = 0LL;
    *(_OWORD *)&v2->NdisReserved[80] = 0LL;
    *(_OWORD *)&v2->NdisReserved[96] = 0LL;
    *(_DWORD *)&v2->NdisReserved[16] |= 0x20u;
    *(_QWORD *)&v2->NdisReserved[32] = a1;
    *(_QWORD *)&v2->NdisReserved[24] = 0LL;
    EtwActivityIdControl(3u, (LPGUID)&v2->NdisReserved[96]);
    if ( v2->RequestType == NdisRequestSetInformation
      && (v6 = v2->DATA.QUERY_INFORMATION.Oid + 50265846, v6 <= 5)
      && (v7 = 43, _bittest(&v7, v6)) )
    {
      v8 = ndisOidPMAddRemove(v4, 0LL, v2);
    }
    else
    {
      v8 = ndisQueueOidRequest(v2, v4, 0LL, 0LL);
    }
    v9 = v8;
    if ( v8 == 259 )
      return v9;
    goto LABEL_15;
  }
  return 3221291010LL;
}
