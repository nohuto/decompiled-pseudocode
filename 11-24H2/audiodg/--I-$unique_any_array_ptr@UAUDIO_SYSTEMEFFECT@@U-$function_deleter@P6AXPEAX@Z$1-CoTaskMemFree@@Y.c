/*
 * XREFs of ??I?$unique_any_array_ptr@UAUDIO_SYSTEMEFFECT@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@Uempty_deleter@3@_K@wil@@QEAAPEAPEAUAUDIO_SYSTEMEFFECT@@XZ @ 0x14006397C
 * Callers:
 *     ?GetControllableSystemEffectsListRemote@CAPOWrapperSrv@@UEAAJPEAPEAUAudioEffectInternal@@PEAIPEAX@Z @ 0x140048A10 (-GetControllableSystemEffectsListRemote@CAPOWrapperSrv@@UEAAJPEAPEAUAudioEffectInternal@@PEAIPEA.c)
 *     ?GetControllableSystemEffectsListRemote@CSystemEffectWrapper@@UEAAJPEAPEAUAudioEffectInternal@@PEAIPEAX@Z @ 0x140072D90 (-GetControllableSystemEffectsListRemote@CSystemEffectWrapper@@UEAAJPEAPEAUAudioEffectInternal@@P.c)
 * Callees:
 *     ?reset@?$unique_any_array_ptr@UAUDIO_SYSTEMEFFECT@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@Uempty_deleter@3@_K@wil@@QEAAXXZ @ 0x140064474 (-reset@-$unique_any_array_ptr@UAUDIO_SYSTEMEFFECT@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFre.c)
 */

__int64 __fastcall wil::unique_any_array_ptr<AUDIO_SYSTEMEFFECT,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter,unsigned __int64>::operator&(
        __int64 a1)
{
  wil::unique_any_array_ptr<AUDIO_SYSTEMEFFECT,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter,unsigned __int64>::reset(a1);
  return a1;
}
