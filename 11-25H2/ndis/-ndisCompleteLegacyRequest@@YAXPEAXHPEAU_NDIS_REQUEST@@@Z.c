/*
 * XREFs of ?ndisCompleteLegacyRequest@@YAXPEAXHPEAU_NDIS_REQUEST@@@Z @ 0x14007A8C0
 * Callers:
 *     NdisMQueryInformationComplete @ 0x14007A800 (NdisMQueryInformationComplete.c)
 *     ?ndisMAbortRequests@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140086120 (-ndisMAbortRequests@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     NdisMSetInformationComplete @ 0x1400C82A0 (NdisMSetInformationComplete.c)
 * Callees:
 *     ?ndisMOidRequestCompleteInternal@@YAXPEAXPEAU_NDIS_OID_REQUEST@@H1@Z @ 0x140024E00 (-ndisMOidRequestCompleteInternal@@YAXPEAXPEAU_NDIS_OID_REQUEST@@H1@Z.c)
 *     WPP_RECORDER_SF_qql @ 0x140028490 (WPP_RECORDER_SF_qql.c)
 *     WPP_RECORDER_SF_qqqL @ 0x14004F5B0 (WPP_RECORDER_SF_qqqL.c)
 */

void __fastcall ndisCompleteLegacyRequest(struct _NDIS_MINIPORT_BLOCK *a1, int a2, struct _NDIS_REQUEST *a3)
{
  KIRQL v6; // al
  _NDIS_REQUEST *PendingRequest; // rsi
  _NDIS_OID_REQUEST *PendingOidRequest; // r15
  int v9; // edx
  _NDIS_REQUEST_TYPE RequestType; // ecx
  struct _NDIS_OID_REQUEST *v11; // r9
  char v12[8]; // [rsp+38h] [rbp-40h]

  v6 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
  a1->MiniportThread = KeGetCurrentThread();
  if ( a3 )
  {
    PendingOidRequest = *(_NDIS_OID_REQUEST **)&a3->MacReserved[8];
    PendingRequest = a3;
  }
  else
  {
    PendingRequest = a1->PendingRequest;
    PendingOidRequest = a1->PendingOidRequest;
    a1->PendingRequest = 0LL;
  }
  a1->MiniportThread = 0LL;
  KeReleaseSpinLock(&a1->Lock, v6);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v9,
      0xBu,
      0x24u,
      (struct _GUID *)&WPP_4b0223d673a33a9431a2fd521e3a3c3a_Traceguids,
      (char)a1,
      (char)PendingOidRequest,
      (char)PendingRequest,
      a2);
  if ( PendingRequest )
  {
    RequestType = PendingRequest->RequestType;
    if ( RequestType == NdisRequestQueryInformation || (unsigned int)(RequestType - 1) < 2 )
    {
      PendingOidRequest->DATA.QUERY_INFORMATION.BytesWritten = PendingRequest->DATA.QUERY_INFORMATION.BytesWritten;
      PendingOidRequest->DATA.QUERY_INFORMATION.BytesNeeded = PendingRequest->DATA.QUERY_INFORMATION.BytesNeeded;
    }
    ExFreePoolWithTag(PendingRequest, 0);
    v11 = PendingOidRequest;
    if ( !a3 )
      v11 = 0LL;
    ndisMOidRequestCompleteInternal(a1, PendingOidRequest, a2, v11);
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      *(_DWORD *)v12 = a2;
      WPP_RECORDER_SF_qql(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0xBu,
        0x25u,
        (struct _GUID *)&WPP_4b0223d673a33a9431a2fd521e3a3c3a_Traceguids,
        (char)a1,
        (char)PendingOidRequest,
        *(_QWORD *)v12);
    }
  }
}
