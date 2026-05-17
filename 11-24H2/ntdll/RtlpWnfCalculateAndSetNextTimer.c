/*
 * XREFs of RtlpWnfCalculateAndSetNextTimer @ 0x180113AC4
 * Callers:
 *     RtlpWnfNotificationThread @ 0x18001FCF0 (RtlpWnfNotificationThread.c)
 *     RtlpWnfRetryTimerCallback @ 0x180113BB0 (RtlpWnfRetryTimerCallback.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x180010220 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x180010280 (RtlReleaseSRWLockShared.c)
 *     RtlpGetFirstWnfNameSubscription @ 0x180113B70 (RtlpGetFirstWnfNameSubscription.c)
 *     RtlpGetNextWnfNameSubscription @ 0x180113D10 (RtlpGetNextWnfNameSubscription.c)
 *     RtlpWnfSetRetryTimer @ 0x180132720 (RtlpWnfSetRetryTimer.c)
 */

__int64 RtlpWnfCalculateAndSetNextTimer()
{
  unsigned __int64 v0; // rdi
  int v1; // esi
  __int64 FirstWnfNameSubscription; // rbx
  unsigned __int64 *v3; // rax

  v0 = 0LL;
  v1 = 0;
  RtlAcquireSRWLockShared((volatile signed __int64 *)(qword_1801CE200 + 8));
  FirstWnfNameSubscription = RtlpGetFirstWnfNameSubscription();
  if ( FirstWnfNameSubscription )
  {
    do
    {
      RtlAcquireSRWLockShared((volatile signed __int64 *)(FirstWnfNameSubscription + 64));
      if ( *(_DWORD *)(FirstWnfNameSubscription + 124) == 2 )
      {
        v3 = (unsigned __int64 *)(FirstWnfNameSubscription + 136);
        if ( !v0 || *v3 < v0 )
        {
          v0 = *v3;
          v1 = 1;
        }
      }
      RtlReleaseSRWLockShared((volatile signed __int64 *)(FirstWnfNameSubscription + 64));
      FirstWnfNameSubscription = RtlpGetNextWnfNameSubscription(FirstWnfNameSubscription);
    }
    while ( FirstWnfNameSubscription );
    if ( v1 )
      RtlpWnfSetRetryTimer(v0);
  }
  return RtlReleaseSRWLockShared((volatile signed __int64 *)(qword_1801CE200 + 8));
}
