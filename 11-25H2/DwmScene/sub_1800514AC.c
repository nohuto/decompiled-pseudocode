/*
 * XREFs of sub_1800514AC @ 0x1800514AC
 * Callers:
 *     sub_180051390 @ 0x180051390 (sub_180051390.c)
 *     sub_1800BF6E0 @ 0x1800BF6E0 (sub_1800BF6E0.c)
 *     sub_1800C234C @ 0x1800C234C (sub_1800C234C.c)
 * Callees:
 *     sub_18000B77C @ 0x18000B77C (sub_18000B77C.c)
 *     sub_1800513B0 @ 0x1800513B0 (sub_1800513B0.c)
 */

__int64 __fastcall sub_1800514AC(__int64 a1, void **a2)
{
  __int64 result; // rax

  if ( a2 )
  {
    sub_1800513B0(a2);
    return sub_18000B77C(a2);
  }
  return result;
}
