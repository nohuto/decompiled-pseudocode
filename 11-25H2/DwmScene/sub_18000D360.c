/*
 * XREFs of sub_18000D360 @ 0x18000D360
 * Callers:
 *     sub_18000F154 @ 0x18000F154 (sub_18000F154.c)
 *     sub_18000F2AC @ 0x18000F2AC (sub_18000F2AC.c)
 * Callees:
 *     sub_18000F080 @ 0x18000F080 (sub_18000F080.c)
 *     sub_18000FFE4 @ 0x18000FFE4 (sub_18000FFE4.c)
 */

__int64 __fastcall sub_18000D360(__int64 a1, __int64 a2, _WORD *a3, _QWORD *a4)
{
  unsigned __int64 v6; // rax
  __int64 v7; // r8
  __int64 v8; // r10
  unsigned __int64 v9; // r10
  unsigned __int64 v10; // rsi

  if ( a1 != a2 && a3 && *a3 && (v6 = sub_18000F080(a3), v9 = v8 - a1, v10 = v6, v9 >= v6) )
  {
    sub_18000FFE4(a1, v9, v7, v6);
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
