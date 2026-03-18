/*
 * XREFs of HalpUpdateCoolingPacket @ 0x1405655B0
 * Callers:
 *     HalpStartPccCommand @ 0x1406F82F4 (HalpStartPccCommand.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusive @ 0x1403A2D40 (ExReleaseSpinLockExclusive.c)
 */

char __fastcall HalpUpdateCoolingPacket(__int64 a1)
{
  KIRQL v2; // al
  char v3; // di

  v2 = ExAcquireSpinLockExclusive(&HalpMemoryCoolingPacketLock);
  v3 = HalpAcquiredInterface;
  if ( a1 && !HalpAcquiredInterface )
  {
    HalpMemoryCoolingPacket = *(_OWORD *)a1;
    HalpAcquiredInterface = 1;
    xmmword_140F8E490 = *(_OWORD *)(a1 + 16);
    xmmword_140F8E4A0 = *(_OWORD *)(a1 + 32);
    xmmword_140F8E4B0 = *(_OWORD *)(a1 + 48);
    xmmword_140F8E4C0 = *(_OWORD *)(a1 + 64);
    xmmword_140F8E4D0 = *(_OWORD *)(a1 + 80);
    xmmword_140F8E4E0 = *(_OWORD *)(a1 + 96);
    xmmword_140F8E4F0 = *(_OWORD *)(a1 + 112);
    qword_140F8E500 = *(_QWORD *)(a1 + 72);
  }
  ExReleaseSpinLockExclusive(&HalpMemoryCoolingPacketLock, v2);
  return v3;
}
