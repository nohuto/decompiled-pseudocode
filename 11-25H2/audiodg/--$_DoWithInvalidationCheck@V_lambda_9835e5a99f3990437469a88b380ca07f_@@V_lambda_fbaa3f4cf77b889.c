/*
 * XREFs of ??$_DoWithInvalidationCheck@V_lambda_9835e5a99f3990437469a88b380ca07f_@@V_lambda_fbaa3f4cf77b88998a4b8377ed0953e1_@@@?$SimpleVectorIterator@UEventRegistrationToken@@V?$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Devices@Media@Windows@@UPodLifetimeTraits@XWinRT@@U?$DefaultVectorOptions@UEventRegistrationToken@@@3Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@UPodLifetimeTraits@XWinRT@@UIntVersionTag@8@$0A@@Internal@Collections@Foundation@Windows@@AEAAJAEBV_lambda_9835e5a99f3990437469a88b380ca07f_@@AEBV_lambda_fbaa3f4cf77b88998a4b8377ed0953e1_@@@Z @ 0x140078768
 * Callers:
 *     ?get_HasCurrent@?$SimpleVectorIterator@UEventRegistrationToken@@V?$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Devices@Media@Windows@@UPodLifetimeTraits@XWinRT@@U?$DefaultVectorOptions@UEventRegistrationToken@@@3Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@UPodLifetimeTraits@XWinRT@@UIntVersionTag@8@$0A@@Internal@Collections@Foundation@Windows@@UEAAJPEAE@Z @ 0x140080790 (-get_HasCurrent@-$SimpleVectorIterator@UEventRegistrationToken@@V-$Vector@UEventRegistrationToke.c)
 * Callees:
 *     ??$?0V?$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Devices@Media@Windows@@UPodLifetimeTraits@XWinRT@@U?$DefaultVectorOptions@UEventRegistrationToken@@@3Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@@IntVersionTag@XWinRT@@QEAA@PEAV?$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Devices@Media@Windows@@UPodLifetimeTraits@XWinRT@@U?$DefaultVectorOptions@UEventRegistrationToken@@@3Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@@Z @ 0x140077080 (--$-0V-$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Devices@Media@Wind.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::SimpleVectorIterator<EventRegistrationToken,Windows::Foundation::Collections::Internal::Vector<EventRegistrationToken,Windows::Media::Devices::Internal::EventRegistrationTokenEqual,XWinRT::PodLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<EventRegistrationToken>>,XWinRT::PodLifetimeTraits,XWinRT::IntVersionTag,0>::_DoWithInvalidationCheck<_lambda_9835e5a99f3990437469a88b380ca07f_,_lambda_fbaa3f4cf77b88998a4b8377ed0953e1_>(
        __int64 a1,
        __int64 a2,
        _BYTE ***a3)
{
  int v3; // ebx
  bool v6; // cf
  bool **v7; // rax
  __int64 v8; // rdx
  int v10; // [rsp+30h] [rbp+8h] BYREF

  v3 = *(_DWORD *)(a1 + 48);
  if ( v3 >= 0 )
  {
    v6 = *(_DWORD *)(*(_QWORD *)(a2 + 8) + 40LL) < *(_DWORD *)(*(_QWORD *)(a2 + 8) + 44LL);
    v7 = *(bool ***)a2;
    v8 = *(_QWORD *)(a1 + 32);
    v3 = 0;
    **v7 = v6;
    XWinRT::IntVersionTag::IntVersionTag(&v10, v8);
    if ( *(_DWORD *)(a1 + 52) != v10 )
    {
      v3 = -2147483636;
      *(_DWORD *)(a1 + 48) = -2147483636;
      RoOriginateError(2147483660LL, 0LL);
      ***a3 = 0;
    }
  }
  else
  {
    RoOriginateError((unsigned int)v3, 0LL);
  }
  return (unsigned int)v3;
}
