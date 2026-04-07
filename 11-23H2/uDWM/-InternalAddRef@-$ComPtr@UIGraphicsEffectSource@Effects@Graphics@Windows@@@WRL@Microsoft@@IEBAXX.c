/*
 * XREFs of ?InternalAddRef@?$ComPtr@UIGraphicsEffectSource@Effects@Graphics@Windows@@@WRL@Microsoft@@IEBAXXZ @ 0x180021AD4
 * Callers:
 *     ?GetSource@GaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@UEAAJIPEAPEAUIGraphicsEffectSource@2Graphics@Windows@@@Z @ 0x180021BC0 (-GetSource@GaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@UEAAJIPEAPEAUIGraphicsE.c)
 *     ?CreateHostBackdropBrush@UI@WindowsInternal@@YAJPEAUIDCompositionDesktopDevicePartner@@PEAPEAUICompositionBrush@Composition@1Windows@@@Z @ 0x180022E5C (-CreateHostBackdropBrush@UI@WindowsInternal@@YAJPEAUIDCompositionDesktopDevicePartner@@PEAPEAUIC.c)
 *     ?get_Source@GaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@UEAAJPEAPEAUIGraphicsEffectSource@2Graphics@Windows@@@Z @ 0x180110DA0 (-get_Source@GaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@UEAAJPEAPEAUIGraphicsE.c)
 *     ?put_Source@GaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@UEAAJPEAUIGraphicsEffectSource@2Graphics@Windows@@@Z @ 0x180110E70 (-put_Source@GaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@UEAAJPEAUIGraphicsEffe.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<Windows::Graphics::Effects::IGraphicsEffectSource>::InternalAddRef(
        __int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 8LL))(v1);
  return result;
}
