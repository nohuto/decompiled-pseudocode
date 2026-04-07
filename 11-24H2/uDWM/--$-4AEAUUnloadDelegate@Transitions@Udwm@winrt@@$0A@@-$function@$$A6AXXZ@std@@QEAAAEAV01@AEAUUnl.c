/*
 * XREFs of ??$?4AEAUUnloadDelegate@Transitions@Udwm@winrt@@$0A@@?$function@$$A6AXXZ@std@@QEAAAEAV01@AEAUUnloadDelegate@Transitions@Udwm@winrt@@@Z @ 0x1800EB034
 * Callers:
 *     ?StartHideAnimation@UserResizeVisual@implementation@Transitions@Udwm@winrt@@QEAAXUUnloadDelegate@345@@Z @ 0x1800EB8F0 (-StartHideAnimation@UserResizeVisual@implementation@Transitions@Udwm@winrt@@QEAAXUUnloadDelegate.c)
 * Callees:
 *     ?_Tidy@?$_Func_class@X$$V@std@@IEAAXXZ @ 0x180021D08 (-_Tidy@-$_Func_class@X$$V@std@@IEAAXXZ.c)
 *     ?_Swap@?$_Func_class@X$$V@std@@IEAAXAEAV12@@Z @ 0x180067CA4 (-_Swap@-$_Func_class@X$$V@std@@IEAAXAEAV12@@Z.c)
 *     ?IsIndependent@CFadeOut@@UEAA_NXZ @ 0x1800715E0 (-IsIndependent@CFadeOut@@UEAA_NXZ.c)
 *     __security_check_cookie @ 0x18009B5A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

CFadeOut *__fastcall std::function<void (void)>::operator=<winrt::Udwm::Transitions::UnloadDelegate &,0>(CFadeOut *a1)
{
  __int64 *v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rdx
  _QWORD v6[7]; // [rsp+20h] [rbp-58h] BYREF
  _QWORD *v7; // [rsp+58h] [rbp-20h]

  v7 = 0LL;
  if ( CFadeOut::IsIndependent(a1) )
  {
    v3 = *v2;
    v6[0] = &std::_Func_impl_no_alloc<winrt::Udwm::Transitions::UnloadDelegate,void,>::`vftable';
    v6[1] = v3;
    if ( v3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
    v7 = v6;
  }
  std::_Func_class<void,>::_Swap((__int64)v6, (__int64)a1);
  std::_Func_class<void,>::_Tidy((__int64)v6, v4);
  return a1;
}
