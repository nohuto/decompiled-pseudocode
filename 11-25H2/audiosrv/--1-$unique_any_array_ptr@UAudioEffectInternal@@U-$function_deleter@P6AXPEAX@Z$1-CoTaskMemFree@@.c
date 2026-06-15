/*
 * XREFs of ??1?$unique_any_array_ptr@UAudioEffectInternal@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@Uempty_deleter@3@@wil@@QEAA@XZ @ 0x1800A7308
 * Callers:
 *     _AtmosCheck::RefreshPlatformLicenses_::_1_::dtor$0 @ 0x18016377A (_AtmosCheck--RefreshPlatformLicenses_--_1_--dtor$0.c)
 *     _CSharedStreamGroupProxy::GetEffectsFromMFXInstantiatedForStreaming_::_1_::dtor$1 @ 0x180164B65 (_CSharedStreamGroupProxy--GetEffectsFromMFXInstantiatedForStreaming_--_1_--dtor$1.c)
 *     _CAudioStream::PublishAudioEffects_::_1_::dtor$0 @ 0x180164BF5 (_CAudioStream--PublishAudioEffects_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall wil::unique_any_array_ptr<AudioEffectInternal,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter>::~unique_any_array_ptr<AudioEffectInternal,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter>(
        __int64 a1)
{
  wil::unique_any_array_ptr<unsigned char,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter>::~unique_any_array_ptr<unsigned char,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter>(a1);
}
