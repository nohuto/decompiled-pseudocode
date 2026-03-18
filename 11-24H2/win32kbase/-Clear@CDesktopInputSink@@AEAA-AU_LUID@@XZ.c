/*
 * XREFs of ?Clear@CDesktopInputSink@@AEAA?AU_LUID@@XZ @ 0x14019D068
 * Callers:
 *     ?SetDesktopInputSink@CDesktopInputSink@@SA_NPEAXAEBU_LUID@@@Z @ 0x14015BF68 (-SetDesktopInputSink@CDesktopInputSink@@SA_NPEAXAEBU_LUID@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 */

struct _LUID __fastcall CDesktopInputSink::Clear(CDesktopInputSink *this, _QWORD *a2)
{
  __int64 v2; // rax
  void *v4; // rcx
  bool v6; // bl
  bool v7; // di
  __int64 UserSessionState; // rax
  int v9; // r8d
  int v10; // edx

  v2 = *((_QWORD *)this + 3);
  v4 = (void *)*((_QWORD *)this + 2);
  *a2 = v2;
  if ( v4 )
  {
    *((_QWORD *)this + 3) = 0LL;
    ObfDereferenceObject(v4);
    *((_QWORD *)this + 2) = 0LL;
    v6 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v7 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
      LOBYTE(v9) = v7;
      LOBYTE(v10) = v6;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v10,
        v9,
        *(_QWORD *)(UserSessionState + 69400),
        4,
        2,
        18,
        (__int64)&WPP_476bf90e779730ded759a21f7207b574_Traceguids);
    }
  }
  return (struct _LUID)a2;
}
