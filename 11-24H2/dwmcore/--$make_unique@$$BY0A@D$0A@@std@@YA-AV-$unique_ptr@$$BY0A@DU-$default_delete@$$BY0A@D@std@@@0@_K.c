/*
 * XREFs of ??$make_unique@$$BY0A@D$0A@@std@@YA?AV?$unique_ptr@$$BY0A@DU?$default_delete@$$BY0A@D@std@@@0@_K@Z @ 0x1801CB130
 * Callers:
 *     ?SetOwnerProcessName@CChannelContext@@QEAAXPEBDI@Z @ 0x1801CB084 (-SetOwnerProcessName@CChannelContext@@QEAAXPEBDI@Z.c)
 *     ?Print@DwmDbg@@YAXQEBDZZ @ 0x1802AEE4C (-Print@DwmDbg@@YAXQEBDZZ.c)
 * Callees:
 *     ModuleFailFastForHRESULT @ 0x18024634C (ModuleFailFastForHRESULT.c)
 *     memset_0 @ 0x180251AD8 (memset_0.c)
 */

_QWORD *__fastcall std::make_unique<char [0],0>(_QWORD *a1, SIZE_T a2)
{
  HANDLE ProcessHeap; // rax
  void *v5; // rax
  void *v6; // rbx
  void *retaddr; // [rsp+28h] [rbp+0h]

  ProcessHeap = GetProcessHeap();
  v5 = HeapAlloc(ProcessHeap, 0, a2);
  v6 = v5;
  if ( !v5 )
    ModuleFailFastForHRESULT(-2147024882, retaddr);
  memset_0(v5, 0, a2);
  *a1 = v6;
  return a1;
}
