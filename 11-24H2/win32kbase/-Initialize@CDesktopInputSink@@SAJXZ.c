/*
 * XREFs of ?Initialize@CDesktopInputSink@@SAJXZ @ 0x1401890C8
 * Callers:
 *     InitializeInputComponents @ 0x1401895D0 (InitializeInputComponents.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x1400185D0 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 */

__int64 __fastcall CDesktopInputSink::Initialize(__int64 a1)
{
  __int64 UserSessionState; // rbx
  _QWORD *v2; // rax
  char v4; // bl
  bool v5; // di
  __int64 v6; // rax
  int v7; // r8d
  int v8; // edx

  UserSessionState = W32GetUserSessionState(a1);
  v2 = (_QWORD *)Win32AllocPoolZInitImpl(256LL, 0x20uLL, 0x66747455u);
  if ( v2 )
  {
    *v2 = 0LL;
    v2[1] = 0LL;
    v2[2] = 0LL;
    v2[3] = 0LL;
    *(_QWORD *)(UserSessionState + 19184) = v2;
    return 0LL;
  }
  else
  {
    *(_QWORD *)(UserSessionState + 19184) = 0LL;
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) == 0
      || (v4 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
    {
      v4 = 0;
    }
    v5 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v6 = W32GetUserSessionState(WPP_GLOBAL_Control);
      LOBYTE(v7) = v5;
      LOBYTE(v8) = v4;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v8,
        v7,
        *(_QWORD *)(v6 + 69400),
        2,
        14,
        10,
        (__int64)&WPP_476bf90e779730ded759a21f7207b574_Traceguids);
    }
    return 3221225495LL;
  }
}
