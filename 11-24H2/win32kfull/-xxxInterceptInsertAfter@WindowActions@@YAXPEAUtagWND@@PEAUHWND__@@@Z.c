/*
 * XREFs of ?xxxInterceptInsertAfter@WindowActions@@YAXPEAUtagWND@@PEAUHWND__@@@Z @ 0x1402CE934
 * Callers:
 *     ShellWindowPos::_anonymous_namespace_::xxxSnapArrangeWindow @ 0x1402C1A28 (ShellWindowPos--_anonymous_namespace_--xxxSnapArrangeWindow.c)
 * Callees:
 *     xxxSendTransformableMessageTimeout @ 0x140042064 (xxxSendTransformableMessageTimeout.c)
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x1400A4BAC (WPP_RECORDER_AND_TRACE_SF_qq.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

void __fastcall WindowActions::xxxInterceptInsertAfter(struct tagTHREADINFO **this, struct tagWND *a2, HWND a3)
{
  char v5; // si
  char v6; // di
  struct tagTHREADINFO *v7; // rbx
  __int64 UserSessionState; // rax
  int v9; // r8d
  int v10; // edx
  _DWORD v11[8]; // [rsp+50h] [rbp-98h] BYREF
  struct tagWND *v12; // [rsp+70h] [rbp-78h]

  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
    || (v5 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
  {
    v5 = 0;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || (v6 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
  {
    v6 = 0;
  }
  if ( v5 || v6 )
  {
    v7 = *this;
    UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, a2);
    LOBYTE(v9) = v6;
    LOBYTE(v10) = v5;
    WPP_RECORDER_AND_TRACE_SF_qq(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v10,
      v9,
      *(_QWORD *)(UserSessionState + 69416),
      5,
      4,
      85,
      (__int64)&WPP_9fb880626b093ada35a87c290f7fa346_Traceguids,
      (char)v7,
      (char)a2);
  }
  memset_0(v11, 0, 0x60uLL);
  v11[0] = 8;
  v12 = a2;
  xxxSendTransformableMessageTimeout(this, 838LL, 0LL, (struct tagDRAWITEMSTRUCT *)v11, 0, 0, 0LL, 1, 1);
}
