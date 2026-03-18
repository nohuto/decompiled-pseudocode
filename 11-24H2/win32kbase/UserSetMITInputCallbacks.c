/*
 * XREFs of UserSetMITInputCallbacks @ 0x1402152B8
 * Callers:
 *     NtMITSetInputCallbacks @ 0x1401B8AD0 (NtMITSetInputCallbacks.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?DeclareThreadAsInput@CInputThreadBase@@QEAA_NXZ @ 0x14019C7D0 (-DeclareThreadAsInput@CInputThreadBase@@QEAA_NXZ.c)
 *     ?CreateCoreMsgPort@InputExtensibilityCallout@@AEAAJXZ @ 0x14020B1FC (-CreateCoreMsgPort@InputExtensibilityCallout@@AEAAJXZ.c)
 */

__int64 __fastcall UserSetMITInputCallbacks(__int64 a1)
{
  CTouchProcessor *v2; // rcx
  char v3; // bl
  char v4; // dl
  char v5; // r8
  __int64 v6; // rcx
  __int64 v7; // rcx
  _QWORD *v8; // rdi
  __int64 UserSessionState; // rax
  __int64 v10; // rax
  unsigned int v11; // ebp
  char v12; // di
  bool v13; // si
  __int64 v14; // rax
  char v15; // dl

  v2 = WPP_GLOBAL_Control;
  v3 = 1;
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
    || (v4 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    v4 = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (v5 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
  {
    v5 = 0;
  }
  if ( v4 || v5 )
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v4,
      v5,
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5,
      2,
      21,
      (__int64)&WPP_4c37d3b938813951dcfe59f4edab31d1_Traceguids);
  if ( !*(_DWORD *)(W32GetUserSessionState(v2) + 19152) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 183);
  v8 = *(_QWORD **)(W32GetUserSessionState(v6) + 16408);
  if ( *v8 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 45);
  *v8 = a1;
  if ( !v8[2] )
  {
    UserSessionState = W32GetUserSessionState(v7);
    InputExtensibilityCallout::CreateCoreMsgPort(*(InputExtensibilityCallout **)(UserSessionState + 16408));
    if ( !v8[2] )
      KeBugCheck(0x164u);
  }
  v10 = W32GetUserSessionState(v7);
  if ( CInputThreadBase::DeclareThreadAsInput(*(CInputThreadBase **)(v10 + 18808)) )
  {
    v11 = 1;
  }
  else
  {
    v11 = 0;
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
      || (v12 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
    {
      v12 = 0;
    }
    v13 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v14 = W32GetUserSessionState(WPP_GLOBAL_Control);
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v12,
        v13,
        *(_QWORD *)(v14 + 69400),
        2,
        2,
        22,
        (__int64)&WPP_4c37d3b938813951dcfe59f4edab31d1_Traceguids);
    }
  }
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
    || (v15 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    v15 = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
    v3 = 0;
  if ( v15 || v3 )
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v15,
      v3,
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5,
      2,
      23,
      (__int64)&WPP_4c37d3b938813951dcfe59f4edab31d1_Traceguids);
  return v11;
}
