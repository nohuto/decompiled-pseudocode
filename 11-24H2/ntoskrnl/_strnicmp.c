/*
 * XREFs of _strnicmp @ 0x1404FBA20
 * Callers:
 *     CmpPreserveSystemHiveData @ 0x1407E26F8 (CmpPreserveSystemHiveData.c)
 *     MiResolveImageReferences @ 0x140A10E04 (MiResolveImageReferences.c)
 *     EmpInfParseGetValueFromSectionAndKeyName @ 0x140C18344 (EmpInfParseGetValueFromSectionAndKeyName.c)
 *     CmpAppendSection @ 0x140C19FE8 (CmpAppendSection.c)
 *     CmpProcessForSimpleStringSub @ 0x140C1AAA0 (CmpProcessForSimpleStringSub.c)
 *     IopStoreArcInformation @ 0x140C1F1D4 (IopStoreArcInformation.c)
 * Callees:
 *     __ascii_strnicmp @ 0x1404FB9BC (__ascii_strnicmp.c)
 */

int __cdecl strnicmp(const char *Str1, const char *Str2, size_t MaxCount)
{
  return _ascii_strnicmp((unsigned __int8 *)Str1, (unsigned __int8 *)Str2, MaxCount);
}
