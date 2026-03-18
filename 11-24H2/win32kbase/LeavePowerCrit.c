/*
 * XREFs of LeavePowerCrit @ 0x1400E9BB0
 * Callers:
 *     SetPendingInput @ 0x1400E95C0 (SetPendingInput.c)
 *     QueuePowerRequest @ 0x1400E98F0 (QueuePowerRequest.c)
 *     ?UnqueuePowerRequest@@YAPEAUtagPOWERREQUEST@@XZ @ 0x1400E9AF0 (-UnqueuePowerRequest@@YAPEAUtagPOWERREQUEST@@XZ.c)
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1400E9C80 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 *     ?xxxUserPowerStateCalloutWorker@@YAJXZ @ 0x1400EAC08 (-xxxUserPowerStateCalloutWorker@@YAJXZ.c)
 *     UserPowerStateCallout @ 0x1401B0310 (UserPowerStateCallout.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall LeavePowerCrit(__int64 a1)
{
  __int64 UserSessionState; // rax

  UserSessionState = W32GetUserSessionState(a1);
  return ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(*(_QWORD *)(UserSessionState + 512));
}
