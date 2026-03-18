/*
 * XREFs of DirectComposition::CResourceMarshaler::EmitUpdateCommandToClearFlag__lambda_82a12b1bd6d405ea304fb103b341a057___ @ 0x1402377B4
 * Callers:
 *     ?EmitUpdateMotionParameters@CNaturalAnimationMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x14019D598 (-EmitUpdateMotionParameters@CNaturalAnimationMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x14007F480 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CResourceMarshaler::EmitUpdateCommandToClearFlag__lambda_82a12b1bd6d405ea304fb103b341a057___(
        __int64 a1,
        struct DirectComposition::CBatch **a2,
        __int64 a3,
        __int64 a4)
{
  char *v6; // rcx
  void *v8; // [rsp+30h] [rbp+8h] BYREF

  if ( (*(_DWORD *)(a1 + 16) & 0x10000) == 0 )
    return 1;
  v8 = 0LL;
  if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x14uLL, &v8) )
  {
    v6 = (char *)v8;
    *(_DWORD *)v8 = 20;
    *(_OWORD *)(v6 + 4) = 0LL;
    *((_DWORD *)v6 + 1) = 249;
    *((_DWORD *)v6 + 2) = *(_DWORD *)(a1 + 32);
    *((_DWORD *)v6 + 1) = 249;
    *((_DWORD *)v6 + 2) = *(_DWORD *)(a4 + 32);
    *(_QWORD *)(v6 + 12) = *(_QWORD *)(a4 + 168);
    *(_DWORD *)(a1 + 16) &= ~0x10000u;
    return 1;
  }
  return 0;
}
