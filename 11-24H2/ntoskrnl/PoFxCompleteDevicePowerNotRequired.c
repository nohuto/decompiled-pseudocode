/*
 * XREFs of PoFxCompleteDevicePowerNotRequired @ 0x1404989D0
 * Callers:
 *     DifPoFxCompleteDevicePowerNotRequiredWrapper @ 0x140636F80 (DifPoFxCompleteDevicePowerNotRequiredWrapper.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopFxQueueWorkOrder @ 0x14029F720 (PopFxQueueWorkOrder.c)
 *     PopFxBugCheck @ 0x140377108 (PopFxBugCheck.c)
 *     PopFxAddLogEntry @ 0x1403782D8 (PopFxAddLogEntry.c)
 */

void __fastcall PoFxCompleteDevicePowerNotRequired(ULONG_PTR BugCheckParameter2)
{
  int v2; // eax
  KIRQL v3; // si

  v2 = _InterlockedDecrement((volatile signed __int32 *)(BugCheckParameter2 + 40));
  if ( v2 )
  {
    if ( v2 < 0 )
      PopFxBugCheck(0x613uLL, BugCheckParameter2, 0LL, 0LL);
  }
  else
  {
    PopFxAddLogEntry(*(_QWORD *)(BugCheckParameter2 + 48), 0, 17, 1LL);
    v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(BugCheckParameter2 + 400));
    if ( *(_DWORD *)(BugCheckParameter2 + 36) == 2 )
      PopFxQueueWorkOrder(BugCheckParameter2 + 344, BugCheckParameter2);
    KeReleaseSpinLock((PKSPIN_LOCK)(BugCheckParameter2 + 400), v3);
  }
}
