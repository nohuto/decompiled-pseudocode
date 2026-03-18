/*
 * XREFs of ?EmitSetInputs@CEffectBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x140105FB4
 * Callers:
 *     ?EmitUpdateCommands@CEffectBrushMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x140105E30 (-EmitUpdateCommands@CEffectBrushMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x14007F480 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

bool __fastcall DirectComposition::CEffectBrushMarshaler::EmitSetInputs(
        DirectComposition::CEffectBrushMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char *v4; // rdx
  __int64 v5; // rax
  void *v7; // [rsp+30h] [rbp+8h] BYREF

  for ( ; *((_DWORD *)this + 25) < *((_DWORD *)this + 24); ++*((_DWORD *)this + 25) )
  {
    v7 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x14uLL, &v7) )
      break;
    v4 = (char *)v7;
    *(_DWORD *)v7 = 20;
    *(_OWORD *)(v4 + 4) = 0LL;
    *((_DWORD *)v4 + 1) = 129;
    *((_DWORD *)v4 + 2) = *((_DWORD *)this + 8);
    *((_DWORD *)v4 + 3) = *((_DWORD *)this + 25);
    v5 = *(_QWORD *)(*((_QWORD *)this + 11) + 8LL * *((unsigned int *)this + 25));
    if ( v5 )
      LODWORD(v5) = *(_DWORD *)(v5 + 32);
    *((_DWORD *)v4 + 4) = v5;
  }
  return *((_DWORD *)this + 25) == *((_DWORD *)this + 24);
}
