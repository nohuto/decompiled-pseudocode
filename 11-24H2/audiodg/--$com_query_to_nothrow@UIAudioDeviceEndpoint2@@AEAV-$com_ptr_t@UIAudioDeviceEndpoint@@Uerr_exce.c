/*
 * XREFs of ??$com_query_to_nothrow@UIAudioDeviceEndpoint2@@AEAV?$com_ptr_t@UIAudioDeviceEndpoint@@Uerr_exception_policy@wil@@@wil@@@wil@@YAJAEAV?$com_ptr_t@UIAudioDeviceEndpoint@@Uerr_exception_policy@wil@@@0@PEAPEAUIAudioDeviceEndpoint2@@@Z @ 0x14006EE80
 * Callers:
 *     ?CreateStream@CSystemAudioDeviceExclusive@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x14006F5D0 (-CreateStream@CSystemAudioDeviceExclusive@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUAUDIO_DE.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::com_query_to_nothrow<IAudioDeviceEndpoint2,wil::com_ptr_t<IAudioDeviceEndpoint,wil::err_exception_policy> &>(
        _QWORD *a1,
        __int64 a2)
{
  return (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64))*a1)(*a1, &GUID_44b2c783_5fa3_4983_9d74_9207de1f9e63, a2);
}
