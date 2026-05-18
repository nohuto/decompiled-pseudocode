/*
 * XREFs of sub_180058A2C @ 0x180058A2C
 * Callers:
 *     sub_180061C70 @ 0x180061C70 (sub_180061C70.c)
 *     sub_180063434 @ 0x180063434 (sub_180063434.c)
 *     sub_180066E54 @ 0x180066E54 (sub_180066E54.c)
 *     sub_180067AC4 @ 0x180067AC4 (sub_180067AC4.c)
 * Callees:
 *     sub_180058AB0 @ 0x180058AB0 (sub_180058AB0.c)
 */

__int64 __fastcall sub_180058A2C(__int64 a1, float a2)
{
  __int64 result; // rax

  if ( a2 != *(float *)(a1 + 328) )
  {
    *(float *)(a1 + 328) = a2;
    return sub_180058AB0(a1, 2LL);
  }
  return result;
}
