/*
 * XREFs of UnreferenceUndispatchedFrameList @ 0x1401BB3B0
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

void __fastcall UnreferenceUndispatchedFrameList(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  struct _LIST_ENTRY *v4; // rbx
  struct _LIST_ENTRY *Blink; // rdi
  struct _LIST_ENTRY *v6; // rax
  __int64 UserSessionState; // rax

  v4 = (struct _LIST_ENTRY *)((char *)PtiCurrent(a1, a2) + 1272);
  while ( v4->Flink != v4 )
  {
    Blink = v4->Blink;
    if ( Blink->Flink != v4 || (v6 = Blink->Blink, v6->Flink != Blink) )
      __fastfail(3u);
    v4->Blink = v6;
    v6->Flink = v4;
    Blink->Blink = Blink;
    Blink->Flink = Blink;
    UserSessionState = W32GetUserSessionState(v3, v2);
    CTouchProcessor::UnreferenceUndispatchedFrame(*(CTouchProcessor **)(UserSessionState + 3264), Blink);
  }
}
