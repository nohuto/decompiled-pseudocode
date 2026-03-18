/*
 * XREFs of ?EmitUpdateCommands@CSceneMetallicRoughnessMaterialMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x140228720
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x14007F480 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?EmitSetMetallicRoughnessInputCommand@CSceneMetallicRoughnessMaterialMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x14022648C (-EmitSetMetallicRoughnessInputCommand@CSceneMetallicRoughnessMaterialMarshaler@DirectComposition.c)
 *     ?EmitSetRoughnessFactorCommand@CSceneMetallicRoughnessMaterialMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1402269E0 (-EmitSetRoughnessFactorCommand@CSceneMetallicRoughnessMaterialMarshaler@DirectComposition@@AEAA_.c)
 *     ?EmitUpdateCommands@CScenePbrMaterialMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1402289D0 (-EmitUpdateCommands@CScenePbrMaterialMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z.c)
 */

char __fastcall DirectComposition::CSceneMetallicRoughnessMaterialMarshaler::EmitUpdateCommands(
        DirectComposition::CSceneMetallicRoughnessMaterialMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // bl
  int v5; // eax
  char *v6; // rcx
  __int64 v7; // rax
  int v8; // eax
  char *v9; // rcx
  char *v10; // rcx
  void *v12; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0;
  if ( DirectComposition::CScenePbrMaterialMarshaler::EmitUpdateCommands(this, a2) )
  {
    v5 = *((_DWORD *)this + 4);
    if ( (v5 & 0x4000) != 0 )
    {
      v12 = 0LL;
      if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v12) )
        return v4;
      v6 = (char *)v12;
      *(_DWORD *)v12 = 16;
      *(_QWORD *)(v6 + 4) = 0LL;
      *((_DWORD *)v6 + 3) = 0;
      *((_DWORD *)v6 + 1) = 601;
      *((_DWORD *)v6 + 2) = *((_DWORD *)this + 8);
      v7 = *((_QWORD *)this + 15);
      if ( v7 )
        v8 = *(_DWORD *)(v7 + 32);
      else
        v8 = 0;
      *((_DWORD *)v6 + 3) = v8;
      *((_DWORD *)this + 4) &= ~0x4000u;
      v5 = *((_DWORD *)this + 4);
    }
    if ( (v5 & 0x8000) != 0 )
    {
      v12 = 0LL;
      if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x1CuLL, &v12) )
        return v4;
      v9 = (char *)v12;
      *(_DWORD *)v12 = 28;
      *(_OWORD *)(v9 + 4) = 0LL;
      *(_QWORD *)(v9 + 20) = 0LL;
      *((_DWORD *)v9 + 1) = 602;
      *((_DWORD *)v9 + 2) = *((_DWORD *)this + 8);
      *(_OWORD *)(v9 + 12) = *((_OWORD *)this + 8);
      *((_DWORD *)this + 4) &= ~0x8000u;
      v5 = *((_DWORD *)this + 4);
    }
    if ( (v5 & 0x10000) != 0 )
    {
      v12 = 0LL;
      if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v12) )
        return v4;
      v10 = (char *)v12;
      *(_DWORD *)v12 = 16;
      *(_QWORD *)(v10 + 4) = 0LL;
      *((_DWORD *)v10 + 3) = 0;
      *((_DWORD *)v10 + 1) = 603;
      *((_DWORD *)v10 + 2) = *((_DWORD *)this + 8);
      *((_DWORD *)v10 + 3) = *((_DWORD *)this + 36);
      *((_DWORD *)this + 4) &= ~0x10000u;
    }
    if ( DirectComposition::CSceneMetallicRoughnessMaterialMarshaler::EmitSetMetallicRoughnessInputCommand(this, a2)
      && DirectComposition::CSceneMetallicRoughnessMaterialMarshaler::EmitSetRoughnessFactorCommand(this, a2) )
    {
      return 1;
    }
  }
  return v4;
}
