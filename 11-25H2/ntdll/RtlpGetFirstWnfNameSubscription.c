/*
 * XREFs of RtlpGetFirstWnfNameSubscription @ 0x180116D24
 * Callers:
 *     RtlpWnfCalculateAndSetNextTimer @ 0x18003F9AC (RtlpWnfCalculateAndSetNextTimer.c)
 *     RtlpWnfRetryTimerCallback @ 0x180116B70 (RtlpWnfRetryTimerCallback.c)
 * Callees:
 *     <none>
 */

__int64 RtlpGetFirstWnfNameSubscription()
{
  __int64 v0; // rcx
  __int64 v1; // rax

  v0 = *(_QWORD *)(qword_1801D0200 + 24);
  if ( (v0 & 1) != 0 )
  {
    if ( v0 == 1 )
      return 0LL;
    v1 = v0 ^ ((qword_1801D0200 + 16) | 1);
  }
  else
  {
    v1 = *(_QWORD *)(qword_1801D0200 + 24);
  }
  return (v1 - 32) & -(__int64)(v1 != 0);
}
