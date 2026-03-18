/*
 * XREFs of ?Build@CBrushRenderingGraphBuilder@@AEAAJPEAVCBrush@@@Z @ 0x180046158
 * Callers:
 *     ?Build@CBrushRenderingGraphBuilder@@SAJPEAVCBrush@@PEAPEAVCBrushRenderingGraph@@@Z @ 0x18004708C (-Build@CBrushRenderingGraphBuilder@@SAJPEAVCBrush@@PEAPEAVCBrushRenderingGraph@@@Z.c)
 * Callees:
 *     ?CreateTechniqueForFragment@CBrushRenderingGraphBuilder@@IEAAJ$$QEAV?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@PEAI@Z @ 0x180044004 (-CreateTechniqueForFragment@CBrushRenderingGraphBuilder@@IEAAJ$$QEAV-$unique_ptr@VCRenderingTech.c)
 *     ?CreateShaderBodies@CBrushRenderingGraphBuilder@@IEAAJXZ @ 0x180045678 (-CreateShaderBodies@CBrushRenderingGraphBuilder@@IEAAJXZ.c)
 *     ?AddBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x1800462DC (-AddBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z.c)
 *     ??R?$default_delete@VCRenderingTechniqueFragment@@@std@@QEBAXPEAVCRenderingTechniqueFragment@@@Z @ 0x1800464D0 (--R-$default_delete@VCRenderingTechniqueFragment@@@std@@QEBAXPEAVCRenderingTechniqueFragment@@@Z.c)
 *     ??1?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@QEAA@XZ @ 0x180046500 (--1-$unique_ptr@VCRenderingTechniqueFragment@@U-$default_delete@VCRenderingTechniqueFragment@@@s.c)
 *     ?EnsureShaderCache@CBrushRenderingGraphBuilder@@IEAAJ_N@Z @ 0x180047C40 (-EnsureShaderCache@CBrushRenderingGraphBuilder@@IEAAJ_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CheckBackdropInputs@CBrushRenderingGraphBuilder@@IEAAXXZ @ 0x180089FE4 (-CheckBackdropInputs@CBrushRenderingGraphBuilder@@IEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CBrushRenderingGraphBuilder::Build(CBrushRenderingGraphBuilder *this, struct CBrush *a2)
{
  int v4; // ebx
  struct CRenderingTechniqueFragment *v5; // rdx
  int ShaderBodies; // eax
  char v7; // al
  unsigned int v9; // [rsp+20h] [rbp-30h]
  struct CRenderingTechniqueFragment *v10; // [rsp+38h] [rbp-18h] BYREF
  char v11; // [rsp+40h] [rbp-10h]
  int v12; // [rsp+80h] [rbp+30h] BYREF
  struct CRenderingTechniqueFragment *v13; // [rsp+88h] [rbp+38h] BYREF

  v13 = 0LL;
  v10 = 0LL;
  v11 = 1;
  v4 = CBrushRenderingGraphBuilder::AddBrush(this, a2, 0, &v10);
  if ( v11 )
  {
    v5 = v13;
    v13 = v10;
    if ( v5 )
      std::default_delete<CRenderingTechniqueFragment>::operator()();
  }
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x30u, 0LL);
    goto LABEL_11;
  }
  v12 = 0;
  ShaderBodies = CBrushRenderingGraphBuilder::CreateTechniqueForFragment(this, (__int64 *)&v13, &v12);
  v4 = ShaderBodies;
  if ( ShaderBodies < 0 )
  {
    v9 = 51;
  }
  else
  {
    v7 = (*(__int64 (__fastcall **)(struct CBrush *, __int64))(*(_QWORD *)a2 + 64LL))(a2, 107LL);
    ShaderBodies = CBrushRenderingGraphBuilder::EnsureShaderCache(this, v7);
    v4 = ShaderBodies;
    if ( ShaderBodies < 0 )
    {
      v9 = 53;
    }
    else
    {
      ShaderBodies = CBrushRenderingGraphBuilder::CreateShaderBodies(this);
      v4 = ShaderBodies;
      if ( ShaderBodies >= 0 )
      {
        CBrushRenderingGraphBuilder::CheckBackdropInputs(this);
        goto LABEL_11;
      }
      v9 = 54;
    }
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, ShaderBodies, v9, 0LL);
LABEL_11:
  std::unique_ptr<CRenderingTechniqueFragment>::~unique_ptr<CRenderingTechniqueFragment>(&v13);
  return (unsigned int)v4;
}
