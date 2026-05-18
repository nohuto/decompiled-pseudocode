/*
 * XREFs of sub_1800D02A0 @ 0x1800D02A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800CEAD4 @ 0x1800CEAD4 (sub_1800CEAD4.c)
 */

// local variable allocation has failed, the output may be wrong!
__m128 __fastcall sub_1800D02A0(__int64 a1, __int64 a2, double a3)
{
  unsigned __int64 v4; // [rsp+58h] [rbp+20h] BYREF

  v4 = 0LL;
  if ( (unsigned int)sub_1800CEAD4(a1, a2, &v4) )
    return *(__m128 *)&a3;
  else
    return (__m128)v4;
}
