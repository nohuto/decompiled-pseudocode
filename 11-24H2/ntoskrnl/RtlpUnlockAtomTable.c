/*
 * XREFs of RtlpUnlockAtomTable @ 0x140935DFC
 * Callers:
 *     RtlAddAtomToAtomTableEx @ 0x140431DA0 (RtlAddAtomToAtomTableEx.c)
 *     RtlDestroyLowBoxAtoms @ 0x14046DCA0 (RtlDestroyLowBoxAtoms.c)
 *     RtlEmptyAtomTable @ 0x140780930 (RtlEmptyAtomTable.c)
 *     RtlQueryAtomsInAtomTable @ 0x140780A18 (RtlQueryAtomsInAtomTable.c)
 *     RtlPinAtomInAtomTable @ 0x140935BE0 (RtlPinAtomInAtomTable.c)
 *     RtlDeleteAtomFromAtomTable @ 0x140935CB0 (RtlDeleteAtomFromAtomTable.c)
 *     RtlDestroyAtomTable @ 0x1409E4ED0 (RtlDestroyAtomTable.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402595A0 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 */

__int64 __fastcall RtlpUnlockAtomTable(__int64 a1)
{
  ULONG_PTR v1; // rbx

  v1 = a1 + 8;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 8), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 8));
  KeAbPostRelease(v1);
  return KeLeaveCriticalRegionThread();
}
