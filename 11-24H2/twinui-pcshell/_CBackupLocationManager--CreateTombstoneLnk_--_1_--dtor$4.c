/*
 * XREFs of _CBackupLocationManager::CreateTombstoneLnk_::_1_::dtor$4 @ 0x1807043AA
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CBackupLocationManager::CreateTombstoneLnk_::_1_::dtor_4(__int64 a1, __int64 a2)
{
  wistd::unique_ptr<_ITEMIDLIST,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<_ITEMIDLIST,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>((void **)(a2 + 128));
}
