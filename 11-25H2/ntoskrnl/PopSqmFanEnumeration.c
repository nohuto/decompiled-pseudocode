/*
 * XREFs of PopSqmFanEnumeration @ 0x140755D1C
 * Callers:
 *     PopFanAdd @ 0x1407504C0 (PopFanAdd.c)
 *     PopFanReportBootStartDevices @ 0x140C212E0 (PopFanReportBootStartDevices.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1404265C0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14042F500 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

void PopSqmFanEnumeration()
{
  struct _EVENT_DATA_DESCRIPTOR v0; // [rsp+30h] [rbp-38h] BYREF

  if ( (unsigned int)dword_140E07680 > 5 && tlgKeywordOn((__int64)&dword_140E07680, 0x400000000000LL) )
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E07680, (unsigned __int8 *)byte_14004E073, 0LL, 0LL, 2u, &v0);
}
