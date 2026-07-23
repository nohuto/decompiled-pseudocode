/*
 * XREFs of MiGetColorHeadHugeRangeBase @ 0x1404ACA2C
 * Callers:
 *     MiGetSingleHugeRangeToZero @ 0x1404EE3F4 (MiGetSingleHugeRangeToZero.c)
 *     MiInsertHugeRangeInList @ 0x1404EE760 (MiInsertHugeRangeInList.c)
 *     MiUnlinkHugeRange @ 0x1404EEA38 (MiUnlinkHugeRange.c)
 *     MiComputeHugeRangeColorHeadAtDpc @ 0x140670C48 (MiComputeHugeRangeColorHeadAtDpc.c)
 *     MiGetHugeBadRangeFromNode @ 0x140671158 (MiGetHugeBadRangeFromNode.c)
 *     MiGetPerfectColorHeadHugeRange @ 0x140671548 (MiGetPerfectColorHeadHugeRange.c)
 *     MiHugePurgeZeroList @ 0x140671A64 (MiHugePurgeZeroList.c)
 *     MiRemoveHugeRangeAnyColor @ 0x140672B48 (MiRemoveHugeRangeAnyColor.c)
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
         * dword_140E2DD00[0]
         * -643764673
         * (unsigned int)((a1 - *(_QWORD *)(*(_QWORD *)(a1 + 14984) + 16LL)) >> 7);
  if ( a3 == 1 )
    result += 8LL * (unsigned int)dword_140E2DD00[0];
  return result;
}
