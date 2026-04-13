/*
 * XREFs of _Init_thread_abort @ 0x180023D6C
 * Callers:
 *     _CreativeFramework::Actions::GetEntitlementForRecord_::_1_::dtor$11 @ 0x1800BB49B (_CreativeFramework--Actions--GetEntitlementForRecord_--_1_--dtor$11.c)
 * Callees:
 *     <none>
 */

void __fastcall Init_thread_abort(_DWORD *a1)
{
  AcquireSRWLockExclusive(&SRWLock);
  *a1 = 0;
  ReleaseSRWLockExclusive(&SRWLock);
  WakeAllConditionVariable(&ConditionVariable);
}
