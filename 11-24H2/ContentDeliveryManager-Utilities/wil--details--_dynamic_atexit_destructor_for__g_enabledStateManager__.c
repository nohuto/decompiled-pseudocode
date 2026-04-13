/*
 * XREFs of wil::details::_dynamic_atexit_destructor_for__g_enabledStateManager__ @ 0x1800BD070
 * Callers:
 *     <none>
 * Callees:
 *     ??1EnabledStateManager@details@wil@@QEAA@XZ @ 0x18002A654 (--1EnabledStateManager@details@wil@@QEAA@XZ.c)
 *     ?ProcessShutdown@EnabledStateManager@details@wil@@QEAAXXZ @ 0x180035D18 (-ProcessShutdown@EnabledStateManager@details@wil@@QEAAXXZ.c)
 *     ?ProcessShutdownInProgress@wil@@YA_NXZ @ 0x180035DD8 (-ProcessShutdownInProgress@wil@@YA_NXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall wil::details::_dynamic_atexit_destructor_for__g_enabledStateManager__(wil *a1)
{
  if ( wil::ProcessShutdownInProgress(a1) )
    wil::details::EnabledStateManager::ProcessShutdown((RTL_SRWLOCK *)&wil::details::g_enabledStateManager);
  else
    wil::details::EnabledStateManager::~EnabledStateManager((struct _TP_TIMER **)&wil::details::g_enabledStateManager);
}
