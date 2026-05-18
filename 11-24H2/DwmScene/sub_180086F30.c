/*
 * XREFs of sub_180086F30 @ 0x180086F30
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800857F0 @ 0x1800857F0 (sub_1800857F0.c)
 */

__m128 *__fastcall sub_180086F30(__int64 a1, __m128 *a2, __m128 *a3)
{
  __int64 v3; // rcx
  __m128 v6; // [rsp+20h] [rbp-18h] BYREF

  v3 = *(_QWORD *)(a1 + 8);
  v6 = *a3;
  sub_1800857F0(v3, a2, &v6);
  return a2;
}
