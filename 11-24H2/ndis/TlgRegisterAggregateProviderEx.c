/*
 * XREFs of TlgRegisterAggregateProviderEx @ 0x14014F3D8
 * Callers:
 *     DriverEntry @ 0x14018B234 (DriverEntry.c)
 * Callees:
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x140137350 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 *     ComputeFlushPeriod @ 0x14014EB7C (ComputeFlushPeriod.c)
 *     CreateTlgAggregateSession @ 0x14014EC20 (CreateTlgAggregateSession.c)
 *     DestroyAggregateSession @ 0x14014ED78 (DestroyAggregateSession.c)
 */

__int64 TlgRegisterAggregateProviderEx()
{
  _QWORD *TlgAggregateSession; // rax
  _QWORD *v1; // rbx
  __int64 v3; // rdx
  int v4; // esi
  __int64 v5; // r8
  __int64 *i; // rax
  __int64 v7; // rcx

  TlgAggregateSession = CreateTlgAggregateSession(0, 1);
  v1 = TlgAggregateSession;
  if ( !TlgAggregateSession )
    return TraceLoggingRegisterEx_EtwRegister_EtwSetInformation((char *)&dword_14011A7B0, 0LL, 0LL);
  TlgAggregateSession[41] = 0LL;
  TlgAggregateSession[42] = 0LL;
  TlgAggregateSession[43] = &dword_14011A7B0;
  *((_BYTE *)TlgAggregateSession + 373) = 0;
  *((_DWORD *)TlgAggregateSession + 92) = ComputeFlushPeriod((unsigned __int64)TlgAggregateSession);
  v4 = TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(
         (char *)&dword_14011A7B0,
         (__int64)TlgAggregateInternalRegisteredProviderEtwCallback,
         (__int64)v1);
  if ( v4 < 0 )
  {
    qword_14011A7D8 = 0LL;
    DestroyAggregateSession(v1, v3, v5);
    return (unsigned int)v4;
  }
  else
  {
    ExAcquirePushLockExclusiveEx(&unk_14011D838, 0LL);
    if ( !qword_14011D830 )
      TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(
        (char *)&dword_14011A900,
        (__int64)TlgAggregateInternalProviderCallback,
        0LL);
    for ( i = &qword_14011D830; ; i = (__int64 *)(v7 + 352) )
    {
      v7 = *i;
      if ( !*i )
        break;
      if ( *(int **)(v7 + 344) == &dword_14011A7B0 )
        goto LABEL_11;
    }
    *i = (__int64)v1;
LABEL_11:
    ExReleasePushLockExclusiveEx(&unk_14011D838, 0LL);
    return 0LL;
  }
}
