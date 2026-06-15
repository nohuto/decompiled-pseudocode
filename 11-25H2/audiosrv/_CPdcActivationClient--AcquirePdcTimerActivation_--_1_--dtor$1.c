/*
 * XREFs of _CPdcActivationClient::AcquirePdcTimerActivation_::_1_::dtor$1 @ 0x1801620A7
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall CPdcActivationClient::AcquirePdcTimerActivation_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return std::lock_guard<std::recursive_mutex>::~lock_guard<std::recursive_mutex>((_Mtx_t *)(a2 + 112));
}
