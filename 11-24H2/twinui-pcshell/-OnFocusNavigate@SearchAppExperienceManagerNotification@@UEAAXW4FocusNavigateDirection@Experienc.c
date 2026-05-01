/*
 * XREFs of ?OnFocusNavigate@SearchAppExperienceManagerNotification@@UEAAXW4FocusNavigateDirection@Experience@Shell@Internal@Windows@@@Z @ 0x1803AAFF0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18003B490 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ??4?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18008BB18 (--4-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18013C6A0 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x18013C6D0 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIFocusNavigateEventArgs@Experience@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18022DB90 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIFocusNavigateEve.c)
 *     ??$InvokeDelegates@V_lambda_2f963be1c3fb5a89ebf2e6ce82752b08_@@U?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUIFocusNavigateEventArgs@2345@@Foundation@Windows@@@?$InvokeTraits@$01@WRL@Microsoft@@SAJV_lambda_2f963be1c3fb5a89ebf2e6ce82752b08_@@PEAVEventTargetArray@Details@12@PEAV?$EventSource@U?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUIFocusNavigateEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@12@@Z @ 0x180378428 (--$InvokeDelegates@V_lambda_2f963be1c3fb5a89ebf2e6ce82752b08_@@U-$ITypedEventHandler@PEAVCortana.c)
 *     Microsoft::WRL::Details::Make__SearchAppExperienceManagerNotification::OnFocusNavigate_::_2_::CFocusNavigateEventArgs_enum_Windows::Internal::Shell::Experience::FocusNavigateDirection_&_ @ 0x1803788EC (Microsoft--WRL--Details--Make__SearchAppExperienceManagerNotification--OnFocusNavigate_--_2_--CF.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall SearchAppExperienceManagerNotification::OnFocusNavigate(__int64 a1, int a2)
{
  __int64 *v3; // rax
  __int64 v4; // rbx
  __int64 v5; // rcx
  RTL_SRWLOCK *v6; // rax
  volatile signed __int32 **v7; // rsi
  volatile signed __int32 *v8; // rdi
  RTL_SRWLOCK *v9; // [rsp+20h] [rbp-28h] BYREF
  __int64 v10; // [rsp+28h] [rbp-20h] BYREF
  _QWORD v11[3]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v12; // [rsp+70h] [rbp+28h] BYREF
  int v13; // [rsp+78h] [rbp+30h] BYREF
  volatile signed __int32 *v14; // [rsp+80h] [rbp+38h] BYREF
  RTL_SRWLOCK *v15; // [rsp+88h] [rbp+40h] BYREF

  v13 = a2;
  if ( *(_QWORD *)(a1 + 40) )
  {
    v3 = Microsoft::WRL::Details::Make__SearchAppExperienceManagerNotification::OnFocusNavigate_::_2_::CFocusNavigateEventArgs_enum_Windows::Internal::Shell::Experience::FocusNavigateDirection___(
           &v12,
           &v13);
    v4 = *v3;
    *v3 = 0LL;
    v5 = v12;
    if ( v12 )
    {
      v12 = 0LL;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Shell::Experience::IFocusNavigateEventArgs>::Release(v5);
    }
    v6 = *(RTL_SRWLOCK **)(a1 + 40);
    v7 = (volatile signed __int32 **)&v6[24];
    v10 = v4;
    v9 = v6;
    v14 = 0LL;
    wil::AcquireSRWLockExclusive(&v15, v6 + 25);
    Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=(&v14, v7);
    Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v15);
    v8 = v14;
    if ( v14 )
    {
      v11[0] = &v9;
      v11[1] = &v10;
      Microsoft::WRL::InvokeTraits<2>::InvokeDelegates<_lambda_2f963be1c3fb5a89ebf2e6ce82752b08_,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,Windows::Internal::Shell::Experience::IFocusNavigateEventArgs *>>(
        v11,
        (__int64)v14,
        (RTL_SRWLOCK *)v7);
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v8);
    }
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
}
