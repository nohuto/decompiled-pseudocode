/*
 * XREFs of wil::details::_dynamic_atexit_destructor_for__g_enabledStateManager__ @ 0x1800F92C0
 * Callers:
 *     <none>
 * Callees:
 *     ?ProcessShutdownInProgress@wil@@YA_NXZ @ 0x180074098 (-ProcessShutdownInProgress@wil@@YA_NXZ.c)
 *     ??1EnabledStateManager@details@wil@@QEAA@XZ @ 0x180099618 (--1EnabledStateManager@details@wil@@QEAA@XZ.c)
 *     ?ProcessShutdown@EnabledStateManager@details@wil@@QEAAXXZ @ 0x18009F3B8 (-ProcessShutdown@EnabledStateManager@details@wil@@QEAAXXZ.c)
 */

void __fastcall wil::details::_dynamic_atexit_destructor_for__g_enabledStateManager__(wil *a1)
{
  if ( wil::ProcessShutdownInProgress(a1) )
    wil::details::EnabledStateManager::ProcessShutdown((RTL_SRWLOCK *)&wil::details::g_enabledStateManager);
  else
    wil::details::EnabledStateManager::~EnabledStateManager((struct _TP_TIMER **)&wil::details::g_enabledStateManager);
}
