/*
 * XREFs of sub_180023944 @ 0x180023944
 * Callers:
 *     sub_18002397C @ 0x18002397C (sub_18002397C.c)
 *     sub_180023D28 @ 0x180023D28 (sub_180023D28.c)
 *     sub_1800246D0 @ 0x1800246D0 (sub_1800246D0.c)
 *     sub_180024874 @ 0x180024874 (sub_180024874.c)
 *     sub_180025980 @ 0x180025980 (sub_180025980.c)
 *     sub_180029DA8 @ 0x180029DA8 (sub_180029DA8.c)
 * Callees:
 *     sub_180012508 @ 0x180012508 (sub_180012508.c)
 */

__int64 __fastcall sub_180023944(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      result = sub_180012508(v3, a2);
      v3 += 64LL;
    }
    while ( v3 != a2 );
  }
  return result;
}
