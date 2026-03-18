/*
 * XREFs of TlgUnregisterAggregateProvider @ 0x1403D0CD8
 * Callers:
 *     DisableUserkTraceLogging @ 0x14028B460 (DisableUserkTraceLogging.c)
 * Callees:
 *     CancelTimerCallbacksAndDeleteTimer @ 0x1403D07D8 (CancelTimerCallbacksAndDeleteTimer.c)
 *     DestroyAggregateSession @ 0x1403D09C0 (DestroyAggregateSession.c)
 *     LookUpTableFlushComplete @ 0x1403D115C (LookUpTableFlushComplete.c)
 */

void TlgUnregisterAggregateProvider()
{
  _QWORD *v0; // rdi
  __int64 *i; // rcx
  __int64 v2; // rax
  REGHANDLE v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // r8
  REGHANDLE v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // r8
  REGHANDLE v9; // rcx

  if ( (void (__fastcall *)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *))qword_140398C18 == TlgAggregateInternalRegisteredProviderEtwCallback )
  {
    v0 = 0LL;
    ExAcquirePushLockExclusiveEx(&unk_140399320, 0LL);
    for ( i = &qword_140399328; ; i = (__int64 *)(v2 + 352) )
    {
      v2 = *i;
      if ( !*i )
        break;
      if ( *(int **)(v2 + 344) == &dword_140398BF0 )
      {
        v0 = (_QWORD *)*i;
        *i = *(_QWORD *)(v2 + 352);
        LookUpTableFlushComplete(v0);
        if ( !qword_140399328 )
        {
          v3 = qword_140398CF0;
          qword_140398CF0 = 0LL;
          dword_140398CD0 = 0;
          EtwUnregister(v3);
        }
        break;
      }
    }
    ExReleasePushLockExclusiveEx(&unk_140399320, 0LL);
    if ( v0 )
      CancelTimerCallbacksAndDeleteTimer((__int64)v0, v4, v5);
    v6 = qword_140398C10;
    qword_140398C10 = 0LL;
    dword_140398BF0 = 0;
    EtwUnregister(v6);
    qword_140398C18 = 0LL;
    DestroyAggregateSession(v0, v7, v8);
  }
  else
  {
    v9 = qword_140398C10;
    qword_140398C10 = 0LL;
    dword_140398BF0 = 0;
    EtwUnregister(v9);
  }
}
