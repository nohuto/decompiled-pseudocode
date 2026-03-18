/*
 * XREFs of PopPowerButtonTimerCallback @ 0x1405D3950
 * Callers:
 *     <none>
 * Callees:
 *     KxAcquireSpinLock @ 0x140253560 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x14034A6E0 (KxReleaseSpinLock.c)
 *     PopQueueWorkItem @ 0x140497BA0 (PopQueueWorkItem.c)
 */

__int64 __fastcall PopPowerButtonTimerCallback(__int64 a1, int a2)
{
  KxAcquireSpinLock(&PopPowerButtonHold);
  if ( (xmmword_140F070F8 & 1) != 0 && DWORD1(xmmword_140F070F8) == a2 )
  {
    LODWORD(xmmword_140F070F8) = xmmword_140F070F8 & 1 | ((xmmword_140F070F8 & 0xFFFFFFFE) + 2000);
    PopQueueWorkItem((__int64)&unk_140F070D0, CriticalWorkQueue);
  }
  return KxReleaseSpinLock((volatile signed __int64 *)&PopPowerButtonHold);
}
