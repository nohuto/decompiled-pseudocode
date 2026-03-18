/*
 * XREFs of MiUnlockNestedVad @ 0x140A15348
 * Callers:
 *     MiPerformVadSplitting @ 0x1402A3F44 (MiPerformVadSplitting.c)
 *     MiFreeVadRange @ 0x1402A45F8 (MiFreeVadRange.c)
 *     MiLockAddressSpaceToo @ 0x1403D7EA4 (MiLockAddressSpaceToo.c)
 *     MiUpControlAreaRefs @ 0x1404B95EC (MiUpControlAreaRefs.c)
 *     MiUnlockAndDereferenceNestedVad @ 0x1404CE0C0 (MiUnlockAndDereferenceNestedVad.c)
 * Callees:
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall MiUnlockNestedVad(__int64 a1)
{
  ULONG_PTR v1; // rbx

  v1 = a1 + 40;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 40));
  return KeAbPostRelease(v1);
}
