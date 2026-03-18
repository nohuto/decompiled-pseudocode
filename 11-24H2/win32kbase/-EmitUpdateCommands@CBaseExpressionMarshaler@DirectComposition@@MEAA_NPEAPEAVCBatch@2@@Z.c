/*
 * XREFs of ?EmitUpdateCommands@CBaseExpressionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1400BE700
 * Callers:
 *     ?EmitUpdateCommands@CNaturalAnimationMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1400BE060 (-EmitUpdateCommands@CNaturalAnimationMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CConditionalExpressionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1400BE160 (-EmitUpdateCommands@CConditionalExpressionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CKeyframeAnimationMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1400BE1D0 (-EmitUpdateCommands@CKeyframeAnimationMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CExpressionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1401960B0 (-EmitUpdateCommands@CExpressionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CInjectionAnimationMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x140237190 (-EmitUpdateCommands@CInjectionAnimationMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x14007F480 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z @ 0x14010020C (-AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z.c)
 */

char __fastcall DirectComposition::CBaseExpressionMarshaler::EmitUpdateCommands(
        DirectComposition::CBaseExpressionMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  int *v2; // rbx
  int v4; // ecx
  char *v6; // rcx
  _DWORD *v7; // r14
  int *v8; // r13
  int *v9; // rsi
  _DWORD *v10; // r12
  char v11; // r13
  char *v12; // rax
  char *v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rax
  int v16; // eax
  __int64 v17; // rax
  __int64 v18; // rax
  char *v19; // rcx
  unsigned int v20; // esi
  __int64 v21; // r12
  __int64 v23; // rax
  char *v24; // rcx
  char *v25; // rcx
  void *v26; // rdx
  unsigned __int64 v27; // r14
  char *v28; // rcx
  _DWORD *v29; // r8
  unsigned int v30; // edx
  __int64 v31; // rax
  void *v32; // [rsp+50h] [rbp+30h] BYREF

  v2 = (int *)((char *)this + 16);
  v4 = *((_DWORD *)this + 4);
  if ( (v4 & 0x20) != 0 )
  {
    v32 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v32) )
      return 0;
    v6 = (char *)v32;
    v7 = (_DWORD *)((char *)this + 32);
    v8 = (int *)((char *)this + 16);
    *(_DWORD *)v32 = 16;
    *(_QWORD *)(v6 + 4) = 0LL;
    *((_DWORD *)v6 + 3) = 0;
    *((_DWORD *)v6 + 1) = 258;
    *((_DWORD *)v6 + 2) = *((_DWORD *)this + 8);
    *((_DWORD *)v6 + 3) = *((_DWORD *)this + 14);
    *v2 &= ~0x20u;
    v4 = *v2;
  }
  else
  {
    v7 = (_DWORD *)((char *)this + 32);
    v8 = v2;
  }
  v9 = v2;
  v10 = v7;
  if ( (v4 & 0x400) == 0 && (*((_BYTE *)this + 120) & 0x10) != 0 )
  {
    v32 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0xCuLL, &v32) )
      return 0;
    v25 = (char *)v32;
    v10 = (_DWORD *)((char *)this + 32);
    *(_DWORD *)v32 = 12;
    v9 = v8;
    *(_QWORD *)(v25 + 4) = 0LL;
    *((_DWORD *)v25 + 1) = 16;
    *((_DWORD *)v25 + 2) = *v7;
    *v2 |= 0x400u;
    v4 = *v2;
  }
  v11 = 1;
  if ( (v4 & 0x40) != 0 )
    goto LABEL_16;
  v32 = 0LL;
  if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x2CuLL, &v32) )
    return 0;
  v12 = (char *)v32;
  *(_DWORD *)v32 = 44;
  v13 = v12 + 4;
  *(_OWORD *)(v12 + 4) = 0LL;
  *(_OWORD *)(v12 + 20) = 0LL;
  *(_QWORD *)(v12 + 36) = 0LL;
  *((_DWORD *)v12 + 1) = 17;
  *((_DWORD *)v12 + 2) = *v7;
  if ( (*((_BYTE *)this + 120) & 1) != 0 && (v14 = *((_QWORD *)this + 9)) != 0 && (v15 = *(_QWORD *)(v14 + 16)) != 0 )
  {
    *((_DWORD *)v13 + 3) = *(_DWORD *)(v15 + 32);
    v16 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 9) + 16LL) + 36LL);
  }
  else
  {
    *((_DWORD *)v13 + 3) = 0;
    v16 = 0;
  }
  *((_DWORD *)v13 + 2) = v16;
  *((_DWORD *)v13 + 4) = *((_DWORD *)this + 20);
  *((_DWORD *)v13 + 9) = *((_DWORD *)this + 16);
  v17 = *((_QWORD *)this + 11);
  if ( v17 )
  {
    *((_WORD *)v13 + 16) = *(unsigned __int8 *)(v17 + 4);
    *((_WORD *)v13 + 17) = **((_WORD **)this + 11);
    v23 = *((_QWORD *)this + 11);
    if ( *(_DWORD *)v23 == 1 )
    {
      v18 = *(unsigned __int8 *)(v23 + 8);
      goto LABEL_15;
    }
    if ( *(_DWORD *)v23 == 2 )
    {
      v18 = *(_QWORD *)(v23 + 8);
      goto LABEL_15;
    }
  }
  else
  {
    *((_DWORD *)v13 + 8) = 0;
  }
  v18 = 0LL;
LABEL_15:
  *((_QWORD *)v13 + 3) = v18;
  v9 = (int *)((char *)this + 16);
  v10 = (_DWORD *)((char *)this + 32);
  v4 = *((_DWORD *)this + 4) | 0x40;
  *((_DWORD *)this + 4) = v4;
LABEL_16:
  if ( (v4 & 0x80u) == 0 )
  {
    v32 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v32) )
      return 0;
    v19 = (char *)v32;
    v10 = (_DWORD *)((char *)this + 32);
    *(_DWORD *)v32 = 16;
    *(_QWORD *)(v19 + 4) = 0LL;
    *((_DWORD *)v19 + 3) = 0;
    *((_DWORD *)v19 + 1) = 18;
    *((_DWORD *)v19 + 2) = *((_DWORD *)this + 8);
    *((_DWORD *)v19 + 3) = *((_DWORD *)this + 24);
    *v9 |= 0x80u;
    v4 = *v9;
  }
  if ( (v4 & 0x100) != 0 || (*((_BYTE *)this + 120) & 4) == 0 )
    goto LABEL_21;
  v32 = 0LL;
  if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v32) )
    return 0;
  v24 = (char *)v32;
  *(_DWORD *)v32 = 16;
  *(_QWORD *)(v24 + 4) = 0LL;
  *((_DWORD *)v24 + 3) = 0;
  *((_DWORD *)v24 + 1) = 15;
  *((_DWORD *)v24 + 2) = *v10;
  v24[12] = (*((_BYTE *)this + 120) & 8) != 0;
  *v9 |= 0x100u;
LABEL_21:
  v20 = *((_DWORD *)this + 29);
  v21 = *((_QWORD *)this + 13);
  while ( *((_DWORD *)this + 28) < v20 )
  {
    v26 = (void *)(4096LL - *(_QWORD *)(*((_QWORD *)*a2 + 17) + 40LL));
    v32 = v26;
    if ( (unsigned __int64)v26 < 0x18 )
    {
      if ( !DirectComposition::CBatch::AllocateNewFragment(a2, (unsigned __int64 *)&v32) )
        break;
      v26 = v32;
    }
    v32 = 0LL;
    v27 = v20 - *((_DWORD *)this + 28);
    if ( v27 >= ((unsigned __int64)v26 - 20) >> 2 )
      LODWORD(v27) = ((unsigned __int64)v26 - 20) >> 2;
    DirectComposition::CBatch::EnsureBatchBuffer(a2, (unsigned int)(4 * v27 + 20), &v32);
    v28 = (char *)v32;
    *(_DWORD *)v32 = 4 * v27 + 20;
    v29 = v28 + 20;
    *(_OWORD *)(v28 + 4) = 0LL;
    *((_DWORD *)v28 + 1) = 14;
    v30 = 0;
    *((_DWORD *)v28 + 2) = *((_DWORD *)this + 8);
    for ( *((_DWORD *)v28 + 3) = v27; v30 < (unsigned int)v27; ++v29 )
    {
      v31 = v30 + *((_DWORD *)this + 28);
      ++v30;
      *v29 = *(_DWORD *)(*(_QWORD *)(v21 + 8 * v31) + 32LL);
    }
    *((_DWORD *)this + 28) += v27;
  }
  if ( *((_DWORD *)this + 28) != v20 )
    return 0;
  return v11;
}
