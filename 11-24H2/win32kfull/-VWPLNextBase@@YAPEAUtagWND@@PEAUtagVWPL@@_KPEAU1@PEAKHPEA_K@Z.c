/*
 * XREFs of ?VWPLNextBase@@YAPEAUtagWND@@PEAUtagVWPL@@_KPEAU1@PEAKHPEA_K@Z @ 0x140066F4C
 * Callers:
 *     xxxSendMinRectMessages @ 0x14003CD64 (xxxSendMinRectMessages.c)
 *     ?_PostShellHookMsgWorker@@YAXI_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x140066E58 (-_PostShellHookMsgWorker@@YAXI_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 * Callees:
 *     <none>
 */

struct tagWND *__fastcall VWPLNextBase(struct tagVWPL *a1, __int64 a2, struct tagWND *a3, unsigned int *a4)
{
  unsigned int v4; // edx
  unsigned int v5; // r10d

  if ( a1 && !*((_DWORD *)a1 + 3) )
  {
    v4 = *a4;
    v5 = *(_DWORD *)a1;
    if ( *a4 < *(_DWORD *)a1 )
    {
      if ( *((struct tagWND **)a1 + 2 * v4 + 3) != a3 )
        return (struct tagWND *)*((_QWORD *)a1 + 2 * v4 + 3);
      *a4 = ++v4;
      if ( v4 < v5 )
        return (struct tagWND *)*((_QWORD *)a1 + 2 * v4 + 3);
    }
    *a4 = 0;
  }
  return 0LL;
}
