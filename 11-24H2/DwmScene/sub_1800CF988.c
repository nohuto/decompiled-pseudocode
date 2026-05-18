/*
 * XREFs of sub_1800CF988 @ 0x1800CF988
 * Callers:
 *     sub_1800CF404 @ 0x1800CF404 (sub_1800CF404.c)
 * Callees:
 *     sub_18001D8FC @ 0x18001D8FC (sub_18001D8FC.c)
 *     sub_18001DEE0 @ 0x18001DEE0 (sub_18001DEE0.c)
 */

__int64 __fastcall sub_1800CF988(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v4; // rcx
  __int64 v5; // r9

  v3 = a3;
  if ( a2 )
  {
    v4 = a1 - a3;
    do
    {
      sub_18001DEE0(v4, v3, v4 + v3);
      v3 += 32LL;
    }
    while ( v5 != 1 );
  }
  sub_18001D8FC(v3, v3);
  return v3;
}
