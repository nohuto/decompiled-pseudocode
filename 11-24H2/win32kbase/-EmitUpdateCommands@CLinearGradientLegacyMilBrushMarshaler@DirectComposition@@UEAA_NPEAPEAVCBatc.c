/*
 * XREFs of ?EmitUpdateCommands@CLinearGradientLegacyMilBrushMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x140227DD0
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x14007F480 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?EmitUpdateCommands@CGradientLegacyMilBrushMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x140227784 (-EmitUpdateCommands@CGradientLegacyMilBrushMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z.c)
 */

char __fastcall DirectComposition::CLinearGradientLegacyMilBrushMarshaler::EmitUpdateCommands(
        DirectComposition::CLinearGradientLegacyMilBrushMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // bl
  int v5; // eax
  char *v6; // rcx
  char *v7; // rcx
  void *v9; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0;
  if ( DirectComposition::CGradientLegacyMilBrushMarshaler::EmitUpdateCommands(this, a2) )
  {
    v5 = *((_DWORD *)this + 4);
    if ( (v5 & 0x2000) != 0 )
    {
      v9 = 0LL;
      if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x14uLL, &v9) )
        return v4;
      v6 = (char *)v9;
      *(_DWORD *)v9 = 20;
      *(_OWORD *)(v6 + 4) = 0LL;
      *((_DWORD *)v6 + 1) = 555;
      *((_DWORD *)v6 + 2) = *((_DWORD *)this + 8);
      *(_QWORD *)(v6 + 12) = *((_QWORD *)this + 16);
      *((_DWORD *)this + 4) &= ~0x2000u;
      v5 = *((_DWORD *)this + 4);
    }
    if ( (v5 & 0x4000) == 0 )
      return 1;
    v9 = 0LL;
    if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x14uLL, &v9) )
    {
      v7 = (char *)v9;
      *(_DWORD *)v9 = 20;
      *(_OWORD *)(v7 + 4) = 0LL;
      *((_DWORD *)v7 + 1) = 556;
      *((_DWORD *)v7 + 2) = *((_DWORD *)this + 8);
      *(_QWORD *)(v7 + 12) = *((_QWORD *)this + 17);
      *((_DWORD *)this + 4) &= ~0x4000u;
      return 1;
    }
  }
  return v4;
}
