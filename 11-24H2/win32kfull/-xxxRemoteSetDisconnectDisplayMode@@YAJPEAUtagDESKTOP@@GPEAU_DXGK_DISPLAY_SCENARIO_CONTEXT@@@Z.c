/*
 * XREFs of ?xxxRemoteSetDisconnectDisplayMode@@YAJPEAUtagDESKTOP@@GPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1401DFD98
 * Callers:
 *     xxxRemoteDisconnect @ 0x1401DF3C8 (xxxRemoteDisconnect.c)
 *     xxxRemoteReconnect @ 0x14024FFF8 (xxxRemoteReconnect.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140189210 (WPP_RECORDER_AND_TRACE_SF_d.c)
 */

__int64 __fastcall xxxRemoteSetDisconnectDisplayMode(
        struct tagDESKTOP *a1,
        unsigned __int16 a2,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 UserSessionState; // rax
  int v10; // ebx
  __int64 v11; // rdx
  char v12; // di
  bool v13; // si
  __int64 v14; // rax
  int v15; // r8d
  int v16; // edx
  char v17; // [rsp+78h] [rbp+10h] BYREF

  v17 = 0;
  SetProtocolType(0xFFFFLL);
  UserSessionState = W32GetUserSessionState(v7, v6);
  if ( (unsigned int)DrvIsNotUsingGraphicsDevice(*(_QWORD *)(*(_QWORD *)(UserSessionState + 57008) + 16LL)) )
    return 0LL;
  v10 = xxxUserSetDisplayConfig(0LL, 0LL, 2191LL, 2LL, a1, 0, 0LL, &v17, 0LL, a3, 0LL);
  if ( v10 >= 0 )
  {
    if ( !a2 )
      RtlSetActiveConsoleId(0xFFFFFFFFLL);
  }
  else
  {
    v10 = v17 != 0 ? -1073741267 : -1073741823;
    SetProtocolType(a2);
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 4) == 0
      || (v12 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
    {
      v12 = 0;
    }
    v13 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v12 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v14 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v11);
      LOBYTE(v15) = v13;
      LOBYTE(v16) = v12;
      WPP_RECORDER_AND_TRACE_SF_d(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v16,
        v15,
        *(_QWORD *)(v14 + 69416),
        4,
        3,
        14,
        (__int64)&WPP_30f900ad07153b515057d0b02bb8d839_Traceguids,
        v10);
    }
  }
  return (unsigned int)v10;
}
