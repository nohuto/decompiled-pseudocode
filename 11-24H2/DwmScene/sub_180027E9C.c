/*
 * XREFs of sub_180027E9C @ 0x180027E9C
 * Callers:
 *     sub_180027CA0 @ 0x180027CA0 (sub_180027CA0.c)
 *     sub_180027DEC @ 0x180027DEC (sub_180027DEC.c)
 *     sub_18007F7E0 @ 0x18007F7E0 (sub_18007F7E0.c)
 *     sub_180095DB0 @ 0x180095DB0 (sub_180095DB0.c)
 * Callees:
 *     sub_180026284 @ 0x180026284 (sub_180026284.c)
 */

__int64 __fastcall sub_180027E9C(_QWORD *a1)
{
  _QWORD *v1; // rbx
  __int64 result; // rax

  v1 = (_QWORD *)*a1;
  result = sub_180026284((__int64)a1, (__int64)a1, *(_QWORD *)(*a1 + 8LL));
  v1[1] = v1;
  *v1 = v1;
  v1[2] = v1;
  a1[1] = 0LL;
  return result;
}
