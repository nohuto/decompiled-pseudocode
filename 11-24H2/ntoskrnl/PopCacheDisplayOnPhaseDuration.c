/*
 * XREFs of PopCacheDisplayOnPhaseDuration @ 0x1404C2000
 * Callers:
 *     PopSetWatchdog @ 0x1402BC81C (PopSetWatchdog.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 */

void __fastcall PopCacheDisplayOnPhaseDuration(int a1, __int64 a2)
{
  KIRQL v4; // al

  v4 = KeAcquireSpinLockRaiseToDpc(&qword_140F0B158);
  if ( dword_140F0B160 )
  {
    switch ( a1 )
    {
      case 'P':
        PopDisplayOnPerformance = a2;
        break;
      case '@':
        qword_140F0B148 = a2;
        break;
      case '0':
        qword_140F0B150 = a2;
        break;
    }
  }
  KeReleaseSpinLock(&qword_140F0B158, v4);
}
