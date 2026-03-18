/*
 * XREFs of ??1ReEnterLeaveCrit@@QEAA@XZ @ 0x1400E486C
 * Callers:
 *     ?RegisterDispatcherObject@CBaseInput@@QEAAJPEAVIRegisterInputDispatcherObjects@@@Z @ 0x1400E46B0 (-RegisterDispatcherObject@CBaseInput@@QEAAJPEAVIRegisterInputDispatcherObjects@@@Z.c)
 *     ?UserSessionSwitchBlock_End@@YAXXZ @ 0x1400E47A0 (-UserSessionSwitchBlock_End@@YAXXZ.c)
 *     ResetAccessibilityCountersOnMouseInput @ 0x1400EC220 (ResetAccessibilityCountersOnMouseInput.c)
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140023070 (UserSessionSwitchLeaveCritWithNonPaged.c)
 */

void __fastcall ReEnterLeaveCrit::~ReEnterLeaveCrit(ReEnterLeaveCrit *this)
{
  if ( !*(_BYTE *)this )
    UserSessionSwitchLeaveCritWithNonPaged();
}
