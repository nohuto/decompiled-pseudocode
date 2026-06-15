/*
 * XREFs of _AudioEffectsWatcher::RebuildAndPublishFullEffectsListFromApos_::_1_::dtor$1 @ 0x18016D305
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall AudioEffectsWatcher::RebuildAndPublishFullEffectsListFromApos_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  wistd::unique_ptr<VolumeControlData,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<VolumeControlData,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>((void **)(a2 + 112));
}
