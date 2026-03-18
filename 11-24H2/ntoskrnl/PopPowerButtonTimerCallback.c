/*
 * XREFs of PopPowerButtonTimerCallback @ 0x1405D8330
 * Callers:
 *     <none>
 * Callees:
 *     KxAcquireSpinLock @ 0x140254AE0 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x140279CC0 (KxReleaseSpinLock.c)
 *     PopQueueWorkItem @ 0x140497478 (PopQueueWorkItem.c)
 */

__int64 __fastcall PopPowerButtonTimerCallback(__int64 a1, int a2)
{
  KxAcquireSpinLock(&PopPowerButtonHold);
  if ( (xmmword_140F07898 & 1) != 0 && DWORD1(xmmword_140F07898) == a2 )
  {
    LODWORD(xmmword_140F07898) = xmmword_140F07898 & 1 | ((xmmword_140F07898 & 0xFFFFFFFE) + 2000);
    PopQueueWorkItem((__int64)&unk_140F07870, CriticalWorkQueue);
  }
  return KxReleaseSpinLock((volatile signed __int64 *)&PopPowerButtonHold);
}
