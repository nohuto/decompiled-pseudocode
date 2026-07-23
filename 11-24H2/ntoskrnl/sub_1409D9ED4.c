/*
 * XREFs of sub_1409D9ED4 @ 0x1409D9ED4
 * Callers:
 *     sub_1409D9820 @ 0x1409D9820 (sub_1409D9820.c)
 *     sub_1409D9A28 @ 0x1409D9A28 (sub_1409D9A28.c)
 *     sub_1409D9B08 @ 0x1409D9B08 (sub_1409D9B08.c)
 *     sub_1409D9BE8 @ 0x1409D9BE8 (sub_1409D9BE8.c)
 *     sub_1409D9D58 @ 0x1409D9D58 (sub_1409D9D58.c)
 *     sub_1409DA144 @ 0x1409DA144 (sub_1409DA144.c)
 *     sub_140A481B8 @ 0x140A481B8 (sub_140A481B8.c)
 * Callees:
 *     sub_140A907A8 @ 0x140A907A8 (sub_140A907A8.c)
 */

signed __int64 __fastcall sub_1409D9ED4(volatile signed __int64 *a1)
{
  signed __int64 v1; // rbx

  v1 = 0LL;
  if ( a1 )
  {
    v1 = _InterlockedDecrement64(a1);
    if ( !v1 )
      sub_140A907A8(a1);
  }
  return v1;
}
