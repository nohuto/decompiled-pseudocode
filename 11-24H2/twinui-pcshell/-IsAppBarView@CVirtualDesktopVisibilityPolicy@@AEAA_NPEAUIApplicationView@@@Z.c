/*
 * XREFs of ?IsAppBarView@CVirtualDesktopVisibilityPolicy@@AEAA_NPEAUIApplicationView@@@Z @ 0x180287EA0
 * Callers:
 *     ?MoveViewToDesktopIfAllowed@CVirtualDesktopVisibilityPolicy@@AEAAJPEAUIApplicationView@@PEAUIVirtualDesktop@@PEA_N@Z @ 0x180170C40 (-MoveViewToDesktopIfAllowed@CVirtualDesktopVisibilityPolicy@@AEAAJPEAUIApplicationView@@PEAUIVir.c)
 *     ?OnViewRemoved@CVirtualDesktopVisibilityPolicy@@UEAAJPEAUIApplicationView@@@Z @ 0x18017F890 (-OnViewRemoved@CVirtualDesktopVisibilityPolicy@@UEAAJPEAUIApplicationView@@@Z.c)
 *     ?OnViewAdded@CVirtualDesktopVisibilityPolicy@@UEAAJPEAUIApplicationView@@PEAUIVirtualDesktop@@PEAUIVirtualDesktopCollection@@@Z @ 0x1801A7DB0 (-OnViewAdded@CVirtualDesktopVisibilityPolicy@@UEAAJPEAUIApplicationView@@PEAUIVirtualDesktop@@PE.c)
 *     ?CanViewMoveDesktops@CVirtualDesktopVisibilityPolicy@@UEAA_NPEAUIApplicationView@@@Z @ 0x1801D75C0 (-CanViewMoveDesktops@CVirtualDesktopVisibilityPolicy@@UEAA_NPEAUIApplicationView@@@Z.c)
 *     ?IsVisible@CVirtualDesktopVisibilityPolicy@@UEAA_NPEAUIApplicationView@@PEAUIVirtualDesktop@@@Z @ 0x1802696A0 (-IsVisible@CVirtualDesktopVisibilityPolicy@@UEAA_NPEAUIApplicationView@@PEAUIVirtualDesktop@@@Z.c)
 *     ?IsVisibleOnlyOnDesktop@CVirtualDesktopVisibilityPolicy@@UEAA_NPEAUIApplicationView@@PEAUIVirtualDesktop@@@Z @ 0x18054E570 (-IsVisibleOnlyOnDesktop@CVirtualDesktopVisibilityPolicy@@UEAA_NPEAUIApplicationView@@PEAUIVirtua.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
char __fastcall CVirtualDesktopVisibilityPolicy::IsAppBarView(
        CVirtualDesktopVisibilityPolicy *this,
        struct IApplicationView *a2)
{
  struct IApplicationView *v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rcx
  int v5; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+10h]
  CVirtualDesktopVisibilityPolicy *v8; // [rsp+40h] [rbp+18h] BYREF
  __int64 v9; // [rsp+48h] [rbp+20h] BYREF
  struct IApplicationView *v10; // [rsp+50h] [rbp+28h] BYREF
  struct IApplicationView *v11; // [rsp+58h] [rbp+30h]

  v8 = this;
  v2 = a2;
  v11 = 0LL;
  v3 = *(_QWORD *)a2;
  v10 = 0LL;
  if ( (*(int (__fastcall **)(struct IApplicationView *, struct IApplicationView **))(v3 + 360))(a2, &v10) < 0 )
  {
    v11 = v2;
    (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)v2 + 8LL))(v2);
  }
  else
  {
    v2 = v10;
    v11 = v10;
    if ( v10 )
      (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)v10 + 8LL))(v10);
  }
  v9 = 0LL;
  (**(void (__fastcall ***)(struct IApplicationView *, GUID *, __int64 *))v2)(
    v2,
    &GUID_f3527610_c76d_4316_ac8e_28651acf3df3,
    &v9);
  v4 = v9;
  if ( !v9 )
    goto LABEL_10;
  LODWORD(v8) = 0;
  v5 = (*(__int64 (__fastcall **)(__int64, CVirtualDesktopVisibilityPolicy **))(*(_QWORD *)v9 + 40LL))(v9, &v8);
  if ( v5 < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x3A,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopvisibilitypolicy.cpp",
      (const char *)(unsigned int)v5);
LABEL_9:
    v4 = v9;
LABEL_10:
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    if ( v10 )
      (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)v10 + 16LL))(v10);
    if ( v2 )
      (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)v2 + 16LL))(v2);
    return 0;
  }
  if ( (_DWORD)v8 != 1 )
    goto LABEL_9;
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  if ( v10 )
    (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)v10 + 16LL))(v10);
  if ( v2 )
    (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)v2 + 16LL))(v2);
  return 1;
}
