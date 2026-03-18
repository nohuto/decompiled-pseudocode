/*
 * XREFs of ?InitializeInputGlobals@@YAJXZ @ 0x14023D618
 * Callers:
 *     InputInitialize @ 0x140218A5C (InputInitialize.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x1400185D0 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x14005DE1C (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     IsCurrentSessionHostServiceSession @ 0x140100C78 (IsCurrentSessionHostServiceSession.c)
 *     ?InitializeMouseGlobals@@YAJXZ @ 0x140157A9C (-InitializeMouseGlobals@@YAJXZ.c)
 *     ?InitializeInputSettingsGlobals@@YAJXZ @ 0x14023D9B4 (-InitializeInputSettingsGlobals@@YAJXZ.c)
 *     ?InitializeSensorGlobals@@YAJXZ @ 0x14023E120 (-InitializeSensorGlobals@@YAJXZ.c)
 *     ?InitializeKeyboardGlobals@@YAJXZ @ 0x14023E218 (-InitializeKeyboardGlobals@@YAJXZ.c)
 */

__int64 InitializeInputGlobals(void)
{
  unsigned __int64 v0; // rcx
  int v1; // ebx
  bool v2; // di
  bool v3; // si
  int v4; // edx
  int v5; // r8d
  __int64 v6; // r9
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 UserSessionState; // rax
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // rax
  bool v15; // bl
  __int64 v16; // rax
  int v17; // r8d
  int v18; // edx
  __int16 v19; // [rsp+30h] [rbp-28h]
  char v20; // [rsp+40h] [rbp-18h]

  if ( (unsigned int)IsCurrentSessionHostServiceSession() )
  {
    v0 = 5000 * gliQpcFreq.QuadPart / 0x3E8uLL;
    gqpcAgeLimit = v0;
  }
  *(_DWORD *)(W32GetUserSessionState(v0) + 3296) = 0;
  v1 = InitializeSensorGlobals();
  if ( v1 < 0 )
  {
    v2 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
    v3 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v2 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)v1;
    v20 = v1;
    v6 = *(_QWORD *)(W32GetUserSessionState(&WPP_GLOBAL_Control) + 69400);
    v19 = 11;
LABEL_12:
    LOBYTE(v5) = v3;
    LOBYTE(v4) = v2;
    WPP_RECORDER_AND_TRACE_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v4,
      v5,
      v6,
      2,
      14,
      v19,
      (__int64)&WPP_62a8c3d181ad35a13e51aa4d61208f12_Traceguids,
      v20);
    return (unsigned int)v1;
  }
  v1 = InitializeKeyboardGlobals();
  if ( v1 < 0 )
  {
    v2 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
    v3 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v2 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)v1;
    v20 = v1;
    v6 = *(_QWORD *)(W32GetUserSessionState(&WPP_GLOBAL_Control) + 69400);
    v19 = 12;
    goto LABEL_12;
  }
  v1 = InitializeMouseGlobals(v8);
  if ( v1 < 0 )
  {
    v2 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
    v3 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v2 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)v1;
    v20 = v1;
    v6 = *(_QWORD *)(W32GetUserSessionState(&WPP_GLOBAL_Control) + 69400);
    v19 = 13;
    goto LABEL_12;
  }
  UserSessionState = W32GetUserSessionState(v9);
  v2 = 1;
  *(_WORD *)(UserSessionState + 17168) = 1;
  *(_DWORD *)(UserSessionState + 17172) = 1;
  *(_DWORD *)(W32GetUserSessionState(v11) + 17384) = 0;
  v1 = InitializeInputSettingsGlobals();
  if ( v1 < 0 )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
    {
      v2 = 0;
    }
    v3 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v2 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)v1;
    v20 = v1;
    v6 = *(_QWORD *)(W32GetUserSessionState(&WPP_GLOBAL_Control) + 69400);
    v19 = 17;
    goto LABEL_12;
  }
  v13 = W32GetUserSessionState(v12);
  v14 = Win32AllocPoolZInitImpl(256LL, 0x50uLL, 0x49637355u);
  *(_QWORD *)(v13 + 18968) = v14;
  if ( v14 )
    return 0LL;
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) == 0
    || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
  {
    v2 = 0;
  }
  v15 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v16 = W32GetUserSessionState(&WPP_GLOBAL_Control);
    LOBYTE(v17) = v15;
    LOBYTE(v18) = v2;
    WPP_RECORDER_AND_TRACE_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v18,
      v17,
      *(_QWORD *)(v16 + 69400),
      2,
      14,
      18,
      (__int64)&WPP_62a8c3d181ad35a13e51aa4d61208f12_Traceguids,
      23);
  }
  return 3221225495LL;
}
