/*
 * XREFs of DisassociateShellFrameAppThreads2 @ 0x1402881D8
 * Callers:
 *     NtUserAttachThreadInput @ 0x1401E1D30 (NtUserAttachThreadInput.c)
 *     ?xxxDestroyWindow_Phase3@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@H@Z @ 0x1402B4438 (-xxxDestroyWindow_Phase3@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@H@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DisassociateShellFrameAppThreads2(__int64 a1, __int64 a2)
{
  _QWORD **v4; // rax
  _QWORD *i; // rcx
  _QWORD *v6; // rdx
  _QWORD *v7; // rax

  v4 = (_QWORD **)(W32GetUserSessionState(a1, a2) + 19160);
  for ( i = *v4; i != v4; i = (_QWORD *)*i )
  {
    if ( i[2] == a1 && i[3] == a2 )
      goto LABEL_7;
  }
  i = 0LL;
LABEL_7:
  *(_QWORD *)(a2 + 1360) &= ~0x80000uLL;
  if ( i )
  {
    v6 = (_QWORD *)*i;
    if ( *(_QWORD **)(*i + 8LL) != i || (v7 = (_QWORD *)i[1], (_QWORD *)*v7 != i) )
      __fastfail(3u);
    *v7 = v6;
    v6[1] = v7;
    Win32FreePool(i);
  }
}
