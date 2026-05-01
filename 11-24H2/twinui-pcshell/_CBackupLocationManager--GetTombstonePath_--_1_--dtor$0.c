/*
 * XREFs of _CBackupLocationManager::GetTombstonePath_::_1_::dtor$0 @ 0x1807044FA
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CBackupLocationManager::GetTombstonePath_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  wistd::unique_ptr<_ITEMIDLIST,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<_ITEMIDLIST,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>((void **)(a2 + 56));
}
