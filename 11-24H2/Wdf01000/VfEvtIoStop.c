/*
 * XREFs of VfEvtIoStop @ 0x1400E3880
 * Callers:
 *     <none>
 * Callees:
 *     ?PerfEvtIoStopStart@@YAEPEAUWDFQUEUE__@@PEAU_GUID@@@Z @ 0x14008FAB4 (-PerfEvtIoStopStart@@YAEPEAUWDFQUEUE__@@PEAU_GUID@@@Z.c)
 *     ?PerfEvtIoStopStop@@YAXPEAUWDFQUEUE__@@PEAU_GUID@@@Z @ 0x14008FB94 (-PerfEvtIoStopStop@@YAXPEAUWDFQUEUE__@@PEAU_GUID@@@Z.c)
 *     VerifyCriticalRegionEntry @ 0x14008FCA0 (VerifyCriticalRegionEntry.c)
 *     VerifyCriticalRegionExit @ 0x14008FCD4 (VerifyCriticalRegionExit.c)
 *     VerifyIrqlExit @ 0x14008FD3C (VerifyIrqlExit.c)
 *     __security_check_cookie @ 0x1400AC710 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 *     VfWdfObjectGetTypedContext @ 0x1400E22D0 (VfWdfObjectGetTypedContext.c)
 */

void __fastcall VfEvtIoStop(WDFQUEUE__ *Queue, WDFREQUEST__ *Request, unsigned int ActionFlags)
{
  char *TypedContext; // r14
  void (__fastcall *v7)(WDFQUEUE__ *, WDFREQUEST__ *, _QWORD); // rsi
  KIRQL CurrentIrql; // bl
  unsigned __int8 critRegion[8]; // [rsp+20h] [rbp-48h] BYREF
  _GUID activityId; // [rsp+28h] [rbp-40h] BYREF

  TypedContext = VfWdfObjectGetTypedContext((unsigned __int64)Queue, &WDF_VF_WDFIOQUEUECREATE_CONTEXT_TYPE_INFO);
  v7 = (void (__fastcall *)(WDFQUEUE__ *, WDFREQUEST__ *, _QWORD))*((_QWORD *)TypedContext + 8);
  if ( v7 )
  {
    activityId = 0LL;
    if ( PerfEvtIoStopStart((unsigned __int64)Queue, &activityId) )
    {
      v7(Queue, Request, ActionFlags);
      PerfEvtIoStopStop((unsigned __int64)Queue, &activityId);
    }
    else
    {
      critRegion[0] = 0;
      CurrentIrql = KeGetCurrentIrql();
      VerifyCriticalRegionEntry(critRegion);
      v7(Queue, Request, ActionFlags);
      VerifyIrqlExit(*(_WDF_DRIVER_GLOBALS **)TypedContext, CurrentIrql);
      VerifyCriticalRegionExit(*(_WDF_DRIVER_GLOBALS **)TypedContext, critRegion[0], (ULONG_PTR)v7);
    }
  }
}
