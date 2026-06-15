/*
 * XREFs of ?reset@?$unique_any_array_ptr@UAudioEffectInternal@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@Uempty_deleter@3@_K@wil@@QEAAXXZ @ 0x1800AC7B8
 * Callers:
 *     ??1?$unique_any_array_ptr@UAudioEffectInternal@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@Uempty_deleter@3@_K@wil@@QEAA@XZ @ 0x1800AB99C (--1-$unique_any_array_ptr@UAudioEffectInternal@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@.c)
 *     ??I?$unique_any_array_ptr@UAUDIO_SYSTEMEFFECT@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@Uempty_deleter@3@_K@wil@@QEAAPEAPEAUAUDIO_SYSTEMEFFECT@@XZ @ 0x1800AB9BC (--I-$unique_any_array_ptr@UAUDIO_SYSTEMEFFECT@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@Y.c)
 *     ?GetEffectsFromApo@CAudioStream@@AEAAJPEAUIAPOWrapperSrv@@AEAV?$vector@UAudioEffectInternal@@V?$allocator@UAudioEffectInternal@@@std@@@std@@@Z @ 0x1800C8950 (-GetEffectsFromApo@CAudioStream@@AEAAJPEAUIAPOWrapperSrv@@AEAV-$vector@UAudioEffectInternal@@V-$.c)
 *     ?PublishAudioEffects@CAudioStream@@AEAAXXZ @ 0x1800C8FD8 (-PublishAudioEffects@CAudioStream@@AEAAXXZ.c)
 *     ?GetEffectsFromMFXInstantiatedForStreaming@CSharedStreamGroupProxy@@UEAAJAEAV?$vector@UAudioEffectInternal@@V?$allocator@UAudioEffectInternal@@@std@@@std@@@Z @ 0x1800F6720 (-GetEffectsFromMFXInstantiatedForStreaming@CSharedStreamGroupProxy@@UEAAJAEAV-$vector@UAudioEffe.c)
 *     ??$get_sr_entity_propset@UIApplicationExtension@StateRepository@Internal@Windows@@@wil@@YAJPEAUIApplicationExtension@StateRepository@Internal@Windows@@PEAPEAUIPropertySet@Collections@Foundation@4@@Z @ 0x18014F570 (--$get_sr_entity_propset@UIApplicationExtension@StateRepository@Internal@Windows@@@wil@@YAJPEAUI.c)
 *     _wil::get_sr_entity_propset_Windows::Internal::StateRepository::IApplicationExtension__::_1_::dtor$0 @ 0x180172485 (_wil--get_sr_entity_propset_Windows--Internal--StateRepository--IApplicationExtension__--_1_--dt.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::unique_any_array_ptr<AudioEffectInternal,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter,unsigned __int64>::reset(
        __int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)a1;
  if ( v2 )
  {
    CoTaskMemFree(v2);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
  }
}
