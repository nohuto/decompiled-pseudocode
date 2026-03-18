/*
 * XREFs of ?SendHapticFeedbackOutput@InteractiveControlDevice@@QEAAJAEBU_SIMPLEHAPTICCTRL_FEEDBACK_DATA@@@Z @ 0x1402EC544
 * Callers:
 *     ?OnDeviceTimerNotification@InteractiveControlManager@@QEAAJK@Z @ 0x1402DF154 (-OnDeviceTimerNotification@InteractiveControlManager@@QEAAJK@Z.c)
 *     ?SendDeviceHapticsOutput@InteractiveControlManager@@QEAAJKAEBU_SIMPLEHAPTICCTRL_FEEDBACK_DATA@@@Z @ 0x1402DF28C (-SendDeviceHapticsOutput@InteractiveControlManager@@QEAAJKAEBU_SIMPLEHAPTICCTRL_FEEDBACK_DATA@@@.c)
 *     ?PerformInputActions@InteractiveControlDevice@@QEAAXPEAVInteractiveControlInput@@I@Z @ 0x1402EC2D0 (-PerformInputActions@InteractiveControlDevice@@QEAAXPEAVInteractiveControlInput@@I@Z.c)
 * Callees:
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x14012B408 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 *     ?SendHapticFeedbackOutput@SimpleHapticsController@@QEAAJAEBU_SIMPLEHAPTICCTRL_FEEDBACK_DATA@@@Z @ 0x1402EFF68 (-SendHapticFeedbackOutput@SimpleHapticsController@@QEAAJAEBU_SIMPLEHAPTICCTRL_FEEDBACK_DATA@@@Z.c)
 */

__int64 __fastcall InteractiveControlDevice::SendHapticFeedbackOutput(
        InteractiveControlDevice *this,
        const struct _SIMPLEHAPTICCTRL_FEEDBACK_DATA *a2)
{
  unsigned int v4; // ebx
  SimpleHapticsController *v5; // rcx

  v4 = 0;
  if ( *((_DWORD *)InteractiveControlManager::Instance((__int64)this, (__int64)a2) + 25) )
  {
    v5 = (SimpleHapticsController *)*((_QWORD *)this + 48);
    if ( v5 )
      return (unsigned int)SimpleHapticsController::SendHapticFeedbackOutput(v5, a2);
  }
  return v4;
}
