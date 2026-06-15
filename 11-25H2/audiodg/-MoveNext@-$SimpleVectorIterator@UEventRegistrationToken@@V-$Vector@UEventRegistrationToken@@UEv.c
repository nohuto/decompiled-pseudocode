/*
 * XREFs of ?MoveNext@?$SimpleVectorIterator@UEventRegistrationToken@@V?$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Devices@Media@Windows@@UPodLifetimeTraits@XWinRT@@U?$DefaultVectorOptions@UEventRegistrationToken@@@3Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@UPodLifetimeTraits@XWinRT@@UIntVersionTag@8@$0A@@Internal@Collections@Foundation@Windows@@UEAAJPEAE@Z @ 0x14007CF30
 * Callers:
 *     <none>
 * Callees:
 *     ??$Do@V_lambda_a16af002d07ace4fe9b089da77d4d3b3_@@V_lambda_e7f9a9833f543183a86b640d7a18f225_@@@?$InvalidationChecker@V?$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Devices@Media@Windows@@UPodLifetimeTraits@XWinRT@@U?$DefaultVectorOptions@UEventRegistrationToken@@@3Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@UIntVersionTag@XWinRT@@@detail@XWinRT@@QEAAJPEAV?$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Devices@Media@Windows@@UPodLifetimeTraits@XWinRT@@U?$DefaultVectorOptions@UEventRegistrationToken@@@3Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@AEBV_lambda_a16af002d07ace4fe9b089da77d4d3b3_@@AEBV_lambda_e7f9a9833f543183a86b640d7a18f225_@@@Z @ 0x140077C4C (--$Do@V_lambda_a16af002d07ace4fe9b089da77d4d3b3_@@V_lambda_e7f9a9833f543183a86b640d7a18f225_@@@-.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::SimpleVectorIterator<EventRegistrationToken,Windows::Foundation::Collections::Internal::Vector<EventRegistrationToken,Windows::Media::Devices::Internal::EventRegistrationTokenEqual,XWinRT::PodLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<EventRegistrationToken>>,XWinRT::PodLifetimeTraits,XWinRT::IntVersionTag,0>::MoveNext(
        __int64 a1,
        _BYTE *a2)
{
  __int64 v2; // rdx
  __int64 v4[5]; // [rsp+20h] [rbp-28h] BYREF
  _BYTE **v5; // [rsp+50h] [rbp+8h] BYREF
  _BYTE *v6; // [rsp+58h] [rbp+10h] BYREF

  v6 = a2;
  *a2 = 0;
  v4[0] = a1;
  v5 = &v6;
  v2 = *(_QWORD *)(a1 + 32);
  v4[1] = (__int64)&v6;
  v4[2] = (__int64)&v5;
  return XWinRT::detail::InvalidationChecker<Windows::Foundation::Collections::Internal::Vector<EventRegistrationToken,Windows::Media::Devices::Internal::EventRegistrationTokenEqual,XWinRT::PodLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<EventRegistrationToken>>,XWinRT::IntVersionTag>::Do<_lambda_a16af002d07ace4fe9b089da77d4d3b3_,_lambda_e7f9a9833f543183a86b640d7a18f225_>(
           (unsigned int *)(a1 + 48),
           v2,
           v4,
           &v5);
}
