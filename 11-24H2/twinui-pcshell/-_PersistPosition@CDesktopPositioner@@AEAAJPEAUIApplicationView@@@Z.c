/*
 * XREFs of ?_PersistPosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x18006C8D8
 * Callers:
 *     ?OnViewClosing@CDesktopPositioner@@UEAAJPEAUIApplicationView@@H@Z @ 0x18006B360 (-OnViewClosing@CDesktopPositioner@@UEAAJPEAUIApplicationView@@H@Z.c)
 *     ?ControlLost@CDesktopPositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAPEAUIUnknown@@@Z @ 0x1805126F0 (-ControlLost@CDesktopPositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAPEAUIUnknown.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180016C0C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CanMaximizeView@ApplicationViewHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x18002962C (-CanMaximizeView@ApplicationViewHelpers@@YA_NPEAUIApplicationView@@@Z.c)
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x180029D9C (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18002AEA8 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?_GetFullPositionSnapshot@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIOcclusionBasedApplicationViewPosition@@@Z @ 0x18006CB44 (-_GetFullPositionSnapshot@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIOcclusionBasedA.c)
 *     ??$_Try_emplace@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@$$V@?$map@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$ComPtr@UIOcclusionBasedApplicationViewPosition@@@23@U?$less@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@std@@V?$allocator@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$ComPtr@UIOcclusionBasedApplicationViewPosition@@@23@@std@@@6@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$ComPtr@UIOcclusionBasedApplicationViewPosition@@@23@@std@@PEAX@std@@_N@1@$$QEAV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@Z @ 0x1802B7C68 (--$_Try_emplace@V-$ComPtr@UIApplicationView@@@WRL@Microsoft@@$$V@-$map@V-$ComPtr@UIApplicationVi.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CDesktopPositioner::_PersistPosition(
        CDesktopPositioner *this,
        __int64 (__fastcall ***a2)(ApplicationViewHelpers *, GUID *, __int64 *))
{
  HWND WindowForView; // rax
  __int64 (__fastcall **v5)(ApplicationViewHelpers *, GUID *, __int64 *); // rax
  int v6; // ebx
  CDesktopPositioner *v7; // rcx
  int FullPositionSnapshot; // eax
  struct IOcclusionBasedApplicationViewPosition *v9; // rsi
  __int64 v10; // rax
  struct IApplicationView *v11; // rdx
  __int64 v12; // rbx
  __int64 (__fastcall ***v13)(ApplicationViewHelpers *, GUID *, __int64 *); // rcx
  __int64 (__fastcall **v14)(ApplicationViewHelpers *, GUID *, __int64 *); // rax
  int v15; // eax
  int v17; // eax
  struct IOcclusionBasedApplicationViewPosition *v18; // rcx
  __int64 (__fastcall ***v19)(ApplicationViewHelpers *, GUID *, __int64 *); // [rsp+30h] [rbp-40h] BYREF
  LPVOID pv; // [rsp+38h] [rbp-38h] BYREF
  __int64 v21; // [rsp+40h] [rbp-30h]
  __int64 v22; // [rsp+48h] [rbp-28h]
  LPVOID v23[4]; // [rsp+50h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]
  struct IOcclusionBasedApplicationViewPosition *v25; // [rsp+B0h] [rbp+40h] BYREF
  struct IOcclusionBasedApplicationViewPosition *v26; // [rsp+B8h] [rbp+48h] BYREF

  WindowForView = (HWND)ApplicationViewHelpers::GetWindowForView(a2, (struct IApplicationView *)a2);
  if ( !WindowForView || IsWindowVisible(WindowForView) )
  {
    v23[0] = 0LL;
    v5 = *a2;
    v23[1] = (LPVOID)-1LL;
    v23[2] = (LPVOID)-1LL;
    v6 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *), LPVOID *))v5[17])(
           a2,
           v23);
    if ( v6 < 0 )
    {
LABEL_14:
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v23);
      return (unsigned int)v6;
    }
    v25 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v25);
    FullPositionSnapshot = CDesktopPositioner::_GetFullPositionSnapshot(v7, (struct IApplicationView *)a2, &v25);
    v6 = FullPositionSnapshot;
    if ( FullPositionSnapshot < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x8D6,
        (int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)(unsigned int)FullPositionSnapshot);
LABEL_13:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v25);
      goto LABEL_14;
    }
    v9 = v25;
    v19 = a2;
    ((void (__fastcall *)(__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *)))(*a2)[1])(a2);
    v10 = std::map<Microsoft::WRL::ComPtr<IApplicationView>,Microsoft::WRL::ComPtr<IOcclusionBasedApplicationViewPosition>>::_Try_emplace<Microsoft::WRL::ComPtr<IApplicationView>,>(
            (char *)this + 384,
            &pv,
            &v19);
    v12 = *(_QWORD *)v10;
    if ( *(struct IOcclusionBasedApplicationViewPosition **)(*(_QWORD *)v10 + 40LL) != v9 )
    {
      v26 = v9;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v26);
      v26 = *(struct IOcclusionBasedApplicationViewPosition **)(v12 + 40);
      *(_QWORD *)(v12 + 40) = v9;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v26);
    }
    v13 = v19;
    if ( v19 )
    {
      v19 = 0LL;
      ((void (__fastcall *)(__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *)))(*v13)[2])(v13);
    }
    if ( ApplicationViewHelpers::CanMaximizeView((ApplicationViewHelpers *)a2, v11) )
    {
      pv = 0LL;
      v14 = *a2;
      v21 = -1LL;
      v22 = -1LL;
      v15 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *), LPVOID *))v14[61])(
              a2,
              &pv);
      v6 = v15;
      if ( v15 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x8E5,
          (int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
          (const char *)(unsigned int)v15);
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&pv);
        goto LABEL_13;
      }
      v17 = (*(__int64 (__fastcall **)(_QWORD, LPVOID, LPVOID, struct IOcclusionBasedApplicationViewPosition *))(**((_QWORD **)this + 34) + 32LL))(
              *((_QWORD *)this + 34),
              v23[0],
              pv,
              v25);
      v6 = v17;
      if ( v17 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x8E6,
          (int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
          (const char *)(unsigned int)v17);
        if ( pv )
        {
          CoTaskMemFree(pv);
          pv = 0LL;
        }
        v21 = 0LL;
        v22 = 0LL;
        v18 = v25;
        if ( v25 )
        {
          v25 = 0LL;
          (*(void (__fastcall **)(struct IOcclusionBasedApplicationViewPosition *))(*(_QWORD *)v18 + 16LL))(v18);
        }
        if ( v23[0] )
          CoTaskMemFree(v23[0]);
        return (unsigned int)v6;
      }
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&pv);
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v25);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v23);
  }
  return 0LL;
}
