/*
 * XREFs of ??0AtomicExecutionCheck@@QEAA@XZ @ 0x140060DA0
 * Callers:
 *     ?ExecuteMoveMouseWindowManagement@CMouseProcessor@@QEAAXXZ @ 0x14005025C (-ExecuteMoveMouseWindowManagement@CMouseProcessor@@QEAAXXZ.c)
 *     DestroyThreadsObjects @ 0x14005FF70 (DestroyThreadsObjects.c)
 *     HandleInputDestDestruction @ 0x140060EC8 (HandleInputDestDestruction.c)
 *     ?ResetSystemColors@@YAXXZ @ 0x1400A0E38 (-ResetSystemColors@@YAXXZ.c)
 *     xxxResetDisplayDevice @ 0x1400A2770 (xxxResetDisplayDevice.c)
 *     ?SetDPIinSetup@@YAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14015A320 (-SetDPIinSetup@@YAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     xxxCreateThreadInfo @ 0x14015DFD8 (xxxCreateThreadInfo.c)
 *     xxxDestroyThreadInfo @ 0x14015F444 (xxxDestroyThreadInfo.c)
 *     NtUserSetAdditionalForegroundBoostProcesses @ 0x1401709B0 (NtUserSetAdditionalForegroundBoostProcesses.c)
 *     PostEvent @ 0x1402130E8 (PostEvent.c)
 *     PostThreadEvent @ 0x140213208 (PostThreadEvent.c)
 * Callees:
 *     ?Arm@AtomicExecutionCheck@@QEAAXXZ @ 0x1401A2C38 (-Arm@AtomicExecutionCheck@@QEAAXXZ.c)
 */

AtomicExecutionCheck *__fastcall AtomicExecutionCheck::AtomicExecutionCheck(AtomicExecutionCheck *this)
{
  *((_QWORD *)this + 1) = 0LL;
  *(_BYTE *)this = 0;
  AtomicExecutionCheck::Arm(this);
  return this;
}
