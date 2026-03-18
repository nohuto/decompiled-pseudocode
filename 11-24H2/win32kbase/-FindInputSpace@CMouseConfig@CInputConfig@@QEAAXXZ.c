/*
 * XREFs of ?FindInputSpace@CMouseConfig@CInputConfig@@QEAAXXZ @ 0x14012CAC4
 * Callers:
 *     NtSetCursorInputSpace @ 0x1401B91E0 (NtSetCursorInputSpace.c)
 *     ?_ConfigureInputSpace@CInputConfig@@AEAAJPEAUCInputSpace@@@Z @ 0x1401F427C (-_ConfigureInputSpace@CInputConfig@@AEAAJPEAUCInputSpace@@@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall CInputConfig::CMouseConfig::FindInputSpace(CInputConfig::CMouseConfig *this)
{
  char v2; // bp
  _QWORD **v3; // rsi
  _QWORD **v4; // r14
  __int64 v5; // rcx
  __int64 UserSessionState; // r15
  _QWORD **v7; // rdx
  _QWORD *i; // r8
  _QWORD **v9; // rcx
  _QWORD **v10; // rcx

  *((_QWORD *)this + 1) = 0LL;
  if ( *(_DWORD *)this || (v2 = 1, *((_DWORD *)this + 1)) )
    v2 = 0;
  v3 = 0LL;
  v4 = *(_QWORD ***)(W32GetUserSessionState(this) + 18688);
  UserSessionState = W32GetUserSessionState(v5);
  ExEnterCriticalRegionAndAcquireResourceShared(*(PERESOURCE *)(UserSessionState + 18696));
  v7 = (_QWORD **)*v4;
  for ( i = (_QWORD *)**v4; ; i = (_QWORD *)*i )
  {
    v9 = 0LL;
    if ( v7 != v4 )
      v9 = v7 + 2;
    if ( !v9 )
      break;
    v10 = 0LL;
    if ( v7 != v4 )
      v10 = v7 + 2;
    if ( v2 )
    {
      if ( ((_BYTE)v10[1] & 1) != 0 )
        goto LABEL_12;
    }
    else if ( *(_DWORD *)this == *(_DWORD *)v10 && *((_DWORD *)this + 1) == *((_DWORD *)v10 + 1) )
    {
LABEL_12:
      *((_QWORD *)this + 1) = v10;
      break;
    }
    if ( ((_DWORD)v10[1] & 1) != 0 || !v3 )
      v3 = v10;
    v7 = (_QWORD **)i;
  }
  ExReleaseResourceAndLeaveCriticalRegion(*(PERESOURCE *)(UserSessionState + 18696));
  if ( !*((_QWORD *)this + 1) )
  {
    *((_QWORD *)this + 1) = v3;
    if ( !v3 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 877LL);
  }
}
