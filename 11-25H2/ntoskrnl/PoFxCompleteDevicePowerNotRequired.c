/*
 * XREFs of PoFxCompleteDevicePowerNotRequired @ 0x140498E30
 * Callers:
 *     DifPoFxCompleteDevicePowerNotRequiredWrapper @ 0x14062AFC0 (DifPoFxCompleteDevicePowerNotRequiredWrapper.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopFxQueueWorkOrder @ 0x1402812E8 (PopFxQueueWorkOrder.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 *     PopFxBugCheck @ 0x14034E260 (PopFxBugCheck.c)
 *     PopFxAddLogEntry @ 0x140359640 (PopFxAddLogEntry.c)
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
