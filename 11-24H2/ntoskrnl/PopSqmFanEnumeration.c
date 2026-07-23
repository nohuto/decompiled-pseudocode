/*
 * XREFs of PopSqmFanEnumeration @ 0x1407651AC
 * Callers:
 *     PopFanAdd @ 0x14075BD90 (PopFanAdd.c)
 *     PopFanReportBootStartDevices @ 0x140C34524 (PopFanReportBootStartDevices.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14041A970 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

void PopSqmFanEnumeration()
{
  struct _EVENT_DATA_DESCRIPTOR v0; // [rsp+30h] [rbp-38h] BYREF

  if ( (unsigned int)dword_140E07680 > 5 && tlgKeywordOn((__int64)&dword_140E07680, 0x400000000000LL) )
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E07680, (unsigned __int8 *)&byte_14004FF97, 0LL, 0LL, 2u, &v0);
}
