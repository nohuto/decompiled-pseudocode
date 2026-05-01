/*
 * XREFs of ?reset@?$unique_storage@U?$resource_policy@PEAUHRGN__@@P6AHPEAX@Z$1?DeleteObject@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHRGN__@@@Z @ 0x1802150E0
 * Callers:
 *     ?ApplyRequestedRect@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@PEBUtagRECT@@@Z @ 0x180080F80 (-ApplyRequestedRect@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@PEBUtagRECT@@@Z.c)
 *     ?ResetWindowRegion@GamingOverlayExperienceManager@@UEAAJXZ @ 0x1803596B0 (-ResetWindowRegion@GamingOverlayExperienceManager@@UEAAJXZ.c)
 *     ?SetCombinedWindowRegion@GamingOverlayExperienceManager@@UEAAJIPEAURect@Foundation@Windows@@@Z @ 0x18035A410 (-SetCombinedWindowRegion@GamingOverlayExperienceManager@@UEAAJIPEAURect@Foundation@Windows@@@Z.c)
 *     _lambda_fcaf91f45d912a8af4ef843f26ff2189_::operator() @ 0x18036C5C4 (_lambda_fcaf91f45d912a8af4ef843f26ff2189_--operator().c)
 *     _lambda_6891a98f73bf2e0622c40a147f1ebd9e_::operator() @ 0x1803737AC (_lambda_6891a98f73bf2e0622c40a147f1ebd9e_--operator().c)
 *     _lambda_532c2163530137281656f24e6f38e4a1_::operator() @ 0x1803B61C8 (_lambda_532c2163530137281656f24e6f38e4a1_--operator().c)
 *     _lambda_ba07cbb8b2fdb4a464ebef50e81f9a3f_::operator() @ 0x1803B6738 (_lambda_ba07cbb8b2fdb4a464ebef50e81f9a3f_--operator().c)
 *     ?SetWindowRegionAsync@ShellExperienceView@Cortana@TwinUI@@AEAAJPEAUHWND__@@PEAUHRGN__@@H@Z @ 0x1803C61F0 (-SetWindowRegionAsync@ShellExperienceView@Cortana@TwinUI@@AEAAJPEAUHWND__@@PEAUHRGN__@@H@Z.c)
 *     ?ApplyCortanaWindowRegion@SearchAppDesktopExperienceView@@AEAAJUtagRECT@@000_N1PEAUHMONITOR__@@@Z @ 0x1803CDD20 (-ApplyCortanaWindowRegion@SearchAppDesktopExperienceView@@AEAAJUtagRECT@@000_N1PEAUHMONITOR__@@@.c)
 *     ?ApplyCortanaWindowRegion@CortanaDesktopExperienceView@@AEAAJUtagRECT@@000_N1PEAUHMONITOR__@@@Z @ 0x1803D7470 (-ApplyCortanaWindowRegion@CortanaDesktopExperienceView@@AEAAJUtagRECT@@000_N1PEAUHMONITOR__@@@Z.c)
 *     ?ApplyCortanaWindowRegionWithCustomRects@CortanaDesktopExperienceView@@AEAAJURect@Foundation@Windows@@@Z @ 0x1803D77E0 (-ApplyCortanaWindowRegionWithCustomRects@CortanaDesktopExperienceView@@AEAAJURect@Foundation@Win.c)
 *     ??4?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHRGN__@@P6AHPEAX@Z$1?DeleteObject@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x18046D350 (--4-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHRGN__@@P6AHPEAX@Z$1-DeleteObject@@YA.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::details::unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,HRGN__ *,0,std::nullptr_t>>::reset(
        void **a1,
        void *a2)
{
  void *v2; // rsi
  DWORD LastError; // ebx

  v2 = *a1;
  if ( *a1 )
  {
    LastError = GetLastError();
    DeleteObject(v2);
    SetLastError(LastError);
  }
  *a1 = a2;
}
