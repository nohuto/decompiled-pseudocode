/*
 * XREFs of ?Initialize@CFrameIdGenerator@@SAJXZ @ 0x140189444
 * Callers:
 *     InitializeInputComponents @ 0x1401895D0 (InitializeInputComponents.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x1400185D0 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?Initialize@CEResourceLock@@QEAA_NXZ @ 0x1401F3E0C (-Initialize@CEResourceLock@@QEAA_NXZ.c)
 */

__int64 __fastcall CFrameIdGenerator::Initialize(__int64 a1)
{
  __int64 UserSessionState; // rsi
  _DWORD *v2; // rax
  _DWORD *v3; // rbx
  char v4; // di
  bool v5; // bl
  __int64 v6; // rax
  int v7; // r8d
  int v8; // edx

  UserSessionState = W32GetUserSessionState(a1);
  v2 = (_DWORD *)Win32AllocPoolZInitImpl(256LL, 0x10uLL, 0x43486970u);
  v3 = v2;
  v4 = 1;
  if ( v2 )
  {
    *v2 = 1;
    *((_QWORD *)v2 + 1) = 0LL;
    CEResourceLock::Initialize((CEResourceLock *)(v2 + 2));
  }
  else
  {
    v3 = 0LL;
  }
  *(_QWORD *)(UserSessionState + 16728) = v3;
  if ( v3 )
    return 0LL;
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) == 0
    || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
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
      12,
      (__int64)&WPP_ae9eb3bdebde318a8206422ca8ad61bb_Traceguids);
  }
  return 3221225495LL;
}
