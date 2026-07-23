/*
 * XREFs of MiUnlockVadCore @ 0x14041D7C0
 * Callers:
 *     MiCaptureWriteWatchDirtyBit @ 0x140202774 (MiCaptureWriteWatchDirtyBit.c)
 *     MiSetVadFlags @ 0x14036049C (MiSetVadFlags.c)
 *     MiGetVadWakeList @ 0x140443B20 (MiGetVadWakeList.c)
 *     MiInsertVadEvent @ 0x1404EF5E8 (MiInsertVadEvent.c)
 *     MiLocateOldestSecure @ 0x1404EF644 (MiLocateOldestSecure.c)
 *     MiMakeSecureExclusive @ 0x1404EF690 (MiMakeSecureExclusive.c)
 *     MiRemoveSecureEntry @ 0x1404EF6FC (MiRemoveSecureEntry.c)
 *     MiRemoveVadEvent @ 0x1406796DC (MiRemoveVadEvent.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
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
