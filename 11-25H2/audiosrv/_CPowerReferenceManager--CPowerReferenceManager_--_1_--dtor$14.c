/*
 * XREFs of _CPowerReferenceManager::CPowerReferenceManager_::_1_::dtor$14 @ 0x180164D57
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CPowerReferenceManager::CPowerReferenceManager_::_1_::dtor_14(__int64 a1, __int64 a2)
{
  std::mutex::~mutex(*(_Mtx_t *)(a2 + 72));
}
