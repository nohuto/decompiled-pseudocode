/*
 * XREFs of _CVolumeHardware::Initialize_::_1_::dtor$0 @ 0x1801709EC
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CVolumeHardware::Initialize_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  wistd::unique_ptr<VolumeControlData,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<VolumeControlData,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>((void **)(a2 + 96));
}
