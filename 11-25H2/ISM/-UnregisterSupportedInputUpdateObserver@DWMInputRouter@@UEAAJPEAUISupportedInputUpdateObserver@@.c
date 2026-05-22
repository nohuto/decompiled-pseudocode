/*
 * XREFs of ?UnregisterSupportedInputUpdateObserver@DWMInputRouter@@UEAAJPEAUISupportedInputUpdateObserver@@@Z @ 0x1801986D0
 * Callers:
 *     <none>
 * Callees:
 *     __std_find_trivial_8 @ 0x18009E460 (__std_find_trivial_8.c)
 *     memmove_0 @ 0x1801C7D08 (memmove_0.c)
 */

__int64 __fastcall DWMInputRouter::UnregisterSupportedInputUpdateObserver(
        const __m128i **this,
        struct ISupportedInputUpdateObserver *a2)
{
  __m128i *trivial_8; // rax

  trivial_8 = (__m128i *)_std_find_trivial_8(this[54], this[55], (unsigned __int64)a2);
  memmove_0(trivial_8, &trivial_8->m128i_u64[1], (char *)this[55] - (char *)&trivial_8->m128i_u64[1]);
  this[55] = (const __m128i *)((char *)this[55] - 8);
  return 0LL;
}
