/*
 * XREFs of ??A?$unique_any_array_ptr@UAUDIO_SYSTEMEFFECT@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@Uempty_deleter@3@_K@wil@@QEAAAEAUAUDIO_SYSTEMEFFECT@@_K@Z @ 0x1800AB9A8
 * Callers:
 *     ?GetControllableDiscoveryMFXEffects@AudioModeEffectsWatcher@@UEAAJAEAV?$vector@UAudioEffectInternal@@V?$allocator@UAudioEffectInternal@@@std@@@std@@@Z @ 0x18006F970 (-GetControllableDiscoveryMFXEffects@AudioModeEffectsWatcher@@UEAAJAEAV-$vector@UAudioEffectInter.c)
 *     ?GetControllableSystemEffectsList@CAPOWrapperClient@@UEAAJPEAPEAUAUDIO_SYSTEMEFFECT@@PEAIPEAX@Z @ 0x1800ABBE0 (-GetControllableSystemEffectsList@CAPOWrapperClient@@UEAAJPEAPEAUAUDIO_SYSTEMEFFECT@@PEAIPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::unique_any_array_ptr<AUDIO_SYSTEMEFFECT,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter,unsigned __int64>::operator[](
        _QWORD *a1,
        __int64 a2)
{
  return *a1 + 24 * a2;
}
