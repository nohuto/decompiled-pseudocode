/*
 * XREFs of sub_180052EE8 @ 0x180052EE8
 * Callers:
 *     sub_1800187C0 @ 0x1800187C0 (sub_1800187C0.c)
 *     sub_180031110 @ 0x180031110 (sub_180031110.c)
 * Callees:
 *     sub_180052F40 @ 0x180052F40 (sub_180052F40.c)
 */

__int64 __fastcall sub_180052EE8(int a1, __int64 a2)
{
  return sub_180052F40(
           a1,
           a2,
           _mm_unpacklo_ps(
             (__m128)*(unsigned int *)(*(_QWORD *)a2 + 344LL),
             (__m128)*(unsigned int *)(*(_QWORD *)a2 + 348LL)).m128_u32[0],
           _mm_unpacklo_ps(
             (__m128)*(unsigned int *)(*(_QWORD *)a2 + 352LL),
             (__m128)*(unsigned int *)(*(_QWORD *)a2 + 356LL)).m128_u32[0],
           *(_DWORD *)(*(_QWORD *)a2 + 360LL));
}
