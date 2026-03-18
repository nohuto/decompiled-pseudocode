/*
 * XREFs of _strnicmp @ 0x1404FE160
 * Callers:
 *     CmpPreserveSystemHiveData @ 0x1407E21A8 (CmpPreserveSystemHiveData.c)
 *     MiResolveImageReferences @ 0x140A17C94 (MiResolveImageReferences.c)
 *     EmpInfParseGetValueFromSectionAndKeyName @ 0x140C16344 (EmpInfParseGetValueFromSectionAndKeyName.c)
 *     CmpAppendSection @ 0x140C17FE8 (CmpAppendSection.c)
 *     CmpProcessForSimpleStringSub @ 0x140C18AA0 (CmpProcessForSimpleStringSub.c)
 *     IopStoreArcInformation @ 0x140C1D194 (IopStoreArcInformation.c)
 * Callees:
 *     __ascii_strnicmp @ 0x1404FE0FC (__ascii_strnicmp.c)
 */

int __cdecl strnicmp(const char *Str1, const char *Str2, size_t MaxCount)
{
  return _ascii_strnicmp((unsigned __int8 *)Str1, (unsigned __int8 *)Str2, MaxCount);
}
