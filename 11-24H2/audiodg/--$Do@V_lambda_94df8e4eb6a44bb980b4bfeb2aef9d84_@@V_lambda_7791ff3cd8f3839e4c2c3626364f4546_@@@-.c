/*
 * XREFs of ??$Do@V_lambda_94df8e4eb6a44bb980b4bfeb2aef9d84_@@V_lambda_7791ff3cd8f3839e4c2c3626364f4546_@@@?$InvalidationChecker@V?$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Devices@Media@Windows@@UPodLifetimeTraits@XWinRT@@U?$DefaultVectorOptions@UEventRegistrationToken@@@3Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@UIntVersionTag@XWinRT@@@detail@XWinRT@@QEAAJPEAV?$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Devices@Media@Windows@@UPodLifetimeTraits@XWinRT@@U?$DefaultVectorOptions@UEventRegistrationToken@@@3Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@AEBV_lambda_94df8e4eb6a44bb980b4bfeb2aef9d84_@@AEBV_lambda_7791ff3cd8f3839e4c2c3626364f4546_@@@Z @ 0x14007564C
 * Callers:
 *     ?First@?$SimpleVectorView@UEventRegistrationToken@@V?$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Devices@Media@Windows@@UPodLifetimeTraits@XWinRT@@U?$DefaultVectorOptions@UEventRegistrationToken@@@3Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@UPodLifetimeTraits@XWinRT@@UIntVersionTag@8@$0A@@Internal@Collections@Foundation@Windows@@UEAAJPEAPEAU?$IIterator@UEventRegistrationToken@@@345@@Z @ 0x140078E50 (-First@-$SimpleVectorView@UEventRegistrationToken@@V-$Vector@UEventRegistrationToken@@UEventRegi.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x140012DD8 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$?0V?$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Devices@Media@Windows@@UPodLifetimeTraits@XWinRT@@U?$DefaultVectorOptions@UEventRegistrationToken@@@3Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@@IntVersionTag@XWinRT@@QEAA@PEAV?$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Devices@Media@Windows@@UPodLifetimeTraits@XWinRT@@U?$DefaultVectorOptions@UEventRegistrationToken@@@3Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@@Z @ 0x140074BA8 (--$-0V-$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Devices@Media@Wind.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall XWinRT::detail::InvalidationChecker<Windows::Foundation::Collections::Internal::Vector<EventRegistrationToken,Windows::Media::Devices::Internal::EventRegistrationTokenEqual,XWinRT::PodLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<EventRegistrationToken>>,XWinRT::IntVersionTag>::Do<_lambda_94df8e4eb6a44bb980b4bfeb2aef9d84_,_lambda_7791ff3cd8f3839e4c2c3626364f4546_>(
        int *a1,
        __int64 a2,
        _QWORD **a3,
        __int64 ***a4)
{
  int v8; // ebx
  __int64 (__fastcall ***v9)(_QWORD, GUID *, __int64 *); // rdi
  __int64 (__fastcall *v10)(_QWORD, GUID *, __int64 *); // rbx
  __int64 *v11; // rdx
  __int64 v12; // rcx
  __int64 v14; // [rsp+40h] [rbp+8h] BYREF

  v8 = *a1;
  if ( *a1 >= 0 )
  {
    v14 = 0LL;
    v9 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))(*a3)[5];
    v10 = **v9;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v14);
    v8 = v10(v9, &GUID_f0a9a686_2b1f_546a_8339_58c01533ec25, &v14);
    if ( v8 >= 0 )
      v8 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v14 + 48LL))(v14, *a3[1]);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v14);
    XWinRT::IntVersionTag::IntVersionTag(&v14, a2);
    if ( a1[1] != (_DWORD)v14 )
    {
      *a1 = -2147483636;
      if ( v8 < 0 )
      {
        RoTransformError((unsigned int)v8, 2147483660LL, 0LL);
      }
      else
      {
        RoOriginateError(2147483660LL, 0LL);
        v11 = **a4;
        v12 = *v11;
        *v11 = 0LL;
        if ( v12 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
      }
      return (unsigned int)-2147483636;
    }
  }
  else
  {
    RoOriginateError((unsigned int)v8, 0LL);
  }
  return (unsigned int)v8;
}
