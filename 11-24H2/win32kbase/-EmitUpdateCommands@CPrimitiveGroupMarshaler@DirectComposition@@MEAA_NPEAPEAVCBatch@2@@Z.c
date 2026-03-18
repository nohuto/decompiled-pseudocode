/*
 * XREFs of ?EmitUpdateCommands@CPrimitiveGroupMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1400D1F70
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x14007F480 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?EmitAppendSurfaceResources@CPrimitiveGroupMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1400D21AC (-EmitAppendSurfaceResources@CPrimitiveGroupMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetDirtyAndBoundsRectCommand@CPrimitiveGroupMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1400D22E4 (-EmitSetDirtyAndBoundsRectCommand@CPrimitiveGroupMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatc.c)
 *     ?AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z @ 0x14010020C (-AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z.c)
 */

char __fastcall DirectComposition::CPrimitiveGroupMarshaler::EmitUpdateCommands(
        DirectComposition::CPrimitiveGroupMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  int v2; // eax
  char *v5; // rcx
  char i; // r14
  char *v7; // rdx
  char *v9; // rcx
  void *v10; // rdx
  unsigned __int64 v11; // r15
  char *v12; // rcx
  unsigned int v13; // edx
  _DWORD *v14; // r8
  __int64 v15; // rcx
  void *v16; // [rsp+40h] [rbp+20h] BYREF

  v2 = *((_DWORD *)this + 4);
  if ( (v2 & 0x40) != 0 )
  {
    v16 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0xCuLL, &v16) )
      return 0;
    v5 = (char *)v16;
    *(_DWORD *)v16 = 12;
    *(_QWORD *)(v5 + 4) = 0LL;
    *((_DWORD *)v5 + 1) = 287;
    *((_DWORD *)v5 + 2) = *((_DWORD *)this + 8);
    *((_DWORD *)this + 4) &= ~0x40u;
    v2 = *((_DWORD *)this + 4);
  }
  if ( (v2 & 0x80u) != 0 )
  {
    v16 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0xCuLL, &v16) )
      return 0;
    v9 = (char *)v16;
    *(_DWORD *)v16 = 12;
    *(_QWORD *)(v9 + 4) = 0LL;
    *((_DWORD *)v9 + 1) = 286;
    *((_DWORD *)v9 + 2) = *((_DWORD *)this + 8);
    *((_DWORD *)this + 4) &= ~0x80u;
  }
  if ( !DirectComposition::CPrimitiveGroupMarshaler::EmitAppendSurfaceResources(this, a2) )
    return 0;
  for ( i = 1; *((_DWORD *)this + 27) < *((_DWORD *)this + 26); *((_DWORD *)this + 27) += v11 )
  {
    v10 = (void *)(4096LL - *(_QWORD *)(*((_QWORD *)*a2 + 17) + 40LL));
    v16 = v10;
    if ( (unsigned __int64)v10 < 0x14 )
    {
      if ( !DirectComposition::CBatch::AllocateNewFragment(a2, (unsigned __int64 *)&v16) )
        break;
      v10 = v16;
    }
    v11 = (unsigned int)(*((_DWORD *)this + 26) - *((_DWORD *)this + 27));
    if ( v11 >= ((unsigned __int64)v10 - 16) >> 2 )
      LODWORD(v11) = ((unsigned __int64)v10 - 16) >> 2;
    v16 = 0LL;
    DirectComposition::CBatch::EnsureBatchBuffer(a2, (unsigned int)(4 * v11 + 16), &v16);
    v12 = (char *)v16;
    v13 = 0;
    *(_DWORD *)v16 = 4 * v11 + 16;
    v14 = v12 + 16;
    *(_QWORD *)(v12 + 4) = 0LL;
    *((_DWORD *)v12 + 3) = 0;
    *((_DWORD *)v12 + 1) = 283;
    *((_DWORD *)v12 + 2) = *((_DWORD *)this + 8);
    for ( *((_DWORD *)v12 + 3) = v11; v13 < (unsigned int)v11; ++v14 )
    {
      v15 = v13 + *((_DWORD *)this + 27);
      ++v13;
      *v14 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 12) + 8 * v15) + 32LL);
    }
  }
  if ( *((_DWORD *)this + 27) != *((_DWORD *)this + 26) )
    return 0;
  if ( *((_QWORD *)this + 7) && (*((_DWORD *)this + 4) & 0x20) == 0 )
  {
    v16 = 0LL;
    if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x18uLL, &v16) )
    {
      v7 = (char *)v16;
      *(_DWORD *)v16 = 24;
      *(_OWORD *)(v7 + 4) = 0LL;
      *((_DWORD *)v7 + 5) = 0;
      *((_DWORD *)v7 + 1) = 284;
      *((_DWORD *)v7 + 2) = *((_DWORD *)this + 8);
      *((_DWORD *)v7 + 3) = *(_DWORD *)(*((_QWORD *)this + 7) + 32LL);
      *((_DWORD *)v7 + 5) = *((_DWORD *)this + 18);
      *((_DWORD *)v7 + 4) = *((_DWORD *)this + 16);
      *((_DWORD *)this + 4) |= 0x20u;
      goto LABEL_12;
    }
    return 0;
  }
LABEL_12:
  if ( !DirectComposition::CPrimitiveGroupMarshaler::EmitSetDirtyAndBoundsRectCommand(this, a2) )
    return 0;
  return i;
}
