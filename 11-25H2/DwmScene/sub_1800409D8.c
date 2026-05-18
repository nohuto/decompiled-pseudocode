/*
 * XREFs of sub_1800409D8 @ 0x1800409D8
 * Callers:
 *     sub_180041744 @ 0x180041744 (sub_180041744.c)
 *     sub_180041D0C @ 0x180041D0C (sub_180041D0C.c)
 * Callees:
 *     sub_180040A68 @ 0x180040A68 (sub_180040A68.c)
 */

__int64 __fastcall sub_1800409D8(__int64 a1, __int64 a2)
{
  __int64 v2; // r10
  _WORD *v3; // r11
  __int64 result; // rax
  _BYTE v5[16]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v6; // [rsp+30h] [rbp-18h]

  sub_180040A68(a1, v5, a2);
  result = v6;
  if ( *(_BYTE *)(v6 + 25) || *v3 < *(_WORD *)(v6 + 28) )
    return *(_QWORD *)v2;
  return result;
}
