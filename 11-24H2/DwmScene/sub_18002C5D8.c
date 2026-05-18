/*
 * XREFs of sub_18002C5D8 @ 0x18002C5D8
 * Callers:
 *     sub_18002E40C @ 0x18002E40C (sub_18002E40C.c)
 *     sub_180036284 @ 0x180036284 (sub_180036284.c)
 *     sub_180036868 @ 0x180036868 (sub_180036868.c)
 *     sub_180038280 @ 0x180038280 (sub_180038280.c)
 *     sub_18003905C @ 0x18003905C (sub_18003905C.c)
 *     sub_180052CE0 @ 0x180052CE0 (sub_180052CE0.c)
 *     sub_180062390 @ 0x180062390 (sub_180062390.c)
 *     sub_180075B30 @ 0x180075B30 (sub_180075B30.c)
 *     sub_18008DDFC @ 0x18008DDFC (sub_18008DDFC.c)
 * Callees:
 *     sub_180030C00 @ 0x180030C00 (sub_180030C00.c)
 */

__int64 __fastcall sub_18002C5D8(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      result = sub_180030C00(v3);
      v3 += 16LL;
    }
    while ( v3 != a2 );
  }
  return result;
}
