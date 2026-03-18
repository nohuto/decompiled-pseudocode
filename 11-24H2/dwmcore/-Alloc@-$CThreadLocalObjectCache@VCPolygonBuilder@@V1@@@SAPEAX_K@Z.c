/*
 * XREFs of ?Alloc@?$CThreadLocalObjectCache@VCPolygonBuilder@@V1@@@SAPEAX_K@Z @ 0x18017FAEC
 * Callers:
 *     ?AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@@Z @ 0x1800C7090 (-AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAtt.c)
 *     ?Initialize@CCpuClipAntialiasSink@@AEAAJGPEBV?$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialiasSink@@@@PEBVCShape@@AEBVCMILMatrix@@@Z @ 0x180176590 (-Initialize@CCpuClipAntialiasSink@@AEAAJGPEBV-$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAn.c)
 *     ?GetOutline@CPolygonShape@@UEBAJPEAUID2D1GeometrySink@@@Z @ 0x18017F5D0 (-GetOutline@CPolygonShape@@UEBAJPEAUID2D1GeometrySink@@@Z.c)
 * Callees:
 *     ?GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z @ 0x180018090 (-GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18024634C (ModuleFailFastForHRESULT.c)
 */

_QWORD *CThreadLocalObjectCache<CPolygonBuilder,CPolygonBuilder>::Alloc()
{
  int Current; // eax
  struct CThreadContext *v1; // rdx
  _QWORD *v2; // rcx
  int v3; // r8d
  HANDLE ProcessHeap; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]
  struct CThreadContext *v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = 0LL;
  Current = CThreadContext::GetCurrent(&v7);
  if ( Current < 0 )
    ModuleFailFastForHRESULT(Current, retaddr);
  v1 = v7;
  v2 = 0LL;
  v3 = *((_DWORD *)v7 + 29);
  if ( v3 )
  {
    v2 = (_QWORD *)*((_QWORD *)v7 + 15);
    *((_QWORD *)v7 + 15) = *v2;
    *((_DWORD *)v1 + 29) = v3 - 1;
  }
  if ( !v2 )
  {
    ProcessHeap = GetProcessHeap();
    return HeapAlloc(ProcessHeap, 0, 0x168uLL);
  }
  return v2;
}
