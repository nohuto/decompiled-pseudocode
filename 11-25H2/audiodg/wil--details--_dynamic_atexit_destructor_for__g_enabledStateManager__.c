/*
 * XREFs of wil::details::_dynamic_atexit_destructor_for__g_enabledStateManager__ @ 0x140097A80
 * Callers:
 *     <none>
 * Callees:
 *     ??1EnabledStateManager@details@wil@@QEAA@XZ @ 0x14004E34C (--1EnabledStateManager@details@wil@@QEAA@XZ.c)
 *     ?ProcessShutdownInProgress@wil@@YA_NXZ @ 0x1400558F8 (-ProcessShutdownInProgress@wil@@YA_NXZ.c)
 *     ?RecordCachedUsageUnderLock@EnabledStateManager@details@wil@@AEAAXXZ @ 0x140057198 (-RecordCachedUsageUnderLock@EnabledStateManager@details@wil@@AEAAXXZ.c)
 */

void __fastcall wil::details::_dynamic_atexit_destructor_for__g_enabledStateManager__(wil *a1)
{
  __int64 v1; // rdx
  __int64 v2; // r8
  unsigned int v3; // r9d

  if ( wil::ProcessShutdownInProgress(a1) )
  {
    wil::details::g_enabledStateManager = 0;
    wil::details::EnabledStateManager::RecordCachedUsageUnderLock(
      (wil::details::EnabledStateManager *)&wil::details::g_enabledStateManager,
      v1,
      v2,
      v3);
  }
  else
  {
    wil::details::EnabledStateManager::~EnabledStateManager((wil::details **)&wil::details::g_enabledStateManager);
  }
}
