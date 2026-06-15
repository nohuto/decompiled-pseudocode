/*
 * XREFs of ??1?$unique_ptr@UVolumeControlData@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAA@XZ @ 0x1800B2F30
 * Callers:
 *     _AudioEffectsWatcher::RebuildAndPublishFullEffectsListFromApos_::_1_::dtor$1 @ 0x18016D305 (_AudioEffectsWatcher--RebuildAndPublishFullEffectsListFromApos_--_1_--dtor$1.c)
 *     _CVolumeHardware::Initialize_::_1_::dtor$0 @ 0x1801709EC (_CVolumeHardware--Initialize_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall wistd::unique_ptr<VolumeControlData,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<VolumeControlData,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>(
        void **a1)
{
  wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(a1, 0LL);
}
