/*
 * XREFs of NdisFreeCloneOidRequest @ 0x14000CE10
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x14000CEB0 (WPP_RECORDER_SF_qq.c)
 */

void __stdcall NdisFreeCloneOidRequest(NDIS_HANDLE SourceHandle, PNDIS_OID_REQUEST Request)
{
  __int64 v2; // rdi
  PNDIS_OID_REQUEST v3; // rbx
  char v4; // [rsp+28h] [rbp-20h]

  v2 = *(_QWORD *)&Request->NdisReserved[24];
  v3 = Request;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v4 = (char)Request;
    LOBYTE(Request) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)Request,
      11,
      13,
      (struct _GUID *)&WPP_30382edc5f5534ea1982f80fa9fe2d2c_Traceguids,
      v4,
      (char)SourceHandle);
  }
  if ( v2 )
  {
    *(_BYTE *)(v2 + 232) = v3->SupportedRevision;
    *(_DWORD *)(v2 + 152) = *(_DWORD *)&v3->NdisReserved[80];
  }
  ExFreePoolWithTag(v3, 0);
}
