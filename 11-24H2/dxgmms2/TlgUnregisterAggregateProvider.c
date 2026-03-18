/*
 * XREFs of TlgUnregisterAggregateProvider @ 0x1400A843C
 * Callers:
 *     ?DeInitGlobals@VIDMM_GLOBAL@@SAXXZ @ 0x140092EEC (-DeInitGlobals@VIDMM_GLOBAL@@SAXXZ.c)
 * Callees:
 *     CancelTimerCallbacksAndDeleteTimer @ 0x1400A8204 (CancelTimerCallbacksAndDeleteTimer.c)
 *     DestroyAggregateSession @ 0x1400A8338 (DestroyAggregateSession.c)
 *     LookUpTableFlushComplete @ 0x14010476C (LookUpTableFlushComplete.c)
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

  if ( (void (__fastcall *)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *))qword_140081070 == TlgAggregateInternalRegisteredProviderEtwCallback )
  {
    v0 = 0LL;
    ExAcquirePushLockExclusiveEx(&unk_140081AF0, 0LL);
    for ( i = &qword_140081AF8; ; i = (__int64 *)(v2 + 352) )
    {
      v2 = *i;
      if ( !*i )
        break;
      if ( *(int **)(v2 + 344) == &dword_140081048 )
      {
        v0 = (_QWORD *)*i;
        *i = *(_QWORD *)(v2 + 352);
        LookUpTableFlushComplete(v0);
        if ( !qword_140081AF8 )
        {
          v3 = qword_1400810A0;
          qword_1400810A0 = 0LL;
          dword_140081080 = 0;
          EtwUnregister(v3);
        }
        break;
      }
    }
    ExReleasePushLockExclusiveEx(&unk_140081AF0, 0LL);
    if ( v0 )
      CancelTimerCallbacksAndDeleteTimer((__int64)v0, v4, v5);
    v6 = RegHandle;
    RegHandle = 0LL;
    dword_140081048 = 0;
    EtwUnregister(v6);
    qword_140081070 = 0LL;
    DestroyAggregateSession(v0, v7, v8);
  }
  else
  {
    v9 = RegHandle;
    RegHandle = 0LL;
    dword_140081048 = 0;
    EtwUnregister(v9);
  }
}
