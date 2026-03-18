/*
 * XREFs of TraceLoggingWriteMiracastStartSessionEntry @ 0x14008DE70
 * Callers:
 *     DxgkMiracastStartMiracastSession @ 0x140080D18 (DxgkMiracastStartMiracastSession.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1400401E4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1400471A4 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 */

void TraceLoggingWriteMiracastStartSessionEntry()
{
  const GUID *v0; // r10
  struct _EVENT_DATA_DESCRIPTOR v1; // [rsp+30h] [rbp-48h] BYREF
  const GUID *v2; // [rsp+50h] [rbp-28h]
  int v3; // [rsp+58h] [rbp-20h]
  int v4; // [rsp+5Ch] [rbp-1Ch]

  if ( (unsigned int)dword_14015E650 > 5 )
  {
    if ( tlgKeywordOn((__int64)&dword_14015E650, 0x400000000000LL) )
    {
      v4 = 0;
      v2 = v0;
      v3 = 16;
      tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_14015E650, byte_14013FF0D, v0, 0LL, 3u, &v1);
    }
  }
}
