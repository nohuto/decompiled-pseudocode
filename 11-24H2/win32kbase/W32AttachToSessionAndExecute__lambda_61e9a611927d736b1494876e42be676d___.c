/*
 * XREFs of W32AttachToSessionAndExecute__lambda_61e9a611927d736b1494876e42be676d___ @ 0x1401E8F3C
 * Callers:
 *     RIMDeviceClassNotify @ 0x140132620 (RIMDeviceClassNotify.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x140017AD4 (W32GetCurrentWin32kSessionId.c)
 *     W32AttachToProcessAndExecute__lambda_61e9a611927d736b1494876e42be676d___ @ 0x1401E8DD4 (W32AttachToProcessAndExecute__lambda_61e9a611927d736b1494876e42be676d___.c)
 *     RIMDeviceClassNotifyUsingAsyncInputWork @ 0x1401ECBE0 (RIMDeviceClassNotifyUsingAsyncInputWork.c)
 */

__int64 __fastcall W32AttachToSessionAndExecute__lambda_61e9a611927d736b1494876e42be676d_(unsigned int a1, _QWORD *a2)
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
      return RIMDeviceClassNotifyUsingAsyncInputWork(*a2, a2[1]);
    MaxSessionCount = W32GetMaxSessionCount();
    if ( (unsigned int)W32GetCurrentWin32kSessionId() < MaxSessionCount && W32GetSessionState(v6) )
      return RIMDeviceClassNotifyUsingAsyncInputWork(*a2, a2[1]);
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
      v8 = W32AttachToProcessAndExecute__lambda_61e9a611927d736b1494876e42be676d_(ReferencedSessionProcessWithTag, a2);
      ObfDereferenceObjectWithTag(v10, 0x47727355u);
    }
    return v8;
  }
}
