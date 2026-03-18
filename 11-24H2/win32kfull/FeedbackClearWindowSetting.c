/*
 * XREFs of FeedbackClearWindowSetting @ 0x140263F64
 * Callers:
 *     NtUserSetWindowFeedbackSetting @ 0x1401BD250 (NtUserSetWindowFeedbackSetting.c)
 * Callees:
 *     InternalSetProp @ 0x140031458 (InternalSetProp.c)
 *     _anonymous_namespace_::GetStore @ 0x1401CFC1C (_anonymous_namespace_--GetStore.c)
 */

__int64 __fastcall FeedbackClearWindowSetting(__int64 a1, char a2)
{
  __m128i v3; // xmm6
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 UserSessionState; // rax
  __int64 v8; // [rsp+20h] [rbp-28h] BYREF

  v3 = *(__m128i *)anonymous_namespace_::GetStore(&v8, a1);
  UserSessionState = W32GetUserSessionState(v5, v4);
  InternalSetProp(
    v3.m128i_i64[0],
    *(unsigned __int16 *)(UserSessionState + 41414),
    _mm_cvtsi128_si32(_mm_srli_si128(v3, 8)) & (unsigned int)~(65537 << a2),
    5u);
  return 1LL;
}
