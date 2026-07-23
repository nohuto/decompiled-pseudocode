/*
 * XREFs of MiUnlockNestedVad @ 0x140A15178
 * Callers:
 *     MiFreeVadRange @ 0x14026731C (MiFreeVadRange.c)
 *     MiLockAddressSpaceToo @ 0x1403C7D64 (MiLockAddressSpaceToo.c)
 *     MiPerformVadSplitting @ 0x1403C877C (MiPerformVadSplitting.c)
 *     MiUpControlAreaRefs @ 0x1404B355C (MiUpControlAreaRefs.c)
 *     MiUnlockAndDereferenceNestedVad @ 0x1404C7270 (MiUnlockAndDereferenceNestedVad.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 */

__int64 __fastcall MiUnlockNestedVad(__int64 a1)
{
  ULONG_PTR v1; // rbx

  v1 = a1 + 40;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 40));
  return KeAbPostRelease(v1);
}
