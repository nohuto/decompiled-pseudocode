/*
 * XREFs of LeaveMitRitHazardCrit @ 0x140162B70
 * Callers:
 *     <none>
 * Callees:
 *     Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline @ 0x1401A3C28 (Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline.c)
 */

void LeaveMitRitHazardCrit()
{
  __int64 CurrentThreadWin32Thread; // rbx
  __int64 v1; // rcx
  __int64 UserSessionState; // rax

  if ( !(unsigned int)Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline() )
  {
    CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread();
    UserSessionState = W32GetUserSessionState(v1);
    ExReleaseFastResource(*(_QWORD *)(UserSessionState + 16), CurrentThreadWin32Thread + 176);
    KeLeaveCriticalRegion();
  }
}
