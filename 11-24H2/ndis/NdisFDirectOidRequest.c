/*
 * XREFs of NdisFDirectOidRequest @ 0x140050C10
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x14000CEB0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qD @ 0x140014130 (WPP_RECORDER_SF_qD.c)
 *     ?ndisDoDirectOidRequest@@YAHPEAU_NDIS_OID_REQUEST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@2@Z @ 0x140050D80 (-ndisDoDirectOidRequest@@YAHPEAU_NDIS_OID_REQUEST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BL.c)
 */

NDIS_STATUS __stdcall NdisFDirectOidRequest(NDIS_HANDLE NdisFilterHandle, PNDIS_OID_REQUEST OidRequest)
{
  PNDIS_OID_REQUEST v2; // rbx
  NDIS_STATUS v4; // edi
  __int64 i; // rax
  char v7[8]; // [rsp+30h] [rbp-18h]
  char v8; // [rsp+30h] [rbp-18h]

  v2 = OidRequest;
  v4 = -1073741823;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v8 = (char)OidRequest;
    LOBYTE(OidRequest) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)OidRequest,
      11,
      10,
      (struct _GUID *)&WPP_fdf545dd66dd39d1f17f4251088b9525_Traceguids,
      (char)NdisFilterHandle,
      v8);
  }
  if ( v2->Header.Type != 0x96 || v2->Header.Size < 0xECu )
    return -1073741811;
  if ( !v2->Header.Revision )
    return -1071448020;
  if ( (*(_DWORD *)(*((_QWORD *)NdisFilterHandle + 4) + 3688LL) & 0x400) == 0 )
    v2->SupportedRevision = 1;
  if ( *(_QWORD *)(*((_QWORD *)NdisFilterHandle + 2) + 304LL) )
  {
    for ( i = 0LL; ; i = (unsigned int)(i + 1) )
    {
      if ( (unsigned int)i >= 0x19 )
      {
        v4 = -1073741637;
        goto LABEL_14;
      }
      if ( v2->DATA.QUERY_INFORMATION.Oid == ndisDirectOidRequestPathOids[i] )
        break;
    }
    *(_DWORD *)&v2->NdisReserved[16] |= 0x200040u;
    *(_QWORD *)&v2->NdisReserved[32] = NdisFilterHandle;
    v4 = ndisDoDirectOidRequest(
           v2,
           *((struct _NDIS_MINIPORT_BLOCK **)NdisFilterHandle + 4),
           (struct _NDIS_FILTER_BLOCK *)NdisFilterHandle,
           0LL);
  }
LABEL_14:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v7 = v4;
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xBu,
      (struct _GUID *)&WPP_fdf545dd66dd39d1f17f4251088b9525_Traceguids,
      (char)v2,
      *(_QWORD *)v7);
  }
  return v4;
}
