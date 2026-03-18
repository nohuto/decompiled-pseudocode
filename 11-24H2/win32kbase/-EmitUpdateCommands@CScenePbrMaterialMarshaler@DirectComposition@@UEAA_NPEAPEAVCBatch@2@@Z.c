/*
 * XREFs of ?EmitUpdateCommands@CScenePbrMaterialMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1402289D0
 * Callers:
 *     ?EmitUpdateCommands@CSceneMetallicRoughnessMaterialMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x140228720 (-EmitUpdateCommands@CSceneMetallicRoughnessMaterialMarshaler@DirectComposition@@UEAA_NPEAPEAVCBa.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x14007F480 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?EmitSetAlphaModeCommand@CScenePbrMaterialMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1402258E4 (-EmitSetAlphaModeCommand@CScenePbrMaterialMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetEmissiveFactorCommand@CScenePbrMaterialMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1402261AC (-EmitSetEmissiveFactorCommand@CScenePbrMaterialMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@.c)
 *     ?EmitSetEmissiveInputCommand@CScenePbrMaterialMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x14022622C (-EmitSetEmissiveInputCommand@CScenePbrMaterialMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2.c)
 *     ?EmitSetIsDoubleSidedCommand@CScenePbrMaterialMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x14022641C (-EmitSetIsDoubleSidedCommand@CScenePbrMaterialMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2.c)
 *     ?EmitSetNormalInputCommand@CScenePbrMaterialMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x140226510 (-EmitSetNormalInputCommand@CScenePbrMaterialMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@.c)
 *     ?EmitSetNormalScaleCommand@CScenePbrMaterialMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x140226594 (-EmitSetNormalScaleCommand@CScenePbrMaterialMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@.c)
 *     ?EmitSetOcclusionInputCommand@CScenePbrMaterialMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x140226604 (-EmitSetOcclusionInputCommand@CScenePbrMaterialMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@.c)
 *     ?EmitSetOcclusionStrengthCommand@CScenePbrMaterialMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x140226688 (-EmitSetOcclusionStrengthCommand@CScenePbrMaterialMarshaler@DirectComposition@@AEAA_NPEAPEAVCBat.c)
 */

char __fastcall DirectComposition::CScenePbrMaterialMarshaler::EmitUpdateCommands(
        DirectComposition::CScenePbrMaterialMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v2; // bl
  _DWORD *v5; // rcx
  _DWORD *v7; // [rsp+40h] [rbp+18h] BYREF

  v2 = 0;
  if ( (*((_DWORD *)this + 4) & 0x20) != 0 )
  {
    v7 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, (void **)&v7) )
      return v2;
    v5 = v7;
    *v7 = 16;
    *(_QWORD *)(v5 + 1) = 0LL;
    v5[3] = 0;
    v5[1] = 612;
    v5[2] = *((_DWORD *)this + 8);
    v5[3] = *((_DWORD *)this + 14);
    *((_DWORD *)this + 4) &= ~0x20u;
  }
  if ( DirectComposition::CScenePbrMaterialMarshaler::EmitSetAlphaModeCommand(this, a2)
    && DirectComposition::CScenePbrMaterialMarshaler::EmitSetEmissiveInputCommand(this, a2)
    && DirectComposition::CScenePbrMaterialMarshaler::EmitSetEmissiveFactorCommand(this, a2)
    && DirectComposition::CScenePbrMaterialMarshaler::EmitSetIsDoubleSidedCommand(this, a2)
    && DirectComposition::CScenePbrMaterialMarshaler::EmitSetNormalInputCommand(this, a2)
    && DirectComposition::CScenePbrMaterialMarshaler::EmitSetNormalScaleCommand(this, a2)
    && DirectComposition::CScenePbrMaterialMarshaler::EmitSetOcclusionInputCommand(this, a2)
    && DirectComposition::CScenePbrMaterialMarshaler::EmitSetOcclusionStrengthCommand(this, a2) )
  {
    return 1;
  }
  return v2;
}
