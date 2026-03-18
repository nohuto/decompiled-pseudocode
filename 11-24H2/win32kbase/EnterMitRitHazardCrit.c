/*
 * XREFs of EnterMitRitHazardCrit @ 0x1401627D0
 * Callers:
 *     <none>
 * Callees:
 *     Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline @ 0x1401A3C28 (Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 EnterMitRitHazardCrit()
{
  __int64 result; // rax
  __int64 CurrentThreadWin32Thread; // rbx
  __int64 v2; // rcx
  __int64 UserSessionState; // rax
  __int64 v4; // r8

  result = Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline();
  if ( !(_DWORD)result )
  {
    KeEnterCriticalRegion();
    CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread();
    UserSessionState = W32GetUserSessionState(v2);
    LOBYTE(v4) = 1;
    return ExAcquireFastResourceExclusive(*(_QWORD *)(UserSessionState + 16), CurrentThreadWin32Thread + 176, v4);
  }
  return result;
}
