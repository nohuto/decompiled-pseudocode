/*
 * XREFs of PopUpdatePowerButtonHoldState @ 0x1404CA980
 * Callers:
 *     PoSetPowerButtonHoldState @ 0x1405CB3E0 (PoSetPowerButtonHoldState.c)
 *     NtPowerInformation @ 0x14096E740 (NtPowerInformation.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 *     PopQueueWorkItem @ 0x140497BA0 (PopQueueWorkItem.c)
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
  v5 = 1LL << ((dword_140F07184 + dword_140F07188) & 0x3F);
  if ( a1 )
  {
    qword_140F07190 |= v5;
    v3 = 1;
    ++dword_140F07188;
  }
  else
  {
    qword_140F07190 &= ~v5;
    ++dword_140F07184;
  }
  if ( v3 != (xmmword_140F070F8 & 1) )
  {
    if ( a1 )
    {
      ++DWORD1(xmmword_140F070F8);
      LODWORD(xmmword_140F070F8) = xmmword_140F070F8 | 1;
    }
    else
    {
      LODWORD(xmmword_140F070F8) = 0;
    }
    PopQueueWorkItem((__int64)&unk_140F070D0, CriticalWorkQueue);
  }
  KeReleaseSpinLock(&PopPowerButtonHold, v4);
}
