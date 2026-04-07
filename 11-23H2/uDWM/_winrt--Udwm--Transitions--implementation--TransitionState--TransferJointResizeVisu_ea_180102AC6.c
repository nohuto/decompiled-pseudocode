/*
 * XREFs of _winrt::Udwm::Transitions::implementation::TransitionState::TransferJointResizeVisuals_::_1_::dtor$2 @ 0x180102AC6
 * Callers:
 *     <none>
 * Callees:
 *     ??1IScreenRotationRejuvTransitionHandler@Private@Transitions@Udwm@winrt@@QEAA@XZ @ 0x180065770 (--1IScreenRotationRejuvTransitionHandler@Private@Transitions@Udwm@winrt@@QEAA@XZ.c)
 */

void __fastcall winrt::Udwm::Transitions::implementation::TransitionState::TransferJointResizeVisuals_::_1_::dtor_2(
        __int64 a1,
        __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 48) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 48) &= ~1u;
    winrt::Udwm::Transitions::Private::IScreenRotationRejuvTransitionHandler::~IScreenRotationRejuvTransitionHandler(*(winrt::Udwm::Transitions::Private::IScreenRotationRejuvTransitionHandler **)(a2 + 200));
  }
}
