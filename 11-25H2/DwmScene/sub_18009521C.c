/*
 * XREFs of sub_18009521C @ 0x18009521C
 * Callers:
 *     sub_1800336B0 @ 0x1800336B0 (sub_1800336B0.c)
 *     sub_18003385C @ 0x18003385C (sub_18003385C.c)
 *     sub_1800340C4 @ 0x1800340C4 (sub_1800340C4.c)
 *     sub_1800356CC @ 0x1800356CC (sub_1800356CC.c)
 *     sub_180035B30 @ 0x180035B30 (sub_180035B30.c)
 * Callees:
 *     sub_180011B8C @ 0x180011B8C (sub_180011B8C.c)
 *     sub_18002378C @ 0x18002378C (sub_18002378C.c)
 *     sub_180094CC0 @ 0x180094CC0 (sub_180094CC0.c)
 *     sub_180094CE8 @ 0x180094CE8 (sub_180094CE8.c)
 */

char *__fastcall sub_18009521C(_QWORD *a1, __int64 a2)
{
  __int64 *v4; // rax
  float v5; // xmm0_4
  __int64 v6; // rax
  _QWORD *v7; // rcx
  _BYTE *v8; // rdx
  _QWORD *v9; // rcx
  char *result; // rax
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF

  v4 = sub_180011B8C(&v11);
  v5 = sub_18002378C(*v4 - *(_QWORD *)(a2 + 16));
  v6 = *(int *)(a2 + 8);
  *(float *)&v11 = v5;
  v7 = &a1[2 * v6 + 7 + v6];
  v8 = (_BYTE *)v7[1];
  if ( v8 == (_BYTE *)v7[2] )
    sub_180094CE8(v7, v8, (unsigned int *)&v11);
  else
    sub_180094CC0((__int64)v7, (unsigned int *)&v11);
  v9 = a1 + 34;
  if ( a1[3 * *(int *)(a2 + 8) + 8] - a1[3 * *(int *)(a2 + 8) + 7] == a1[35] - a1[34] )
  {
    result = (char *)a1[35];
    *((float *)result - 1) = *(float *)&v11 + *((float *)result - 1);
  }
  else if ( a1[35] == a1[36] )
  {
    return sub_180094CE8(v9, (_BYTE *)a1[35], (unsigned int *)&v11);
  }
  else
  {
    return (char *)sub_180094CC0((__int64)v9, (unsigned int *)&v11);
  }
  return result;
}
