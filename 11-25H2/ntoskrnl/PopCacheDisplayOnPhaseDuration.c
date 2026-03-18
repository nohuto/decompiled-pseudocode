/*
 * XREFs of PopCacheDisplayOnPhaseDuration @ 0x1404C7D8C
 * Callers:
 *     PopSetWatchdog @ 0x140457F50 (PopSetWatchdog.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 */

void __fastcall PopCacheDisplayOnPhaseDuration(int a1, __int64 a2)
{
  KIRQL v4; // al

  v4 = KeAcquireSpinLockRaiseToDpc(&qword_140F0BAB8);
  if ( dword_140F0BAC0 )
  {
    switch ( a1 )
    {
      case 'P':
        PopDisplayOnPerformance = a2;
        break;
      case '@':
        qword_140F0BAA8 = a2;
        break;
      case '0':
        qword_140F0BAB0 = a2;
        break;
    }
  }
  KeReleaseSpinLock(&qword_140F0BAB8, v4);
}
