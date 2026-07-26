/*
 * XREFs of NdisFDirectOidRequest @ 0x14006C720
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qD @ 0x140010DF0 (WPP_RECORDER_SF_qD.c)
 *     WPP_RECORDER_SF_qq @ 0x1400129A0 (WPP_RECORDER_SF_qq.c)
 *     ?ndisDoDirectOidRequest@@YAHPEAU_NDIS_OID_REQUEST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@2@Z @ 0x140027C30 (-ndisDoDirectOidRequest@@YAHPEAU_NDIS_OID_REQUEST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BL.c)
 */

NDIS_STATUS __stdcall NdisFDirectOidRequest(NDIS_HANDLE NdisFilterHandle, PNDIS_OID_REQUEST OidRequest)
{
  NDIS_STATUS v4; // edi
  __int64 i; // rax
  char v7[8]; // [rsp+30h] [rbp-18h]

  v4 = -1073741823;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xAu,
      (struct _GUID *)&WPP_fdf545dd66dd39d1f17f4251088b9525_Traceguids,
      (char)NdisFilterHandle,
      OidRequest);
  if ( OidRequest->Header.Type != 0x96 || OidRequest->Header.Size < 0xECu )
    return -1073741811;
  if ( !OidRequest->Header.Revision )
    return -1071448020;
  if ( (*(_DWORD *)(*((_QWORD *)NdisFilterHandle + 4) + 3688LL) & 0x400) == 0 )
    OidRequest->SupportedRevision = 1;
  if ( *(_QWORD *)(*((_QWORD *)NdisFilterHandle + 2) + 304LL) )
  {
    for ( i = 0LL; ; i = (unsigned int)(i + 1) )
    {
      if ( (unsigned int)i >= 0x19 )
      {
        v4 = -1073741637;
        goto LABEL_14;
      }
      if ( OidRequest->DATA.QUERY_INFORMATION.Oid == ndisDirectOidRequestPathOids[i] )
        break;
    }
    *(_DWORD *)&OidRequest->NdisReserved[16] |= 0x200040u;
    *(_QWORD *)&OidRequest->NdisReserved[32] = NdisFilterHandle;
    v4 = ndisDoDirectOidRequest(
           OidRequest,
           *((struct _NDIS_MINIPORT_BLOCK **)NdisFilterHandle + 4),
           (struct _NDIS_FILTER_BLOCK *)NdisFilterHandle,
           0LL);
  }
LABEL_14:
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v7 = v4;
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xBu,
      (struct _GUID *)&WPP_fdf545dd66dd39d1f17f4251088b9525_Traceguids,
      (char)OidRequest,
      *(_QWORD *)v7);
  }
  return v4;
}
