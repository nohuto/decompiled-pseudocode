/*
 * XREFs of MiGetColorHeadHugeRangeBase @ 0x1404B3154
 * Callers:
 *     MiGetSingleHugeRangeToZero @ 0x14041CAF8 (MiGetSingleHugeRangeToZero.c)
 *     MiInsertHugeRangeInList @ 0x1404ED4E4 (MiInsertHugeRangeInList.c)
 *     MiUnlinkHugeRange @ 0x1404ED7BC (MiUnlinkHugeRange.c)
 *     MiComputeHugeRangeColorHeadAtDpc @ 0x140663F58 (MiComputeHugeRangeColorHeadAtDpc.c)
 *     MiGetHugeBadRangeFromNode @ 0x140664468 (MiGetHugeBadRangeFromNode.c)
 *     MiGetPerfectColorHeadHugeRange @ 0x1406648D0 (MiGetPerfectColorHeadHugeRange.c)
 *     MiHugePurgeZeroList @ 0x140664DEC (MiHugePurgeZeroList.c)
 *     MiRemoveHugeRangeAnyColor @ 0x140665ED0 (MiRemoveHugeRangeAnyColor.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetColorHeadHugeRangeBase(__int64 a1, __int64 a2, int a3)
{
  __int64 result; // rax

  if ( a3 == 5 )
    return a1 + 15136;
  result = *(_QWORD *)(*(_QWORD *)(a1 + 14984) + 16656LL)
         + 16LL
         * dword_140E2D980[0]
         * -643764673
         * (unsigned int)((a1 - *(_QWORD *)(*(_QWORD *)(a1 + 14984) + 16LL)) >> 7);
  if ( a3 == 1 )
    result += 8LL * (unsigned int)dword_140E2D980[0];
  return result;
}
