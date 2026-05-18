/*
 * XREFs of sub_180098B68 @ 0x180098B68
 * Callers:
 *     sub_180098D9C @ 0x180098D9C (sub_180098D9C.c)
 * Callees:
 *     sub_180098CFC @ 0x180098CFC (sub_180098CFC.c)
 */

__int64 __fastcall sub_180098B68(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbp
  __int64 v4; // r14
  __int64 v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // rbx
  __int64 v8; // rsi
  __int64 v9; // rdx

  v3 = a3;
  v4 = a2;
  v5 = (a3 - a1) >> 4;
  if ( v5 > 40 )
  {
    v6 = (v5 + 1) >> 3;
    v7 = 16 * v6;
    v6 *= 32LL;
    v8 = v7 + a1;
    sub_180098CFC(a1, v7 + a1, v6 + a1);
    sub_180098CFC(v4 - v7, v4, v7 + v4);
    sub_180098CFC(v3 - v6, v3 - v7, v3);
    a3 = v9;
    a1 = v8;
    a2 = v4;
  }
  return sub_180098CFC(a1, a2, a3);
}
