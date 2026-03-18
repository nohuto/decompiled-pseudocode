/*
 * XREFs of ?EmitUpdateCommands@CShadowEffectMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x14022E760
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x14007F480 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?EmitUpdateCommands@CFilterEffectMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x14022DB60 (-EmitUpdateCommands@CFilterEffectMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 */

char __fastcall DirectComposition::CShadowEffectMarshaler::EmitUpdateCommands(
        DirectComposition::CShadowEffectMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // bl
  char *v5; // rcx
  void *v7; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0;
  if ( (unsigned __int8)DirectComposition::CFilterEffectMarshaler::EmitUpdateCommands(this, a2) )
  {
    v7 = 0LL;
    if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x24uLL, &v7) )
    {
      v5 = (char *)v7;
      v4 = 1;
      *(_DWORD *)v7 = 36;
      *(_OWORD *)(v5 + 4) = 0LL;
      *(_OWORD *)(v5 + 20) = 0LL;
      *((_DWORD *)v5 + 1) = 464;
      *((_DWORD *)v5 + 2) = *((_DWORD *)this + 8);
      *((_DWORD *)v5 + 4) = *((_DWORD *)this + 29);
      *((_DWORD *)v5 + 5) = *((_DWORD *)this + 30);
      *((_DWORD *)v5 + 6) = *((_DWORD *)this + 31);
      *((_DWORD *)v5 + 7) = *((_DWORD *)this + 32);
      *((_DWORD *)v5 + 3) = *((_DWORD *)this + 28);
      *((_DWORD *)v5 + 8) = *((_DWORD *)this + 33);
    }
  }
  return v4;
}
