/*
 * XREFs of ndisNdkPcwCollectMiniportStats @ 0x140162600
 * Callers:
 *     ndisNdkPcwCollectData @ 0x140162550 (ndisNdkPcwCollectData.c)
 * Callees:
 *     ?ndisQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQUEST@@EPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x14000AD50 (-ndisQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQ.c)
 *     __security_check_cookie @ 0x1400E70B0 (__security_check_cookie.c)
 *     memset @ 0x1400E7500 (memset.c)
 */

NTSTATUS __fastcall ndisNdkPcwCollectMiniportStats(__int64 a1, struct _PCW_BUFFER *a2)
{
  struct _NDIS_MINIPORT_BLOCK *v4; // rbx
  const UNICODE_STRING *pModifiedInstanceName; // rdx
  ULONG v6; // r8d
  struct _PCW_DATA Data; // [rsp+30h] [rbp-D0h] BYREF
  struct _NDIS_OID_REQUEST v9; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v10; // [rsp+130h] [rbp+30h]
  __int64 v11; // [rsp+140h] [rbp+40h] BYREF
  _BYTE v12[248]; // [rsp+148h] [rbp+48h] BYREF

  memset(v12, 0, 0xF0uLL);
  v4 = *(struct _NDIS_MINIPORT_BLOCK **)(a1 + 8);
  v11 = 16253312LL;
  memset(&v9.NdisReserved[40], 0, 128);
  v10 = 0LL;
  *(_QWORD *)&v9.NdisReserved[32] = &ndisIntReqGeneric;
  memset(&v9, 0, 32);
  *(&v9.DATA.METHOD_INFORMATION.Oid + 1) = 0;
  memset(&v9.DATA.METHOD_INFORMATION.InputBufferLength, 0, 56);
  *(_DWORD *)&v9.NdisReserved[16] = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 8)) | 8;
  EtwActivityIdControl(3u, (LPGUID)&v9.NdisReserved[96]);
  v9.Header = (NDIS_OBJECT_HEADER)15466902;
  v9.DATA.QUERY_INFORMATION.InformationBuffer = &v11;
  v9.DATA.QUERY_INFORMATION.Oid = -66846206;
  *(_QWORD *)&v9.RequestType = 2LL;
  v9.DATA.QUERY_INFORMATION.InformationBufferLength = 248;
  if ( (unsigned int)ndisQuerySetMiniport(v4, 0LL, &v9, 0, 0LL) )
    return -1073741823;
  pModifiedInstanceName = v4->pModifiedInstanceName;
  v6 = *(_DWORD *)(a1 + 20);
  Data.Data = v12;
  Data.Size = 240;
  if ( !pModifiedInstanceName )
    pModifiedInstanceName = v4->pAdapterInstanceName;
  return PcwAddInstance(a2, pModifiedInstanceName, v6, 1u, &Data);
}
