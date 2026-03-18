/*
 * XREFs of ?_AttemptToCoalesceOrDestroyMessage@@YAXPEAUtagTHREADINFO@@PEAUtagQMSG@@@Z @ 0x14021D768
 * Callers:
 *     ?_HandleShellHandwritingDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z @ 0x14008B0C0 (-_HandleShellHandwritingDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z.c)
 * Callees:
 *     DelQEntry @ 0x14008E870 (DelQEntry.c)
 *     IsPointerInputMessage @ 0x14008EC20 (IsPointerInputMessage.c)
 *     ?CleanEventMessage@@YAXPEAUtagQMSG@@@Z @ 0x14008EC50 (-CleanEventMessage@@YAXPEAUtagQMSG@@@Z.c)
 *     DelegateReleasePointerMessage @ 0x14008EF5C (DelegateReleasePointerMessage.c)
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x1400A4BAC (WPP_RECORDER_AND_TRACE_SF_qq.c)
 */

void __fastcall _AttemptToCoalesceOrDestroyMessage(struct tagTHREADINFO *a1, struct tagQMSG *a2)
{
  __int64 v4; // rdx
  char v5; // di
  __int64 v6; // rdx
  __int64 v7; // rbp
  struct tagQMSG *v8; // r14
  char v9; // bl
  __int64 UserSessionState; // rax
  int v11; // r8d
  int v12; // edx

  v5 = 1;
  if ( !(unsigned int)IsPointerInputMessage(*((unsigned int *)a2 + 6))
    || !(unsigned int)DelegateReleasePointerMessage((__int64)a1, v4) )
  {
    CleanEventMessage(a2);
    DelQEntry(*((_QWORD *)a1 + 59) + 24LL, (__int64 *)a2, 1);
  }
  v7 = *((_QWORD *)a1 + 59);
  v8 = *(struct tagQMSG **)(v7 + 88);
  if ( v8 == a2 )
  {
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x20000) == 0
      || (v9 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
    {
      v9 = 0;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL) )
    {
      v5 = 0;
    }
    if ( v9 || v5 )
    {
      UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v6);
      LOBYTE(v11) = v5;
      LOBYTE(v12) = v9;
      WPP_RECORDER_AND_TRACE_SF_qq(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v12,
        v11,
        *(_QWORD *)(UserSessionState + 69416),
        5,
        18,
        15,
        (__int64)&WPP_da3158d35553345ce8aff0ab01fc816b_Traceguids,
        v7,
        (char)v8);
    }
    *(_QWORD *)(*((_QWORD *)a1 + 59) + 88LL) = 0LL;
  }
}
