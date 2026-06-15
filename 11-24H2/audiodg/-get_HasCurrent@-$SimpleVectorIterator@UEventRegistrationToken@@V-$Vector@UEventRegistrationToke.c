/*
 * XREFs of ?get_HasCurrent@?$SimpleVectorIterator@UEventRegistrationToken@@V?$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Devices@Media@Windows@@UPodLifetimeTraits@XWinRT@@U?$DefaultVectorOptions@UEventRegistrationToken@@@3Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@UPodLifetimeTraits@XWinRT@@UIntVersionTag@8@$0A@@Internal@Collections@Foundation@Windows@@UEAAJPEAE@Z @ 0x14007E6E0
 * Callers:
 *     <none>
 * Callees:
 *     ??$_DoWithInvalidationCheck@V_lambda_9835e5a99f3990437469a88b380ca07f_@@V_lambda_fbaa3f4cf77b88998a4b8377ed0953e1_@@@?$SimpleVectorIterator@UEventRegistrationToken@@V?$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Devices@Media@Windows@@UPodLifetimeTraits@XWinRT@@U?$DefaultVectorOptions@UEventRegistrationToken@@@3Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@UPodLifetimeTraits@XWinRT@@UIntVersionTag@8@$0A@@Internal@Collections@Foundation@Windows@@AEAAJAEBV_lambda_9835e5a99f3990437469a88b380ca07f_@@AEBV_lambda_fbaa3f4cf77b88998a4b8377ed0953e1_@@@Z @ 0x140076290 (--$_DoWithInvalidationCheck@V_lambda_9835e5a99f3990437469a88b380ca07f_@@V_lambda_fbaa3f4cf77b889.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::SimpleVectorIterator<EventRegistrationToken,Windows::Foundation::Collections::Internal::Vector<EventRegistrationToken,Windows::Media::Devices::Internal::EventRegistrationTokenEqual,XWinRT::PodLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<EventRegistrationToken>>,XWinRT::PodLifetimeTraits,XWinRT::IntVersionTag,0>::get_HasCurrent(
        __int64 a1,
        _BYTE *a2)
{
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF
  _BYTE **v4; // [rsp+40h] [rbp+8h] BYREF
  _BYTE *v5; // [rsp+48h] [rbp+10h] BYREF

  v5 = a2;
  *a2 = 0;
  v4 = &v5;
  v3[1] = a1;
  v3[0] = &v5;
  return Windows::Foundation::Collections::Internal::SimpleVectorIterator<EventRegistrationToken,Windows::Foundation::Collections::Internal::Vector<EventRegistrationToken,Windows::Media::Devices::Internal::EventRegistrationTokenEqual,XWinRT::PodLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<EventRegistrationToken>>,XWinRT::PodLifetimeTraits,XWinRT::IntVersionTag,0>::_DoWithInvalidationCheck<_lambda_9835e5a99f3990437469a88b380ca07f_,_lambda_fbaa3f4cf77b88998a4b8377ed0953e1_>(
           a1,
           (__int64)v3,
           &v4);
}
