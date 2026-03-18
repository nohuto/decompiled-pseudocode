/*
 * XREFs of ?Set@CDesktopInputSink@@AEAA_NPEAXAEBU_LUID@@@Z @ 0x14020FFA4
 * Callers:
 *     ?SetDesktopInputSink@CDesktopInputSink@@SA_NPEAXAEBU_LUID@@@Z @ 0x14015BF68 (-SetDesktopInputSink@CDesktopInputSink@@SA_NPEAXAEBU_LUID@@@Z.c)
 * Callees:
 *     ?ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x14004A450 (-ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x14005DCC0 (WPP_RECORDER_AND_TRACE_SF_q.c)
 */

char __fastcall CDesktopInputSink::Set(CDesktopInputSink *this, void *a2, const struct _LUID *a3)
{
  char v3; // bp
  char v4; // bl
  bool v7; // di
  bool v8; // si
  __int64 v9; // rax
  int v10; // r8d
  int v11; // edx
  bool v13; // di
  __int64 UserSessionState; // rax
  int v15; // r8d
  int v16; // edx

  v3 = (char)a2;
  v4 = 1;
  if ( (int)CompositionInputObject::ResolveHandle(a2, 1u, 1, (struct CompositionInputObject **)this + 2) < 0 )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
    {
      v4 = 0;
    }
    v13 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
      LOBYTE(v15) = v13;
      LOBYTE(v16) = v4;
      WPP_RECORDER_AND_TRACE_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v16,
        v15,
        *(_QWORD *)(UserSessionState + 69400),
        2,
        2,
        17,
        (__int64)&WPP_476bf90e779730ded759a21f7207b574_Traceguids,
        v3);
    }
    return 0;
  }
  else
  {
    *((struct _LUID *)this + 3) = *a3;
    v7 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v8 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v9 = W32GetUserSessionState(WPP_GLOBAL_Control);
      LOBYTE(v10) = v8;
      LOBYTE(v11) = v7;
      WPP_RECORDER_AND_TRACE_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v11,
        v10,
        *(_QWORD *)(v9 + 69400),
        4,
        2,
        16,
        (__int64)&WPP_476bf90e779730ded759a21f7207b574_Traceguids,
        v3);
    }
    return 1;
  }
}
