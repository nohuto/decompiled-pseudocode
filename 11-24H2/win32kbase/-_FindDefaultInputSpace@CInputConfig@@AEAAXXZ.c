/*
 * XREFs of ?_FindDefaultInputSpace@CInputConfig@@AEAAXXZ @ 0x1401F4770
 * Callers:
 *     ?_ConfigureInputSpace@CInputConfig@@AEAAJPEAUCInputSpace@@@Z @ 0x1401F427C (-_ConfigureInputSpace@CInputConfig@@AEAAJPEAUCInputSpace@@@Z.c)
 * Callees:
 *     ?LockExclusivelyHeld@CInputConfig@@SA_NXZ @ 0x1401433C0 (-LockExclusivelyHeld@CInputConfig@@SA_NXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall CInputConfig::_FindDefaultInputSpace(CInputConfig *this)
{
  _QWORD *v1; // rbx
  _QWORD *v2; // rbp
  _QWORD *v3; // rdi
  _QWORD **v4; // r12
  __int64 v5; // rcx
  _QWORD *v6; // rcx
  _QWORD *v7; // r14
  _QWORD *v8; // rsi
  int v9; // eax
  __int64 UserSessionState; // [rsp+68h] [rbp+10h]

  v1 = 0LL;
  v2 = 0LL;
  v3 = 0LL;
  v4 = *(_QWORD ***)(W32GetUserSessionState(this) + 18688);
  UserSessionState = W32GetUserSessionState(v5);
  ExEnterCriticalRegionAndAcquireResourceShared(*(PERESOURCE *)(UserSessionState + 18696));
  v6 = *v4;
  v7 = (_QWORD *)**v4;
  while ( 1 )
  {
    v8 = 0LL;
    if ( v6 != v4 )
      v8 = v6 + 2;
    if ( !v8 )
      break;
    if ( !CInputConfig::LockExclusivelyHeld((__int64)v6) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 384);
    v9 = *((_DWORD *)v8 + 2);
    if ( *((_BYTE *)v8 + 1448) )
      v1 = v8;
    if ( (v9 & 1) != 0 )
    {
      v2 = v8;
      *((_DWORD *)v8 + 2) = v9 & 0xFFFFFFFE;
    }
    v6 = v7;
    v7 = (_QWORD *)*v7;
    if ( !v3 )
      v3 = v8;
  }
  ExReleaseResourceAndLeaveCriticalRegion(*(PERESOURCE *)(UserSessionState + 18696));
  if ( !v3 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 831);
  if ( !v1 )
  {
    if ( v2 )
    {
      v1 = v2;
    }
    else
    {
      v1 = v3;
      if ( !v3 )
        return;
    }
  }
  *((_DWORD *)v1 + 2) |= 1u;
}
