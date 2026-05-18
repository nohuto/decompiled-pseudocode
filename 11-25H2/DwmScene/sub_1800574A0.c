/*
 * XREFs of sub_1800574A0 @ 0x1800574A0
 * Callers:
 *     sub_180055CE0 @ 0x180055CE0 (sub_180055CE0.c)
 *     sub_180058EBC @ 0x180058EBC (sub_180058EBC.c)
 * Callees:
 *     sub_180058F40 @ 0x180058F40 (sub_180058F40.c)
 *     sub_1800595F0 @ 0x1800595F0 (sub_1800595F0.c)
 */

__int64 __fastcall sub_1800574A0(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // xmm1_8

  if ( (unsigned __int8)sub_1800595F0() )
    sub_180058F40(a1);
  result = a2;
  v5 = *(_QWORD *)(a1 + 1588);
  *(_OWORD *)a2 = *(_OWORD *)(a1 + 1572);
  *(_QWORD *)(a2 + 16) = v5;
  return result;
}
