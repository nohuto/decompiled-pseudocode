/*
 * XREFs of ?AddRef@?$SimpleVectorView@UEventRegistrationToken@@V?$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Devices@Media@Windows@@UPodLifetimeTraits@XWinRT@@U?$DefaultVectorOptions@UEventRegistrationToken@@@3Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@UPodLifetimeTraits@XWinRT@@UIntVersionTag@8@$0A@@Internal@Collections@Foundation@Windows@@UEAAKXZ @ 0x140019700
 * Callers:
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$IVectorView@UEventRegistrationToken@@@Collections@Foundation@Windows@@U?$IIterable@UEventRegistrationToken@@@567@@Details@WRL@Microsoft@@W7EAAKXZ @ 0x140077A80 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U-$IVectorView@UEve.c)
 *     ?AddRef@?$SimpleVectorView@UEventRegistrationToken@@V?$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Devices@Media@Windows@@UPodLifetimeTraits@XWinRT@@U?$DefaultVectorOptions@UEventRegistrationToken@@@3Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@UPodLifetimeTraits@XWinRT@@UIntVersionTag@8@$0A@@Internal@Collections@Foundation@Windows@@WBA@EAAKXZ @ 0x140077A90 (-AddRef@-$SimpleVectorView@UEventRegistrationToken@@V-$Vector@UEventRegistrationTok_ea_140077A90.c)
 * Callees:
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x140019CC0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::SimpleVectorView<EventRegistrationToken,Windows::Foundation::Collections::Internal::Vector<EventRegistrationToken,Windows::Media::Devices::Internal::EventRegistrationTokenEqual,XWinRT::PodLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<EventRegistrationToken>>,XWinRT::PodLifetimeTraits,XWinRT::IntVersionTag,0>::AddRef(
        __int64 a1)
{
  signed __int64 v1; // rax
  unsigned int v3; // ecx
  signed __int64 v5; // rtt

  v1 = *(_QWORD *)(a1 + 32);
  while ( v1 >= 0 )
  {
    if ( (_DWORD)v1 == 0x7FFFFFFF )
      return 0x7FFFFFFF;
    v3 = v1 + 1;
    v5 = v1;
    v1 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 32), v1 + 1, v1);
    if ( v5 == v1 )
      return v3;
  }
  return Microsoft::WRL::Details::SafeUnknownIncrementReference(
           (Microsoft::WRL::Details *)(2 * v1 + 16),
           (volatile int *)((unsigned __int64)v1 >> 63));
}
