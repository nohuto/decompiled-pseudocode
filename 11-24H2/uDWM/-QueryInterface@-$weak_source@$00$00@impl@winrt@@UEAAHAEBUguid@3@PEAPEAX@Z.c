/*
 * XREFs of ?QueryInterface@?$weak_source@$00$00@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x1800DED50
 * Callers:
 *     <none>
 * Callees:
 *     ??$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@winrt@@YAPEAUITransitionAnimationVisualNative@@PEBU?$producer_convert@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITransitionAnimationVisualNative@@X@impl@0@@Z @ 0x180025608 (--$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions.c)
 *     ??$is_guid_of@UIWeakReferenceSource@impl@winrt@@@winrt@@YA_NAEBUguid@0@@Z @ 0x18009A88C (--$is_guid_of@UIWeakReferenceSource@impl@winrt@@@winrt@@YA_NAEBUguid@0@@Z.c)
 */

__int64 __fastcall winrt::impl::weak_source<1,1>::QueryInterface(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // r8
  __int64 v3; // r9
  __int64 v4; // rcx
  __int64 v6; // rax

  if ( winrt::is_guid_of<winrt::impl::IWeakReferenceSource>(a2) )
  {
    *v2 = v3;
    v4 = v3 + 16;
    if ( !v3 )
      v4 = 24LL;
    _InterlockedIncrement((volatile signed __int32 *)winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>(v4));
    return 0LL;
  }
  else
  {
    v6 = v3 + 8;
    if ( !v3 )
      v6 = 16LL;
    return (***(__int64 (__fastcall ****)(_QWORD))v6)(*(_QWORD *)v6);
  }
}
