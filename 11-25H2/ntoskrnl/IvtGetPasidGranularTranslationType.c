/*
 * XREFs of IvtGetPasidGranularTranslationType @ 0x1404F8270
 * Callers:
 *     IvtUpdateScalableModeTranslationStructures @ 0x1404C8F20 (IvtUpdateScalableModeTranslationStructures.c)
 *     IvtAllocateTranslationStructures @ 0x14056A5D8 (IvtAllocateTranslationStructures.c)
 *     IvtLegacyUpdateScalableModeTranslationStructures @ 0x14056DCFC (IvtLegacyUpdateScalableModeTranslationStructures.c)
 *     IvtInitializeIommu @ 0x140B41B90 (IvtInitializeIommu.c)
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
