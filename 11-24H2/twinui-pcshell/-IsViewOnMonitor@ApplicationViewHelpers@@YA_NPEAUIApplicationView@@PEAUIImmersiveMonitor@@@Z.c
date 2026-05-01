/*
 * XREFs of ?IsViewOnMonitor@ApplicationViewHelpers@@YA_NPEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z @ 0x180044BF0
 * Callers:
 *     ?GetViewsForPositioner@ShellPositionerManager@@UEAAJW4SHELL_POSITIONER_TYPE@@PEAUIImmersiveMonitor@@PEAPEAUIObjectArray@@@Z @ 0x18009CF90 (-GetViewsForPositioner@ShellPositionerManager@@UEAAJW4SHELL_POSITIONER_TYPE@@PEAUIImmersiveMonit.c)
 *     ?FullScreenViewGetsFocus@FullScreenPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1803245A0 (-FullScreenViewGetsFocus@FullScreenPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?GetOnscreenViewsForMonitor@CShellSnapComponent@@UEAAJPEAUIImmersiveMonitor@@PEAUIObjectArray@@PEAPEAU3@@Z @ 0x18059EAD0 (-GetOnscreenViewsForMonitor@CShellSnapComponent@@UEAAJPEAUIImmersiveMonitor@@PEAUIObjectArray@@P.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall ApplicationViewHelpers::IsViewOnMonitor(
        ApplicationViewHelpers *this,
        struct IApplicationView *a2,
        struct IImmersiveMonitor *a3)
{
  __int64 v3; // rax
  bool v5; // si
  int (__fastcall *v7)(ApplicationViewHelpers *, __int64 *); // rbx
  int v8; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v11; // [rsp+40h] [rbp+8h] BYREF
  __int64 v12; // [rsp+50h] [rbp+18h] BYREF

  v3 = *(_QWORD *)this;
  v5 = 0;
  v12 = 0LL;
  v11 = 0;
  v7 = *(int (__fastcall **)(ApplicationViewHelpers *, __int64 *))(v3 + 80);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v12);
  if ( v7(this, &v12) >= 0 )
  {
    v8 = (*(__int64 (__fastcall **)(struct IApplicationView *, __int64, int *))(*(_QWORD *)a2 + 96LL))(a2, v12, &v11);
    if ( v8 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xB6,
        (int)"shell\\twinui\\applicationviewhelper\\applicationviewhelpers.cpp",
        (const char *)(unsigned int)v8);
    else
      v5 = v11 != 0;
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v12);
  return v5;
}
