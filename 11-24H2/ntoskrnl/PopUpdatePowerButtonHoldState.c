/*
 * XREFs of PopUpdatePowerButtonHoldState @ 0x1404C3B98
 * Callers:
 *     PoSetPowerButtonHoldState @ 0x1405CD250 (PoSetPowerButtonHoldState.c)
 *     NtPowerInformation @ 0x1409EDB00 (NtPowerInformation.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopQueueWorkItem @ 0x140491E08 (PopQueueWorkItem.c)
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
  v5 = 1LL << ((dword_140F07B44 + dword_140F07B48) & 0x3F);
  if ( a1 )
  {
    qword_140F07B50 |= v5;
    v3 = 1;
    ++dword_140F07B48;
  }
  else
  {
    qword_140F07B50 &= ~v5;
    ++dword_140F07B44;
  }
  if ( v3 != (xmmword_140F07AF8 & 1) )
  {
    if ( a1 )
    {
      ++DWORD1(xmmword_140F07AF8);
      LODWORD(xmmword_140F07AF8) = xmmword_140F07AF8 | 1;
    }
    else
    {
      LODWORD(xmmword_140F07AF8) = 0;
    }
    PopQueueWorkItem((__int64)&unk_140F07AD0, CriticalWorkQueue);
  }
  KeReleaseSpinLock(&PopPowerButtonHold, v4);
}
