/*
 * XREFs of _CProcessSubmixManager::GetAppSubmixClientContextHelper_::_1_::dtor$1 @ 0x18016D0C7
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CProcessSubmixManager::GetAppSubmixClientContextHelper_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return std::unique_ptr<CAppSubmixClientContext>::~unique_ptr<CAppSubmixClientContext>((_QWORD *)(a2 + 88));
}
