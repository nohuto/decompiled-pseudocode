/*
 * XREFs of HalpUpdateCoolingPacket @ 0x140565C70
 * Callers:
 *     HalpStartPccCommand @ 0x140701D94 (HalpStartPccCommand.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusive @ 0x1402E6E40 (ExReleaseSpinLockExclusive.c)
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
    xmmword_140F8EE30 = *(_OWORD *)(a1 + 16);
    xmmword_140F8EE40 = *(_OWORD *)(a1 + 32);
    xmmword_140F8EE50 = *(_OWORD *)(a1 + 48);
    xmmword_140F8EE60 = *(_OWORD *)(a1 + 64);
    xmmword_140F8EE70 = *(_OWORD *)(a1 + 80);
    xmmword_140F8EE80 = *(_OWORD *)(a1 + 96);
    xmmword_140F8EE90 = *(_OWORD *)(a1 + 112);
    qword_140F8EEA0 = *(_QWORD *)(a1 + 72);
  }
  ExReleaseSpinLockExclusive(&HalpMemoryCoolingPacketLock, v2);
  return v3;
}
