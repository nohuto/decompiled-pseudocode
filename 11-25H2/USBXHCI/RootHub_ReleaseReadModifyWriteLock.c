/*
 * XREFs of RootHub_ReleaseReadModifyWriteLock @ 0x140008E18
 * Callers:
 *     RootHub_DetectAndAcknowledgePortResume @ 0x140008F4C (RootHub_DetectAndAcknowledgePortResume.c)
 *     RootHub_WaitForPendingU3TransitionCompletion @ 0x140009214 (RootHub_WaitForPendingU3TransitionCompletion.c)
 *     Controller_WdfEvtDeviceArmWakeFromS0 @ 0x14000A910 (Controller_WdfEvtDeviceArmWakeFromS0.c)
 *     RootHub_HandlePortStatusChangeEvent @ 0x14000AEBC (RootHub_HandlePortStatusChangeEvent.c)
 *     RootHub_UcxEvtSetPortFeature @ 0x1400269B0 (RootHub_UcxEvtSetPortFeature.c)
 *     RootHub_WdfEvtTimer20PortResumeComplete @ 0x140027D64 (RootHub_WdfEvtTimer20PortResumeComplete.c)
 *     RootHub_D0Entry @ 0x140028064 (RootHub_D0Entry.c)
 *     RootHub_ForceU0AndWait @ 0x1400281F8 (RootHub_ForceU0AndWait.c)
 *     RootHub_UcxEvtClearPortFeature @ 0x140028710 (RootHub_UcxEvtClearPortFeature.c)
 *     UsbDevice_UcxEvtDisable @ 0x14002F190 (UsbDevice_UcxEvtDisable.c)
 *     RootHub_ForceU3 @ 0x1400362F4 (RootHub_ForceU3.c)
 *     RootHub_D0Exit @ 0x140039A68 (RootHub_D0Exit.c)
 *     RootHub_DisableLPMForSlot @ 0x140049CD4 (RootHub_DisableLPMForSlot.c)
 *     RootHub_SetPortResumeTime @ 0x14004A0F4 (RootHub_SetPortResumeTime.c)
 *     RootHub_Update20HardwareLpmParameters @ 0x14004AFAC (RootHub_Update20HardwareLpmParameters.c)
 * Callees:
 *     DynamicLock_Release @ 0x140008E60 (DynamicLock_Release.c)
 *     Controller_RaiseAndTrackIrql @ 0x14001C700 (Controller_RaiseAndTrackIrql.c)
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
