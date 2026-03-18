/*
 * XREFs of EmpInfParseGetGuidFromName @ 0x140C16244
 * Callers:
 *     EmpParseCallbacks @ 0x140C1640C (EmpParseCallbacks.c)
 *     EmpParseRuleTerm @ 0x140C16E50 (EmpParseRuleTerm.c)
 *     EmpParseRules @ 0x140C172EC (EmpParseRules.c)
 *     EmpParseTargetRules @ 0x140C17B08 (EmpParseTargetRules.c)
 * Callees:
 *     RtlInitAnsiString @ 0x1404654C0 (RtlInitAnsiString.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     RtlAnsiStringToUnicodeString @ 0x1408ADC70 (RtlAnsiStringToUnicodeString.c)
 *     RtlGUIDFromString @ 0x1408CA240 (RtlGUIDFromString.c)
 *     EmpInfParseGetValueFromSectionAndKeyName @ 0x140C16344 (EmpInfParseGetValueFromSectionAndKeyName.c)
 */

int __fastcall EmpInfParseGetGuidFromName(__int64 a1, __int64 a2, __int64 a3, GUID *a4)
{
  const char *ValueFromSectionAndKeyName; // rax
  int result; // eax
  UNICODE_STRING GuidString; // [rsp+30h] [rbp-88h] BYREF
  STRING DestinationString; // [rsp+40h] [rbp-78h] BYREF
  char v9; // [rsp+50h] [rbp-68h] BYREF

  *(_QWORD *)&GuidString.Length = 5111808LL;
  GuidString.Buffer = (wchar_t *)&v9;
  DestinationString = 0LL;
  ValueFromSectionAndKeyName = (const char *)EmpInfParseGetValueFromSectionAndKeyName(a1);
  if ( !ValueFromSectionAndKeyName )
    return -1073741275;
  RtlInitAnsiString(&DestinationString, ValueFromSectionAndKeyName);
  result = RtlAnsiStringToUnicodeString(&GuidString, &DestinationString, 0);
  if ( result >= 0 )
    return RtlGUIDFromString(&GuidString, a4);
  return result;
}
