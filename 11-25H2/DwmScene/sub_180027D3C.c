/*
 * XREFs of sub_180027D3C @ 0x180027D3C
 * Callers:
 *     sub_180027B40 @ 0x180027B40 (sub_180027B40.c)
 *     sub_180027C8C @ 0x180027C8C (sub_180027C8C.c)
 *     sub_18007F680 @ 0x18007F680 (sub_18007F680.c)
 *     sub_180095C50 @ 0x180095C50 (sub_180095C50.c)
 * Callees:
 *     sub_180026124 @ 0x180026124 (sub_180026124.c)
 */

__int64 __fastcall sub_180027D3C(_QWORD *a1)
{
  _QWORD *v1; // rbx
  __int64 result; // rax

  v1 = (_QWORD *)*a1;
  result = sub_180026124((__int64)a1, (__int64)a1, *(_QWORD *)(*a1 + 8LL));
  v1[1] = v1;
  *v1 = v1;
  v1[2] = v1;
  a1[1] = 0LL;
  return result;
}
