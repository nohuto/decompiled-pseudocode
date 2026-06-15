/*
 * XREFs of ?IndexOf@?$SimpleVectorView@UEventRegistrationToken@@V?$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Devices@Media@Windows@@UPodLifetimeTraits@XWinRT@@U?$DefaultVectorOptions@UEventRegistrationToken@@@3Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@UPodLifetimeTraits@XWinRT@@UIntVersionTag@8@$0A@@Internal@Collections@Foundation@Windows@@UEAAJUEventRegistrationToken@@PEAIPEAE@Z @ 0x14007C500
 * Callers:
 *     <none>
 * Callees:
 *     ??$Do@V_lambda_2640ecc7f56c7293f4389496837e9e14_@@V_lambda_055710efcf6058e7d814ae5fc8de4768_@@@?$InvalidationChecker@V?$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Devices@Media@Windows@@UPodLifetimeTraits@XWinRT@@U?$DefaultVectorOptions@UEventRegistrationToken@@@3Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@UIntVersionTag@XWinRT@@@detail@XWinRT@@QEAAJPEAV?$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Devices@Media@Windows@@UPodLifetimeTraits@XWinRT@@U?$DefaultVectorOptions@UEventRegistrationToken@@@3Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@AEBV_lambda_2640ecc7f56c7293f4389496837e9e14_@@AEBV_lambda_055710efcf6058e7d814ae5fc8de4768_@@@Z @ 0x1400776A0 (--$Do@V_lambda_2640ecc7f56c7293f4389496837e9e14_@@V_lambda_055710efcf6058e7d814ae5fc8de4768_@@@-.c)
 */

__int64 Windows::Foundation::Collections::Internal::SimpleVectorView<EventRegistrationToken,Windows::Foundation::Collections::Internal::Vector<EventRegistrationToken,Windows::Media::Devices::Internal::EventRegistrationTokenEqual,XWinRT::PodLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<EventRegistrationToken>>,XWinRT::PodLifetimeTraits,XWinRT::IntVersionTag,0>::IndexOf(
        __int64 a1,
        ...)
{
  __int64 v1; // rdx
  _QWORD v3[2]; // [rsp+20h] [rbp-30h] BYREF
  _QWORD *v4[4]; // [rsp+30h] [rbp-20h] BYREF
  __int64 v5; // [rsp+68h] [rbp+18h] BYREF
  va_list va; // [rsp+68h] [rbp+18h]
  _DWORD *v7; // [rsp+70h] [rbp+20h] BYREF
  va_list va1; // [rsp+70h] [rbp+20h]
  _BYTE *v9; // [rsp+78h] [rbp+28h] BYREF
  va_list va2; // [rsp+78h] [rbp+28h]
  va_list va3; // [rsp+80h] [rbp+30h] BYREF

  va_start(va3, a1);
  va_start(va2, a1);
  va_start(va1, a1);
  va_start(va, a1);
  v5 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v7 = va_arg(va2, _DWORD *);
  va_copy(va3, va2);
  v9 = va_arg(va3, _BYTE *);
  *v7 = 0;
  v4[0] = (_QWORD *)a1;
  *v9 = 0;
  v1 = *(_QWORD *)(a1 + 40);
  va_copy((va_list)v3, va1);
  va_copy((va_list)&v3[1], va2);
  va_copy((va_list)&v4[1], va);
  va_copy((va_list)&v4[2], va1);
  va_copy((va_list)&v4[3], va2);
  return XWinRT::detail::InvalidationChecker<Windows::Foundation::Collections::Internal::Vector<EventRegistrationToken,Windows::Media::Devices::Internal::EventRegistrationTokenEqual,XWinRT::PodLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<EventRegistrationToken>>,XWinRT::IntVersionTag>::Do<_lambda_2640ecc7f56c7293f4389496837e9e14_,_lambda_055710efcf6058e7d814ae5fc8de4768_>(
           (unsigned int *)(a1 + 48),
           v1,
           v4,
           (__int64)v3);
}
