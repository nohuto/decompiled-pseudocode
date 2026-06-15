/*
 * XREFs of ??0?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00U?$IIterable@UEventRegistrationToken@@@Collections@Foundation@Windows@@U?$CloakedIid@UIVersionedVector@Internal@Collections@Foundation@Windows@@@23@@Details@WRL@Microsoft@@QEAA@XZ @ 0x14001BE38
 * Callers:
 *     ??0?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakReferenceSource@@U?$IIterable@UEventRegistrationToken@@@Collections@Foundation@Windows@@U?$CloakedIid@UIVersionedVector@Internal@Collections@Foundation@Windows@@@23@@Details@WRL@Microsoft@@QEAA@XZ @ 0x14001BE18 (--0-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakReferenceSource@@U-$IIter.c)
 * Callees:
 *     ??0?$IIterable@UEventRegistrationToken@@@Collections@Foundation@Windows@@QEAA@XZ @ 0x14001BE5C (--0-$IIterable@UEventRegistrationToken@@@Collections@Foundation@Windows@@QEAA@XZ.c)
 */

__int64 Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Foundation::Collections::IIterable<EventRegistrationToken>,Microsoft::WRL::CloakedIid<Windows::Foundation::Collections::Internal::IVersionedVector>>::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Foundation::Collections::IIterable<EventRegistrationToken>,Microsoft::WRL::CloakedIid<Windows::Foundation::Collections::Internal::IVersionedVector>>()
{
  __int64 v0; // rcx
  __int64 result; // rax

  Windows::Foundation::Collections::IIterable<EventRegistrationToken>::IIterable<EventRegistrationToken>();
  result = v0;
  *(_QWORD *)(v0 + 8) = &Windows::Foundation::ITypedEventHandler<Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *,Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs *>::`vftable';
  return result;
}
