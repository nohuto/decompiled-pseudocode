/*
 * XREFs of ?EmitUpdateCommands@CDelegatedInkCanvasMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x140227500
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x14007F480 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CDelegatedInkCanvasMarshaler::EmitUpdateCommands(
        DirectComposition::CDelegatedInkCanvasMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  int v2; // eax
  char v3; // bl
  char *v6; // rcx
  char *v7; // rcx
  void *v9; // [rsp+40h] [rbp+18h] BYREF

  v2 = *((_DWORD *)this + 4);
  v3 = 0;
  if ( (v2 & 0x20) != 0 )
  {
    v9 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x1CuLL, &v9) )
      return v3;
    v6 = (char *)v9;
    *(_DWORD *)v9 = 28;
    *(_OWORD *)(v6 + 4) = 0LL;
    *(_QWORD *)(v6 + 20) = 0LL;
    *((_DWORD *)v6 + 1) = 513;
    *((_DWORD *)v6 + 2) = *((_DWORD *)this + 8);
    *(_OWORD *)(v6 + 12) = *(_OWORD *)((char *)this + 56);
    *((_DWORD *)this + 4) &= ~0x20u;
    v2 = *((_DWORD *)this + 4);
  }
  if ( (v2 & 0x40) == 0 )
    return 1;
  v9 = 0LL;
  if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x14uLL, &v9) )
  {
    v7 = (char *)v9;
    *(_DWORD *)v9 = 20;
    *(_OWORD *)(v7 + 4) = 0LL;
    *((_DWORD *)v7 + 1) = 514;
    *((_DWORD *)v7 + 2) = *((_DWORD *)this + 8);
    *(_QWORD *)(v7 + 12) = *((_QWORD *)this + 9);
    *((_DWORD *)this + 4) &= ~0x40u;
    return 1;
  }
  return v3;
}
