/*
 * XREFs of TraceLoggingWriteMiracastStartSessionEntry @ 0x14008CBAC
 * Callers:
 *     DxgkMiracastStartMiracastSession @ 0x140080698 (DxgkMiracastStartMiracastSession.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1400407F4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x140047784 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 */

void TraceLoggingWriteMiracastStartSessionEntry()
{
  const GUID *v0; // r10
  struct _EVENT_DATA_DESCRIPTOR v1; // [rsp+30h] [rbp-48h] BYREF
  const GUID *v2; // [rsp+50h] [rbp-28h]
  int v3; // [rsp+58h] [rbp-20h]
  int v4; // [rsp+5Ch] [rbp-1Ch]

  if ( (unsigned int)dword_14015B660 > 5 )
  {
    if ( tlgKeywordOn((__int64)&dword_14015B660, 0x400000000000LL) )
    {
      v4 = 0;
      v2 = v0;
      v3 = 16;
      tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_14015B660, byte_14013D335, v0, 0LL, 3u, &v1);
    }
  }
}
