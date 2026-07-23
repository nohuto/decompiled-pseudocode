/*
 * XREFs of IvtGetPasidGranularTranslationType @ 0x1404F8030
 * Callers:
 *     IvtUpdateScalableModeTranslationStructures @ 0x1404C4C90 (IvtUpdateScalableModeTranslationStructures.c)
 *     IvtAllocateTranslationStructures @ 0x14056AD68 (IvtAllocateTranslationStructures.c)
 *     IvtLegacyUpdateScalableModeTranslationStructures @ 0x14056E48C (IvtLegacyUpdateScalableModeTranslationStructures.c)
 *     IvtInitializeIommu @ 0x140B53BE0 (IvtInitializeIommu.c)
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
