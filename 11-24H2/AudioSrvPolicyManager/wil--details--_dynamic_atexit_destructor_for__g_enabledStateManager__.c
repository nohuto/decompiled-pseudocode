/*
 * XREFs of wil::details::_dynamic_atexit_destructor_for__g_enabledStateManager__ @ 0x18004BAA0
 * Callers:
 *     <none>
 * Callees:
 *     ?ProcessShutdownInProgress@wil@@YA_NXZ @ 0x18001E728 (-ProcessShutdownInProgress@wil@@YA_NXZ.c)
 *     ??1EnabledStateManager@details@wil@@QEAA@XZ @ 0x18001F8B8 (--1EnabledStateManager@details@wil@@QEAA@XZ.c)
 *     ?ProcessShutdown@EnabledStateManager@details@wil@@QEAAXXZ @ 0x180024734 (-ProcessShutdown@EnabledStateManager@details@wil@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall wil::details::_dynamic_atexit_destructor_for__g_enabledStateManager__(wil *a1)
{
  if ( wil::ProcessShutdownInProgress(a1) )
    wil::details::EnabledStateManager::ProcessShutdown((RTL_SRWLOCK *)&wil::details::g_enabledStateManager);
  else
    wil::details::EnabledStateManager::~EnabledStateManager((struct _TP_TIMER **)&wil::details::g_enabledStateManager);
}
