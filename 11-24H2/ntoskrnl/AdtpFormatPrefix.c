/*
 * XREFs of AdtpFormatPrefix @ 0x14040BA30
 * Callers:
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x14040B494 (AdtpBuildAccessReasonAuditStringInternal.c)
 *     AdtpBuildStagingReasonAuditStringInternal @ 0x14069708C (AdtpBuildStagingReasonAuditStringInternal.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x14040BAE0 (RtlAppendUnicodeToString.c)
 *     RtlAppendUnicodeStringToString @ 0x14040BBA0 (RtlAppendUnicodeStringToString.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     RtlIntegerToUnicodeString @ 0x1408EF170 (RtlIntegerToUnicodeString.c)
 */

int __fastcall AdtpFormatPrefix(PUNICODE_STRING Destination, ULONG Value, char a3)
{
  int result; // eax
  UNICODE_STRING String; // [rsp+20h] [rbp-38h] BYREF
  __int64 v8; // [rsp+30h] [rbp-28h] BYREF

  *(_QWORD *)&String.Length = 1310720LL;
  String.Buffer = (wchar_t *)&v8;
  RtlAppendUnicodeToString(Destination, L"%%");
  result = RtlIntegerToUnicodeString(Value, 0xAu, &String);
  if ( result >= 0 )
  {
    result = RtlAppendUnicodeStringToString(Destination, &String);
    if ( a3 == 1 )
      return RtlAppendUnicodeToString(Destination, L"\t");
  }
  return result;
}
