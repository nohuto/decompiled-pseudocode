/*
 * XREFs of PopExecuteProcessorCallback @ 0x140370490
 * Callers:
 *     <none>
 * Callees:
 *     PopGetIdleTimesCallback @ 0x14036F8B0 (PopGetIdleTimesCallback.c)
 *     PopQueueTargetDpc @ 0x1403702F0 (PopQueueTargetDpc.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

BOOLEAN __fastcall PopExecuteProcessorCallback(PRKDPC Dpc, __int64 a2)
{
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v5; // r8
  __int64 v6; // rdx
  int IdleTimesCallback; // eax

  CurrentPrcb = KeGetCurrentPrcb();
  v5 = *(_QWORD *)(a2 + 16);
  v6 = *(_QWORD *)(a2 + 8);
  if ( *(__int64 (__fastcall **)(struct _KPRCB *, __int64, __int64))a2 == PopGetIdleTimesCallback )
    IdleTimesCallback = PopGetIdleTimesCallback(CurrentPrcb, v6, v5);
  else
    IdleTimesCallback = guard_dispatch_icall_no_overrides(CurrentPrcb, v6);
  if ( IdleTimesCallback < 0 )
    *(_DWORD *)(a2 + 40) = IdleTimesCallback;
  return PopQueueTargetDpc(Dpc, a2);
}
