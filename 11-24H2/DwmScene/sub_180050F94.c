/*
 * XREFs of sub_180050F94 @ 0x180050F94
 * Callers:
 *     sub_180051B88 @ 0x180051B88 (sub_180051B88.c)
 *     sub_1800BF8BC @ 0x1800BF8BC (sub_1800BF8BC.c)
 *     sub_1800BF9CC @ 0x1800BF9CC (sub_1800BF9CC.c)
 * Callees:
 *     sub_18001B1F8 @ 0x18001B1F8 (sub_18001B1F8.c)
 */

_QWORD *__fastcall sub_180050F94(_QWORD *a1, _DWORD *a2, int *a3, int *a4, int *a5, int *a6)
{
  _DWORD *v10; // rax
  int v11; // r8d
  int v12; // edx
  int v13; // r11d
  int v14; // r9d

  v10 = (_DWORD *)sub_18001B1F8(28LL);
  if ( v10 )
  {
    v11 = *a4;
    v12 = *a3;
    v13 = *a6;
    v14 = *a5;
    *v10 = *a2;
    v10[2] = 1;
    v10[3] = 1;
    v10[1] = v12;
    v10[4] = v11;
    v10[5] = v14;
    v10[6] = v13;
  }
  *a1 = v10;
  return a1;
}
