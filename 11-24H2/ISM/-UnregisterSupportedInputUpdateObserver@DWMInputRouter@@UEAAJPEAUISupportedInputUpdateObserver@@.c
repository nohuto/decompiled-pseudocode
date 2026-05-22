/*
 * XREFs of ?UnregisterSupportedInputUpdateObserver@DWMInputRouter@@UEAAJPEAUISupportedInputUpdateObserver@@@Z @ 0x18019FD10
 * Callers:
 *     <none>
 * Callees:
 *     __std_find_trivial_8 @ 0x18009E750 (__std_find_trivial_8.c)
 *     memmove_0 @ 0x1801CF1A8 (memmove_0.c)
 */

__int64 __fastcall DWMInputRouter::UnregisterSupportedInputUpdateObserver(
        const __m128i **this,
        struct ISupportedInputUpdateObserver *a2)
{
  __m128i *trivial_8; // rax

  trivial_8 = (__m128i *)_std_find_trivial_8(this[53], this[54], (unsigned __int64)a2);
  memmove_0(trivial_8, &trivial_8->m128i_u64[1], (char *)this[54] - (char *)&trivial_8->m128i_u64[1]);
  this[54] = (const __m128i *)((char *)this[54] - 8);
  return 0LL;
}
