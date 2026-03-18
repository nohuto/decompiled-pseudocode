/*
 * XREFs of IvtGetPasidGranularTranslationType @ 0x1404FA750
 * Callers:
 *     IvtUpdateScalableModeTranslationStructures @ 0x1404CB814 (IvtUpdateScalableModeTranslationStructures.c)
 *     IvtAllocateTranslationStructures @ 0x14056D8D8 (IvtAllocateTranslationStructures.c)
 *     IvtLegacyUpdateScalableModeTranslationStructures @ 0x140570FFC (IvtLegacyUpdateScalableModeTranslationStructures.c)
 *     IvtInitializeIommu @ 0x140B51B90 (IvtInitializeIommu.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IvtGetPasidGranularTranslationType(__int64 a1, char a2, char a3)
{
  if ( a2 )
    return 1LL;
  else
    return a3 != 0 ? 2 : 4;
}
