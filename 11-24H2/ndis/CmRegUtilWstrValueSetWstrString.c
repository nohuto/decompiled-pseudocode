/*
 * XREFs of CmRegUtilWstrValueSetWstrString @ 0x14014E5F8
 * Callers:
 *     PpRegStateReadCreateClassCreationSettings @ 0x14014DD28 (PpRegStateReadCreateClassCreationSettings.c)
 * Callees:
 *     WdmlibRtlInitUnicodeStringEx @ 0x14006FE80 (WdmlibRtlInitUnicodeStringEx.c)
 *     CmRegUtilUcValueSetUcString @ 0x14014E408 (CmRegUtilUcValueSetUcString.c)
 */

NTSTATUS __fastcall CmRegUtilWstrValueSetWstrString(__int64 a1, __int64 a2, const WCHAR *a3)
{
  NTSTATUS result; // eax
  const WCHAR *v4; // r10
  void *v5; // r9
  _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-28h] BYREF
  _UNICODE_STRING ValueName; // [rsp+30h] [rbp-18h] BYREF

  ValueName = 0LL;
  DestinationString = 0LL;
  result = WdmlibRtlInitUnicodeStringEx(&DestinationString, a3);
  if ( result >= 0 )
  {
    result = WdmlibRtlInitUnicodeStringEx(&ValueName, v4);
    if ( result >= 0 )
      return CmRegUtilUcValueSetUcString(v5, &ValueName, &DestinationString.Length);
  }
  return result;
}
