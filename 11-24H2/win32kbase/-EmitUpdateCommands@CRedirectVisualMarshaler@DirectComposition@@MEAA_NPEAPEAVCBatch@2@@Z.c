/*
 * XREFs of ?EmitUpdateCommands@CRedirectVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x140133350
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitUpdateCommands@CVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x14007CA00 (-EmitUpdateCommands@CVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x14007F480 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CRedirectVisualMarshaler::EmitUpdateCommands(
        DirectComposition::CRedirectVisualMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  int v4; // edi
  char *v6; // rcx
  __int64 v7; // rax
  void *v8; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0;
  if ( DirectComposition::CVisualMarshaler::EmitUpdateCommands(this, a2) )
  {
    if ( (*((_DWORD *)this + 94) & 1) == 0 )
      return 1;
    v8 = 0LL;
    if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v8) )
    {
      v6 = (char *)v8;
      *(_DWORD *)v8 = 16;
      *(_QWORD *)(v6 + 4) = 0LL;
      *((_DWORD *)v6 + 3) = 0;
      *((_DWORD *)v6 + 1) = 324;
      *((_DWORD *)v6 + 2) = *((_DWORD *)this + 8);
      v7 = *((_QWORD *)this + 46);
      if ( v7 )
        v4 = *(_DWORD *)(v7 + 32);
      *((_DWORD *)v6 + 3) = v4;
      *((_DWORD *)this + 94) &= ~1u;
      return 1;
    }
  }
  return 0;
}
