/*
 * XREFs of TlgUnregisterAggregateProvider @ 0x1400949D0
 * Callers:
 *     DriverCleanup @ 0x140001690 (DriverCleanup.c)
 * Callees:
 *     CancelTimerCallbacksAndDeleteTimer @ 0x140093F2C (CancelTimerCallbacksAndDeleteTimer.c)
 *     DestroyAggregateSession @ 0x140094114 (DestroyAggregateSession.c)
 *     LookUpTableFlushComplete @ 0x140094200 (LookUpTableFlushComplete.c)
 */

void TlgUnregisterAggregateProvider()
{
  _QWORD *v0; // rdi
  __int64 v1; // rcx
  __int64 *v2; // rdx
  __int64 *v3; // rax
  REGHANDLE v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // r8
  REGHANDLE v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // r8
  REGHANDLE v10; // rcx

  if ( (void (__fastcall *)(const struct _GUID *, __int64, char, __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, _QWORD *))qword_14006C220 == TlgAggregateInternalRegisteredProviderEtwCallback )
  {
    v0 = 0LL;
    ExAcquirePushLockExclusiveEx(&unk_14006FDF8, 0LL);
    v1 = qword_14006FE00;
    v2 = &qword_14006FE00;
    while ( v1 )
    {
      v3 = (__int64 *)(v1 + 352);
      if ( *(int **)(v1 + 344) == &dword_14006C1F8 )
      {
        v0 = (_QWORD *)v1;
        *v2 = *v3;
        LookUpTableFlushComplete(v1);
        if ( !qword_14006FE00 )
        {
          v4 = qword_14006F860;
          qword_14006F860 = 0LL;
          dword_14006F840 = 0;
          EtwUnregister(v4);
        }
        break;
      }
      v1 = *v3;
      v2 = v3;
    }
    ExReleasePushLockExclusiveEx(&unk_14006FDF8, 0LL);
    if ( v0 )
      CancelTimerCallbacksAndDeleteTimer((__int64)v0, v5, v6);
    v7 = qword_14006C218;
    qword_14006C218 = 0LL;
    dword_14006C1F8 = 0;
    EtwUnregister(v7);
    qword_14006C220 = 0LL;
    DestroyAggregateSession(v0, v8, v9);
  }
  else
  {
    v10 = qword_14006C218;
    qword_14006C218 = 0LL;
    dword_14006C1F8 = 0;
    EtwUnregister(v10);
  }
}
