/*
 * XREFs of _lambda_9cd1b560a470dbb5c6e1d5da28bd3866_::operator() @ 0x1800974D4
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_1d6a067dbe26ab9e29e40b777c6860e1___::Run @ 0x1800974C0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_1d6a067dbe26ab9e29e40b777c6860e1___--Run.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$try_com_query_nothrow@UIWin32ApplicationView@@PEAUIApplicationView@@@wil@@YA?AV?$com_ptr_t@UIWin32ApplicationView@@Uerr_returncode_policy@wil@@@0@$$QEAPEAUIApplicationView@@@Z @ 0x1800975F4 (--$try_com_query_nothrow@UIWin32ApplicationView@@PEAUIApplicationView@@@wil@@YA-AV-$com_ptr_t@UI.c)
 *     ??$Make@VCClassicWindowExternal@@PEAUIClassicWindow@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VCClassicWindowExternal@@@12@$$QEAPEAUIClassicWindow@@@Z @ 0x180097638 (--$Make@VCClassicWindowExternal@@PEAUIClassicWindow@@@Details@WRL@Microsoft@@YA-AV-$ComPtr@VCCla.c)
 *     ?TryGetViewPropertySetFromHintsForWin32@Win32ApplicationViewHelpers@@YA?AV?$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wil@@PEAUIWin32ApplicationView@@_N@Z @ 0x180097748 (-TryGetViewPropertySetFromHintsForWin32@Win32ApplicationViewHelpers@@YA-AV-$com_ptr_t@UIProperty.c)
 *     ??1?$com_ptr_t@UIAppStateManager@AppLimits@FamilySafety@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180098014 (--1-$com_ptr_t@UIAppStateManager@AppLimits@FamilySafety@Internal@Windows@@Uerr_exception_policy@.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x180148460 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIClassicWindowExternal@@UIClassicWindowContainer@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18017B6E0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIClassicWindowEx.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_9cd1b560a470dbb5c6e1d5da28bd3866_::operator()(_QWORD *a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // rbx
  int (__fastcall *v6)(__int64, __int64, __int64 *); // rdi
  __int64 (__fastcall *v7)(__int64, _QWORD); // rbx
  _QWORD *v8; // rax
  __int64 v9; // [rsp+50h] [rbp+30h] BYREF
  __int64 v10; // [rsp+60h] [rbp+40h] BYREF
  __int64 v11; // [rsp+68h] [rbp+48h] BYREF

  if ( *(_QWORD *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 232LL))(*a1) )
  {
    v7 = *(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 128LL);
    v8 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 232LL))(*a1);
    return v7(a2, *v8);
  }
  else
  {
    v9 = *a1;
    result = Microsoft::WRL::Details::Make<CClassicWindowExternal,IClassicWindow *>(&v10, &v9);
    v5 = v10;
    if ( v10 )
    {
      v9 = 0LL;
      v6 = *(int (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)a2 + 112LL);
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v9);
      if ( v6(a2, v5, &v9) >= 0 )
        (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*a1 + 224LL))(*a1, v9);
      if ( (a1[1] & 1) == 0 )
      {
        v11 = v9;
        wil::try_com_query_nothrow<IWin32ApplicationView,IApplicationView *>(&v10, &v11);
        if ( v10 )
        {
          Win32ApplicationViewHelpers::TryGetViewPropertySetFromHintsForWin32(&v11);
          wil::com_ptr_t<Windows::Internal::FamilySafety::AppLimits::IAppStateManager,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::FamilySafety::AppLimits::IAppStateManager,wil::err_exception_policy>(&v11);
        }
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v10);
      }
      result = Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v9);
    }
    if ( v5 )
      return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IClassicWindowExternal,IClassicWindowContainer,Microsoft::WRL::FtmBase>::Release(v5);
  }
  return result;
}
