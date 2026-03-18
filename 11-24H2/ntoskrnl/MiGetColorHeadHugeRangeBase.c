/*
 * XREFs of MiGetColorHeadHugeRangeBase @ 0x1404B219C
 * Callers:
 *     MiGetSingleHugeRangeToZero @ 0x1404F0954 (MiGetSingleHugeRangeToZero.c)
 *     MiInsertHugeRangeInList @ 0x1404F0CC0 (MiInsertHugeRangeInList.c)
 *     MiUnlinkHugeRange @ 0x1404F0F98 (MiUnlinkHugeRange.c)
 *     MiComputeHugeRangeColorHeadAtDpc @ 0x14066FA78 (MiComputeHugeRangeColorHeadAtDpc.c)
 *     MiGetHugeBadRangeFromNode @ 0x14066FF88 (MiGetHugeBadRangeFromNode.c)
 *     MiGetPerfectColorHeadHugeRange @ 0x140670378 (MiGetPerfectColorHeadHugeRange.c)
 *     MiHugePurgeZeroList @ 0x140670894 (MiHugePurgeZeroList.c)
 *     MiRemoveHugeRangeAnyColor @ 0x140671978 (MiRemoveHugeRangeAnyColor.c)
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
         * dword_140E2DBC0[0]
         * -643764673
         * (unsigned int)((a1 - *(_QWORD *)(*(_QWORD *)(a1 + 14984) + 16LL)) >> 7);
  if ( a3 == 1 )
    result += 8LL * (unsigned int)dword_140E2DBC0[0];
  return result;
}
