/*
 * XREFs of sub_180059B0C @ 0x180059B0C
 * Callers:
 *     sub_1800543DC @ 0x1800543DC (sub_1800543DC.c)
 *     sub_180054650 @ 0x180054650 (sub_180054650.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall sub_180059B0C(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 result; // rax
  unsigned __int64 v3; // r9

  result = 0x555555555555555LL;
  v3 = (0xAAAAAAAAAAAAAAABuLL * ((__int64)(a1[2] - *a1) >> 4)) >> 1;
  if ( 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a1[2] - *a1) >> 4) <= 0x555555555555555LL - v3 )
  {
    result = v3 - 0x5555555555555555LL * ((__int64)(a1[2] - *a1) >> 4);
    if ( result < a2 )
      return a2;
  }
  return result;
}
