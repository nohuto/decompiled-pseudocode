/*
 * XREFs of sub_18000CF18 @ 0x18000CF18
 * Callers:
 *     sub_18000FC7C @ 0x18000FC7C (sub_18000FC7C.c)
 * Callees:
 *     sub_18000CEEC @ 0x18000CEEC (sub_18000CEEC.c)
 *     sub_18000E1FC @ 0x18000E1FC (sub_18000E1FC.c)
 *     sub_18000E784 @ 0x18000E784 (sub_18000E784.c)
 */

void __fastcall __noreturn sub_18000CF18(int a1, int a2, __int64 a3, int a4, int a5, __int64 a6)
{
  int v8; // eax
  int v9; // r9d
  int v10; // [rsp+20h] [rbp-48h]
  _DWORD v11[6]; // [rsp+50h] [rbp-18h] BYREF

  v8 = sub_18000E1FC(a1, a2, (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\resource.h", a4);
  if ( v8 > 0 )
    v8 = (unsigned __int16)v8 | 0x80070000;
  v11[0] = v8;
  v11[2] = 0;
  v11[1] = sub_18000E784((unsigned int)v8);
  sub_18000CEEC(a1, a2, (int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\resource.h", v9, v10, a6, (__int64)v11);
}
