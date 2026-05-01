/*
 * XREFs of _lambda_83256061826219130c74760726d0f103_::operator() @ 0x180687ED4
 * Callers:
 *     CMultitaskingViewTaskCallback__lambda_83256061826219130c74760726d0f103___::RunTask @ 0x180688370 (CMultitaskingViewTaskCallback__lambda_83256061826219130c74760726d0f103___--RunTask.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$com_query@UIMultitaskingViewForegroundStaging@@AEAPEAUIMultitaskingViewManager@@@wil@@YA?AV?$com_ptr_t@UIMultitaskingViewForegroundStaging@@Uerr_exception_policy@wil@@@0@AEAPEAUIMultitaskingViewManager@@@Z @ 0x18022B7D0 (--$com_query@UIMultitaskingViewForegroundStaging@@AEAPEAUIMultitaskingViewManager@@@wil@@YA-AV-$.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?SetIsControlDismissing@GuidedSnapAssistControl@@AEAAX_N@Z @ 0x180688380 (-SetIsControlDismissing@GuidedSnapAssistControl@@AEAAX_N@Z.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall lambda_83256061826219130c74760726d0f103_::operator()(
        GuidedSnapAssistControl **a1,
        __int64 (__fastcall ***a2)(_QWORD, GUID *, _QWORD *))
{
  __int64 (__fastcall **v3)(_QWORD, GUID *, _QWORD *); // rax
  int (*v4)(void); // rax
  bool v5; // dl
  int v6; // eax
  const char *v7; // r9
  int v8; // [rsp+20h] [rbp-28h]
  __int64 v9[3]; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 (__fastcall ***v11)(_QWORD, GUID *, _QWORD *); // [rsp+58h] [rbp+10h] BYREF
  int v12; // [rsp+60h] [rbp+18h] BYREF
  __int64 v13; // [rsp+68h] [rbp+20h] BYREF

  v11 = a2;
  v13 = 0LL;
  v3 = *a2;
  v13 = 0LL;
  v4 = (int (*)(void))v3[5];
  try
  {
    if ( v4() >= 0 )
    {
      v6 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v13 + 32LL))(v13, &v12);
      if ( v6 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0xBA,
          (int)"pcshell\\twinui\\snapcomponent\\lib\\guidedsnapassistcontrol.cpp",
          (const char *)(unsigned int)v6,
          v8);
      if ( !v12 )
      {
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v13);
        return;
      }
      wil::com_query<IMultitaskingViewForegroundStaging,IMultitaskingViewManager * &>(v9, &v11);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9[0] + 24LL))(v9[0]);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 40LL))(v13);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v9);
    }
    GuidedSnapAssistControl::SetIsControlDismissing(*a1, v5);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v13);
  }
  catch ( ... )
  {
    wil::details::in1diag3::FailFast_CaughtException(
      retaddr,
      (void *)0xCA,
      (unsigned int)"pcshell\\twinui\\snapcomponent\\lib\\guidedsnapassistcontrol.cpp",
      v7);
  }
}
