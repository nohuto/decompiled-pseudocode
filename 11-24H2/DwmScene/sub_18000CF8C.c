/*
 * XREFs of sub_18000CF8C @ 0x18000CF8C
 * Callers:
 *     sub_18000F1C4 @ 0x18000F1C4 (sub_18000F1C4.c)
 * Callees:
 *     sub_18000CE9C @ 0x18000CE9C (sub_18000CE9C.c)
 *     sub_18000E1FC @ 0x18000E1FC (sub_18000E1FC.c)
 *     sub_18000E784 @ 0x18000E784 (sub_18000E784.c)
 */

__int64 __fastcall sub_18000CF8C(int a1, int a2, __int64 a3, int a4, int a5, __int64 a6)
{
  int v8; // eax
  unsigned int v9; // ebx
  int v10; // r9d
  int v12; // [rsp+20h] [rbp-48h]
  _DWORD v13[4]; // [rsp+50h] [rbp-18h] BYREF

  v8 = sub_18000E1FC(a1, a2, (unsigned int)"wil", a4);
  v9 = v8;
  if ( v8 > 0 )
    v9 = (unsigned __int16)v8 | 0x80070000;
  v13[0] = v9;
  v13[2] = 0;
  v13[1] = sub_18000E784(v9);
  sub_18000CE9C(a1, a2, (int)"wil", v10, v12, a6, (__int64)v13);
  return v9;
}
