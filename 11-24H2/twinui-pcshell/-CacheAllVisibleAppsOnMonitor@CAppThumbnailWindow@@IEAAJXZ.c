/*
 * XREFs of ?CacheAllVisibleAppsOnMonitor@CAppThumbnailWindow@@IEAAJXZ @ 0x1804A51BC
 * Callers:
 *     ?Open@CAppThumbnailWindow@@QEAAJXZ @ 0x1804A8DB8 (-Open@CAppThumbnailWindow@@QEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001D0F0 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$com_ptr_t@VTaskViewFrame@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVTaskViewFrame@@@Z @ 0x1800D6010 (--0-$com_ptr_t@VTaskViewFrame@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVTaskViewFrame@@@Z.c)
 *     ??$_Emplace_reallocate@AEBV?$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAPEAV?$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@QEAV23@AEBV23@@Z @ 0x1804A49D8 (--$_Emplace_reallocate@AEBV-$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@@-$v.c)
 *     ?IsViewVisibleOnMonitor@MultitaskingViewGestureHandlerHelpers@@YA_NPEAUIApplicationView@@PEAUIVirtualDesktop@@PEAUHMONITOR__@@@Z @ 0x1804ACA6C (-IsViewVisibleOnMonitor@MultitaskingViewGestureHandlerHelpers@@YA_NPEAUIApplicationView@@PEAUIVi.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CAppThumbnailWindow::CacheAllVisibleAppsOnMonitor(CAppThumbnailWindow *this)
{
  __int64 *v2; // rcx
  __int64 v3; // rax
  int v4; // eax
  unsigned int v5; // edi
  __int64 v6; // rdx
  unsigned int i; // edi
  __int64 v8; // rax
  HMONITOR v9; // r9
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  unsigned int v12; // [rsp+50h] [rbp+20h] BYREF
  MultitaskingViewGestureHandlerHelpers *v13; // [rsp+58h] [rbp+28h] BYREF
  __int64 *v14; // [rsp+60h] [rbp+30h] BYREF

  v12 = 0;
  v14 = 0LL;
  v2 = (__int64 *)*((_QWORD *)this + 4);
  v3 = *v2;
  v14 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64 *, __int64 **))(v3 + 32))(v2, &v14);
  v5 = v4;
  if ( v4 < 0 )
  {
    v6 = 1793LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\appthumbnailwindow.cpp",
      (const char *)(unsigned int)v4);
    goto LABEL_14;
  }
  v4 = (*(__int64 (__fastcall **)(__int64 *, unsigned int *))(*v14 + 24))(v14, &v12);
  v5 = v4;
  if ( v4 < 0 )
  {
    v6 = 1794LL;
    goto LABEL_5;
  }
  for ( i = 0; i < v12; ++i )
  {
    v13 = 0LL;
    v8 = *v14;
    v13 = 0LL;
    if ( (*(int (__fastcall **)(__int64 *, _QWORD, GUID *, MultitaskingViewGestureHandlerHelpers **))(v8 + 32))(
           v14,
           i,
           &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513,
           &v13) >= 0
      && MultitaskingViewGestureHandlerHelpers::IsViewVisibleOnMonitor(
           v13,
           *((struct IApplicationView **)this + 16),
           *((struct IVirtualDesktop **)this + 19),
           v9) )
    {
      if ( *((_QWORD *)this + 69) == *((_QWORD *)this + 70) )
      {
        std::vector<wil::com_ptr_t<IApplicationView,wil::err_returncode_policy>>::_Emplace_reallocate<wil::com_ptr_t<IApplicationView,wil::err_returncode_policy> const &>(
          (__int64 **)this + 68,
          *((__int64 **)this + 69),
          (__int64 *)&v13);
      }
      else
      {
        wil::com_ptr_t<TaskViewFrame,wil::err_exception_policy>::com_ptr_t<TaskViewFrame,wil::err_exception_policy>(
          *((_QWORD **)this + 69),
          (__int64)v13);
        *((_QWORD *)this + 69) += 8LL;
      }
    }
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v13);
  }
  v5 = 0;
LABEL_14:
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v14);
  return v5;
}
