/*
 * XREFs of _stricmp @ 0x1404FB970
 * Callers:
 *     HalGetEnvironmentVariable @ 0x14053EDC0 (HalGetEnvironmentVariable.c)
 *     HalSetEnvironmentVariable @ 0x14053EE50 (HalSetEnvironmentVariable.c)
 *     ViThunkSnapSharedExportByName @ 0x140BA85CC (ViThunkSnapSharedExportByName.c)
 *     HdlspBugCheckProcessing @ 0x140BAF1F8 (HdlspBugCheckProcessing.c)
 *     CmpAppendSection @ 0x140C19FE8 (CmpAppendSection.c)
 *     CmpSearchSectionByName @ 0x140C1AB70 (CmpSearchSectionByName.c)
 *     CmpSetupConfigurationTree @ 0x140C4CCD0 (CmpSetupConfigurationTree.c)
 * Callees:
 *     __ascii_stricmp @ 0x1404FB91C (__ascii_stricmp.c)
 */

int __cdecl stricmp(const char *Str1, const char *Str2)
{
  return _ascii_stricmp((unsigned __int8 *)Str1, (unsigned __int8 *)Str2);
}
