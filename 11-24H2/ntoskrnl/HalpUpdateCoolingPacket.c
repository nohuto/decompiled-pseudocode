/*
 * XREFs of HalpUpdateCoolingPacket @ 0x140568180
 * Callers:
 *     HalpStartPccCommand @ 0x1407041D4 (HalpStartPccCommand.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14028F370 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusive @ 0x140379ED0 (ExReleaseSpinLockExclusive.c)
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
    xmmword_140F8EC30 = *(_OWORD *)(a1 + 16);
    xmmword_140F8EC40 = *(_OWORD *)(a1 + 32);
    xmmword_140F8EC50 = *(_OWORD *)(a1 + 48);
    xmmword_140F8EC60 = *(_OWORD *)(a1 + 64);
    xmmword_140F8EC70 = *(_OWORD *)(a1 + 80);
    xmmword_140F8EC80 = *(_OWORD *)(a1 + 96);
    xmmword_140F8EC90 = *(_OWORD *)(a1 + 112);
    qword_140F8ECA0 = *(_QWORD *)(a1 + 72);
  }
  ExReleaseSpinLockExclusive(&HalpMemoryCoolingPacketLock, v2);
  return v3;
}
