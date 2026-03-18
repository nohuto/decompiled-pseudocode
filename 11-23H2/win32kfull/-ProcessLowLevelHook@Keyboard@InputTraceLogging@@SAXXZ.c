/*
 * XREFs of ?ProcessLowLevelHook@Keyboard@InputTraceLogging@@SAXXZ @ 0x1C01FB340
 * Callers:
 *     xxxReceiveMessage @ 0x1C0126ED0 (xxxReceiveMessage.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00D82E4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1C00D9324 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 */

void InputTraceLogging::Keyboard::ProcessLowLevelHook(void)
{
  struct _EVENT_DATA_DESCRIPTOR v0; // [rsp+30h] [rbp-38h] BYREF

  if ( (unsigned int)dword_1C0359080 > 4 )
  {
    if ( tlgKeywordOn((__int64)&dword_1C0359080, 0x4000LL) )
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_1C0359080,
        (unsigned __int8 *)dword_1C031C122,
        0LL,
        0LL,
        2u,
        &v0);
  }
}
