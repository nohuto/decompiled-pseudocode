/*
 * XREFs of McTemplateK0_EtwWriteTransfer @ 0x140098BF0
 * Callers:
 *     ndisWnfPdcCallback @ 0x14007D060 (ndisWnfPdcCallback.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1400242C0 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1400EDF40 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0_EtwWriteTransfer(__int64 a1, __int64 a2, const GUID *a3)
{
  _EVENT_DATA_DESCRIPTOR v4; // [rsp+30h] [rbp-28h] BYREF

  return McGenEventWrite_EtwWriteTransfer(NDIS_PROVIDER_ID_Context, &EnteringConnectedStandby, a3, 1u, &v4);
}
