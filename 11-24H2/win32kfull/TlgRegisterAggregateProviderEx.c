/*
 * XREFs of TlgRegisterAggregateProviderEx @ 0x1403D0BC8
 * Callers:
 *     EnableUserkTraceLogging @ 0x14028B500 (EnableUserkTraceLogging.c)
 * Callees:
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1403D0280 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 *     CreateTlgAggregateSession @ 0x1403D0868 (CreateTlgAggregateSession.c)
 *     DestroyAggregateSession @ 0x1403D09C0 (DestroyAggregateSession.c)
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

  TlgAggregateSession = CreateTlgAggregateSession(1, 0);
  v1 = TlgAggregateSession;
  if ( !TlgAggregateSession )
    return TraceLoggingRegisterEx_EtwRegister_EtwSetInformation((char *)&dword_140398BF0, 0LL, 0LL);
  TlgAggregateSession[41] = 0LL;
  TlgAggregateSession[42] = 0LL;
  TlgAggregateSession[43] = &dword_140398BF0;
  *((_BYTE *)TlgAggregateSession + 373) = 1;
  v4 = TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(
         (char *)&dword_140398BF0,
         (__int64)TlgAggregateInternalRegisteredProviderEtwCallback,
         (__int64)TlgAggregateSession);
  if ( v4 < 0 )
  {
    qword_140398C18 = 0LL;
    DestroyAggregateSession(v1, v3, v5);
    return (unsigned int)v4;
  }
  else
  {
    ExAcquirePushLockExclusiveEx(&unk_140399320, 0LL);
    if ( !qword_140399328 )
      TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(
        (char *)&dword_140398CD0,
        (__int64)TlgAggregateInternalProviderCallback,
        0LL);
    for ( i = &qword_140399328; ; i = (__int64 *)(v7 + 352) )
    {
      v7 = *i;
      if ( !*i )
        break;
      if ( *(int **)(v7 + 344) == &dword_140398BF0 )
        goto LABEL_11;
    }
    *i = (__int64)v1;
LABEL_11:
    ExReleasePushLockExclusiveEx(&unk_140399320, 0LL);
    return 0LL;
  }
}
