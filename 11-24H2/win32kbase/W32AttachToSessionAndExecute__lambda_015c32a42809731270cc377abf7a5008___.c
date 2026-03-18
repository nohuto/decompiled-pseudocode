/*
 * XREFs of W32AttachToSessionAndExecute__lambda_015c32a42809731270cc377abf7a5008___ @ 0x1401F2964
 * Callers:
 *     ?RIMOnTTMDeviceSetInputMode@@YAJ_KW4_WIN32K_INPUT_MODE@@@Z @ 0x1401F2B10 (-RIMOnTTMDeviceSetInputMode@@YAJ_KW4_WIN32K_INPUT_MODE@@@Z.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x140017AD4 (W32GetCurrentWin32kSessionId.c)
 *     W32AttachToProcessAndExecute__lambda_015c32a42809731270cc377abf7a5008___ @ 0x1401F28B4 (W32AttachToProcessAndExecute__lambda_015c32a42809731270cc377abf7a5008___.c)
 *     _lambda_015c32a42809731270cc377abf7a5008_::operator() @ 0x1401F2A28 (_lambda_015c32a42809731270cc377abf7a5008_--operator().c)
 */

__int64 __fastcall W32AttachToSessionAndExecute__lambda_015c32a42809731270cc377abf7a5008_(unsigned int a1, __int64 a2)
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
      return lambda_015c32a42809731270cc377abf7a5008_::operator()(a2);
    MaxSessionCount = W32GetMaxSessionCount();
    if ( (unsigned int)W32GetCurrentWin32kSessionId() < MaxSessionCount && W32GetSessionState(v6) )
      return lambda_015c32a42809731270cc377abf7a5008_::operator()(a2);
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
      v8 = W32AttachToProcessAndExecute__lambda_015c32a42809731270cc377abf7a5008_(ReferencedSessionProcessWithTag, a2);
      ObfDereferenceObjectWithTag(v10, 0x47727355u);
    }
    return v8;
  }
}
