/*
 * XREFs of PopUpdatePowerButtonHoldState @ 0x1404CA678
 * Callers:
 *     PoSetPowerButtonHoldState @ 0x1405CFAE0 (PoSetPowerButtonHoldState.c)
 *     NtPowerInformation @ 0x1409F0230 (NtPowerInformation.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopQueueWorkItem @ 0x140497478 (PopQueueWorkItem.c)
 */

void __fastcall PopUpdatePowerButtonHoldState(char a1)
{
  KIRQL v2; // al
  int v3; // r10d
  KIRQL v4; // di
  __int64 v5; // rdx

  v2 = KeAcquireSpinLockRaiseToDpc(&PopPowerButtonHold);
  v3 = 0;
  v4 = v2;
  v5 = 1LL << ((dword_140F07724 + dword_140F07728) & 0x3F);
  if ( a1 )
  {
    qword_140F07730 |= v5;
    v3 = 1;
    ++dword_140F07728;
  }
  else
  {
    qword_140F07730 &= ~v5;
    ++dword_140F07724;
  }
  if ( v3 != (xmmword_140F07898 & 1) )
  {
    if ( a1 )
    {
      ++DWORD1(xmmword_140F07898);
      LODWORD(xmmword_140F07898) = xmmword_140F07898 | 1;
    }
    else
    {
      LODWORD(xmmword_140F07898) = 0;
    }
    PopQueueWorkItem((__int64)&unk_140F07870, CriticalWorkQueue);
  }
  KeReleaseSpinLock(&PopPowerButtonHold, v4);
}
