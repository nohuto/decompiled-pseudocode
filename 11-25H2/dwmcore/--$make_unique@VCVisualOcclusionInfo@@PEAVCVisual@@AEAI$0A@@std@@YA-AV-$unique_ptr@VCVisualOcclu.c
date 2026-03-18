/*
 * XREFs of ??$make_unique@VCVisualOcclusionInfo@@PEAVCVisual@@AEAI$0A@@std@@YA?AV?$unique_ptr@VCVisualOcclusionInfo@@U?$default_delete@VCVisualOcclusionInfo@@@std@@@0@$$QEAPEAVCVisual@@AEAI@Z @ 0x1800CC170
 * Callers:
 *     ?GetOcclusionInfo@CTreeData@@QEAAPEAVCOcclusionInfo@@I_N@Z @ 0x1800CC750 (-GetOcclusionInfo@CTreeData@@QEAAPEAVCOcclusionInfo@@I_N@Z.c)
 * Callees:
 *     ModuleFailFastForHRESULT @ 0x18024A244 (ModuleFailFastForHRESULT.c)
 */

_QWORD *__fastcall std::make_unique<CVisualOcclusionInfo,CVisual *,unsigned int &,0>(_QWORD *a1, _QWORD *a2, int *a3)
{
  HANDLE ProcessHeap; // rax
  _QWORD *v7; // rax
  int v8; // edx
  void *retaddr; // [rsp+28h] [rbp+0h]

  ProcessHeap = GetProcessHeap();
  v7 = HeapAlloc(ProcessHeap, 0, 0x30uLL);
  if ( !v7 )
    ModuleFailFastForHRESULT(-2147024882, retaddr);
  v8 = *a3;
  v7[1] = *a2;
  *v7 = &CVisualOcclusionInfo::`vftable';
  v7[2] = 0LL;
  *((_DWORD *)v7 + 8) = v8;
  *a1 = v7;
  return a1;
}
