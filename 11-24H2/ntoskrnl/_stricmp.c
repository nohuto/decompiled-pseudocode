/*
 * XREFs of _stricmp @ 0x1404FE0B0
 * Callers:
 *     HalGetEnvironmentVariable @ 0x1405414C0 (HalGetEnvironmentVariable.c)
 *     HalSetEnvironmentVariable @ 0x140541550 (HalSetEnvironmentVariable.c)
 *     ViThunkSnapSharedExportByName @ 0x140BA65CC (ViThunkSnapSharedExportByName.c)
 *     HdlspBugCheckProcessing @ 0x140BAD1F8 (HdlspBugCheckProcessing.c)
 *     CmpAppendSection @ 0x140C17FE8 (CmpAppendSection.c)
 *     CmpSearchSectionByName @ 0x140C18B70 (CmpSearchSectionByName.c)
 *     CmpSetupConfigurationTree @ 0x140C4AB34 (CmpSetupConfigurationTree.c)
 * Callees:
 *     __ascii_stricmp @ 0x1404FE05C (__ascii_stricmp.c)
 */

int __cdecl stricmp(const char *Str1, const char *Str2)
{
  return _ascii_stricmp((unsigned __int8 *)Str1, (unsigned __int8 *)Str2);
}
