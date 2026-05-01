/*
 * XREFs of ??1?$com_ptr_t@VCreationThreadDispatcher@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18007B97C
 * Callers:
 *     ??1XamlBaseViewController@@IE$AAA@XZ @ 0x18007B5BC (--1XamlBaseViewController@@IE$AAA@XZ.c)
 *     ??1ImmersiveShellStressTool@@UEAA@XZ @ 0x18007B6B0 (--1ImmersiveShellStressTool@@UEAA@XZ.c)
 *     ??1CDesktopPositioner@@UEAA@XZ @ 0x18007B870 (--1CDesktopPositioner@@UEAA@XZ.c)
 *     ??1ShellPositionerManager@@UEAA@XZ @ 0x18021EA34 (--1ShellPositionerManager@@UEAA@XZ.c)
 *     ??1GamingPosturePositioner@@UEAA@XZ @ 0x1804F8ED8 (--1GamingPosturePositioner@@UEAA@XZ.c)
 *     _lambda_c876813055a0f8eb90a291ca9ab0fec3_::__lambda_c876813055a0f8eb90a291ca9ab0fec3_ @ 0x18055C99C (_lambda_c876813055a0f8eb90a291ca9ab0fec3_--__lambda_c876813055a0f8eb90a291ca9ab0fec3_.c)
 *     ?MakeBackgroundThumbnailFromWallpaperPathAsync@VirtualDesktopGestureWindow@@IEAAJPEAUIDCompThumbnail@@UtagRECT@@V?$shared_any_t@V?$shared_storage@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHSTRING__@@P6AJPEAU1@@Z$1?WindowsDeleteString@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@details@wil@@@wil@@I0@Z @ 0x180561A54 (-MakeBackgroundThumbnailFromWallpaperPathAsync@VirtualDesktopGestureWindow@@IEAAJPEAUIDCompThumb.c)
 *     ??1TabProxyWindowFactory@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x18057FFEC (--1TabProxyWindowFactory@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ.c)
 *     ??1ImmersiveShellThreadDispatcher@implementation@SnapComponent@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x18059D0E0 (--1ImmersiveShellThreadDispatcher@implementation@SnapComponent@Shell@Internal@Windows@winrt@@UEA.c)
 *     _CDesktopPositioner::CDesktopPositioner_::_1_::dtor$19 @ 0x1806CEFEF (_CDesktopPositioner--CDesktopPositioner_--_1_--dtor$19.c)
 *     _XamlBaseViewController::XamlBaseViewController_::_1_::dtor$5 @ 0x1806D3F76 (_XamlBaseViewController--XamlBaseViewController_--_1_--dtor$5.c)
 *     _GamingPosturePositioner::GamingPosturePositioner_::_1_::dtor$20 @ 0x1806F0E73 (_GamingPosturePositioner--GamingPosturePositioner_--_1_--dtor$20.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UICreationThreadDispatcher@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180099500 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UICreationThreadD.c)
 */

__int64 __fastcall wil::com_ptr_t<CreationThreadDispatcher,wil::err_exception_policy>::~com_ptr_t<CreationThreadDispatcher,wil::err_exception_policy>(
        _QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ICreationThreadDispatcher,Microsoft::WRL::FtmBase>::Release();
  return result;
}
