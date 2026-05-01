/*
 * XREFs of ?GetHwnd@SearchAppDesktopExperienceView@@AEAAPEAUHWND__@@XZ @ 0x1803CF944
 * Callers:
 *     ?CreateSearchAltTabProxyWindow@SearchAppDesktopExperienceView@@AEAAXXZ @ 0x1803CEEB4 (-CreateSearchAltTabProxyWindow@SearchAppDesktopExperienceView@@AEAAXXZ.c)
 *     ?ShowBorder@SearchAppDesktopExperienceView@@AEAAJPEAUtagRECT@@@Z @ 0x1803D3104 (-ShowBorder@SearchAppDesktopExperienceView@@AEAAJPEAUtagRECT@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18003ED20 (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     ?GetViewWrapper@SearchAppDesktopExperienceView@@AEAA?AV?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@XZ @ 0x1803D00F8 (-GetViewWrapper@SearchAppDesktopExperienceView@@AEAA-AV-$ComPtr@UIViewWrapper@ViewManagerInterop.c)
 */

__int64 __fastcall SearchAppDesktopExperienceView::GetHwnd(SearchAppDesktopExperienceView *this)
{
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v1; // rdx
  __int64 v2; // rbx
  ExperienceManagerUtils *v4; // [rsp+38h] [rbp+10h] BYREF

  SearchAppDesktopExperienceView::GetViewWrapper(this, &v4);
  if ( v4 )
    v2 = ExperienceManagerUtils::WindowFromViewWrapper(v4, v1);
  else
    v2 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v4);
  return v2;
}
