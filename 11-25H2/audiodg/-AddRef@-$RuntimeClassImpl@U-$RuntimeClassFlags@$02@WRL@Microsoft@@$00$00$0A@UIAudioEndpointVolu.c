/*
 * XREFs of ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIAudioEndpointVolumeInternalCallback@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x140019A60
 * Callers:
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIAudioEndpointVolumeInternalCallback@@@Details@WRL@Microsoft@@W7EAAKXZ @ 0x14005F330 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIAudi_ea_14005F330.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIAudioEndpointVolumeInternalCallback@@@Details@WRL@Microsoft@@WBA@EAAKXZ @ 0x14005F340 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIAudi_ea_14005F340.c)
 * Callees:
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x140019FC0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IAudioEndpointVolumeInternalCallback>::AddRef(
        __int64 a1)
{
  signed __int64 v1; // rax
  unsigned int v3; // ecx
  signed __int64 v5; // rtt

  v1 = *(_QWORD *)(a1 + 32);
  while ( 1 )
  {
    if ( v1 < 0 )
      return Microsoft::WRL::Details::SafeUnknownIncrementReference(
               (Microsoft::WRL::Details *)(2 * v1 + 16),
               (volatile int *)((unsigned __int64)v1 >> 63));
    if ( (_DWORD)v1 == 0x7FFFFFFF )
      break;
    v3 = v1 + 1;
    v5 = v1;
    v1 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 32), v1 + 1, v1);
    if ( v5 == v1 )
      return v3;
  }
  return 0x7FFFFFFF;
}
