/*
 * XREFs of TlgUnregisterAggregateProvider @ 0x140289B9C
 * Callers:
 *     ?DxgkCleanupTelemetry@@YAXXZ @ 0x1400710F8 (-DxgkCleanupTelemetry@@YAXXZ.c)
 * Callees:
 *     CancelTimerCallbacksAndDeleteTimer @ 0x14028961C (CancelTimerCallbacksAndDeleteTimer.c)
 *     DestroyAggregateSession @ 0x140289804 (DestroyAggregateSession.c)
 *     LookUpTableFlushComplete @ 0x1403DA31C (LookUpTableFlushComplete.c)
 */

void __fastcall TlgUnregisterAggregateProvider(__int64 a1)
{
  _QWORD *v2; // rsi
  __int64 *i; // rcx
  __int64 v4; // rax
  REGHANDLE v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // r8
  REGHANDLE v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // r8
  REGHANDLE v11; // rcx

  if ( *(void (__fastcall **)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *))(a1 + 40) == TlgAggregateInternalRegisteredProviderEtwCallback )
  {
    v2 = 0LL;
    ExAcquirePushLockExclusiveEx(&unk_1401616B0, 0LL);
    for ( i = &qword_1401616B8; ; i = (__int64 *)(v4 + 352) )
    {
      v4 = *i;
      if ( !*i )
        break;
      if ( *(_QWORD *)(v4 + 344) == a1 )
      {
        v2 = (_QWORD *)*i;
        *i = *(_QWORD *)(v4 + 352);
        LookUpTableFlushComplete(v2);
        if ( !qword_1401616B8 )
        {
          v5 = qword_14015F088;
          qword_14015F088 = 0LL;
          dword_14015F068 = 0;
          EtwUnregister(v5);
        }
        break;
      }
    }
    ExReleasePushLockExclusiveEx(&unk_1401616B0, 0LL);
    if ( v2 )
      CancelTimerCallbacksAndDeleteTimer((__int64)v2, v6, v7);
    v8 = *(_QWORD *)(a1 + 32);
    *(_QWORD *)(a1 + 32) = 0LL;
    *(_DWORD *)a1 = 0;
    EtwUnregister(v8);
    *(_QWORD *)(a1 + 40) = 0LL;
    DestroyAggregateSession(v2, v9, v10);
  }
  else
  {
    v11 = *(_QWORD *)(a1 + 32);
    *(_QWORD *)(a1 + 32) = 0LL;
    *(_DWORD *)a1 = 0;
    EtwUnregister(v11);
  }
}
