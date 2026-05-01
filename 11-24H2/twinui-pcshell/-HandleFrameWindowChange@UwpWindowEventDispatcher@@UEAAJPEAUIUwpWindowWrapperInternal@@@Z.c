/*
 * XREFs of ?HandleFrameWindowChange@UwpWindowEventDispatcher@@UEAAJPEAUIUwpWindowWrapperInternal@@@Z @ 0x18017CA10
 * Callers:
 *     <none>
 * Callees:
 *     ?HandleForegroundWindow@UwpWindowEventDispatcher@@AEAAXPEAUHWND__@@@Z @ 0x18017CA60 (-HandleForegroundWindow@UwpWindowEventDispatcher@@AEAAXPEAUHWND__@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall UwpWindowEventDispatcher::HandleFrameWindowChange(
        UwpWindowEventDispatcher *this,
        struct IUwpWindowWrapperInternal *a2)
{
  HWND v3; // rdi
  const char *v5; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = (HWND)*((_QWORD *)this + 56);
  if ( v3 == (HWND)(*(__int64 (__fastcall **)(struct IUwpWindowWrapperInternal *))(*(_QWORD *)a2 + 352LL))(a2) )
  {
    try
    {
      UwpWindowEventDispatcher::HandleForegroundWindow((UwpWindowEventDispatcher *)((char *)this - 16), v3);
    }
    catch ( ... )
    {
      wil::details::in1diag3::Log_CaughtException(
        retaddr,
        (void *)0x805,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
        v5);
    }
  }
  return 0LL;
}
