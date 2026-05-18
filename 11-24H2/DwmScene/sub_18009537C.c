/*
 * XREFs of sub_18009537C @ 0x18009537C
 * Callers:
 *     sub_180033810 @ 0x180033810 (sub_180033810.c)
 *     sub_1800339BC @ 0x1800339BC (sub_1800339BC.c)
 *     sub_180034224 @ 0x180034224 (sub_180034224.c)
 *     sub_18003582C @ 0x18003582C (sub_18003582C.c)
 *     sub_180035C90 @ 0x180035C90 (sub_180035C90.c)
 * Callees:
 *     sub_180011C8C @ 0x180011C8C (sub_180011C8C.c)
 *     sub_1800238EC @ 0x1800238EC (sub_1800238EC.c)
 *     sub_180094E20 @ 0x180094E20 (sub_180094E20.c)
 *     sub_180094E48 @ 0x180094E48 (sub_180094E48.c)
 */

char *__fastcall sub_18009537C(_QWORD *a1, __int64 a2)
{
  __int64 *v4; // rax
  float v5; // xmm0_4
  __int64 v6; // rax
  _QWORD *v7; // rcx
  _BYTE *v8; // rdx
  _QWORD *v9; // rcx
  char *result; // rax
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF

  v4 = sub_180011C8C(&v11);
  v5 = sub_1800238EC(*v4 - *(_QWORD *)(a2 + 16));
  v6 = *(int *)(a2 + 8);
  *(float *)&v11 = v5;
  v7 = &a1[2 * v6 + 7 + v6];
  v8 = (_BYTE *)v7[1];
  if ( v8 == (_BYTE *)v7[2] )
    sub_180094E48(v7, v8, (unsigned int *)&v11);
  else
    sub_180094E20((__int64)v7, (unsigned int *)&v11);
  v9 = a1 + 34;
  if ( a1[3 * *(int *)(a2 + 8) + 8] - a1[3 * *(int *)(a2 + 8) + 7] == a1[35] - a1[34] )
  {
    result = (char *)a1[35];
    *((float *)result - 1) = *(float *)&v11 + *((float *)result - 1);
  }
  else if ( a1[35] == a1[36] )
  {
    return sub_180094E48(v9, (_BYTE *)a1[35], (unsigned int *)&v11);
  }
  else
  {
    return (char *)sub_180094E20((__int64)v9, (unsigned int *)&v11);
  }
  return result;
}
