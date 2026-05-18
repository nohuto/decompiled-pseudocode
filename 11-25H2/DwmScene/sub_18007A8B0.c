/*
 * XREFs of sub_18007A8B0 @ 0x18007A8B0
 * Callers:
 *     sub_180078770 @ 0x180078770 (sub_180078770.c)
 *     sub_18007C9B4 @ 0x18007C9B4 (sub_18007C9B4.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall sub_18007A8B0(_QWORD *a1, unsigned __int64 a2)
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
