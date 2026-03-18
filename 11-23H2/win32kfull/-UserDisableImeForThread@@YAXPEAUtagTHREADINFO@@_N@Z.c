/*
 * XREFs of ?UserDisableImeForThread@@YAXPEAUtagTHREADINFO@@_N@Z @ 0x1C0080E34
 * Callers:
 *     NtUserDisableThreadIme @ 0x1C0080D60 (NtUserDisableThreadIme.c)
 *     ?UserDisableImeForProcess@@YAXPEAUtagPROCESSINFO@@@Z @ 0x1C0080DFC (-UserDisableImeForProcess@@YAXPEAUtagPROCESSINFO@@@Z.c)
 * Callees:
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C00374DC (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 *     xxxDestroyWindow @ 0x1C00F2000 (xxxDestroyWindow.c)
 */

void __fastcall UserDisableImeForThread(struct tagTHREADINFO *a1, char a2)
{
  unsigned __int64 *v2; // rax

  *((_DWORD *)a1 + 122) |= 0x2000000u;
  v2 = (unsigned __int64 *)*((_QWORD *)a1 + 98);
  if ( v2 )
  {
    if ( a2 )
      xxxDestroyWindow(*((_QWORD *)a1 + 98));
    else
      PostEventMessageEx(a1, *((struct tagQ **)a1 + 54), 8u, 0LL, 0, *v2, 0LL, 0LL);
  }
}
