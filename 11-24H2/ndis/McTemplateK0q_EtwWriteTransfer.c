/*
 * XREFs of McTemplateK0q_EtwWriteTransfer @ 0x14003AA30
 * Callers:
 *     ?ndisSubmitIdleRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x14005E3E0 (-ndisSubmitIdleRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ndisTracePeriodicReceivesStart @ 0x14008BD20 (ndisTracePeriodicReceivesStart.c)
 *     ndisNsiClientParameterChangeHandler @ 0x140160430 (ndisNsiClientParameterChangeHandler.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x140038B00 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1400E70B0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0q_EtwWriteTransfer(__int64 a1, const EVENT_DESCRIPTOR *a2, const GUID *a3, int a4)
{
  _EVENT_DATA_DESCRIPTOR v5; // [rsp+30h] [rbp-38h] BYREF
  int *v6; // [rsp+40h] [rbp-28h]
  __int64 v7; // [rsp+48h] [rbp-20h]
  int v8; // [rsp+88h] [rbp+20h] BYREF

  v8 = a4;
  v7 = 4LL;
  v6 = &v8;
  return McGenEventWrite_EtwWriteTransfer(NDIS_PROVIDER_ID_Context, a2, a3, 2u, &v5);
}
