/*
 * XREFs of sub_180058888 @ 0x180058888
 * Callers:
 *     sub_18005901C @ 0x18005901C (sub_18005901C.c)
 *     sub_180066E54 @ 0x180066E54 (sub_180066E54.c)
 * Callees:
 *     sub_180058AB0 @ 0x180058AB0 (sub_180058AB0.c)
 */

__int64 __fastcall sub_180058888(__int64 a1, float a2)
{
  __int64 result; // rax

  if ( a2 != *(float *)(a1 + 332) )
  {
    *(float *)(a1 + 332) = a2;
    return sub_180058AB0(a1, 2LL);
  }
  return result;
}
