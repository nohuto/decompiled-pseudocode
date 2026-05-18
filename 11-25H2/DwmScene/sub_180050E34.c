/*
 * XREFs of sub_180050E34 @ 0x180050E34
 * Callers:
 *     sub_180051A28 @ 0x180051A28 (sub_180051A28.c)
 *     sub_1800BF75C @ 0x1800BF75C (sub_1800BF75C.c)
 *     sub_1800BF86C @ 0x1800BF86C (sub_1800BF86C.c)
 * Callees:
 *     sub_18001B098 @ 0x18001B098 (sub_18001B098.c)
 */

_QWORD *__fastcall sub_180050E34(_QWORD *a1, _DWORD *a2, int *a3, int *a4, int *a5, int *a6)
{
  _DWORD *v10; // rax
  int v11; // r8d
  int v12; // edx
  int v13; // r11d
  int v14; // r9d

  v10 = (_DWORD *)sub_18001B098(28LL);
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
