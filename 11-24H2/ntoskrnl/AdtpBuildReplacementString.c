/*
 * XREFs of AdtpBuildReplacementString @ 0x14081120C
 * Callers:
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x140790124 (SeAdtRegistryValueChangedAuditAlarm.c)
 *     AdtpBuildRegistryValueString @ 0x140810B1C (AdtpBuildRegistryValueString.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x14040BAE0 (RtlAppendUnicodeToString.c)
 *     RtlAppendUnicodeStringToString @ 0x14040BBA0 (RtlAppendUnicodeStringToString.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     RtlIntegerToUnicodeString @ 0x1408EF170 (RtlIntegerToUnicodeString.c)
 */

__int64 __fastcall AdtpBuildReplacementString(ULONG a1, UNICODE_STRING *a2)
{
  NTSTATUS v3; // edi
  UNICODE_STRING Source; // [rsp+20h] [rbp-38h] BYREF
  __int64 v6; // [rsp+30h] [rbp-28h] BYREF

  *(_QWORD *)&Source.Length = 1310720LL;
  Source.Buffer = (wchar_t *)&v6;
  v3 = RtlIntegerToUnicodeString(a1, 0xAu, &Source);
  if ( v3 >= 0 )
  {
    if ( a2->Length )
      RtlAppendUnicodeToString(a2, L", ");
    RtlAppendUnicodeToString(a2, L"%%");
    RtlAppendUnicodeStringToString(a2, &Source);
  }
  return (unsigned int)v3;
}
