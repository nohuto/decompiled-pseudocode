/*
 * XREFs of McTemplateU0qq_EventWriteTransfer @ 0x180089860
 * Callers:
 *     ?SendDeferredInfoToAllWindows@CImmersiveWindowCollection@CImmersiveApp@@QEAA?AW4SEND_DEFERRED_INFO_RESULTS@12@XZ @ 0x180088628 (-SendDeferredInfoToAllWindows@CImmersiveWindowCollection@CImmersiveApp@@QEAA-AW4SEND_DEFERRED_IN.c)
 * Callees:
 *     McGenEventWrite_EventWriteTransfer @ 0x18008A004 (McGenEventWrite_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 */

__int64 __fastcall McTemplateU0qq_EventWriteTransfer(__int64 a1, __int64 a2, __int64 a3)
{
  return McGenEventWrite_EventWriteTransfer(&MICROSOFT_TWINUI_PUBLISHER_Context, a2, a3, 3LL);
}
