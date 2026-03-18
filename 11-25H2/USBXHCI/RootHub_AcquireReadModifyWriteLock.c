/*
 * XREFs of RootHub_AcquireReadModifyWriteLock @ 0x140008750
 * Callers:
 *     RootHub_WaitForPendingU3TransitionCompletion @ 0x140009214 (RootHub_WaitForPendingU3TransitionCompletion.c)
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
 *     DynamicLock_Acquire @ 0x1400087C0 (DynamicLock_Acquire.c)
 *     Controller_LowerAndTrackIrql @ 0x140019630 (Controller_LowerAndTrackIrql.c)
 */

__int64 __fastcall RootHub_AcquireReadModifyWriteLock(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbx
  char v4; // di
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 result; // rax

  v2 = a2;
  v4 = 0;
  if ( KeGetCurrentIrql() == 2 )
  {
    v5 = *(_QWORD *)(a1 + 8);
    if ( *(_BYTE *)(v5 + 1001) )
    {
      Controller_LowerAndTrackIrql(v5);
      v4 = 1;
    }
  }
  v6 = *(_QWORD *)(a1 + 48) + 120 * v2;
  result = DynamicLock_Acquire(*(_QWORD *)(v6 + 24));
  *(_BYTE *)(v6 + 32) = v4;
  return result;
}
