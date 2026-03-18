/*
 * XREFs of MiImageContainsVa @ 0x14036D08C
 * Callers:
 *     MiIsDriverPage @ 0x14036D6BC (MiIsDriverPage.c)
 *     MmFindDataTableEntryByAddress @ 0x14036E0D0 (MmFindDataTableEntryByAddress.c)
 *     MiShowBadMapper @ 0x1403BAD60 (MiShowBadMapper.c)
 *     MiGetHighestPteConsumer @ 0x1404F3460 (MiGetHighestPteConsumer.c)
 *     MiCheckVerifierFunctionsCfgState @ 0x1407EB758 (MiCheckVerifierFunctionsCfgState.c)
 *     MiIsBootImageTargetFullyRetpolined @ 0x140C44730 (MiIsBootImageTargetFullyRetpolined.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiImageContainsVa(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rax

  v2 = *(_QWORD *)(a1 + 48);
  return a2 >= v2 && a2 < v2 + *(unsigned int *)(a1 + 64);
}
