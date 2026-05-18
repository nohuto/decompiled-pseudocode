/*
 * XREFs of sub_180053048 @ 0x180053048
 * Callers:
 *     sub_180018880 @ 0x180018880 (sub_180018880.c)
 *     sub_180031270 @ 0x180031270 (sub_180031270.c)
 * Callees:
 *     sub_1800530A0 @ 0x1800530A0 (sub_1800530A0.c)
 */

__int64 __fastcall sub_180053048(int a1, __int64 a2)
{
  return sub_1800530A0(
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
