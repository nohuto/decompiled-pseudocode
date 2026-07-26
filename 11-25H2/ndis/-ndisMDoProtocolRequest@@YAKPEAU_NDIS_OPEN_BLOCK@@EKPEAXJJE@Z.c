/*
 * XREFs of ?ndisMDoProtocolRequest@@YAKPEAU_NDIS_OPEN_BLOCK@@EKPEAXJJE@Z @ 0x14005B2F0
 * Callers:
 *     ?ndisCleanUpForProtocol@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x140076710 (-ndisCleanUpForProtocol@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qD @ 0x140010DF0 (WPP_RECORDER_SF_qD.c)
 *     ?ndisQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQUEST@@EPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1400130E0 (-ndisQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQ.c)
 *     WPP_RECORDER_SF_qDL @ 0x140027200 (WPP_RECORDER_SF_qDL.c)
 *     ?ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x14005AF00 (-ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     __security_check_cookie @ 0x1400EDF40 (__security_check_cookie.c)
 */

__int64 __fastcall ndisMDoProtocolRequest(
        struct _NDIS_OPEN_BLOCK *a1,
        __int64 a2,
        NDIS_OID a3,
        void *a4,
        UINT a5,
        unsigned int a6)
{
  unsigned int v9; // ebx
  struct _NDIS_MINIPORT_BLOCK *MiniportHandle; // rdi
  int v11; // eax
  int v12; // edx
  struct _NDIS_OID_REQUEST v14; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v15; // [rsp+130h] [rbp+30h]

  v9 = 0;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      6u,
      0x3Bu,
      (struct _GUID *)&WPP_5fbf5d068c993e9b80cf56cd13d85fb9_Traceguids,
      (char)a1,
      a3);
  MiniportHandle = a1->MiniportHandle;
  memset(&v14.NdisReserved[40], 0, 128);
  v15 = 0LL;
  memset(&v14.RequestType, 0, 36);
  *(_QWORD *)&v14.NdisReserved[32] = a1;
  memset(&v14.DATA.METHOD_INFORMATION.OutputBufferLength, 0, 52);
  *(_DWORD *)&v14.NdisReserved[16] = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 4)) | 8;
  EtwActivityIdControl(3u, (LPGUID)&v14.NdisReserved[96]);
  ndisMReferenceOpen((__int64)a1, 6u);
  v14.RequestType = NdisRequestSetInformation;
  *(_DWORD *)&v14.NdisReserved[16] |= 0x220u;
  v14.Header = (NDIS_OBJECT_HEADER)16253334;
  v14.DATA.QUERY_INFORMATION.Oid = a3;
  v14.DATA.QUERY_INFORMATION.InformationBuffer = a4;
  v14.DATA.QUERY_INFORMATION.InformationBufferLength = a5;
  v11 = ndisQuerySetMiniport(MiniportHandle, 0LL, &v14, 1u, 0LL);
  if ( v11 )
  {
    v9 = a6;
    if ( v11 != -1 )
      v9 = a6 + 1;
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qDL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v12,
      6u,
      0x3Cu,
      (struct _GUID *)&WPP_5fbf5d068c993e9b80cf56cd13d85fb9_Traceguids,
      (char)a1,
      a3,
      v9);
  return v9;
}
