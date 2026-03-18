/*
 * XREFs of MiImageContainsVa @ 0x1402C9B38
 * Callers:
 *     MmFindDataTableEntryByAddress @ 0x1402C724C (MmFindDataTableEntryByAddress.c)
 *     MiIsDriverPage @ 0x1402C80A4 (MiIsDriverPage.c)
 *     MiShowBadMapper @ 0x1403D0830 (MiShowBadMapper.c)
 *     MiGetHighestPteConsumer @ 0x1404F5DB8 (MiGetHighestPteConsumer.c)
 *     MiCheckVerifierFunctionsCfgState @ 0x1407FB5E8 (MiCheckVerifierFunctionsCfgState.c)
 *     MiIsBootImageTargetFullyRetpolined @ 0x140C55A10 (MiIsBootImageTargetFullyRetpolined.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiImageContainsVa(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rax

  v2 = *(_QWORD *)(a1 + 48);
  return a2 >= v2 && a2 < v2 + *(unsigned int *)(a1 + 64);
}
