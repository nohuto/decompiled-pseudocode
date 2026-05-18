/*
 * XREFs of sub_18002E264 @ 0x18002E264
 * Callers:
 *     sub_18002D5E0 @ 0x18002D5E0 (sub_18002D5E0.c)
 * Callees:
 *     sub_180010AA8 @ 0x180010AA8 (sub_180010AA8.c)
 *     sub_18002E454 @ 0x18002E454 (sub_18002E454.c)
 */

__int64 __fastcall sub_18002E264(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v4; // r9
  __int64 v5; // rcx
  __int64 v6; // r9

  v3 = a3;
  v4 = a2;
  if ( a2 )
  {
    v5 = a1 - a3;
    do
    {
      sub_18002E454(v5, v3, v5 + v3, v4);
      v3 += 16LL;
      v4 = v6 - 1;
    }
    while ( v4 );
  }
  sub_180010AA8(v3, v3);
  return v3;
}
