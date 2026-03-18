/*
 * XREFs of EnterPowerCrit @ 0x1C00A0030
 * Callers:
 *     QueuePowerRequest @ 0x1C00108E0 (QueuePowerRequest.c)
 *     ?xxxUserPowerStateCalloutWorker@@YAJXZ @ 0x1C009E7F8 (-xxxUserPowerStateCalloutWorker@@YAJXZ.c)
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C009F448 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EnterPowerCrit(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax

  v4 = SGDGetUserSessionState(a1, a2, a3, a4);
  return ExEnterCriticalRegionAndAcquireFastMutexUnsafe(*(_QWORD *)(v4 + 696));
}
