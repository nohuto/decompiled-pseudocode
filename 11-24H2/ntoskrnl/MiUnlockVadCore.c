/*
 * XREFs of MiUnlockVadCore @ 0x140429670
 * Callers:
 *     MiSetVadFlags @ 0x1402B8D5C (MiSetVadFlags.c)
 *     MiGetVadWakeList @ 0x14044CC20 (MiGetVadWakeList.c)
 *     MiInsertVadEvent @ 0x1404F1B48 (MiInsertVadEvent.c)
 *     MiLocateOldestSecure @ 0x1404F1BA4 (MiLocateOldestSecure.c)
 *     MiMakeSecureExclusive @ 0x1404F1BF0 (MiMakeSecureExclusive.c)
 *     MiRemoveSecureEntry @ 0x1404F1C5C (MiRemoveSecureEntry.c)
 *     MiCaptureWriteWatchDirtyBit @ 0x1404F31F8 (MiCaptureWriteWatchDirtyBit.c)
 *     MiRemoveVadEvent @ 0x140678550 (MiRemoveVadEvent.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiUnlockVadCore(__int64 a1, unsigned __int8 a2)
{
  unsigned __int64 v2; // rbx
  __int64 result; // rax

  v2 = a2;
  _InterlockedAnd((volatile signed __int32 *)(a1 + 48), 0x7FFFFFFCu);
  if ( a2 != 17 )
  {
    if ( KiIrqlFlags )
      result = KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), a2);
    __writecr8(v2);
  }
  return result;
}
