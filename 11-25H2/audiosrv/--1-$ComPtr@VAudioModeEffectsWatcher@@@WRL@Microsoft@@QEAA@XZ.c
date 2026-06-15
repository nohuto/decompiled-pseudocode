/*
 * XREFs of ??1?$ComPtr@VAudioModeEffectsWatcher@@@WRL@Microsoft@@QEAA@XZ @ 0x1800B4380
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_AudioModeEffectsWatcher_IAudioModeEffectsWatcher_EndpointCharacteristicsDescriptor___&__GUID_&__::_1_::dtor$1 @ 0x18015FD6D (_Microsoft--WRL--Details--MakeAndInitialize_AudioModeEffectsWatcher_IAudioModeEffectsWatcher_End.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_AudioEffectsWatcher_IAudioEffectsWatcher_unsigned_short_const___&_unsigned_long_&_int_&_enum_DiscoverySettings_&__::_1_::dtor$2 @ 0x180163EFB (_Microsoft--WRL--Details--MakeAndInitialize_AudioEffectsWatcher_IAudioEffectsWatcher_unsigned_sh.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIAudioRenderEndpointChangeDelegator@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800525F0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIAudioRenderEndpo.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<AudioModeEffectsWatcher>::~ComPtr<AudioModeEffectsWatcher>(__int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IAudioRenderEndpointChangeDelegator>::Release(result);
  }
  return result;
}
