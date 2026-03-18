/*
 * XREFs of ?EmitSourcePolicy@CDropShadowMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x14011FACC
 * Callers:
 *     ?EmitUpdateCommands@CDropShadowMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x14011F840 (-EmitUpdateCommands@CDropShadowMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x14007F480 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CDropShadowMarshaler::EmitSourcePolicy(
        DirectComposition::CDropShadowMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v3; // bl
  char *v4; // rcx
  void *v6; // [rsp+30h] [rbp+8h] BYREF

  if ( (*((_DWORD *)this + 4) & 0x1000) == 0 )
    return 1;
  v3 = 0;
  v6 = 0LL;
  if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v6) )
  {
    v4 = (char *)v6;
    *(_DWORD *)v6 = 16;
    *(_QWORD *)(v4 + 4) = 0LL;
    *((_DWORD *)v4 + 3) = 0;
    *((_DWORD *)v4 + 1) = 128;
    *((_DWORD *)v4 + 2) = *((_DWORD *)this + 8);
    *((_DWORD *)v4 + 3) = *((_DWORD *)this + 29);
    *((_DWORD *)this + 4) &= ~0x1000u;
    return 1;
  }
  return v3;
}
