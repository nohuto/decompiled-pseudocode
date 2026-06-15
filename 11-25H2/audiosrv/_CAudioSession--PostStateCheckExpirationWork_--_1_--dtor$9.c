/*
 * XREFs of _CAudioSession::PostStateCheckExpirationWork_::_1_::dtor$9 @ 0x18015F90A
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_WorkTask *__fastcall CAudioSession::PostStateCheckExpirationWork_::_1_::dtor_9(__int64 a1, __int64 a2)
{
  return std::unique_ptr<_WorkTask>::~unique_ptr<_WorkTask>((_WorkTask **)(a2 + 240));
}
