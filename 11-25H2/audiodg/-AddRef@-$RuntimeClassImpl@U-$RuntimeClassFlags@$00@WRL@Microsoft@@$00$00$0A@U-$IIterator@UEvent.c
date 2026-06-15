/*
 * XREFs of ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$IIterator@UEventRegistrationToken@@@Collections@Foundation@Windows@@@Details@WRL@Microsoft@@W7EAAKXZ @ 0x140079F30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IIterator<EventRegistrationToken>>::AddRef(
        __int64 a1)
{
  return Windows::Foundation::Collections::Internal::SimpleVectorIterator<EventRegistrationToken,Windows::Foundation::Collections::Internal::Vector<EventRegistrationToken,Windows::Media::Devices::Internal::EventRegistrationTokenEqual,XWinRT::PodLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<EventRegistrationToken>>,XWinRT::PodLifetimeTraits,XWinRT::IntVersionTag,0>::AddRef(a1 - 8);
}
