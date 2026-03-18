/*
 * XREFs of TlgRegisterAggregateProviderEx @ 0x1C03999F4
 * Callers:
 *     EnableUserkTraceLogging @ 0x1C0094760 (EnableUserkTraceLogging.c)
 * Callees:
 *     DestroyAggregateSession @ 0x1C0399760 (DestroyAggregateSession.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1C0399AD8 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 *     CreateTlgAggregateSession @ 0x1C0399B84 (CreateTlgAggregateSession.c)
 */

__int64 __fastcall TlgRegisterAggregateProviderEx(__int64 a1)
{
  __int64 TlgAggregateSession; // rax
  _QWORD *v2; // rbx
  int v3; // esi
  __int64 v4; // rax
  __int64 *v5; // rcx

  LOBYTE(a1) = 1;
  TlgAggregateSession = CreateTlgAggregateSession(a1, 0LL);
  v2 = (_QWORD *)TlgAggregateSession;
  if ( !TlgAggregateSession )
    return TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_1C0354060);
  *(_QWORD *)(TlgAggregateSession + 328) = 0LL;
  *(_QWORD *)(TlgAggregateSession + 336) = 0LL;
  *(_QWORD *)(TlgAggregateSession + 344) = &dword_1C0354060;
  *(_BYTE *)(TlgAggregateSession + 373) = 1;
  v3 = TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_1C0354060);
  if ( v3 < 0 )
  {
    qword_1C0354088 = 0LL;
    DestroyAggregateSession(v2);
    return (unsigned int)v3;
  }
  else
  {
    ExAcquirePushLockExclusiveEx(&unk_1C035F398, 0LL);
    v4 = qword_1C035F3A0;
    if ( !qword_1C035F3A0 )
    {
      TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_1C0354188);
      v4 = qword_1C035F3A0;
    }
    v5 = &qword_1C035F3A0;
    while ( v4 )
    {
      if ( *(int **)(v4 + 344) == &dword_1C0354060 )
        goto LABEL_8;
      v5 = (__int64 *)(v4 + 352);
      v4 = *(_QWORD *)(v4 + 352);
    }
    *v5 = (__int64)v2;
LABEL_8:
    ExReleasePushLockExclusiveEx(&unk_1C035F398, 0LL);
    return 0LL;
  }
}
