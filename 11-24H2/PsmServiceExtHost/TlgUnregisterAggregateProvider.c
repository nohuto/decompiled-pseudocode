/*
 * XREFs of TlgUnregisterAggregateProvider @ 0x180091E5C
 * Callers:
 *     CrmGlobalsCleanup @ 0x1800786E8 (CrmGlobalsCleanup.c)
 * Callees:
 *     LookUpTableFlushComplete @ 0x18006406C (LookUpTableFlushComplete.c)
 *     CancelTimerCallbacksAndDeleteTimer @ 0x180091B00 (CancelTimerCallbacksAndDeleteTimer.c)
 */

void TlgUnregisterAggregateProvider()
{
  void *v0; // rdi
  __int64 *i; // rcx
  __int64 v2; // rax
  REGHANDLE v3; // rcx
  REGHANDLE v4; // rcx
  REGHANDLE v5; // rcx

  if ( (void (__fastcall *)(const struct _GUID *, __int64, char, __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, _QWORD *))qword_1800E8310 == TlgAggregateInternalRegisteredProviderEtwCallback )
  {
    v0 = 0LL;
    AcquireSRWLockExclusive(&stru_1800EA4E8);
    for ( i = &qword_1800EA4F0; ; i = (__int64 *)(v2 + 336) )
    {
      v2 = *i;
      if ( !*i )
        break;
      if ( *(int **)(v2 + 328) == &dword_1800E82E8 )
      {
        v0 = (void *)*i;
        *i = *(_QWORD *)(v2 + 336);
        LookUpTableFlushComplete((__int64)v0);
        if ( !qword_1800EA4F0 )
        {
          v3 = qword_1800E8398;
          qword_1800E8398 = 0LL;
          dword_1800E8378 = 0;
          EventUnregister(v3);
        }
        break;
      }
    }
    ReleaseSRWLockExclusive(&stru_1800EA4E8);
    if ( v0 )
      CancelTimerCallbacksAndDeleteTimer((__int64)v0);
    v4 = qword_1800E8308;
    qword_1800E8308 = 0LL;
    dword_1800E82E8 = 0;
    EventUnregister(v4);
    qword_1800E8310 = 0LL;
    DestroyAggregateSession(v0);
  }
  else
  {
    v5 = qword_1800E8308;
    qword_1800E8308 = 0LL;
    dword_1800E82E8 = 0;
    EventUnregister(v5);
  }
}
