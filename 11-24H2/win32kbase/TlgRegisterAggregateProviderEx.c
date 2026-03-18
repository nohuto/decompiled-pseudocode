/*
 * XREFs of TlgRegisterAggregateProviderEx @ 0x1402C405C
 * Callers:
 *     Win32kBaseDriverEntry @ 0x1402E25E0 (Win32kBaseDriverEntry.c)
 * Callees:
 *     DestroyAggregateSession @ 0x1402C35B0 (DestroyAggregateSession.c)
 *     CreateTlgAggregateSession @ 0x1402C415C (CreateTlgAggregateSession.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1402C42B4 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 */

__int64 __fastcall TlgRegisterAggregateProviderEx(_QWORD *CallbackContext)
{
  _QWORD *v1; // rdi
  __int64 TlgAggregateSession; // rax
  _QWORD *v3; // rbx
  __int64 v5; // rdx
  int v6; // esi
  __int64 v7; // r8
  __int64 *i; // rax
  __int64 v9; // rcx

  v1 = CallbackContext;
  LOBYTE(CallbackContext) = 1;
  TlgAggregateSession = CreateTlgAggregateSession(CallbackContext, 0LL);
  v3 = (_QWORD *)TlgAggregateSession;
  if ( !TlgAggregateSession )
    return TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(v1);
  *(_QWORD *)(TlgAggregateSession + 328) = 0LL;
  *(_QWORD *)(TlgAggregateSession + 336) = 0LL;
  *(_QWORD *)(TlgAggregateSession + 344) = v1;
  *(_BYTE *)(TlgAggregateSession + 373) = 1;
  v6 = TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(v1);
  if ( v6 < 0 )
  {
    v1[5] = 0LL;
    DestroyAggregateSession(v3, v5, v7);
    return (unsigned int)v6;
  }
  else
  {
    ExAcquirePushLockExclusiveEx(&unk_14029E4A0, 0LL);
    if ( !qword_14029E4A8 )
      TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_14029B178);
    for ( i = &qword_14029E4A8; ; i = (__int64 *)(v9 + 352) )
    {
      v9 = *i;
      if ( !*i )
        break;
      if ( *(_QWORD **)(v9 + 344) == v1 )
        goto LABEL_11;
    }
    *i = (__int64)v3;
LABEL_11:
    ExReleasePushLockExclusiveEx(&unk_14029E4A0, 0LL);
    return 0LL;
  }
}
