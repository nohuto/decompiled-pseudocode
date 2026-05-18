/*
 * XREFs of sub_18003AE74 @ 0x18003AE74
 * Callers:
 *     sub_180038BA8 @ 0x180038BA8 (sub_180038BA8.c)
 *     sub_1800402C4 @ 0x1800402C4 (sub_1800402C4.c)
 *     sub_180046E98 @ 0x180046E98 (sub_180046E98.c)
 *     sub_180047A50 @ 0x180047A50 (sub_180047A50.c)
 *     sub_180049090 @ 0x180049090 (sub_180049090.c)
 *     sub_180060F00 @ 0x180060F00 (sub_180060F00.c)
 *     sub_180062584 @ 0x180062584 (sub_180062584.c)
 * Callees:
 *     sub_18003BD1C @ 0x18003BD1C (sub_18003BD1C.c)
 */

__int64 __fastcall sub_18003AE74(__int64 a1, char a2, char a3)
{
  __int64 v6; // rdx
  __int64 result; // rax
  __int64 v8; // rdx

  sub_18003BD1C();
  v6 = *(_QWORD *)(a1 + 448);
  result = 1LL << a2;
  if ( a3 )
  {
    v8 = result | v6;
  }
  else
  {
    result = ~result;
    v8 = result & v6;
  }
  *(_QWORD *)(a1 + 448) = v8;
  return result;
}
