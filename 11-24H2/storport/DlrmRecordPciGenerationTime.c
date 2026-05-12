/*
 * XREFs of DlrmRecordPciGenerationTime @ 0x140139030
 * Callers:
 *     DlrmHandlePowerStateAction @ 0x140138D50 (DlrmHandlePowerStateAction.c)
 *     DlrmHandleScaleAction @ 0x140138E3C (DlrmHandleScaleAction.c)
 *     StorAdapterDlrmSystemThread @ 0x140139A40 (StorAdapterDlrmSystemThread.c)
 * Callees:
 *     <none>
 */

void __fastcall DlrmRecordPciGenerationTime(__int64 a1, int a2)
{
  __int64 v2; // rdi
  ULONGLONG UnbiasedInterruptTime; // rax
  ULONGLONG *v5; // r8

  if ( a1 )
  {
    v2 = a2;
    UnbiasedInterruptTime = KeQueryUnbiasedInterruptTime();
    v5 = (ULONGLONG *)(a1 + 168);
    if ( (unsigned int)v2 <= 5 )
      _InterlockedAdd64((volatile signed __int64 *)(a1 + 8 * v2 + 176), UnbiasedInterruptTime - *v5);
    *v5 = UnbiasedInterruptTime;
  }
}
