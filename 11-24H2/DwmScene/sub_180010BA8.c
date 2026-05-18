/*
 * XREFs of sub_180010BA8 @ 0x180010BA8
 * Callers:
 *     sub_180010D7C @ 0x180010D7C (sub_180010D7C.c)
 *     sub_18001195C @ 0x18001195C (sub_18001195C.c)
 *     sub_18002D740 @ 0x18002D740 (sub_18002D740.c)
 *     sub_18002E3C4 @ 0x18002E3C4 (sub_18002E3C4.c)
 *     sub_180030050 @ 0x180030050 (sub_180030050.c)
 *     sub_18003017C @ 0x18003017C (sub_18003017C.c)
 *     sub_180033DF4 @ 0x180033DF4 (sub_180033DF4.c)
 *     sub_180033E74 @ 0x180033E74 (sub_180033E74.c)
 *     sub_180033F84 @ 0x180033F84 (sub_180033F84.c)
 *     sub_180052914 @ 0x180052914 (sub_180052914.c)
 * Callees:
 *     sub_180010644 @ 0x180010644 (sub_180010644.c)
 */

__int64 __fastcall sub_180010BA8(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  volatile signed __int32 *v4; // rcx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      v4 = *(volatile signed __int32 **)(v3 + 8);
      if ( v4 )
        result = sub_180010644(v4);
      v3 += 16LL;
    }
    while ( v3 != a2 );
  }
  return result;
}
