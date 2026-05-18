/*
 * XREFs of sub_1800244E0 @ 0x1800244E0
 * Callers:
 *     sub_180025FD0 @ 0x180025FD0 (sub_180025FD0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     sub_180011B5C @ 0x180011B5C (sub_180011B5C.c)
 *     sub_1800138F8 @ 0x1800138F8 (sub_1800138F8.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

__m128i *__fastcall sub_1800244E0(__m128i *a1, __m128i *a2)
{
  unsigned __int64 v4; // rcx
  __m128i v5; // xmm0
  __m128i *result; // rax
  _BYTE v7[32]; // [rsp+28h] [rbp-30h] BYREF

  v4 = _mm_srli_si128(*a2, 8).m128i_u64[0];
  (*(void (__fastcall **)(unsigned __int64, _BYTE *, _QWORD))(*(_QWORD *)v4 + 16LL))(
    v4,
    v7,
    (unsigned int)_mm_cvtsi128_si32(*a2));
  a1->m128i_i64[1] = sub_1800138F8((__int64)v7);
  a1->m128i_i64[0] = (__int64)&std::runtime_error::`vftable';
  sub_180011B5C((__int64)v7);
  v5 = *a2;
  a1->m128i_i64[0] = (__int64)&std::system_error::`vftable';
  result = a1;
  a1[1] = v5;
  return result;
}
