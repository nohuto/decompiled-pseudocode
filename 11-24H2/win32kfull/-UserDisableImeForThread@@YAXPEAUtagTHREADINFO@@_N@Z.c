/*
 * XREFs of ?UserDisableImeForThread@@YAXPEAUtagTHREADINFO@@_N@Z @ 0x1401FE2A4
 * Callers:
 *     NtUserDisableThreadIme @ 0x1401FC340 (NtUserDisableThreadIme.c)
 *     ?UserDisableImeForProcess@@YAXPEAUtagPROCESSINFO@@@Z @ 0x14023843C (-UserDisableImeForProcess@@YAXPEAUtagPROCESSINFO@@@Z.c)
 * Callees:
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x140118D30 (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 *     xxxDestroyWindow @ 0x14015EF90 (xxxDestroyWindow.c)
 */

void __fastcall UserDisableImeForThread(struct tagTHREADINFO *a1, __int64 a2)
{
  LARGE_INTEGER *v2; // rax

  _InterlockedOr((volatile signed __int32 *)a1 + 132, 0x2000000u);
  v2 = (LARGE_INTEGER *)*((_QWORD *)a1 + 103);
  if ( v2 )
  {
    if ( (_BYTE)a2 )
      xxxDestroyWindow(*((struct tagWND **)a1 + 103), a2);
    else
      PostEventMessageEx(a1, *((struct tagQ **)a1 + 59), 8u, 0LL, 0, *v2, 0LL, 0LL);
  }
}
