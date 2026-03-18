/*
 * XREFs of PopSqmFanEnumeration @ 0x1407657DC
 * Callers:
 *     PopFanAdd @ 0x14075CDF0 (PopFanAdd.c)
 *     PopFanReportBootStartDevices @ 0x140C323E4 (PopFanReportBootStartDevices.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140330CB0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x140426AF0 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 */

void PopSqmFanEnumeration()
{
  struct _EVENT_DATA_DESCRIPTOR v0; // [rsp+30h] [rbp-38h] BYREF

  if ( (unsigned int)dword_140E076F0 > 5 && tlgKeywordOn((__int64)&dword_140E076F0, 0x400000000000LL) )
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E076F0, (unsigned __int8 *)word_14004F5AA, 0LL, 0LL, 2u, &v0);
}
