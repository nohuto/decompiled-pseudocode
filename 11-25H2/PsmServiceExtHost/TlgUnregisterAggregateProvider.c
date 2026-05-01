/*
 * XREFs of TlgUnregisterAggregateProvider @ 0x1800919FC
 * Callers:
 *     CrmGlobalsCleanup @ 0x180078688 (CrmGlobalsCleanup.c)
 * Callees:
 *     LookUpTableFlushComplete @ 0x1800640EC (LookUpTableFlushComplete.c)
 *     CancelTimerCallbacksAndDeleteTimer @ 0x1800916A0 (CancelTimerCallbacksAndDeleteTimer.c)
 */

void TlgUnregisterAggregateProvider()
{
  void *v0; // rdi
  __int64 *i; // rcx
  __int64 v2; // rax
  REGHANDLE v3; // rcx
  REGHANDLE v4; // rcx
  REGHANDLE v5; // rcx

  if ( (void (__fastcall *)(const struct _GUID *, __int64, char, __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, _QWORD *))qword_1800E7310 == TlgAggregateInternalRegisteredProviderEtwCallback )
  {
    v0 = 0LL;
    AcquireSRWLockExclusive(&stru_1800E95A0);
    for ( i = &qword_1800E95A8; ; i = (__int64 *)(v2 + 336) )
    {
      v2 = *i;
      if ( !*i )
        break;
      if ( *(int **)(v2 + 328) == &dword_1800E72E8 )
      {
        v0 = (void *)*i;
        *i = *(_QWORD *)(v2 + 336);
        LookUpTableFlushComplete((__int64)v0);
        if ( !qword_1800E95A8 )
        {
          v3 = qword_1800E7398;
          qword_1800E7398 = 0LL;
          dword_1800E7378 = 0;
          EventUnregister(v3);
        }
        break;
      }
    }
    ReleaseSRWLockExclusive(&stru_1800E95A0);
    if ( v0 )
      CancelTimerCallbacksAndDeleteTimer((__int64)v0);
    v4 = qword_1800E7308;
    qword_1800E7308 = 0LL;
    dword_1800E72E8 = 0;
    EventUnregister(v4);
    qword_1800E7310 = 0LL;
    DestroyAggregateSession(v0);
  }
  else
  {
    v5 = qword_1800E7308;
    qword_1800E7308 = 0LL;
    dword_1800E72E8 = 0;
    EventUnregister(v5);
  }
}
