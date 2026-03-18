/*
 * XREFs of W32AttachToSessionAndExecute__lambda_d5a4a1cec4c6c6aaf1690ff01b233436___ @ 0x1401E9004
 * Callers:
 *     RIMDeviceNotify @ 0x140151EB0 (RIMDeviceNotify.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x140017AD4 (W32GetCurrentWin32kSessionId.c)
 *     W32AttachToProcessAndExecute__lambda_d5a4a1cec4c6c6aaf1690ff01b233436___ @ 0x1401E8E88 (W32AttachToProcessAndExecute__lambda_d5a4a1cec4c6c6aaf1690ff01b233436___.c)
 *     RIMDeviceNotifyUsingAsyncInputWork @ 0x1401ECE9C (RIMDeviceNotifyUsingAsyncInputWork.c)
 */

__int64 __fastcall W32AttachToSessionAndExecute__lambda_d5a4a1cec4c6c6aaf1690ff01b233436_(unsigned int a1, _QWORD *a2)
{
  __int64 v4; // rcx
  unsigned int MaxSessionCount; // ebx
  __int64 v6; // rcx
  unsigned int v8; // ebx
  struct _KPROCESS *ReferencedSessionProcessWithTag; // rax
  struct _KPROCESS *v10; // rsi

  if ( a1 == (unsigned int)W32GetCurrentWin32kSessionId() )
  {
    if ( PsGetCurrentProcessWin32Process(v4) )
      return RIMDeviceNotifyUsingAsyncInputWork(*a2, a2[1]);
    MaxSessionCount = W32GetMaxSessionCount();
    if ( (unsigned int)W32GetCurrentWin32kSessionId() < MaxSessionCount && W32GetSessionState(v6) )
      return RIMDeviceNotifyUsingAsyncInputWork(*a2, a2[1]);
    else
      return 3221225485LL;
  }
  else
  {
    v8 = -1073741811;
    ReferencedSessionProcessWithTag = (struct _KPROCESS *)W32GetReferencedSessionProcessWithTag(a1, 1198682965LL, 0LL);
    v10 = ReferencedSessionProcessWithTag;
    if ( ReferencedSessionProcessWithTag )
    {
      v8 = W32AttachToProcessAndExecute__lambda_d5a4a1cec4c6c6aaf1690ff01b233436_(ReferencedSessionProcessWithTag, a2);
      ObfDereferenceObjectWithTag(v10, 0x47727355u);
    }
    return v8;
  }
}
