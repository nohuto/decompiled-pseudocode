/*
 * XREFs of ??$GetActivationFactory@UIDisplayManagerStatics@Core@Display@Devices@Windows@@@Foundation@Windows@@YAJPEAUHSTRING__@@PEAPEAUIDisplayManagerStatics@Core@Display@Devices@1@@Z @ 0x180070014
 * Callers:
 *     ?Initialize@CDDisplayManager@@AEAAJXZ @ 0x18006FEA8 (-Initialize@CDDisplayManager@@AEAAJXZ.c)
 *     ?InitializeDisplayManager@CAnalogCompositorManager@@AEAAXXZ @ 0x1800A345C (-InitializeDisplayManager@CAnalogCompositorManager@@AEAAXXZ.c)
 * Callees:
 *     ??$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@winrt@@YAPEAUITransitionAnimationVisualNative@@PEBU?$producer_convert@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITransitionAnimationVisualNative@@X@impl@0@@Z @ 0x180025608 (--$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions.c)
 */

__int64 __fastcall Windows::Foundation::GetActivationFactory<Windows::Devices::Display::Core::IDisplayManagerStatics>(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // r9

  v2 = winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>(a2);
  return RoGetActivationFactory(v3, &GUID_2b6b9446_b999_5535_9d69_53f092c780a1, v2);
}
