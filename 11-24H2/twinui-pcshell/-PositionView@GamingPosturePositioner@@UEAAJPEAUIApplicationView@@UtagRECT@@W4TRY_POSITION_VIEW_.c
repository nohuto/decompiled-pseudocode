/*
 * XREFs of ?PositionView@GamingPosturePositioner@@UEAAJPEAUIApplicationView@@UtagRECT@@W4TRY_POSITION_VIEW_FLAGS@@@Z @ 0x180505520
 * Callers:
 *     ?PositionView@GamingPosturePositioner@@W7EAAJPEAUIApplicationView@@UtagRECT@@W4TRY_POSITION_VIEW_FLAGS@@@Z @ 0x1805055D0 (-PositionView@GamingPosturePositioner@@W7EAAJPEAUIApplicationView@@UtagRECT@@W4TRY_POSITION_VIEW.c)
 * Callees:
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_60149300@@@details@wil@@QEAA_NXZ @ 0x180335858 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_60149300@@@details@wil@@QEAA_NXZ.c)
 *     ?LogViewDiagnosticInfo@GamingPosturePositioner@@CAXPEAUIApplicationView@@AEBV?$function@$$A6AXPEAUHWND__@@PEBG1K@Z@std@@@Z @ 0x180502394 (-LogViewDiagnosticInfo@GamingPosturePositioner@@CAXPEAUIApplicationView@@AEBV-$function@$$A6AXPE.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall GamingPosturePositioner::PositionView(
        __int64 a1,
        __int64 (__fastcall ***a2)(ApplicationViewHelpers *, GUID *, __int64 *),
        __int128 *a3)
{
  const char *v5; // r9
  __int64 (__fastcall ***v6)(); // rdx
  __int64 result; // rax
  __int64 (__fastcall **v8)(); // [rsp+30h] [rbp-58h] BYREF
  __int128 v9; // [rsp+38h] [rbp-50h]
  __int64 (__fastcall ***v10)(); // [rsp+68h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  try
  {
    if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_60149300>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_60149300>::GetImpl'::`2'::impl) )
    {
      v8 = off_18074DF10;
      v9 = *a3;
      v10 = &v8;
      GamingPosturePositioner::LogViewDiagnosticInfo(a2, (__int64)&v8);
      if ( v10 )
      {
        v6 = &v8;
        LOBYTE(v6) = v10 != &v8;
        ((void (__fastcall *)(__int64 (__fastcall ***)(), __int64 (__fastcall ***)()))(*v10)[4])(v10, v6);
      }
    }
    result = 2147500033LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x323,
                           (int)"pcshell\\twinui\\shellpositioners\\lib\\gamingposturepositioner.cpp",
                           v5);
  }
  return result;
}
