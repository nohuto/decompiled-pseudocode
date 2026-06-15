/*
 * XREFs of ??0?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$IVectorView@UEventRegistrationToken@@@Collections@Foundation@Windows@@U?$IIterable@UEventRegistrationToken@@@567@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1400764F0
 * Callers:
 *     ??0?$SimpleVectorView@UEventRegistrationToken@@V?$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Devices@Media@Windows@@UPodLifetimeTraits@XWinRT@@U?$DefaultVectorOptions@UEventRegistrationToken@@@3Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@UPodLifetimeTraits@XWinRT@@UIntVersionTag@8@$0A@@Internal@Collections@Foundation@Windows@@QEAA@PEAV?$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Devices@Media@Windows@@UPodLifetimeTraits@XWinRT@@U?$DefaultVectorOptions@UEventRegistrationToken@@@3Collections@Foundation@6@@1234@Upermission@01234@@Z @ 0x1400765FC (--0-$SimpleVectorView@UEventRegistrationToken@@V-$Vector@UEventRegistrationToken@@UEventRegistra.c)
 * Callees:
 *     ??0?$ImplementsHelper@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$0A@U?$IVectorView@UEventRegistrationToken@@@Collections@Foundation@Windows@@UIWeakReferenceSource@@U?$IIterable@UEventRegistrationToken@@@567@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1400764AC (--0-$ImplementsHelper@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$0A@U-$IVectorView@UEventRegistrat.c)
 */

__int64 Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVectorView<EventRegistrationToken>,Windows::Foundation::Collections::IIterable<EventRegistrationToken>>::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVectorView<EventRegistrationToken>,Windows::Foundation::Collections::IIterable<EventRegistrationToken>>()
{
  __int64 v0; // r10
  __int64 result; // rax

  Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,0,Windows::Foundation::Collections::IVectorView<EventRegistrationToken>,IWeakReferenceSource,Windows::Foundation::Collections::IIterable<EventRegistrationToken>>::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,0,Windows::Foundation::Collections::IVectorView<EventRegistrationToken>,IWeakReferenceSource,Windows::Foundation::Collections::IIterable<EventRegistrationToken>>();
  result = v0;
  *(_QWORD *)(v0 + 32) = 1LL;
  return result;
}
