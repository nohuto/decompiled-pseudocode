/*
 * XREFs of RtlpWnfCalculateAndSetNextTimer @ 0x18010EDC4
 * Callers:
 *     RtlpWnfNotificationThread @ 0x18004C6F0 (RtlpWnfNotificationThread.c)
 *     RtlpWnfRetryTimerCallback @ 0x18010EEB0 (RtlpWnfRetryTimerCallback.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x18003CC20 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x18003CC80 (RtlReleaseSRWLockShared.c)
 *     RtlpGetFirstWnfNameSubscription @ 0x18010EE70 (RtlpGetFirstWnfNameSubscription.c)
 *     RtlpGetNextWnfNameSubscription @ 0x18010F010 (RtlpGetNextWnfNameSubscription.c)
 *     RtlpWnfSetRetryTimer @ 0x180130950 (RtlpWnfSetRetryTimer.c)
 */

void RtlpWnfCalculateAndSetNextTimer()
{
  unsigned __int64 v0; // rdi
  int v1; // esi
  __int64 FirstWnfNameSubscription; // rbx
  unsigned __int64 *v3; // rax

  v0 = 0LL;
  v1 = 0;
  RtlAcquireSRWLockShared((PRTL_SRWLOCK)(qword_1801CD200 + 8));
  FirstWnfNameSubscription = RtlpGetFirstWnfNameSubscription();
  if ( FirstWnfNameSubscription )
  {
    do
    {
      RtlAcquireSRWLockShared((PRTL_SRWLOCK)(FirstWnfNameSubscription + 64));
      if ( *(_DWORD *)(FirstWnfNameSubscription + 124) == 2 )
      {
        v3 = (unsigned __int64 *)(FirstWnfNameSubscription + 136);
        if ( !v0 || *v3 < v0 )
        {
          v0 = *v3;
          v1 = 1;
        }
      }
      RtlReleaseSRWLockShared((PRTL_SRWLOCK)(FirstWnfNameSubscription + 64));
      FirstWnfNameSubscription = RtlpGetNextWnfNameSubscription(FirstWnfNameSubscription);
    }
    while ( FirstWnfNameSubscription );
    if ( v1 )
      RtlpWnfSetRetryTimer(v0);
  }
  RtlReleaseSRWLockShared((PRTL_SRWLOCK)(qword_1801CD200 + 8));
}
