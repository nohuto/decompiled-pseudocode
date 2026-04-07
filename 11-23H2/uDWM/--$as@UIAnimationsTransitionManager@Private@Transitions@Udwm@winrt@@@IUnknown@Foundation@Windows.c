/*
 * XREFs of ??$as@UIAnimationsTransitionManager@Private@Transitions@Udwm@winrt@@@IUnknown@Foundation@Windows@winrt@@QEBA?A_PXZ @ 0x1800E6ED0
 * Callers:
 *     ?MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18003BAF0 (-MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ??$as@UIAnimationsTransitionManager@Private@Transitions@Udwm@winrt@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@5@$0A@@impl@winrt@@YA?AUIAnimationsTransitionManager@Private@Transitions@Udwm@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@@Z @ 0x1800E6EF4 (--$as@UIAnimationsTransitionManager@Private@Transitions@Udwm@winrt@@Utype@-$abi@UIUnknown@Founda.c)
 */

__int64 __fastcall winrt::Windows::Foundation::IUnknown::as<winrt::Udwm::Transitions::Private::IAnimationsTransitionManager>(
        _QWORD *a1,
        __int64 a2)
{
  winrt::impl::as<winrt::Udwm::Transitions::Private::IAnimationsTransitionManager,winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type,0>(
    a2,
    *a1);
  return a2;
}
