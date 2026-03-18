/*
 * XREFs of TlgRegisterAggregateProviderEx @ 0x140282598
 * Callers:
 *     ?DxgkInitializeTelemetry@@YAXXZ @ 0x140070E8C (-DxgkInitializeTelemetry@@YAXXZ.c)
 * Callees:
 *     CreateTlgAggregateSession @ 0x140282200 (CreateTlgAggregateSession.c)
 *     DestroyAggregateSession @ 0x140282358 (DestroyAggregateSession.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x14040402C (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 *     ComputeFlushPeriod @ 0x14040C2B4 (ComputeFlushPeriod.c)
 */

__int64 __fastcall TlgRegisterAggregateProviderEx(PVOID CallbackContext, __int64 a2, __int64 a3, __int16 a4)
{
  unsigned int v4; // ebp
  bool v5; // si
  _QWORD *TlgAggregateSession; // rax
  _QWORD *v10; // rbx
  __int64 v11; // rdx
  int v12; // esi
  __int64 v13; // r8
  __int64 *i; // rax
  __int64 v15; // rcx

  v4 = a4 & 0xF;
  v5 = a4 < 0;
  if ( v4 >= 3 )
    return 3221225485LL;
  TlgAggregateSession = CreateTlgAggregateSession(a4 < 0, v4 != 0);
  v10 = TlgAggregateSession;
  if ( !TlgAggregateSession )
    return TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(CallbackContext);
  TlgAggregateSession[42] = 0LL;
  TlgAggregateSession[41] = a2;
  TlgAggregateSession[43] = CallbackContext;
  *((_BYTE *)TlgAggregateSession + 373) = v5;
  if ( v4 )
    *((_DWORD *)TlgAggregateSession + 92) = ComputeFlushPeriod(TlgAggregateSession, v4);
  v12 = TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(CallbackContext);
  if ( v12 < 0 )
  {
    *((_QWORD *)CallbackContext + 5) = 0LL;
    DestroyAggregateSession(v10, v11, v13);
    return (unsigned int)v12;
  }
  else
  {
    ExAcquirePushLockExclusiveEx(&unk_14015E690, 0LL);
    if ( !qword_14015E698 )
      TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_14015C078);
    for ( i = &qword_14015E698; ; i = (__int64 *)(v15 + 352) )
    {
      v15 = *i;
      if ( !*i )
        break;
      if ( *(PVOID *)(v15 + 344) == CallbackContext )
        goto LABEL_15;
    }
    *i = (__int64)v10;
LABEL_15:
    ExReleasePushLockExclusiveEx(&unk_14015E690, 0LL);
    return 0LL;
  }
}
