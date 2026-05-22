/*
 * XREFs of _dynamic_atexit_destructor_for__MPC3DStateHelper::s_isInstanceCreatedEvent__ @ 0x1801D25C0
 * Callers:
 *     <none>
 * Callees:
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x180092B98 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 */

void __fastcall dynamic_atexit_destructor_for__MPC3DStateHelper::s_isInstanceCreatedEvent__(__int64 a1, void *a2)
{
  if ( MPC3DStateHelper::s_isInstanceCreatedEvent )
    wil::details::CloseHandle(MPC3DStateHelper::s_isInstanceCreatedEvent, a2);
}
