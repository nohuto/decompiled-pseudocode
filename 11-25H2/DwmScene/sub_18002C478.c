/*
 * XREFs of sub_18002C478 @ 0x18002C478
 * Callers:
 *     sub_18002E2AC @ 0x18002E2AC (sub_18002E2AC.c)
 *     sub_180036124 @ 0x180036124 (sub_180036124.c)
 *     sub_180036708 @ 0x180036708 (sub_180036708.c)
 *     sub_180038120 @ 0x180038120 (sub_180038120.c)
 *     sub_180038EFC @ 0x180038EFC (sub_180038EFC.c)
 *     sub_180052B80 @ 0x180052B80 (sub_180052B80.c)
 *     sub_180062230 @ 0x180062230 (sub_180062230.c)
 *     sub_1800759D0 @ 0x1800759D0 (sub_1800759D0.c)
 *     sub_18008DC9C @ 0x18008DC9C (sub_18008DC9C.c)
 * Callees:
 *     sub_180030AA0 @ 0x180030AA0 (sub_180030AA0.c)
 */

__int64 __fastcall sub_18002C478(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      result = sub_180030AA0(v3);
      v3 += 16LL;
    }
    while ( v3 != a2 );
  }
  return result;
}
