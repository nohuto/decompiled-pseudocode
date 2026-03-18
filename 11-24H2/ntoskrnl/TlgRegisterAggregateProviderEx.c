/*
 * XREFs of TlgRegisterAggregateProviderEx @ 0x140AC2794
 * Callers:
 *     CmpRegisterTraceLoggingProvider @ 0x1406FB5FC (CmpRegisterTraceLoggingProvider.c)
 *     TlgRegisterAggregateProvider @ 0x1406FBADC (TlgRegisterAggregateProvider.c)
 *     IoInitSystemPreDrivers @ 0x140C1AA0C (IoInitSystemPreDrivers.c)
 *     EtwpInitialize @ 0x140C3D0FC (EtwpInitialize.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ComputeFlushPeriod @ 0x140824608 (ComputeFlushPeriod.c)
 *     CreateTlgAggregateSession @ 0x1408246AC (CreateTlgAggregateSession.c)
 *     DestroyAggregateSession @ 0x1408247E8 (DestroyAggregateSession.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x140A57414 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 */

__int64 __fastcall TlgRegisterAggregateProviderEx(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *TlgAggregateSession; // rax
  __int64 *v7; // rbx
  int v9; // esi
  _QWORD *v10; // rax
  signed __int8 v11; // cf
  _QWORD *v12; // rsi
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
    v10 = KeAbPreAcquire((__int64)&qword_140EEFBF0, 0LL);
    v11 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140EEFBF0, 0LL);
    v12 = v10;
    if ( v11 )
      ExfAcquirePushLockExclusiveEx(&qword_140EEFBF0, (__int64)v10, (__int64)&qword_140EEFBF0);
    if ( v12 )
      *((_BYTE *)v12 + 10) = 1;
    if ( !qword_140EEFBE8 )
      TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(
        (__int64)&dword_140E0A508,
        (__int64)TlgAggregateInternalProviderCallback,
        0LL);
    for ( i = &qword_140EEFBE8; ; i = (__int64 *)(v14 + 352) )
    {
      v14 = *i;
      if ( !*i )
        break;
      if ( *(_QWORD *)(v14 + 344) == a1 )
        goto LABEL_15;
    }
    *i = (__int64)v7;
LABEL_15:
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140EEFBF0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_140EEFBF0);
    KeAbPostRelease((ULONG_PTR)&qword_140EEFBF0);
    return 0LL;
  }
}
