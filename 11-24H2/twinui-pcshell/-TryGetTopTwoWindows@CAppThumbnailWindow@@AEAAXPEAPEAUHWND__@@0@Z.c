/*
 * XREFs of ?TryGetTopTwoWindows@CAppThumbnailWindow@@AEAAXPEAPEAUHWND__@@0@Z @ 0x1804AC17C
 * Callers:
 *     ?TryCreateThumbnailsForTopTwoAppsAndAddToExcludeList@CAppThumbnailWindow@@AEAAJAEAV?$vector@PEAUHWND__@@V?$allocator@PEAUHWND__@@@std@@@std@@@Z @ 0x1804ABBE8 (-TryCreateThumbnailsForTopTwoAppsAndAddToExcludeList@CAppThumbnailWindow@@AEAAJAEAV-$vector@PEAU.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001D0F0 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x180029D9C (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?IsViewVisibleOnMonitor@MultitaskingViewGestureHandlerHelpers@@YA_NPEAUIApplicationView@@PEAUIVirtualDesktop@@PEAUHMONITOR__@@@Z @ 0x1804ACA6C (-IsViewVisibleOnMonitor@MultitaskingViewGestureHandlerHelpers@@YA_NPEAUIApplicationView@@PEAUIVi.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall CAppThumbnailWindow::TryGetTopTwoWindows(struct IApplicationView **this, HWND *a2, HWND *a3)
{
  HWND v6; // rbx
  HWND v7; // rsi
  unsigned int i; // edi
  __int64 v9; // rax
  HMONITOR v10; // r9
  struct IApplicationView *v11; // rdx
  __int64 WindowForView; // rax
  unsigned int v13; // [rsp+70h] [rbp+40h] BYREF
  ApplicationViewHelpers *v14; // [rsp+78h] [rbp+48h] BYREF
  __int64 *v15; // [rsp+80h] [rbp+50h] BYREF

  v6 = 0LL;
  v7 = 0LL;
  v13 = 0;
  v15 = 0LL;
  if ( (*(int (__fastcall **)(struct IApplicationView *, __int64 **))(*(_QWORD *)this[4] + 32LL))(this[4], &v15) >= 0
    && (*(int (__fastcall **)(__int64 *, unsigned int *))(*v15 + 24))(v15, &v13) >= 0 )
  {
    for ( i = 0; i < v13; ++i )
    {
      v14 = 0LL;
      v9 = *v15;
      v14 = 0LL;
      if ( (*(int (__fastcall **)(__int64 *, _QWORD, GUID *, ApplicationViewHelpers **))(v9 + 32))(
             v15,
             i,
             &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513,
             &v14) >= 0
        && MultitaskingViewGestureHandlerHelpers::IsViewVisibleOnMonitor(v14, this[16], this[19], v10) )
      {
        WindowForView = ApplicationViewHelpers::GetWindowForView(
                          (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *))v14,
                          v11);
        if ( v7 )
        {
          v6 = (HWND)WindowForView;
          wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v14);
          break;
        }
        v7 = (HWND)WindowForView;
      }
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v14);
    }
  }
  *a2 = v7;
  *a3 = v6;
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v15);
}
