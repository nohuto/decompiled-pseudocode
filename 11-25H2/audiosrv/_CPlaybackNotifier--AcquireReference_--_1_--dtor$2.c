/*
 * XREFs of _CPlaybackNotifier::AcquireReference_::_1_::dtor$2 @ 0x18015F2A8
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall CPlaybackNotifier::AcquireReference_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  return std::lock_guard<std::recursive_mutex>::~lock_guard<std::recursive_mutex>((_Mtx_t *)(a2 + 136));
}
