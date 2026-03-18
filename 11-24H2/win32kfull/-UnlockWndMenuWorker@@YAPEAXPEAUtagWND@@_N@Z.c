/*
 * XREFs of ?UnlockWndMenuWorker@@YAPEAXPEAUtagWND@@_N@Z @ 0x1401B9A28
 * Callers:
 *     ?FreeWindow_Phase3@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@PEAU?$Win32HMOptionalThreadLockAlways@UtagWND@@@@@Z @ 0x14002E8AC (-FreeWindow_Phase3@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@PEAU-$Win32HMOptionalThreadLockAlways@Utag.c)
 *     xxxSetWindowStyle @ 0x1400318F0 (xxxSetWindowStyle.c)
 *     xxxGetSystemMenu @ 0x1402C8A74 (xxxGetSystemMenu.c)
 *     xxxSetWindowData @ 0x1402DD148 (xxxSetWindowData.c)
 * Callees:
 *     <none>
 */

struct tagWND **__fastcall UnlockWndMenuWorker(struct tagWND *a1, unsigned __int8 a2)
{
  char *v3; // rsi
  char *v4; // rdi
  struct tagWND **result; // rax
  char *v6; // rcx

  v3 = (char *)a1 + 168;
  v4 = (char *)a1 + 160;
  result = (struct tagWND **)*((_QWORD *)a1 + (a2 ^ 1LL) + 20);
  if ( result )
  {
    if ( a1 == result[10] )
      HMAssignmentUnlock(result + 10);
    if ( a2 )
    {
      v6 = v4;
      *(_QWORD *)(*((_QWORD *)v4 - 15) + 160LL) = 0LL;
    }
    else
    {
      v6 = v3;
      *(_QWORD *)(*((_QWORD *)v3 - 16) + 152LL) = 0LL;
    }
    return (struct tagWND **)HMAssignmentUnlock(v6);
  }
  return result;
}
