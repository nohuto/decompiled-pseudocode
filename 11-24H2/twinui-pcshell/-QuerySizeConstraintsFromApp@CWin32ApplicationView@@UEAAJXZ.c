/*
 * XREFs of ?QuerySizeConstraintsFromApp@CWin32ApplicationView@@UEAAJXZ @ 0x18002B0A0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x180029D9C (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VNotificationDispatcher@@@WRL@Microsoft@@IEAAKXZ @ 0x18002B164 (-InternalRelease@-$ComPtr@VNotificationDispatcher@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Get@?$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA?AV?$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@XZ @ 0x18002B1E4 (-Get@-$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA-AV-$ComPtr@VCGlobals@Applicatio.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CWin32ApplicationView::QuerySizeConstraintsFromApp(
        __int64 (__fastcall ***this)(ApplicationViewHelpers *, GUID *, __int64 *))
{
  __int64 v2; // rbx
  __int64 v3; // rdi
  struct IApplicationView *v4; // rdx
  __int64 (__fastcall *v5)(__int64, __int64); // rdi
  __int64 WindowForView; // rax
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF
  __int64 v9; // [rsp+40h] [rbp+18h] BYREF

  v2 = 0LL;
  v9 = 0LL;
  GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::Get(&v8);
  if ( v8 )
  {
    v2 = *(_QWORD *)(*(_QWORD *)(v8 + 48) + 624LL);
    v3 = v2;
    if ( v2 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v2 + 8LL))(*(_QWORD *)(*(_QWORD *)(v8 + 48) + 624LL));
    v9 = v2;
  }
  else
  {
    v3 = 0LL;
  }
  Microsoft::WRL::ComPtr<NotificationDispatcher>::InternalRelease(&v8);
  if ( v3 )
  {
    v5 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v2 + 24LL);
    WindowForView = ApplicationViewHelpers::GetWindowForView(this, v4);
    LODWORD(v5) = v5(v2, WindowForView);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    return (unsigned int)v5;
  }
  else
  {
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v9);
    return 2147943568LL;
  }
}
