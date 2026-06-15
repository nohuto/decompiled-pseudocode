/*
 * XREFs of ??0?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@UIAudioStreamingResourceRegistration@@@Details@WRL@Microsoft@@IEAA@XZ @ 0x140013760
 * Callers:
 *     ??0GraphStreamingResourceManager@@QEAA@XZ @ 0x140014D9C (--0GraphStreamingResourceManager@@QEAA@XZ.c)
 *     ??0CAPOProcessingHost@@QEAA@XZ @ 0x140034BCC (--0CAPOProcessingHost@@QEAA@XZ.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIDeviceGraphObjectCacheManager@@UIAudioLogging@@@WRL@Microsoft@@QEAA@XZ @ 0x140038FFC (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIDeviceGraphObjectCacheManager@@UIAud.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown,IAudioStreamingResourceRegistration>::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown,IAudioStreamingResourceRegistration>(
        __int64 a1)
{
  *(_DWORD *)(a1 + 20) = 1;
  return a1;
}
