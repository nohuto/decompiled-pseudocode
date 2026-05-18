/*
 * XREFs of sub_18007AA10 @ 0x18007AA10
 * Callers:
 *     sub_1800788D0 @ 0x1800788D0 (sub_1800788D0.c)
 *     sub_18007CB14 @ 0x18007CB14 (sub_18007CB14.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall sub_18007AA10(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 result; // rax
  unsigned __int64 v3; // r9

  result = 0x666666666666666LL;
  v3 = (0xCCCCCCCCCCCCCCCDuLL * ((__int64)(a1[2] - *a1) >> 3)) >> 1;
  if ( 0xCCCCCCCCCCCCCCCDuLL * ((__int64)(a1[2] - *a1) >> 3) <= 0x666666666666666LL - v3 )
  {
    result = v3 - 0x3333333333333333LL * ((__int64)(a1[2] - *a1) >> 3);
    if ( result < a2 )
      return a2;
  }
  return result;
}
