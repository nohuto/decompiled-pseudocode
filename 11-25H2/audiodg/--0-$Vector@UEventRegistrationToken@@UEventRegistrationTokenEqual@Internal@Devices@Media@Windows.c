/*
 * XREFs of ??0?$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Devices@Media@Windows@@UPodLifetimeTraits@XWinRT@@U?$DefaultVectorOptions@UEventRegistrationToken@@@3Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@QEAA@AEBUEventRegistrationTokenEqual@1Devices@Media@4@Upermission@01234@@Z @ 0x14001B600
 * Callers:
 *     ?RuntimeClassInitialize@AudioDeviceBroker@Internal@Devices@Media@Windows@@QEAAJPEAX@Z @ 0x14001B0B8 (-RuntimeClassInitialize@AudioDeviceBroker@Internal@Devices@Media@Windows@@QEAAJPEAX@Z.c)
 * Callees:
 *     ??0ComLock@XWinRT@@QEAA@_N@Z @ 0x14001BCBC (--0ComLock@XWinRT@@QEAA@_N@Z.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@U?$IVector@UEventRegistrationToken@@@Collections@Foundation@Windows@@U?$IIterable@UEventRegistrationToken@@@567@U?$CloakedIid@UIVersionedVector@Internal@Collections@Foundation@Windows@@@23@@WRL@Microsoft@@QEAA@XZ @ 0x14001BD30 (--0-$RuntimeClass@U-$RuntimeClassFlags@$02@WRL@Microsoft@@U-$IVector@UEventRegistrationToken@@@C.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<EventRegistrationToken,Windows::Media::Devices::Internal::EventRegistrationTokenEqual,XWinRT::PodLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<EventRegistrationToken>>::Vector<EventRegistrationToken,Windows::Media::Devices::Internal::EventRegistrationTokenEqual,XWinRT::PodLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<EventRegistrationToken>>(
        __int64 a1)
{
  bool v2; // dl
  __int64 result; // rax

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Foundation::Collections::IVector<EventRegistrationToken>,Windows::Foundation::Collections::IIterable<EventRegistrationToken>,Microsoft::WRL::CloakedIid<Windows::Foundation::Collections::Internal::IVersionedVector>>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Foundation::Collections::IVector<EventRegistrationToken>,Windows::Foundation::Collections::IIterable<EventRegistrationToken>,Microsoft::WRL::CloakedIid<Windows::Foundation::Collections::Internal::IVersionedVector>>();
  *(_DWORD *)(a1 + 48) = 0;
  *(_DWORD *)(a1 + 52) = 0;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)a1 = &Windows::Foundation::Collections::Internal::Vector<EventRegistrationToken,Windows::Media::Devices::Internal::EventRegistrationTokenEqual,XWinRT::PodLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<EventRegistrationToken>>::`vftable'{for `Windows::Foundation::Collections::IVector<EventRegistrationToken>'};
  *(_QWORD *)(a1 + 8) = &Windows::Foundation::Collections::Internal::Vector<EventRegistrationToken,Windows::Media::Devices::Internal::EventRegistrationTokenEqual,XWinRT::PodLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<EventRegistrationToken>>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,Windows::Foundation::Collections::IIterable<EventRegistrationToken>,Microsoft::WRL::CloakedIid<Windows::Foundation::Collections::Internal::IVersionedVector>>'};
  *(_QWORD *)(a1 + 16) = &Windows::Foundation::Collections::Internal::Vector<EventRegistrationToken,Windows::Media::Devices::Internal::EventRegistrationTokenEqual,XWinRT::PodLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<EventRegistrationToken>>::`vftable'{for `Windows::Foundation::Collections::IIterable<EventRegistrationToken>'};
  *(_QWORD *)(a1 + 24) = &Windows::Foundation::Collections::Internal::Vector<EventRegistrationToken,Windows::Media::Devices::Internal::EventRegistrationTokenEqual,XWinRT::PodLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<EventRegistrationToken>>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::CloakedIid<Windows::Foundation::Collections::Internal::IVersionedVector>>'};
  XWinRT::ComLock::ComLock((XWinRT::ComLock *)(a1 + 80), v2);
  *(_DWORD *)(a1 + 96) = 0;
  result = a1;
  *(_DWORD *)(a1 + 104) = 0;
  return result;
}
