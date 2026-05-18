/*
 * XREFs of sub_1800789B4 @ 0x1800789B4
 * Callers:
 *     sub_1800791C4 @ 0x1800791C4 (sub_1800791C4.c)
 *     sub_18007965C @ 0x18007965C (sub_18007965C.c)
 *     sub_180079AD8 @ 0x180079AD8 (sub_180079AD8.c)
 *     sub_18007BB24 @ 0x18007BB24 (sub_18007BB24.c)
 * Callees:
 *     memmove @ 0x18000CD6D (memmove.c)
 *     sub_180010134 @ 0x180010134 (sub_180010134.c)
 *     sub_180016664 @ 0x180016664 (sub_180016664.c)
 *     sub_18001E324 @ 0x18001E324 (sub_18001E324.c)
 *     sub_180078B0C @ 0x180078B0C (sub_180078B0C.c)
 */

char *__fastcall sub_1800789B4(const void **a1, unsigned __int64 a2, __int64 a3)
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
  v10 = sub_18001E324(a1, a2);
  v6 = v10;
  v8 = (char *)sub_180016664(v7, &v10);
  sub_180078B0C(&v8[4 * v5], a2 - v5, a1);
  memmove(v8, *a1, (_BYTE *)a1[1] - (_BYTE *)*a1);
  if ( *a1 )
    sub_180010134((void *)*a1, ((_BYTE *)a1[2] - (_BYTE *)*a1) & 0xFFFFFFFFFFFFFFFCuLL);
  *a1 = v8;
  a1[1] = &v8[4 * a2];
  result = &v8[4 * v6];
  a1[2] = result;
  return result;
}
