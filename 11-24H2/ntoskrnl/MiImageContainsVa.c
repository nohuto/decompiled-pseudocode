/*
 * XREFs of MiImageContainsVa @ 0x1404A2444
 * Callers:
 *     MiShowBadMapper @ 0x140275730 (MiShowBadMapper.c)
 *     MiIsDriverPage @ 0x1402BA964 (MiIsDriverPage.c)
 *     MmFindDataTableEntryByAddress @ 0x1402BBDCC (MmFindDataTableEntryByAddress.c)
 *     MiGetHighestPteConsumer @ 0x1404F36B8 (MiGetHighestPteConsumer.c)
 *     MiCheckVerifierFunctionsCfgState @ 0x1407FBD58 (MiCheckVerifierFunctionsCfgState.c)
 *     MiIsBootImageTargetFullyRetpolined @ 0x140C57BA0 (MiIsBootImageTargetFullyRetpolined.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiImageContainsVa(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rax

  v2 = *(_QWORD *)(a1 + 48);
  return a2 >= v2 && a2 < v2 + *(unsigned int *)(a1 + 64);
}
