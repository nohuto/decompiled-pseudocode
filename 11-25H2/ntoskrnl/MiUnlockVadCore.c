/*
 * XREFs of MiUnlockVadCore @ 0x1402A3820
 * Callers:
 *     MiMakeSecureExclusive @ 0x1402A3168 (MiMakeSecureExclusive.c)
 *     MiLocateOldestSecure @ 0x1402A32BC (MiLocateOldestSecure.c)
 *     MiInsertVadEvent @ 0x1402A33D8 (MiInsertVadEvent.c)
 *     MiRemoveSecureEntry @ 0x1402A34A0 (MiRemoveSecureEntry.c)
 *     MiSetVadFlags @ 0x1402A3618 (MiSetVadFlags.c)
 *     MiCaptureWriteWatchDirtyBit @ 0x1402A3914 (MiCaptureWriteWatchDirtyBit.c)
 *     MiMoveDirtyBitsToPfns @ 0x1402A52C8 (MiMoveDirtyBitsToPfns.c)
 *     NtGetWriteWatch @ 0x1402A5800 (NtGetWriteWatch.c)
 *     MiSetVadDeleted @ 0x14031F8D0 (MiSetVadDeleted.c)
 *     MiRemoveVadEvent @ 0x14066CC00 (MiRemoveVadEvent.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
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
