/*
 * XREFs of CmRegUtilWstrValueSetWstrString @ 0x1400DAEB8
 * Callers:
 *     PpRegStateReadCreateClassCreationSettings @ 0x1400DA5E8 (PpRegStateReadCreateClassCreationSettings.c)
 * Callees:
 *     WdmlibRtlInitUnicodeStringEx @ 0x1400AAEF0 (WdmlibRtlInitUnicodeStringEx.c)
 *     CmRegUtilUcValueSetUcString @ 0x1400DACC8 (CmRegUtilUcValueSetUcString.c)
 */

__int64 __fastcall CmRegUtilWstrValueSetWstrString(void *KeyHandle, wchar_t *ValueName, wchar_t *ValueData)
{
  __int64 result; // rax
  wchar_t *v4; // r10
  void *v5; // r9
  _UNICODE_STRING valueString; // [rsp+20h] [rbp-28h] BYREF
  _UNICODE_STRING unicodeStringValueName; // [rsp+30h] [rbp-18h] BYREF

  unicodeStringValueName = 0LL;
  valueString = 0LL;
  result = WdmlibRtlInitUnicodeStringEx(&valueString, ValueData);
  if ( (int)result >= 0 )
  {
    result = WdmlibRtlInitUnicodeStringEx(&unicodeStringValueName, v4);
    if ( (int)result >= 0 )
      return CmRegUtilUcValueSetUcString(v5, &unicodeStringValueName, &valueString);
  }
  return result;
}
