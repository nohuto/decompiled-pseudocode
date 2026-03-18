/*
 * XREFs of RootHub_ReleaseReadModifyWriteLock @ 0x14000C924
 * Callers:
 *     RootHub_HandlePortStatusChangeEvent @ 0x140009CC0 (RootHub_HandlePortStatusChangeEvent.c)
 *     Controller_WdfEvtDeviceArmWakeFromS0 @ 0x14000A640 (Controller_WdfEvtDeviceArmWakeFromS0.c)
 *     RootHub_DetectAndAcknowledgePortResume @ 0x14000B478 (RootHub_DetectAndAcknowledgePortResume.c)
 *     RootHub_WaitForPendingU3TransitionCompletion @ 0x14000CA5C (RootHub_WaitForPendingU3TransitionCompletion.c)
 *     RootHub_WdfEvtTimer20PortResumeComplete @ 0x140018AD4 (RootHub_WdfEvtTimer20PortResumeComplete.c)
 *     RootHub_ForceU3 @ 0x1400195BC (RootHub_ForceU3.c)
 *     RootHub_UcxEvtSetPortFeature @ 0x140026440 (RootHub_UcxEvtSetPortFeature.c)
 *     RootHub_UcxEvtClearPortFeature @ 0x1400277B0 (RootHub_UcxEvtClearPortFeature.c)
 *     RootHub_D0Entry @ 0x140028D68 (RootHub_D0Entry.c)
 *     RootHub_ForceU0AndWait @ 0x140028EFC (RootHub_ForceU0AndWait.c)
 *     UsbDevice_UcxEvtDisable @ 0x14002E4E0 (UsbDevice_UcxEvtDisable.c)
 *     RootHub_D0Exit @ 0x140038974 (RootHub_D0Exit.c)
 *     RootHub_DisableLPMForSlot @ 0x140049584 (RootHub_DisableLPMForSlot.c)
 *     RootHub_SetPortResumeTime @ 0x140049804 (RootHub_SetPortResumeTime.c)
 *     RootHub_Update20HardwareLpmParameters @ 0x14004A6BC (RootHub_Update20HardwareLpmParameters.c)
 * Callees:
 *     DynamicLock_Release @ 0x14000C970 (DynamicLock_Release.c)
 *     Controller_RaiseAndTrackIrql @ 0x14000DA20 (Controller_RaiseAndTrackIrql.c)
 */

__int64 __fastcall RootHub_ReleaseReadModifyWriteLock(__int64 a1, unsigned int a2)
{
  __int64 v3; // rcx
  char v4; // bl
  __int64 result; // rax

  v3 = *(_QWORD *)(a1 + 48) + 120LL * a2;
  v4 = *(_BYTE *)(v3 + 32);
  *(_BYTE *)(v3 + 32) = 0;
  result = DynamicLock_Release(*(_QWORD *)(v3 + 24));
  if ( v4 )
    return Controller_RaiseAndTrackIrql(*(_QWORD *)(a1 + 8));
  return result;
}
