/*
 * XREFs of TlgRegisterAggregateProviderEx @ 0x14009182C
 * Callers:
 *     ?InitGlobals@VIDMM_GLOBAL@@SAJXZ @ 0x14011058C (-InitGlobals@VIDMM_GLOBAL@@SAJXZ.c)
 * Callees:
 *     CreateTlgAggregateSession @ 0x140091948 (CreateTlgAggregateSession.c)
 *     ComputeFlushPeriod @ 0x1400A8294 (ComputeFlushPeriod.c)
 *     DestroyAggregateSession @ 0x1400A8338 (DestroyAggregateSession.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1400A855C (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 */

__int64 __fastcall TlgRegisterAggregateProviderEx(__int64 a1, __int64 a2)
{
  __int64 TlgAggregateSession; // rax
  void *v3; // rbx
  int v5; // esi
  __int64 *i; // rax
  __int64 v7; // rcx

  LOBYTE(a2) = 1;
  TlgAggregateSession = CreateTlgAggregateSession(0LL, a2);
  v3 = (void *)TlgAggregateSession;
  if ( !TlgAggregateSession )
    return TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_140081048);
  *(_QWORD *)(TlgAggregateSession + 328) = 0LL;
  *(_QWORD *)(TlgAggregateSession + 336) = 0LL;
  *(_QWORD *)(TlgAggregateSession + 344) = &dword_140081048;
  *(_BYTE *)(TlgAggregateSession + 373) = 0;
  *(_DWORD *)(TlgAggregateSession + 368) = ComputeFlushPeriod(TlgAggregateSession);
  v5 = TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_140081048);
  if ( v5 < 0 )
  {
    qword_140081070 = 0LL;
    DestroyAggregateSession(v3);
    return (unsigned int)v5;
  }
  else
  {
    ExAcquirePushLockExclusiveEx(&unk_140081AF0, 0LL);
    if ( !qword_140081AF8 )
      TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_140081080);
    for ( i = &qword_140081AF8; ; i = (__int64 *)(v7 + 352) )
    {
      v7 = *i;
      if ( !*i )
        break;
      if ( *(int **)(v7 + 344) == &dword_140081048 )
        goto LABEL_11;
    }
    *i = (__int64)v3;
LABEL_11:
    ExReleasePushLockExclusiveEx(&unk_140081AF0, 0LL);
    return 0LL;
  }
}
