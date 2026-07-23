/*
 * XREFs of RtlpUnlockAtomTable @ 0x1408F4D0C
 * Callers:
 *     RtlAddAtomToAtomTableEx @ 0x1404242E0 (RtlAddAtomToAtomTableEx.c)
 *     RtlDestroyLowBoxAtoms @ 0x140468590 (RtlDestroyLowBoxAtoms.c)
 *     RtlEmptyAtomTable @ 0x140780860 (RtlEmptyAtomTable.c)
 *     RtlQueryAtomsInAtomTable @ 0x140780948 (RtlQueryAtomsInAtomTable.c)
 *     RtlPinAtomInAtomTable @ 0x1408F42F0 (RtlPinAtomInAtomTable.c)
 *     RtlDeleteAtomFromAtomTable @ 0x1408F4840 (RtlDeleteAtomFromAtomTable.c)
 *     RtlDestroyAtomTable @ 0x1409DF930 (RtlDestroyAtomTable.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140289BB0 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
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
