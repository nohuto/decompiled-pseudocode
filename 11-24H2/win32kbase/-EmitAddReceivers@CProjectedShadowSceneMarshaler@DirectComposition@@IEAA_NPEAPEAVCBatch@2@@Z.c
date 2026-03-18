/*
 * XREFs of ?EmitAddReceivers@CProjectedShadowSceneMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x14012E77C
 * Callers:
 *     ?EmitUpdateCommands@CProjectedShadowSceneMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x14012E550 (-EmitUpdateCommands@CProjectedShadowSceneMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x14007F480 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z @ 0x14010020C (-AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z.c)
 */

bool __fastcall DirectComposition::CProjectedShadowSceneMarshaler::EmitAddReceivers(
        DirectComposition::CProjectedShadowSceneMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  void *v4; // rdx
  unsigned __int64 v5; // rsi
  char *v6; // rcx
  unsigned int v7; // r9d
  _DWORD *v8; // rdx
  unsigned int i; // r8d
  __int64 v10; // rcx
  void *v12; // [rsp+30h] [rbp+8h] BYREF

  for ( ; *((_DWORD *)this + 25) < *((_DWORD *)this + 24); *((_DWORD *)this + 25) += v5 )
  {
    v4 = (void *)(4096LL - *((_QWORD *)(*a2)[17] + 5));
    v12 = v4;
    if ( (unsigned __int64)v4 < 0x14 )
    {
      if ( !DirectComposition::CBatch::AllocateNewFragment(a2, (unsigned __int64 *)&v12) )
        return *((_DWORD *)this + 25) == *((_DWORD *)this + 24);
      v4 = v12;
    }
    v5 = (unsigned int)(*((_DWORD *)this + 24) - *((_DWORD *)this + 25));
    if ( v5 >= ((unsigned __int64)v4 - 16) >> 2 )
      LODWORD(v5) = ((unsigned __int64)v4 - 16) >> 2;
    v12 = 0LL;
    DirectComposition::CBatch::EnsureBatchBuffer(
      (struct DirectComposition::CBatch **)a2,
      (unsigned int)(4 * v5 + 16),
      &v12);
    v6 = (char *)v12;
    v7 = 0;
    *(_DWORD *)v12 = 4 * v5 + 16;
    v8 = v6 + 16;
    *(_QWORD *)(v6 + 4) = 0LL;
    *((_DWORD *)v6 + 3) = 0;
    *((_DWORD *)v6 + 1) = 298;
    *((_DWORD *)v6 + 2) = *((_DWORD *)this + 8);
    *((_DWORD *)v6 + 3) = v5;
    for ( i = *((_DWORD *)this + 25); v7 < (unsigned int)v5; ++v8 )
    {
      ++v7;
      v10 = i++;
      *v8 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 11) + 8 * v10) + 32LL);
    }
  }
  return *((_DWORD *)this + 25) == *((_DWORD *)this + 24);
}
