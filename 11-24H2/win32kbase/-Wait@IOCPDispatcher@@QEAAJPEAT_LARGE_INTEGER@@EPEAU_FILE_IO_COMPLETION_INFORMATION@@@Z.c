/*
 * XREFs of ?Wait@IOCPDispatcher@@QEAAJPEAT_LARGE_INTEGER@@EPEAU_FILE_IO_COMPLETION_INFORMATION@@@Z @ 0x1400D8340
 * Callers:
 *     UserKSTWait @ 0x1400BB4AC (UserKSTWait.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 */

__int64 __fastcall IOCPDispatcher::Wait(
        IOCPDispatcher *this,
        union _LARGE_INTEGER *a2,
        char a3,
        struct _FILE_IO_COMPLETION_INFORMATION *a4)
{
  bool v9; // bl
  bool v10; // di
  __int64 UserSessionState; // rax
  int v12; // r8d
  int v13; // edx
  _DWORD v14[6]; // [rsp+40h] [rbp-18h] BYREF

  v14[0] = 0;
  *(_OWORD *)&a4->KeyContext = 0LL;
  *(_OWORD *)&a4->IoStatusBlock.Status = 0LL;
  if ( !PsIsThreadTerminating(KeGetCurrentThread()) )
    return ZwRemoveIoCompletionEx(*((_QWORD *)this + 363), a4, 1LL, v14, a2, a3);
  v9 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
  v10 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
    LOBYTE(v12) = v10;
    LOBYTE(v13) = v9;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v13,
      v12,
      *(_QWORD *)(UserSessionState + 69400),
      2,
      2,
      26,
      (__int64)&WPP_a07c44b8f26832a02b5dbe6dbb74dde0_Traceguids);
  }
  return 3221225547LL;
}
