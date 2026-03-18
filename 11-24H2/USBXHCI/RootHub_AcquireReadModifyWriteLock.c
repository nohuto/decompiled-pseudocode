/*
 * XREFs of RootHub_AcquireReadModifyWriteLock @ 0x14000BED4
 * Callers:
 *     RootHub_HandlePortStatusChangeEvent @ 0x140009CC0 (RootHub_HandlePortStatusChangeEvent.c)
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
 *     DynamicLock_Acquire @ 0x14000BF40 (DynamicLock_Acquire.c)
 *     Controller_LowerAndTrackIrql @ 0x14000DC30 (Controller_LowerAndTrackIrql.c)
 */

__int64 __fastcall RootHub_AcquireReadModifyWriteLock(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbx
  char v4; // di
  __int64 v5; // rbx
  __int64 result; // rax

  v2 = a2;
  v4 = 0;
  if ( KeGetCurrentIrql() == 2 && *(_BYTE *)(*(_QWORD *)(a1 + 8) + 1001LL) )
  {
    Controller_LowerAndTrackIrql();
    v4 = 1;
  }
  v5 = *(_QWORD *)(a1 + 48) + 120 * v2;
  result = DynamicLock_Acquire(*(_QWORD *)(v5 + 24));
  *(_BYTE *)(v5 + 32) = v4;
  return result;
}
