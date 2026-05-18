/*
 * XREFs of sub_180078B14 @ 0x180078B14
 * Callers:
 *     sub_180079324 @ 0x180079324 (sub_180079324.c)
 *     sub_1800797BC @ 0x1800797BC (sub_1800797BC.c)
 *     sub_180079C38 @ 0x180079C38 (sub_180079C38.c)
 *     sub_18007BC84 @ 0x18007BC84 (sub_18007BC84.c)
 * Callees:
 *     memmove @ 0x18000CE55 (memmove.c)
 *     sub_180010234 @ 0x180010234 (sub_180010234.c)
 *     sub_180016764 @ 0x180016764 (sub_180016764.c)
 *     sub_18001E484 @ 0x18001E484 (sub_18001E484.c)
 *     sub_180078C6C @ 0x180078C6C (sub_180078C6C.c)
 */

char *__fastcall sub_180078B14(const void **a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v5; // rbx
  __int64 v6; // rbp
  __int64 v7; // rcx
  char *v8; // r14
  char *result; // rax
  __int64 v10; // [rsp+50h] [rbp+18h] BYREF

  v10 = a3;
  if ( a2 > 0x3FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v5 = ((_BYTE *)a1[1] - (_BYTE *)*a1) >> 2;
  v10 = sub_18001E484(a1, a2);
  v6 = v10;
  v8 = (char *)sub_180016764(v7, &v10);
  sub_180078C6C(&v8[4 * v5], a2 - v5, a1);
  memmove(v8, *a1, (_BYTE *)a1[1] - (_BYTE *)*a1);
  if ( *a1 )
    sub_180010234((void *)*a1, ((_BYTE *)a1[2] - (_BYTE *)*a1) & 0xFFFFFFFFFFFFFFFCuLL);
  *a1 = v8;
  a1[1] = &v8[4 * a2];
  result = &v8[4 * v6];
  a1[2] = result;
  return result;
}
