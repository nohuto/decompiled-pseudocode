/*
 * XREFs of PopPowerButtonTimerCallback @ 0x1405D5850
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x14022F250 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1402850F0 (KxAcquireSpinLock.c)
 *     PopQueueWorkItem @ 0x140491E08 (PopQueueWorkItem.c)
 */

__int64 __fastcall PopPowerButtonTimerCallback(__int64 a1, int a2)
{
  KxAcquireSpinLock(&PopPowerButtonHold);
  if ( (xmmword_140F07AF8 & 1) != 0 && DWORD1(xmmword_140F07AF8) == a2 )
  {
    LODWORD(xmmword_140F07AF8) = xmmword_140F07AF8 & 1 | ((xmmword_140F07AF8 & 0xFFFFFFFE) + 2000);
    PopQueueWorkItem((__int64)&unk_140F07AD0, CriticalWorkQueue);
  }
  return KxReleaseSpinLock((volatile signed __int64 *)&PopPowerButtonHold);
}
