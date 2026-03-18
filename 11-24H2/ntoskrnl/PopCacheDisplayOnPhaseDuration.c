/*
 * XREFs of PopCacheDisplayOnPhaseDuration @ 0x1404C8B4C
 * Callers:
 *     PopSetWatchdog @ 0x140458BDC (PopSetWatchdog.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 */

void __fastcall PopCacheDisplayOnPhaseDuration(int a1, __int64 a2)
{
  KIRQL v4; // al

  v4 = KeAcquireSpinLockRaiseToDpc(&qword_140F0C178);
  if ( dword_140F0C180 )
  {
    switch ( a1 )
    {
      case 'P':
        PopDisplayOnPerformance = a2;
        break;
      case '@':
        qword_140F0C168 = a2;
        break;
      case '0':
        qword_140F0C170 = a2;
        break;
    }
  }
  KeReleaseSpinLock(&qword_140F0C178, v4);
}
