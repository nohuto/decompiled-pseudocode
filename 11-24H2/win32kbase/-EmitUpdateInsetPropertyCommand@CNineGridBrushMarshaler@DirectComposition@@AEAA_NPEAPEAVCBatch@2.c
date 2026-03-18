/*
 * XREFs of ?EmitUpdateInsetPropertyCommand@CNineGridBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@W4NineGridBrushMarshalerFlag@12@KM@Z @ 0x1400EBE80
 * Callers:
 *     ?EmitUpdateCommands@CNineGridBrushMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1400EBC30 (-EmitUpdateCommands@CNineGridBrushMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x14007F480 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CNineGridBrushMarshaler::EmitUpdateInsetPropertyCommand(
        __int64 a1,
        struct DirectComposition::CBatch **a2,
        int a3,
        int a4,
        int a5)
{
  char v8; // bl
  _DWORD *v9; // rcx
  int v10; // eax
  _DWORD *v12; // [rsp+30h] [rbp+8h] BYREF

  if ( (a3 & *(_DWORD *)(a1 + 16)) == 0 )
    return 1;
  v8 = 0;
  v12 = 0LL;
  if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x14uLL, (void **)&v12) )
  {
    v9 = v12;
    *v12 = 20;
    *(_OWORD *)(v9 + 1) = 0LL;
    v9[1] = 255;
    v10 = *(_DWORD *)(a1 + 32);
    v9[4] = a5;
    v9[2] = v10;
    v9[3] = a4;
    *(_DWORD *)(a1 + 16) &= ~a3;
    return 1;
  }
  return v8;
}
