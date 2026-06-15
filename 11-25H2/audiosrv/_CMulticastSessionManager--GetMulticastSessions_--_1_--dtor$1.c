/*
 * XREFs of _CMulticastSessionManager::GetMulticastSessions_::_1_::dtor$1 @ 0x1801670FA
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CMulticastSessionManager::GetMulticastSessions_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  wistd::unique_ptr<_MulticastSessionConfiguration [0],wil::function_deleter<void (*)(void *),&void MIDL_user_free(void *)>>::~unique_ptr<_MulticastSessionConfiguration [0],wil::function_deleter<void (*)(void *),&void MIDL_user_free(void *)>>((void **)(a2 + 128));
}
