/*
 * XREFs of DlrmQueueWorkItemAndSignalEvent @ 0x140138FDC
 * Callers:
 *     DlrmCheckAndScheduleScaleDown @ 0x1401388A8 (DlrmCheckAndScheduleScaleDown.c)
 *     DlrmCheckAndScheduleScaleUp @ 0x140138994 (DlrmCheckAndScheduleScaleUp.c)
 *     DlrmEffectivePowerModeCallback @ 0x140138A90 (DlrmEffectivePowerModeCallback.c)
 *     DlrmProcessReadWriteRequest @ 0x140138EE0 (DlrmProcessReadWriteRequest.c)
 *     StorProcessDripsCallbackForDlrm @ 0x14013A828 (StorProcessDripsCallbackForDlrm.c)
 * Callees:
 *     <none>
 */

LONG __fastcall DlrmQueueWorkItemAndSignalEvent(__int64 a1, struct _LIST_ENTRY *a2)
{
  LONG result; // eax
  signed __int32 v4[10]; // [rsp+0h] [rbp-28h] BYREF

  if ( a1 )
  {
    if ( a2 )
    {
      ExInterlockedInsertTailList((PLIST_ENTRY)(a1 + 144), a2, (PKSPIN_LOCK)(a1 + 160));
      _InterlockedOr(v4, 0);
      return KeSetEvent((PRKEVENT)(a1 + 88), 0, 0);
    }
  }
  return result;
}
