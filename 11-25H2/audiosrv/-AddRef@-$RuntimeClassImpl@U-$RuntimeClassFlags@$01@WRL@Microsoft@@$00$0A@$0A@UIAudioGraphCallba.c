/*
 * XREFs of ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioGraphCallback@@UIAudioStreamInfo@@UIAudioStreamPolicyVolumeClient@@UIDuckingController@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18005FE60
 * Callers:
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioGraphCallback@@UIAudioStreamInfo@@UIAudioStreamPolicyVolumeClient@@UIDuckingController@@@Details@WRL@Microsoft@@W7EAAKXZ @ 0x180105E40 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAud_ea_180105E40.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioGraphCallback@@UIAudioStreamInfo@@UIAudioStreamPolicyVolumeClient@@UIDuckingController@@@Details@WRL@Microsoft@@WBA@EAAKXZ @ 0x180105E50 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAud_ea_180105E50.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioGraphCallback@@UIAudioStreamInfo@@UIAudioStreamPolicyVolumeClient@@UIDuckingController@@@Details@WRL@Microsoft@@WBI@EAAKXZ @ 0x180105E60 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAud_ea_180105E60.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioGraphCallback,IAudioStreamInfo,IAudioStreamPolicyVolumeClient,IDuckingController>::AddRef(
        __int64 a1)
{
  unsigned int v1; // r9d
  signed __int32 v2; // r8d

  v1 = 0x7FFFFFFF;
  while ( 1 )
  {
    v2 = *(_DWORD *)(a1 + 36);
    if ( v2 == 0x7FFFFFFF )
      break;
    if ( v2 == _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 36), v2 + 1, v2) )
      return (unsigned int)(v2 + 1);
  }
  return v1;
}
