/*
 * XREFs of ?AllocateOcclusionInfo@CVisual@@MEAA?AV?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@I@Z @ 0x1801CA680
 * Callers:
 *     <none>
 * Callees:
 *     ModuleFailFastForHRESULT @ 0x18024634C (ModuleFailFastForHRESULT.c)
 */

_QWORD *__fastcall CVisual::AllocateOcclusionInfo(__int64 a1, _QWORD *a2, int a3)
{
  HANDLE ProcessHeap; // rax
  _QWORD *v7; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  ProcessHeap = GetProcessHeap();
  v7 = HeapAlloc(ProcessHeap, 0, 0x30uLL);
  if ( !v7 )
    ModuleFailFastForHRESULT(-2147024882, retaddr);
  v7[1] = a1;
  *v7 = &CVisualOcclusionInfo::`vftable';
  v7[2] = 0LL;
  *((_DWORD *)v7 + 8) = a3;
  *a2 = v7;
  return a2;
}
