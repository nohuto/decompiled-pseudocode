/*
 * XREFs of ?GetMany@?$SimpleVectorIterator@UEventRegistrationToken@@V?$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Devices@Media@Windows@@UPodLifetimeTraits@XWinRT@@U?$DefaultVectorOptions@UEventRegistrationToken@@@3Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@UPodLifetimeTraits@XWinRT@@UIntVersionTag@8@$0A@@Internal@Collections@Foundation@Windows@@UEAAJIPEAUEventRegistrationToken@@PEAI@Z @ 0x14007B860
 * Callers:
 *     <none>
 * Callees:
 *     ??$Do@V_lambda_7d6f68d31115486fe66f015c3efdf151_@@V_lambda_cdc67ce79880dc59329b171674cbd71c_@@@?$InvalidationChecker@V?$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Devices@Media@Windows@@UPodLifetimeTraits@XWinRT@@U?$DefaultVectorOptions@UEventRegistrationToken@@@3Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@UIntVersionTag@XWinRT@@@detail@XWinRT@@QEAAJPEAV?$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Devices@Media@Windows@@UPodLifetimeTraits@XWinRT@@U?$DefaultVectorOptions@UEventRegistrationToken@@@3Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@AEBV_lambda_7d6f68d31115486fe66f015c3efdf151_@@AEBV_lambda_cdc67ce79880dc59329b171674cbd71c_@@@Z @ 0x140077A20 (--$Do@V_lambda_7d6f68d31115486fe66f015c3efdf151_@@V_lambda_cdc67ce79880dc59329b171674cbd71c_@@@-.c)
 */

__int64 Windows::Foundation::Collections::Internal::SimpleVectorIterator<EventRegistrationToken,Windows::Foundation::Collections::Internal::Vector<EventRegistrationToken,Windows::Media::Devices::Internal::EventRegistrationTokenEqual,XWinRT::PodLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<EventRegistrationToken>>,XWinRT::PodLifetimeTraits,XWinRT::IntVersionTag,0>::GetMany(
        __int64 a1,
        unsigned int a2,
        ...)
{
  __int64 v2; // r8
  __int64 v3; // rdx
  _QWORD v5[2]; // [rsp+20h] [rbp-40h] BYREF
  __int64 v6[6]; // [rsp+30h] [rbp-30h] BYREF
  unsigned int v7; // [rsp+78h] [rbp+18h] BYREF
  __int64 v8; // [rsp+80h] [rbp+20h] BYREF
  va_list va; // [rsp+80h] [rbp+20h]
  _DWORD *v10; // [rsp+88h] [rbp+28h] BYREF
  va_list va1; // [rsp+88h] [rbp+28h]
  va_list va2; // [rsp+90h] [rbp+30h] BYREF

  va_start(va2, a2);
  va_start(va1, a2);
  va_start(va, a2);
  v8 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v10 = va_arg(va2, _DWORD *);
  v7 = a2;
  v2 = 0LL;
  for ( *v10 = 0; (unsigned int)v2 < v7; v2 = (unsigned int)(v2 + 1) )
    *(_QWORD *)(v8 + 8 * v2) = 0LL;
  v3 = *(_QWORD *)(a1 + 32);
  va_copy((va_list)v5, va1);
  v6[0] = a1;
  va_copy((va_list)&v5[1], va);
  v6[1] = (__int64)&v7;
  va_copy((va_list)&v6[2], va);
  va_copy((va_list)&v6[3], va1);
  v6[4] = (__int64)v5;
  return XWinRT::detail::InvalidationChecker<Windows::Foundation::Collections::Internal::Vector<EventRegistrationToken,Windows::Media::Devices::Internal::EventRegistrationTokenEqual,XWinRT::PodLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<EventRegistrationToken>>,XWinRT::IntVersionTag>::Do<_lambda_7d6f68d31115486fe66f015c3efdf151_,_lambda_cdc67ce79880dc59329b171674cbd71c_>(
           (unsigned int *)(a1 + 48),
           v3,
           v6,
           (__int64)v5);
}
