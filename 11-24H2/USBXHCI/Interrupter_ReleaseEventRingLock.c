/*
 * XREFs of Interrupter_ReleaseEventRingLock @ 0x140022364
 * Callers:
 *     Interrupter_D0ExitPreInterruptsDisabled @ 0x14002227C (Interrupter_D0ExitPreInterruptsDisabled.c)
 *     Interrupter_DeferredWorkProcessor @ 0x140025820 (Interrupter_DeferredWorkProcessor.c)
 *     Interrupter_FlushPendingDpcOrWorkItemPreReset @ 0x140048934 (Interrupter_FlushPendingDpcOrWorkItemPreReset.c)
 *     Interrupter_IoWorkItemRequeueDpc @ 0x140048B60 (Interrupter_IoWorkItemRequeueDpc.c)
 * Callees:
 *     Controller_RaiseAndTrackIrql @ 0x14000DA20 (Controller_RaiseAndTrackIrql.c)
 *     WPP_RECORDER_SF_sds @ 0x140045A8C (WPP_RECORDER_SF_sds.c)
 *     _guard_dispatch_icall @ 0x140058B00 (_guard_dispatch_icall.c)
 */

char __fastcall Interrupter_ReleaseEventRingLock(__int64 a1, char a2)
{
  __int64 v2; // rdi
  char result; // al
  int v6; // edx
  int v7; // r8d
  int v8; // r9d

  v2 = *(_QWORD *)(a1 + 224);
  if ( *(_DWORD *)v2 == 1 )
  {
    if ( KeGetCurrentIrql() )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_sds(WPP_GLOBAL_Control->DeviceExtension, v6, v7, v8);
      if ( !KdRefreshDebuggerNotPresent() )
        __debugbreak();
    }
    result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01033 + 2512))(
               WdfDriverGlobals,
               *(_QWORD *)(v2 + 8));
  }
  else
  {
    result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01033 + 2536))(
               WdfDriverGlobals,
               *(_QWORD *)(v2 + 8));
  }
  if ( a2 )
    return Controller_RaiseAndTrackIrql(*(_QWORD *)(a1 + 8));
  return result;
}
