/*
 * XREFs of ?QueryInterface@marshaler@?1??make_marshaler@impl@winrt@@YAHPEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@34@PEAPEAX@Z@UEAAHAEBUguid@4@1@Z @ 0x1800DEDB0
 * Callers:
 *     <none>
 * Callees:
 *     ??$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@winrt@@YAPEAUITransitionAnimationVisualNative@@PEBU?$producer_convert@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITransitionAnimationVisualNative@@X@impl@0@@Z @ 0x180025608 (--$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions.c)
 *     ??$is_guid_of@UIMarshal@impl@winrt@@@winrt@@YA_NAEBUguid@0@@Z @ 0x1800994D4 (--$is_guid_of@UIMarshal@impl@winrt@@@winrt@@YA_NAEBUguid@0@@Z.c)
 */

__int64 __fastcall `winrt::impl::make_marshaler'::`2'::marshaler::QueryInterface(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // r8
  __int64 v3; // r9

  if ( !winrt::is_guid_of<winrt::impl::IMarshal>(a2) )
    return (***(__int64 (__fastcall ****)(_QWORD))(v3 + 8))(*(_QWORD *)(v3 + 8));
  *v2 = v3;
  _InterlockedIncrement((volatile signed __int32 *)winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>(v3 + 24));
  return 0LL;
}
