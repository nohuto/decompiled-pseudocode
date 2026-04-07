/*
 * XREFs of ??$as@UIWindowStateTransitionManager@Private@Transitions@Udwm@winrt@@@IUnknown@Foundation@Windows@winrt@@QEBA?A_PXZ @ 0x180108570
 * Callers:
 *     ?MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18003BAF0 (-MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ??$as@UIWindowStateTransitionManager@Private@Transitions@Udwm@winrt@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@5@$0A@@impl@winrt@@YA?AUIWindowStateTransitionManager@Private@Transitions@Udwm@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@@Z @ 0x180108594 (--$as@UIWindowStateTransitionManager@Private@Transitions@Udwm@winrt@@Utype@-$abi@UIUnknown@Found.c)
 */

__int64 __fastcall winrt::Windows::Foundation::IUnknown::as<winrt::Udwm::Transitions::Private::IWindowStateTransitionManager>(
        _QWORD *a1,
        __int64 a2)
{
  winrt::impl::as<winrt::Udwm::Transitions::Private::IWindowStateTransitionManager,winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type,0>(
    a2,
    *a1);
  return a2;
}
