/*
 * XREFs of ?OnDisconnected@LightDismissClientProxy@@MEAAJXZ @ 0x18015BD60
 * Callers:
 *     <none>
 * Callees:
 *     __std_find_trivial_8 @ 0x18009E460 (__std_find_trivial_8.c)
 *     memmove_0 @ 0x1801C7D08 (memmove_0.c)
 */

__int64 __fastcall LightDismissClientProxy::OnDisconnected(LightDismissClientProxy *this)
{
  __m128i *trivial_8; // rax

  trivial_8 = (__m128i *)_std_find_trivial_8(
                           (const __m128i *)LightDismissProcessor::s_clients,
                           (const __m128i *)qword_180246F50,
                           (unsigned __int64)this);
  memmove_0(trivial_8, &trivial_8->m128i_u64[1], qword_180246F50 - (_QWORD)&trivial_8->m128i_i64[1]);
  qword_180246F50 -= 8LL;
  return 0LL;
}
