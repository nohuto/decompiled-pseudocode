/*
 * XREFs of ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18001FCEC
 * Callers:
 *     ??$UsePropertyFactory@V_lambda_f0b0058c35c91142d2603957657c1ded_@@@?$EffectBase@UIGaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@@Effects@Composition@UI@Internal@Microsoft@@KAJAEBV_lambda_f0b0058c35c91142d2603957657c1ded_@@@Z @ 0x1800204FC (--$UsePropertyFactory@V_lambda_f0b0058c35c91142d2603957657c1ded_@@@-$EffectBase@UIGaussianBlurEf.c)
 *     ?Initialize@CDisplayBroker@@QEAAJXZ @ 0x180022DB8 (-Initialize@CDisplayBroker@@QEAAJXZ.c)
 *     ?CreateHostBackdropBrush@UI@WindowsInternal@@YAJPEAUIDCompositionDesktopDevicePartner@@PEAPEAUICompositionBrush@Composition@1Windows@@@Z @ 0x180022E5C (-CreateHostBackdropBrush@UI@WindowsInternal@@YAJPEAUIDCompositionDesktopDevicePartner@@PEAPEAUIC.c)
 *     ?Initialize@CCompositor@@IEAAJXZ @ 0x180027E08 (-Initialize@CCompositor@@IEAAJXZ.c)
 *     ?CreateExpressionAnimationFromHoverPointerSource@CGlobalLightSet@@AEBAJPEAUIHoverPointerSourcePartner@Composition@UI@Windows@@W4LightType@45@PEAPEAUIExpressionAnimation@345@@Z @ 0x18002CE1C (-CreateExpressionAnimationFromHoverPointerSource@CGlobalLightSet@@AEBAJPEAUIHoverPointerSourcePa.c)
 *     ?EnsureAcrylicBrushForAccent@CAccentAcrylicBlurBehind@@AEAAJKPEBN@Z @ 0x18009EC18 (-EnsureAcrylicBrushForAccent@CAccentAcrylicBlurBehind@@AEAAJKPEBN@Z.c)
 *     ?GetLuminosityOpacityReference@CAccentAcrylicBlurBehind@@AEAAJNPEAPEAU?$IReference@N@Foundation@Windows@@@Z @ 0x1800A02B0 (-GetLuminosityOpacityReference@CAccentAcrylicBlurBehind@@AEAAJNPEAPEAU-$IReference@N@Foundation@.c)
 *     ?ValidateGraphicsDevice@CAccentAcrylicBlurBehind@@AEAAJXZ @ 0x1800A1078 (-ValidateGraphicsDevice@CAccentAcrylicBlurBehind@@AEAAJXZ.c)
 *     ?InitializeDisplayManager@CAnalogCompositorManager@@AEAAXXZ @ 0x1800A4E00 (-InitializeDisplayManager@CAnalogCompositorManager@@AEAAXXZ.c)
 *     ?OnHolographicDisplayCalibrationDriverDetected@CAnalogCompositorManager@@AEAAXXZ @ 0x1800A5500 (-OnHolographicDisplayCalibrationDriverDetected@CAnalogCompositorManager@@AEAAXXZ.c)
 *     ?AttachExpressionAnimationToRevealSpotLight@CGlobalLightSet@@AEBAJPEAUISpotLight@Composition@UI@Windows@@PEAUIExpressionAnimation@345@@Z @ 0x1800C0EA8 (-AttachExpressionAnimationToRevealSpotLight@CGlobalLightSet@@AEBAJPEAUISpotLight@Composition@UI@.c)
 *     ?StopExpressionAnimationHelper@CGlobalLightSet@@AEAAJW4LightType@UI@Windows@@@Z @ 0x1800C137C (-StopExpressionAnimationHelper@CGlobalLightSet@@AEAAJW4LightType@UI@Windows@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::WRL::Wrappers::HStringReference::CreateReference(
        HSTRING_HEADER *hstringHeader,
        PCWSTR sourceString,
        UINT32 a3,
        UINT32 a4)
{
  UINT32 v4; // eax
  HRESULT StringReference; // eax

  v4 = a4;
  if ( a4 >= a3 )
    v4 = a3 - 1;
  StringReference = WindowsCreateStringReference(sourceString, v4, hstringHeader, (HSTRING *)&hstringHeader[1]);
  if ( StringReference < 0 )
  {
    RaiseException(StringReference, 1u, 0, 0LL);
    __debugbreak();
    JUMPOUT(0x180075CA7LL);
  }
}
