/*
 * XREFs of sub_18000CE30 @ 0x18000CE30
 * Callers:
 *     sub_18000FB7C @ 0x18000FB7C (sub_18000FB7C.c)
 * Callees:
 *     sub_18000CE04 @ 0x18000CE04 (sub_18000CE04.c)
 *     sub_18000E15C @ 0x18000E15C (sub_18000E15C.c)
 *     sub_18000E684 @ 0x18000E684 (sub_18000E684.c)
 */

void __fastcall __noreturn sub_18000CE30(int a1, int a2, __int64 a3, int a4, int a5, __int64 a6)
{
  int v8; // eax
  int v9; // r9d
  int v10; // [rsp+20h] [rbp-48h]
  _DWORD v11[6]; // [rsp+50h] [rbp-18h] BYREF

  v8 = sub_18000E15C(a1, a2, (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\resource.h", a4);
  if ( v8 > 0 )
    v8 = (unsigned __int16)v8 | 0x80070000;
  v11[0] = v8;
  v11[2] = 0;
  v11[1] = sub_18000E684((unsigned int)v8);
  sub_18000CE04(a1, a2, (int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\resource.h", v9, v10, a6, (__int64)v11);
}
