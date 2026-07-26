/*
 * XREFs of ?ndisMOidRequest@@YAHPEAXPEAU_NDIS_OID_REQUEST@@@Z @ 0x140012DA0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisReferenceOpenByHandle@@YAEPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x140012F50 (-ndisReferenceOpenByHandle@@YAEPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ?ndisQueueOidRequest@@YAHPEAU_NDIS_OID_REQUEST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@2@Z @ 0x140013AB0 (-ndisQueueOidRequest@@YAHPEAU_NDIS_OID_REQUEST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK.c)
 *     ?ndisOidPMAddRemove@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x140015760 (-ndisOidPMAddRemove@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@.c)
 *     ?ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x14005A6A0 (-ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     NdisMIndicateStatusEx @ 0x140069730 (NdisMIndicateStatusEx.c)
 *     NdisMResetMiniport @ 0x1400A9990 (NdisMResetMiniport.c)
 *     __security_check_cookie @ 0x1400EDF40 (__security_check_cookie.c)
 */

__int64 __fastcall ndisMOidRequest(_QWORD *a1, struct _NDIS_OID_REQUEST *a2)
{
  struct _NDIS_OID_REQUEST *v2; // rbx
  __int64 v4; // rdx
  struct _NDIS_MINIPORT_BLOCK *v5; // rsi
  NDIS_REQUEST_TYPE RequestType; // eax
  unsigned int v7; // eax
  int v8; // ecx
  unsigned int v9; // eax
  unsigned int v10; // edi
  int v12; // ecx
  int v13; // [rsp+20h] [rbp-A8h] BYREF
  struct _NDIS_STATUS_INDICATION StatusIndication; // [rsp+30h] [rbp-98h] BYREF

  v2 = a2;
  LOBYTE(a2) = 6;
  if ( (unsigned __int8)ndisReferenceOpenByHandle(a1, a2) )
  {
    v5 = (struct _NDIS_MINIPORT_BLOCK *)a1[2];
    if ( (v5->DriverVerifyFlags & 0x400) == 0 )
      v2->SupportedRevision = 1;
    RequestType = v2->RequestType;
    if ( RequestType == NdisRequestSetInformation )
    {
      if ( v2->DATA.QUERY_INFORMATION.Oid == 66058 )
      {
        if ( v2->DATA.QUERY_INFORMATION.InformationBufferLength >= 4 )
        {
          v12 = *(_DWORD *)v2->DATA.QUERY_INFORMATION.InformationBuffer;
          *((_DWORD *)&StatusIndication.Header + 1) = 0;
          v13 = v12;
          memset(&StatusIndication.Guid, 0, 52);
          StatusIndication.StatusBuffer = &v13;
          memset(&StatusIndication.PortNumber, 0, 32);
          StatusIndication.Header = (_NDIS_OBJECT_HEADER)7340440;
          StatusIndication.SourceHandle = v5;
          StatusIndication.StatusCode = 1073807384;
          StatusIndication.StatusBufferSize = 4;
          NdisMIndicateStatusEx(v5, &StatusIndication);
          v10 = 0;
        }
        else
        {
          v10 = -1073676266;
        }
        goto LABEL_15;
      }
      if ( v2->DATA.QUERY_INFORMATION.Oid == 66066 )
      {
        if ( (*(_DWORD *)(a1[3] + 64LL) & 0x20000000) != 0 )
        {
          v10 = 0;
          NdisMResetMiniport(v5);
        }
        else
        {
          v10 = -1073741637;
        }
        goto LABEL_15;
      }
    }
    else if ( RequestType == NdisRequestQueryInformation && v2->DATA.QUERY_INFORMATION.Oid == 66059 )
    {
      if ( v2->DATA.QUERY_INFORMATION.InformationBufferLength >= 8 )
      {
        *(_QWORD *)v2->DATA.QUERY_INFORMATION.InformationBuffer = v5->MediaSpecificAttributes;
        v2->DATA.QUERY_INFORMATION.BytesWritten = v5->MediaSpecificAttributes != 0LL ? 8 : 0;
        v10 = 0;
      }
      else
      {
        v10 = -1073676268;
      }
LABEL_15:
      LOBYTE(v4) = 6;
      ndisMDereferenceOpenUnlocked(a1, v4);
      return v10;
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
      && (v7 = v2->DATA.QUERY_INFORMATION.Oid + 50265846, v7 <= 5)
      && (v8 = 43, _bittest(&v8, v7)) )
    {
      v9 = ndisOidPMAddRemove(v5, 0LL, v2);
    }
    else
    {
      v9 = ndisQueueOidRequest(v2, v5, 0LL, 0LL);
    }
    v10 = v9;
    if ( v9 == 259 )
      return v10;
    goto LABEL_15;
  }
  return 3221291010LL;
}
