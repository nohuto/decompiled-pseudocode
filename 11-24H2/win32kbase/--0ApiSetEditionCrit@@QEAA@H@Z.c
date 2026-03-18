/*
 * XREFs of ??0ApiSetEditionCrit@@QEAA@H@Z @ 0x14005AA28
 * Callers:
 *     rimDeviceResetApc @ 0x14005A7B0 (rimDeviceResetApc.c)
 *     InputUnInitialize @ 0x1400D054C (InputUnInitialize.c)
 *     rimApcIoUnregisterPlugPlayNotificationExWorker @ 0x14014F08C (rimApcIoUnregisterPlugPlayNotificationExWorker.c)
 *     ?OnDelayZonePalmRejectionTimerNotification@CHidInput@@EEAAJXZ @ 0x14020F380 (-OnDelayZonePalmRejectionTimerNotification@CHidInput@@EEAAJXZ.c)
 *     ?ivHandlePTPInertiaPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x140216DA0 (-ivHandlePTPInertiaPacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z.c)
 *     ?ivHandleTouchInputPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x140217080 (-ivHandleTouchInputPacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z.c)
 *     InputInitialize @ 0x140218A5C (InputInitialize.c)
 * Callees:
 *     ApiSetEnterEditionCrit @ 0x1401939A0 (ApiSetEnterEditionCrit.c)
 */

ApiSetEditionCrit *__fastcall ApiSetEditionCrit::ApiSetEditionCrit(ApiSetEditionCrit *this)
{
  *(_DWORD *)this = 1;
  *((_DWORD *)this + 1) = ApiSetEnterEditionCrit();
  return this;
}
