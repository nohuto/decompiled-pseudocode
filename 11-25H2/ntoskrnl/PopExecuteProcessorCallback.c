/*
 * XREFs of PopExecuteProcessorCallback @ 0x1403B2590
 * Callers:
 *     <none>
 * Callees:
 *     PopGetIdleTimesCallback @ 0x1403B2950 (PopGetIdleTimesCallback.c)
 *     PopQueueTargetDpc @ 0x1403B2FA4 (PopQueueTargetDpc.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PopExecuteProcessorCallback(PRKDPC Dpc, __int64 a2)
{
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v5; // r8
  __int64 v6; // rdx
  int IdleTimesCallback; // eax

  CurrentPrcb = KeGetCurrentPrcb();
  v5 = *(_QWORD *)(a2 + 16);
  v6 = *(_QWORD *)(a2 + 8);
  if ( *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))a2 == PopGetIdleTimesCallback )
    IdleTimesCallback = PopGetIdleTimesCallback(CurrentPrcb, v6, v5);
  else
    IdleTimesCallback = guard_dispatch_icall_no_overrides(CurrentPrcb, v6);
  if ( IdleTimesCallback < 0 )
    *(_DWORD *)(a2 + 40) = IdleTimesCallback;
  return PopQueueTargetDpc(Dpc);
}
