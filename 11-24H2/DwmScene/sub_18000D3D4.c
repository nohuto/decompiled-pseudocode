/*
 * XREFs of sub_18000D3D4 @ 0x18000D3D4
 * Callers:
 *     sub_18000F254 @ 0x18000F254 (sub_18000F254.c)
 *     sub_18000F3AC @ 0x18000F3AC (sub_18000F3AC.c)
 * Callees:
 *     sub_18000F154 @ 0x18000F154 (sub_18000F154.c)
 *     sub_1800100E4 @ 0x1800100E4 (sub_1800100E4.c)
 */

__int64 __fastcall sub_18000D3D4(__int64 a1, __int64 a2, _BYTE *a3, _QWORD *a4)
{
  unsigned __int64 v6; // rax
  __int64 v7; // r8
  __int64 v8; // rdx
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rsi

  if ( a1 != a2 && a3 && *a3 && (v6 = sub_18000F154(a3), v9 = v8 - a1, v10 = v6, v9 >= v6) )
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
