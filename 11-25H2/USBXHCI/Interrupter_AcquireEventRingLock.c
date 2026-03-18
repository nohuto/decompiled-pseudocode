/*
 * XREFs of Interrupter_AcquireEventRingLock @ 0x140023380
 * Callers:
 *     Interrupter_D0ExitPreInterruptsDisabled @ 0x1400231BC (Interrupter_D0ExitPreInterruptsDisabled.c)
 *     Interrupter_DeferredWorkProcessor @ 0x140025E20 (Interrupter_DeferredWorkProcessor.c)
 *     Interrupter_DeferredWorkProcessorWithVelocityFor48657796Disabled @ 0x140048624 (Interrupter_DeferredWorkProcessorWithVelocityFor48657796Disabled.c)
 *     Interrupter_FlushPendingDpcOrWorkItemPreReset @ 0x14004908C (Interrupter_FlushPendingDpcOrWorkItemPreReset.c)
 *     Interrupter_IoWorkItemRequeueDpc @ 0x1400492B0 (Interrupter_IoWorkItemRequeueDpc.c)
 * Callees:
 *     Controller_LowerAndTrackIrql @ 0x140019630 (Controller_LowerAndTrackIrql.c)
 *     WPP_RECORDER_SF_sds @ 0x14004577C (WPP_RECORDER_SF_sds.c)
 *     _guard_dispatch_icall @ 0x1400596E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall Interrupter_AcquireEventRingLock(__int64 a1)
{
  unsigned __int8 v1; // di
  __int64 v3; // rbx
  int v5; // edx
  int v6; // r8d
  int v7; // r9d

  v1 = 0;
  if ( *(_BYTE *)(a1 + 232) && KeGetCurrentIrql() == 2 )
  {
    Controller_LowerAndTrackIrql(*(_QWORD **)(a1 + 8));
    v1 = 1;
  }
  v3 = *(_QWORD *)(a1 + 224);
  if ( *(_DWORD *)v3 == 1 )
  {
    if ( KeGetCurrentIrql() )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_sds(WPP_GLOBAL_Control->DeviceExtension, v5, v6, v7);
      if ( !KdRefreshDebuggerNotPresent() )
        __debugbreak();
    }
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01033 + 2504))(
      WdfDriverGlobals,
      *(_QWORD *)(v3 + 8),
      0LL);
    return v1;
  }
  else
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01033 + 2528))(
      WdfDriverGlobals,
      *(_QWORD *)(v3 + 8));
    return v1;
  }
}
