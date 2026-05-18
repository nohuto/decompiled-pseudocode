/*
 * XREFs of sub_180050EFC @ 0x180050EFC
 * Callers:
 *     sub_180051B88 @ 0x180051B88 (sub_180051B88.c)
 *     sub_1800BF9CC @ 0x1800BF9CC (sub_1800BF9CC.c)
 *     sub_1800C0BD4 @ 0x1800C0BD4 (sub_1800C0BD4.c)
 * Callees:
 *     sub_18001B1F8 @ 0x18001B1F8 (sub_18001B1F8.c)
 */

_QWORD *__fastcall sub_180050EFC(_QWORD *a1, _DWORD *a2, int *a3, int *a4, int *a5, int *a6, int *a7)
{
  _DWORD *v11; // rax
  int v12; // edx
  int v13; // ebx
  int v14; // r9d
  int v15; // r8d
  int v16; // r11d

  v11 = (_DWORD *)sub_18001B1F8(28LL);
  if ( v11 )
  {
    v12 = *a3;
    v13 = *a7;
    v14 = *a5;
    v15 = *a4;
    v16 = *a6;
    *v11 = *a2;
    v11[1] = v12;
    v11[2] = v15;
    v11[3] = 2;
    v11[4] = v14;
    v11[5] = v16;
    v11[6] = v13;
  }
  *a1 = v11;
  return a1;
}
