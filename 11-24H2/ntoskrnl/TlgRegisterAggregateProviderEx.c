/*
 * XREFs of TlgRegisterAggregateProviderEx @ 0x140ABDA7C
 * Callers:
 *     CmpRegisterTraceLoggingProvider @ 0x1406F923C (CmpRegisterTraceLoggingProvider.c)
 *     TlgRegisterAggregateProvider @ 0x1406F971C (TlgRegisterAggregateProvider.c)
 *     IoInitSystemPreDrivers @ 0x140C1CA4C (IoInitSystemPreDrivers.c)
 *     EtwpInitialize @ 0x140C3F24C (EtwpInitialize.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     ComputeFlushPeriod @ 0x140824D68 (ComputeFlushPeriod.c)
 *     CreateTlgAggregateSession @ 0x140824E0C (CreateTlgAggregateSession.c)
 *     DestroyAggregateSession @ 0x140824F48 (DestroyAggregateSession.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1409EA0B8 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 */

__int64 __fastcall TlgRegisterAggregateProviderEx(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *TlgAggregateSession; // rax
  __int64 *v7; // rbx
  int v9; // esi
  char *v10; // rax
  signed __int8 v11; // cf
  char *v12; // rsi
  __int64 *i; // rax
  __int64 v14; // rcx

  TlgAggregateSession = CreateTlgAggregateSession(0, 1);
  v7 = TlgAggregateSession;
  if ( !TlgAggregateSession )
    return TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(a1, a2, a3);
  TlgAggregateSession[41] = a2;
  TlgAggregateSession[42] = a3;
  TlgAggregateSession[43] = a1;
  *((_BYTE *)TlgAggregateSession + 373) = 0;
  *((_DWORD *)TlgAggregateSession + 92) = ComputeFlushPeriod((unsigned __int64)TlgAggregateSession);
  v9 = TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(
         a1,
         (__int64)TlgAggregateInternalRegisteredProviderEtwCallback,
         (__int64)v7);
  if ( v9 < 0 )
  {
    *(_QWORD *)(a1 + 40) = 0LL;
    DestroyAggregateSession(v7);
    return (unsigned int)v9;
  }
  else
  {
    v10 = (char *)KeAbPreAcquire((__int64)&qword_140EEFE28, 0LL);
    v11 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140EEFE28, 0LL);
    v12 = v10;
    if ( v11 )
      ExfAcquirePushLockExclusiveEx(&qword_140EEFE28, v10, (__int64)&qword_140EEFE28);
    if ( v12 )
      v12[10] = 1;
    if ( !qword_140EEFE20 )
      TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(
        (__int64)&dword_140E0A578,
        (__int64)TlgAggregateInternalProviderCallback,
        0LL);
    for ( i = &qword_140EEFE20; ; i = (__int64 *)(v14 + 352) )
    {
      v14 = *i;
      if ( !*i )
        break;
      if ( *(_QWORD *)(v14 + 344) == a1 )
        goto LABEL_15;
    }
    *i = (__int64)v7;
LABEL_15:
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140EEFE28, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_140EEFE28);
    KeAbPostRelease((ULONG_PTR)&qword_140EEFE28);
    return 0LL;
  }
}
