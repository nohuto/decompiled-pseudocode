/*
 * XREFs of _anonymous_namespace_::OnForegroundWindowChanged @ 0x1C0139454
 * Callers:
 *     ?ResetForegroundQueue@@YAXW4SetFgQueueOption@@@Z @ 0x1C013953C (-ResetForegroundQueue@@YAXW4SetFgQueueOption@@@Z.c)
 *     ?SetNewForegroundQueue2@@YAXPEAUtagQ@@W4SetFgQueueOption@@@Z @ 0x1C013962C (-SetNewForegroundQueue2@@YAXPEAUtagQ@@W4SetFgQueueOption@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x1C0044C94 (WPP_RECORDER_AND_TRACE_SF_qq.c)
 */

void __fastcall anonymous_namespace_::OnForegroundWindowChanged(
        GroupedProcessForegroundBoost *a1,
        const struct tagWND *a2)
{
  GroupedProcessForegroundBoost *v2; // rbx
  __int64 v4; // r8
  __int64 v5; // rax

  v2 = a2;
  LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( v2 )
      v4 = *(_QWORD *)v2;
    else
      v4 = 0LL;
    if ( a1 )
      v5 = *(_QWORD *)a1;
    else
      v5 = 0LL;
    WPP_RECORDER_AND_TRACE_SF_qq(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      (char)a2,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      (__int64)gFullLog,
      4u,
      2u,
      0xDu,
      (__int64)&WPP_998a63ff47c63414c5882e9b8cb70cf1_Traceguids,
      v5,
      v4);
  }
  if ( a1 )
    GroupedProcessForegroundBoost::ApplyDeBoost(a1, a2);
  if ( v2 )
    GroupedProcessForegroundBoost::ApplyBoost(v2, a2);
}
