/*
 * XREFs of ?GetChromeConfigurationForView@GamingPosturePositioner@@UEAAJPEAUIApplicationView@@PEAHPEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x1804FE650
 * Callers:
 *     ?GetChromeConfigurationForView@GamingPosturePositioner@@W7EAAJPEAUIApplicationView@@PEAHPEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x1804FE760 (-GetChromeConfigurationForView@GamingPosturePositioner@@W7EAAJPEAUIApplicationView@@PEAHPEAPEAUI.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001D0F0 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_60149300@@@details@wil@@QEAA_NXZ @ 0x180335858 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_60149300@@@details@wil@@QEAA_NXZ.c)
 *     ?CreateTitlebarConfiguration@GamingPosturePositioner@@AEAA?AV?$com_ptr_t@UIApplicationViewTitlebarConfiguration@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x1804FBFD0 (-CreateTitlebarConfiguration@GamingPosturePositioner@@AEAA-AV-$com_ptr_t@UIApplicationViewTitleb.c)
 *     ?LogViewDiagnosticInfo@GamingPosturePositioner@@CAXPEAUIApplicationView@@AEBV?$function@$$A6AXPEAUHWND__@@PEBG1KUtagRECT@@@Z@std@@@Z @ 0x180502520 (-LogViewDiagnosticInfo@GamingPosturePositioner@@CAXPEAUIApplicationView@@AEBV-$func_ea_180502520.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GamingPosturePositioner::GetChromeConfigurationForView(
        GamingPosturePositioner *this,
        struct IApplicationView *a2,
        int *a3,
        struct IApplicationViewTitlebarConfiguration **a4)
{
  __int64 result; // rax
  struct IApplicationViewTitlebarConfiguration *v7; // rcx
  const char *v8; // r9
  _QWORD *v9; // rdx
  __int64 v10[2]; // [rsp+20h] [rbp-68h] BYREF
  _QWORD v11[7]; // [rsp+30h] [rbp-58h] BYREF
  _QWORD *v12; // [rsp+68h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  *a4 = 0LL;
  *a3 = 0;
  if ( *((_BYTE *)this + 784) )
  {
    try
    {
      v7 = (struct IApplicationViewTitlebarConfiguration *)*GamingPosturePositioner::CreateTitlebarConfiguration(
                                                              (__int64)this,
                                                              v10);
      if ( v7 )
      {
        *a4 = v7;
        (*(void (__fastcall **)(struct IApplicationViewTitlebarConfiguration *))(*(_QWORD *)v7 + 8LL))(v7);
      }
      else
      {
        *a4 = 0LL;
      }
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v10);
      if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_60149300>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_60149300>::GetImpl'::`2'::impl) )
      {
        v11[0] = off_18074DEE0;
        v12 = v11;
        GamingPosturePositioner::LogViewDiagnosticInfo(a2);
        if ( v12 )
        {
          v9 = v11;
          LOBYTE(v9) = v12 != v11;
          (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v12 + 32LL))(v12, v9);
        }
      }
      result = 0LL;
    }
    catch ( ... )
    {
      return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                             retaddr,
                             (void *)0x30A,
                             (int)"pcshell\\twinui\\shellpositioners\\lib\\gamingposturepositioner.cpp",
                             v8);
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2FE,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\gamingposturepositioner.cpp",
      (const char *)0x8000FFFFLL);
    return 2147549183LL;
  }
  return result;
}
