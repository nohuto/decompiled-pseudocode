/*
 * XREFs of wil::details::_dynamic_atexit_destructor_for__g_enabledStateManager__ @ 0x1400971B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1EnabledStateManager@details@wil@@QEAA@XZ @ 0x140050D58 (--1EnabledStateManager@details@wil@@QEAA@XZ.c)
 *     ?ProcessShutdownInProgress@wil@@YA_NXZ @ 0x140055828 (-ProcessShutdownInProgress@wil@@YA_NXZ.c)
 *     ?ProcessShutdown@EnabledStateManager@details@wil@@QEAAXXZ @ 0x14007AF54 (-ProcessShutdown@EnabledStateManager@details@wil@@QEAAXXZ.c)
 */

void __fastcall wil::details::_dynamic_atexit_destructor_for__g_enabledStateManager__(wil *a1)
{
  if ( wil::ProcessShutdownInProgress(a1) )
    wil::details::EnabledStateManager::ProcessShutdown((RTL_SRWLOCK *)&wil::details::g_enabledStateManager);
  else
    wil::details::EnabledStateManager::~EnabledStateManager((wil::details **)&wil::details::g_enabledStateManager);
}
