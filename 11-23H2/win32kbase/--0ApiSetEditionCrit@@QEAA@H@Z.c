/*
 * XREFs of ??0ApiSetEditionCrit@@QEAA@H@Z @ 0x1C00766E0
 * Callers:
 *     rimApcIoUnregisterPlugPlayNotificationExWorker @ 0x1C00765F4 (rimApcIoUnregisterPlugPlayNotificationExWorker.c)
 *     InputInitialize @ 0x1C00814D4 (InputInitialize.c)
 *     InputUnInitialize @ 0x1C00B72FC (InputUnInitialize.c)
 *     rimDeviceResetApc @ 0x1C01B4D40 (rimDeviceResetApc.c)
 *     ?OnDelayZonePalmRejectionTimerNotification@CHidInput@@EEAAJXZ @ 0x1C01E2640 (-OnDelayZonePalmRejectionTimerNotification@CHidInput@@EEAAJXZ.c)
 *     ?ivHandlePTPInertiaPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C01EDE00 (-ivHandlePTPInertiaPacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z.c)
 *     ?ivHandleTouchInputPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C01EE100 (-ivHandleTouchInputPacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 */

ApiSetEditionCrit *__fastcall ApiSetEditionCrit::ApiSetEditionCrit(ApiSetEditionCrit *this, int a2)
{
  int v2; // ebx

  v2 = 0;
  *(_DWORD *)this = a2;
  if ( a2 )
  {
    if ( qword_1C0296208 && (int)qword_1C0296208() >= 0 && qword_1C0296210 )
      v2 = qword_1C0296210();
    *((_DWORD *)this + 1) = v2;
  }
  return this;
}
