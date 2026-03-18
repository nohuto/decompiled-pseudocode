/*
 * XREFs of ?UT_CaretSet@@YAHPEAUtagWND@@@Z @ 0x140095308
 * Callers:
 *     zzzDestroyCaret @ 0x140094F8C (zzzDestroyCaret.c)
 *     NtUserHideCaret @ 0x140094FC0 (NtUserHideCaret.c)
 *     zzzSetCaretPos @ 0x1400950F8 (zzzSetCaretPos.c)
 *     zzzShowCaret @ 0x1400952E0 (zzzShowCaret.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 */

__int64 __fastcall UT_CaretSet(struct tagWND *a1, __int64 a2)
{
  struct tagTHREADINFO *v3; // rax
  unsigned int v4; // ebx
  struct tagTHREADINFO *v5; // r14
  __int64 v6; // rsi
  unsigned int ThreadId; // eax
  __int64 v8; // rcx
  __int64 v10; // rax

  v3 = PtiCurrent((__int64)a1, a2);
  v4 = 0;
  v5 = v3;
  v6 = *((_QWORD *)v3 + 59);
  if ( *(_QWORD *)(v6 + 344)
    && ((ThreadId = (unsigned int)PsGetThreadId(*(PETHREAD *)v3),
         v8 = *(unsigned int *)(v6 + 400),
         (_DWORD)v8 == ThreadId)
     || (v10 = PtiFromThreadId(v8)) != 0 && *((_QWORD *)v5 + 58) == *(_QWORD *)(v10 + 464)) )
  {
    if ( a1 )
    {
      LOBYTE(v4) = a1 == *(struct tagWND **)(v6 + 344);
      return v4;
    }
    else
    {
      return 1LL;
    }
  }
  else
  {
    UserSetLastError(5);
    return 0LL;
  }
}
