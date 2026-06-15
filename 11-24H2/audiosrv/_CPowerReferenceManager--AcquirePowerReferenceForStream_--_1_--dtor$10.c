/*
 * XREFs of _CPowerReferenceManager::AcquirePowerReferenceForStream_::_1_::dtor$10 @ 0x18016891D
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall CPowerReferenceManager::AcquirePowerReferenceForStream_::_1_::dtor_10(__int64 a1, __int64 a2)
{
  return std::lock_guard<std::recursive_mutex>::~lock_guard<std::recursive_mutex>((_Mtx_t *)(a2 + 104));
}
