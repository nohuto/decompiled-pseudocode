/*
 * XREFs of ?ResizeView@GamingPosturePositioner@@UEAAJPEAUIApplicationView@@UtagSIZE@@1@Z @ 0x180506800
 * Callers:
 *     ?ResizeView@GamingPosturePositioner@@W7EAAJPEAUIApplicationView@@UtagSIZE@@1@Z @ 0x1805068A0 (-ResizeView@GamingPosturePositioner@@W7EAAJPEAUIApplicationView@@UtagSIZE@@1@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_60149300@@@details@wil@@QEAA_NXZ @ 0x180335858 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_60149300@@@details@wil@@QEAA_NXZ.c)
 *     ?LogViewDiagnosticInfo@GamingPosturePositioner@@CAXPEAUIApplicationView@@AEBV?$function@$$A6AXPEAUHWND__@@PEBG1KUtagRECT@@@Z@std@@@Z @ 0x180502520 (-LogViewDiagnosticInfo@GamingPosturePositioner@@CAXPEAUIApplicationView@@AEBV-$func_ea_180502520.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall GamingPosturePositioner::ResizeView(
        GamingPosturePositioner *this,
        __int64 (__fastcall ***a2)(ApplicationViewHelpers *, GUID *, __int64 *),
        struct tagSIZE a3,
        struct tagSIZE a4)
{
  const char *v5; // r9
  _QWORD *v6; // rdx
  __int64 result; // rax
  _QWORD v8[7]; // [rsp+30h] [rbp-58h] BYREF
  _QWORD *v9; // [rsp+68h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  try
  {
    if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_60149300>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_60149300>::GetImpl'::`2'::impl) )
    {
      v8[0] = off_18074DDF0;
      v9 = v8;
      GamingPosturePositioner::LogViewDiagnosticInfo(a2, (__int64)v8);
      if ( v9 )
      {
        v6 = v8;
        LOBYTE(v6) = v9 != v8;
        (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v9 + 32LL))(v9, v6);
      }
    }
    result = 2147500033LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x2F7,
                           (int)"pcshell\\twinui\\shellpositioners\\lib\\gamingposturepositioner.cpp",
                           v5);
  }
  return result;
}
