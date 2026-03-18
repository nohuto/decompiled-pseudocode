/*
 * XREFs of RtlpUnlockAtomTable @ 0x14091EB3C
 * Callers:
 *     RtlAddAtomToAtomTableEx @ 0x140435780 (RtlAddAtomToAtomTableEx.c)
 *     RtlDestroyLowBoxAtoms @ 0x14046F170 (RtlDestroyLowBoxAtoms.c)
 *     RtlEmptyAtomTable @ 0x1407716E0 (RtlEmptyAtomTable.c)
 *     RtlQueryAtomsInAtomTable @ 0x1407717C8 (RtlQueryAtomsInAtomTable.c)
 *     RtlDestroyAtomTable @ 0x14091D100 (RtlDestroyAtomTable.c)
 *     RtlPinAtomInAtomTable @ 0x14091DD10 (RtlPinAtomInAtomTable.c)
 *     RtlDeleteAtomFromAtomTable @ 0x14091E690 (RtlDeleteAtomFromAtomTable.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14029B9C0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall RtlpUnlockAtomTable(__int64 a1)
{
  ULONG_PTR v1; // rbx

  v1 = a1 + 8;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 8), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 8));
  KeAbPostRelease(v1);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
