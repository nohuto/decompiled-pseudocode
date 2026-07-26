/*
 * XREFs of NdisOidRequest @ 0x14006D000
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_Dqq @ 0x14006D0C0 (WPP_RECORDER_SF_Dqq.c)
 *     WPP_RECORDER_SF_dDq @ 0x14006D1D0 (WPP_RECORDER_SF_dDq.c)
 *     _guard_dispatch_icall @ 0x1400EDFC0 (_guard_dispatch_icall.c)
 */

NDIS_STATUS __stdcall NdisOidRequest(NDIS_HANDLE NdisBindingHandle, PNDIS_OID_REQUEST OidRequest)
{
  NDIS_OID Oid; // esi
  NDIS_STATUS result; // eax
  int v6; // edx
  NDIS_STATUS v7; // edi

  Oid = OidRequest->DATA.QUERY_INFORMATION.Oid;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_Dqq(*((_QWORD *)WPP_GLOBAL_Control + 8), (_DWORD)OidRequest);
  result = (*((__int64 (__fastcall **)(NDIS_HANDLE, PNDIS_OID_REQUEST))NdisBindingHandle + 24))(
             NdisBindingHandle,
             OidRequest);
  v7 = result;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v6) = 4;
    WPP_RECORDER_SF_dDq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v6,
      11,
      15,
      (struct _GUID *)&WPP_4b0223d673a33a9431a2fd521e3a3c3a_Traceguids,
      result,
      Oid,
      (char)OidRequest);
    return v7;
  }
  return result;
}
