/*
 * XREFs of sub_1800C3B30 @ 0x1800C3B30
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_1800C3B30(__int64 a1, int a2)
{
  __int64 *v2; // rcx
  __int64 v3; // rax
  __m128i si128; // [rsp+20h] [rbp-28h]
  int v6; // [rsp+30h] [rbp-18h]

  v2 = *(__int64 **)(a1 + 144);
  si128 = _mm_load_si128((const __m128i *)&xmmword_18018C450);
  v3 = *v2;
  v6 = 3;
  return (*(__int64 (__fastcall **)(__int64 *, _QWORD))(v3 + 192))(v2, si128.m128i_u32[a2]);
}
