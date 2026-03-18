/*
 * XREFs of ?AddNamedInput@CRenderingTechniqueFragment@@QEAAXI@Z @ 0x1800476C0
 * Callers:
 *     ?AddNamedInputToFragment@CBrushRenderingGraphBuilder@@IEAAXPEAVCRenderingTechniqueFragment@@AEBUGraphInputParameters@CBrushRenderingGraph@@@Z @ 0x1801FE80C (-AddNamedInputToFragment@CBrushRenderingGraphBuilder@@IEAAXPEAVCRenderingTechniqueFragment@@AEBU.c)
 * Callees:
 *     ??1?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@QEAA@XZ @ 0x180046500 (--1-$unique_ptr@VCRenderingTechniqueFragment@@U-$default_delete@VCRenderingTechniqueFragment@@@s.c)
 *     ??$_Emplace_reallocate@UFragmentInput@CRenderingTechniqueFragment@@@?$vector@UFragmentInput@CRenderingTechniqueFragment@@V?$allocator@UFragmentInput@CRenderingTechniqueFragment@@@std@@@std@@AEAAPEAUFragmentInput@CRenderingTechniqueFragment@@QEAU23@$$QEAU23@@Z @ 0x18004658C (--$_Emplace_reallocate@UFragmentInput@CRenderingTechniqueFragment@@@-$vector@UFragmentInput@CRen.c)
 */

void __fastcall CRenderingTechniqueFragment::AddNamedInput(CRenderingTechniqueFragment *this, int a2)
{
  __int64 *v2; // rdx
  __int64 v3; // [rsp+20h] [rbp-18h] BYREF
  CRenderingTechniqueFragment *v4; // [rsp+28h] [rbp-10h] BYREF

  LODWORD(v3) = a2;
  v2 = (__int64 *)*((_QWORD *)this + 5);
  v4 = 0LL;
  BYTE4(v3) = 0;
  if ( v2 == *((__int64 **)this + 6) )
  {
    std::vector<CRenderingTechniqueFragment::FragmentInput>::_Emplace_reallocate<CRenderingTechniqueFragment::FragmentInput>(
      (__int64)this + 32,
      v2,
      &v3);
  }
  else
  {
    *v2 = v3;
    v2[1] = 0LL;
    *((_QWORD *)this + 5) += 16LL;
  }
  std::unique_ptr<CRenderingTechniqueFragment>::~unique_ptr<CRenderingTechniqueFragment>(&v4);
}
