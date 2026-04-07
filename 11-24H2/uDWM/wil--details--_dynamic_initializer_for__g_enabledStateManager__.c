/*
 * XREFs of wil::details::_dynamic_initializer_for__g_enabledStateManager__ @ 0x180002880
 * Callers:
 *     <none>
 * Callees:
 *     ??0EnabledStateManager@details@wil@@QEAA@XZ @ 0x18008CCE0 (--0EnabledStateManager@details@wil@@QEAA@XZ.c)
 */

int wil::details::_dynamic_initializer_for__g_enabledStateManager__()
{
  wil::details::EnabledStateManager::EnabledStateManager((wil::details::EnabledStateManager *)&wil::details::g_enabledStateManager);
  return atexit((void (__cdecl *)())wil::details::_dynamic_atexit_destructor_for__g_enabledStateManager__);
}
