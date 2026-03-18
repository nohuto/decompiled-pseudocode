/*
 * XREFs of ?EmitUpdateCommands@CHolographicViewerMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x140234FC0
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x14007F480 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?EmitInitialize@CHolographicViewerMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x140234E98 (-EmitInitialize@CHolographicViewerMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 */

char __fastcall DirectComposition::CHolographicViewerMarshaler::EmitUpdateCommands(
        DirectComposition::CHolographicViewerMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // di
  int v5; // eax
  _DWORD *v6; // rcx
  _DWORD *v7; // rcx
  void *v9; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0;
  if ( DirectComposition::CHolographicViewerMarshaler::EmitInitialize(this, a2) )
  {
    v5 = *((_DWORD *)this + 14);
    if ( (v5 & 0x20) != 0 )
    {
      v9 = 0LL;
      if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x14uLL, &v9) )
        return v4;
      v6 = v9;
      *(_DWORD *)v9 = 20;
      v6[1] = 170;
      v6[2] = *((_DWORD *)this + 8);
      v6[3] = *((_DWORD *)this + 23);
      v6[4] = *((_DWORD *)this + 24);
      *((_DWORD *)this + 14) &= ~0x20u;
      v5 = *((_DWORD *)this + 14);
    }
    if ( (v5 & 0x40) == 0 )
      return 1;
    v9 = 0LL;
    if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v9) )
    {
      v7 = v9;
      *(_DWORD *)v9 = 16;
      v7[1] = 169;
      v7[2] = *((_DWORD *)this + 8);
      v7[3] = *((_DWORD *)this + 28);
      *((_DWORD *)this + 14) &= ~0x40u;
      return 1;
    }
  }
  return v4;
}
