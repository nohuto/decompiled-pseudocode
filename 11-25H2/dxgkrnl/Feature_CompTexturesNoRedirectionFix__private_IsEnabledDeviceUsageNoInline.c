/*
 * XREFs of Feature_CompTexturesNoRedirectionFix__private_IsEnabledDeviceUsageNoInline @ 0x140097BC0
 * Callers:
 *     ?Discard@CFlipManagerToken@@UEAAXXZ @ 0x14005E100 (-Discard@CFlipManagerToken@@UEAAXXZ.c)
 *     ?ConsumerDwmProcessUpdateTokens@CFlipManager@@QEAAJPEAVCFlipPresentUpdate@@PEAVCFlipManagerToken@@PEAU_LIST_ENTRY@@@Z @ 0x14005EE88 (-ConsumerDwmProcessUpdateTokens@CFlipManager@@QEAAJPEAVCFlipPresentUpdate@@PEAVCFlipManagerToken.c)
 *     ?ConsumerImmediateTokenCompleted@CFlipManager@@QEAAXPEAVCFlipManagerToken@@PEAPEAVCToken@@PEAPEAVCFlipManagerSignal@@@Z @ 0x14009C6F8 (-ConsumerImmediateTokenCompleted@CFlipManager@@QEAAXPEAVCFlipManagerToken@@PEAPEAVCToken@@PEAPEA.c)
 * Callees:
 *     Feature_CompTexturesNoRedirectionFix__private_IsEnabledFallback @ 0x140097BF8 (Feature_CompTexturesNoRedirectionFix__private_IsEnabledFallback.c)
 */

__int64 Feature_CompTexturesNoRedirectionFix__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_CompTexturesNoRedirectionFix__private_featureState & 0x10) != 0 )
    return Feature_CompTexturesNoRedirectionFix__private_featureState & 1;
  else
    return Feature_CompTexturesNoRedirectionFix__private_IsEnabledFallback(
             (unsigned int)Feature_CompTexturesNoRedirectionFix__private_featureState,
             3LL);
}
