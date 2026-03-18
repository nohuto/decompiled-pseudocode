/*
 * XREFs of DirectComposition::CResourceMarshaler::EmitUpdateCommandToSetFlag__lambda_bae9fe91ffe7d2a32ffd5f56c8eed0c9___ @ 0x1400D8718
 * Callers:
 *     ?EmitUpdateCommands@CComponentTransform3DMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1400D8590 (-EmitUpdateCommands@CComponentTransform3DMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x14007F480 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     memset @ 0x14023F500 (memset.c)
 */

char __fastcall DirectComposition::CResourceMarshaler::EmitUpdateCommandToSetFlag__lambda_bae9fe91ffe7d2a32ffd5f56c8eed0c9___(
        __int64 a1,
        struct DirectComposition::CBatch **a2,
        __int64 a3,
        __int64 a4)
{
  _DWORD *v6; // rax
  _DWORD *v7; // rdi
  _DWORD *v9; // [rsp+30h] [rbp+8h] BYREF

  if ( (*(_DWORD *)(a1 + 16) & 0x4000) != 0 )
    return 1;
  v9 = 0LL;
  if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x4CuLL, (void **)&v9) )
  {
    v6 = v9;
    *v9 = 76;
    v7 = v6 + 1;
    memset(v6 + 1, 0, 0x48uLL);
    *v7 = 68;
    v7[1] = *(_DWORD *)(a1 + 32);
    *(_OWORD *)(v7 + 2) = *(_OWORD *)(a4 + 148);
    *(_OWORD *)(v7 + 6) = *(_OWORD *)(a4 + 164);
    *(_OWORD *)(v7 + 10) = *(_OWORD *)(a4 + 180);
    *(_OWORD *)(v7 + 14) = *(_OWORD *)(a4 + 196);
    *(_DWORD *)(a1 + 16) |= 0x4000u;
    return 1;
  }
  return 0;
}
