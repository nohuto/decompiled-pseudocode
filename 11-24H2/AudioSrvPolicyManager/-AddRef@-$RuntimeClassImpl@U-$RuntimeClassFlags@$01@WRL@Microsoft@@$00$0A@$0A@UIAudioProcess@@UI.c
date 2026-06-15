/*
 * XREFs of ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioProcess@@UIAudioProcessInternal@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180012730
 * Callers:
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISessionInternalEvents@@UIAudioDuckingManager@@@Details@WRL@Microsoft@@W7EAAKXZ @ 0x180028B20 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISessionInternalE.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioProcess,IAudioProcessInternal>::AddRef(
        __int64 a1)
{
  signed __int32 v1; // eax

  v1 = *(_DWORD *)(a1 + 20);
  if ( v1 == 0x7FFFFFFF )
    return 0x7FFFFFFFLL;
  while ( v1 != _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 20), v1 + 1, v1) )
  {
    v1 = *(_DWORD *)(a1 + 20);
    if ( v1 == 0x7FFFFFFF )
      return 0x7FFFFFFFLL;
  }
  return (unsigned int)(v1 + 1);
}
