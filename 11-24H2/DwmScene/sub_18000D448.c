/*
 * XREFs of sub_18000D448 @ 0x18000D448
 * Callers:
 *     sub_18000F254 @ 0x18000F254 (sub_18000F254.c)
 *     sub_18000F3AC @ 0x18000F3AC (sub_18000F3AC.c)
 * Callees:
 *     sub_18000F180 @ 0x18000F180 (sub_18000F180.c)
 *     sub_1800100E4 @ 0x1800100E4 (sub_1800100E4.c)
 */

__int64 __fastcall sub_18000D448(__int64 a1, __int64 a2, _WORD *a3, _QWORD *a4)
{
  unsigned __int64 v6; // rax
  __int64 v7; // r8
  __int64 v8; // r10
  unsigned __int64 v9; // r10
  unsigned __int64 v10; // rsi

  if ( a1 != a2 && a3 && *a3 && (v6 = sub_18000F180(a3), v9 = v8 - a1, v10 = v6, v9 >= v6) )
  {
    sub_1800100E4(a1, v9, v7, v6);
    if ( a4 )
      *a4 = a1;
    return v10 + a1;
  }
  else
  {
    if ( a4 )
      *a4 = 0LL;
    return a1;
  }
}
