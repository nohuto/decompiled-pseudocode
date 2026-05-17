/*
 * XREFs of RtlpWnfCalculateAndSetNextTimer @ 0x18003F9AC
 * Callers:
 *     RtlpWnfNotificationThread @ 0x180040FB0 (RtlpWnfNotificationThread.c)
 *     RtlpWnfRetryTimerCallback @ 0x180116B70 (RtlpWnfRetryTimerCallback.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x18004F0C0 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x18004F120 (RtlReleaseSRWLockShared.c)
 *     RtlpGetNextWnfNameSubscription @ 0x180116CD0 (RtlpGetNextWnfNameSubscription.c)
 *     RtlpGetFirstWnfNameSubscription @ 0x180116D24 (RtlpGetFirstWnfNameSubscription.c)
 *     RtlpWnfSetRetryTimer @ 0x180134200 (RtlpWnfSetRetryTimer.c)
 */

__int64 RtlpWnfCalculateAndSetNextTimer()
{
  unsigned __int64 v0; // rdi
  int v1; // esi
  __int64 FirstWnfNameSubscription; // rbx
  unsigned __int64 *v3; // rax

  v0 = 0LL;
  v1 = 0;
  RtlAcquireSRWLockShared(qword_1801D0200 + 8);
  FirstWnfNameSubscription = RtlpGetFirstWnfNameSubscription();
  if ( FirstWnfNameSubscription )
  {
    do
    {
      RtlAcquireSRWLockShared(FirstWnfNameSubscription + 64);
      if ( *(_DWORD *)(FirstWnfNameSubscription + 124) == 2 )
      {
        v3 = (unsigned __int64 *)(FirstWnfNameSubscription + 136);
        if ( !v0 || *v3 < v0 )
        {
          v0 = *v3;
          v1 = 1;
        }
      }
      RtlReleaseSRWLockShared(FirstWnfNameSubscription + 64);
      FirstWnfNameSubscription = RtlpGetNextWnfNameSubscription(FirstWnfNameSubscription);
    }
    while ( FirstWnfNameSubscription );
    if ( v1 )
      RtlpWnfSetRetryTimer(v0);
  }
  return RtlReleaseSRWLockShared(qword_1801D0200 + 8);
}
