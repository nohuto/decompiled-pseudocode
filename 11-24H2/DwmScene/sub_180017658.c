/*
 * XREFs of sub_180017658 @ 0x180017658
 * Callers:
 *     sub_180015998 @ 0x180015998 (sub_180015998.c)
 *     sub_18002867C @ 0x18002867C (sub_18002867C.c)
 *     sub_180053688 @ 0x180053688 (sub_180053688.c)
 *     sub_1800B62DC @ 0x1800B62DC (sub_1800B62DC.c)
 *     sub_1800B6488 @ 0x1800B6488 (sub_1800B6488.c)
 *     sub_1800B6634 @ 0x1800B6634 (sub_1800B6634.c)
 *     sub_1800B67E0 @ 0x1800B67E0 (sub_1800B67E0.c)
 *     sub_1800B698C @ 0x1800B698C (sub_1800B698C.c)
 * Callees:
 *     sub_1800282BC @ 0x1800282BC (sub_1800282BC.c)
 */

__int64 __fastcall sub_180017658(__int64 a1, __int64 a2)
{
  if ( a1 != a2 )
  {
    if ( *(_BYTE *)(a1 + 8) )
      sub_1800282BC(*(_QWORD *)a1);
    *(_QWORD *)a1 = *(_QWORD *)a2;
    *(_BYTE *)(a1 + 8) = *(_BYTE *)(a2 + 8);
    *(_QWORD *)a2 = 0LL;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a1;
}
