/*
 * XREFs of ?QueryInterface@?$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Devices@Media@Windows@@UPodLifetimeTraits@XWinRT@@U?$DefaultVectorOptions@UEventRegistrationToken@@@3Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x14007D7C0
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@U?$IVector@UEventRegistrationToken@@@Collections@Foundation@Windows@@U?$IIterable@UEventRegistrationToken@@@567@U?$CloakedIid@UIVersionedVector@Internal@Collections@Foundation@Windows@@@23@@Details@WRL@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14007D7D0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@U-$IVector@.c)
 *     ?QueryInterface@?$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Devices@Media@Windows@@UPodLifetimeTraits@XWinRT@@U?$DefaultVectorOptions@UEventRegistrationToken@@@3Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14007D7E0 (-QueryInterface@-$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Inte_ea_14007D7E0.c)
 *     ?QueryInterface@?$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Devices@Media@Windows@@UPodLifetimeTraits@XWinRT@@U?$DefaultVectorOptions@UEventRegistrationToken@@@3Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14007D7F0 (-QueryInterface@-$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Inte_ea_14007D7F0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<EventRegistrationToken,Windows::Media::Devices::Internal::EventRegistrationTokenEqual,XWinRT::PodLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<EventRegistrationToken>>::QueryInterface(
        __int64 a1,
        const struct _GUID *a2,
        _QWORD *a3)
{
  return Microsoft::WRL::Details::RuntimeClassBaseT<3>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Foundation::Collections::IVector<EventRegistrationToken>,Windows::Foundation::Collections::IIterable<EventRegistrationToken>,Microsoft::WRL::CloakedIid<Windows::Foundation::Collections::Internal::IVersionedVector>>>(
           a1,
           a2,
           a3);
}
