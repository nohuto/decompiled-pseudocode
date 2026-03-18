/*
 * XREFs of ??1ApiSetEditionCrit@@QEAA@XZ @ 0x14005AA08
 * Callers:
 *     rimDeviceResetApc @ 0x14005A7B0 (rimDeviceResetApc.c)
 *     InputUnInitialize @ 0x1400D054C (InputUnInitialize.c)
 *     rimApcIoUnregisterPlugPlayNotificationExWorker @ 0x14014F08C (rimApcIoUnregisterPlugPlayNotificationExWorker.c)
 *     ?OnDelayZonePalmRejectionTimerNotification@CHidInput@@EEAAJXZ @ 0x14020F380 (-OnDelayZonePalmRejectionTimerNotification@CHidInput@@EEAAJXZ.c)
 *     ?ivHandlePTPInertiaPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x140216DA0 (-ivHandlePTPInertiaPacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z.c)
 *     ?ivHandleTouchInputPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x140217080 (-ivHandleTouchInputPacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z.c)
 *     InputInitialize @ 0x140218A5C (InputInitialize.c)
 * Callees:
 *     ApiSetLeaveEditionCrit @ 0x140193D20 (ApiSetLeaveEditionCrit.c)
 */

void __fastcall ApiSetEditionCrit::~ApiSetEditionCrit(ApiSetEditionCrit *this)
{
  if ( *(_DWORD *)this )
  {
    if ( !*((_DWORD *)this + 1) )
      ApiSetLeaveEditionCrit();
  }
}
