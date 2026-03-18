/*
 * XREFs of ?EmitApplyPositionShift@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1401031B0
 * Callers:
 *     ?EmitUpdateCommands@CInteractionTrackerMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x140102740 (-EmitUpdateCommands@CInteractionTrackerMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x14007F480 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z @ 0x14010020C (-AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z.c)
 *     ?Shrink@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_K@Z @ 0x140103310 (-Shrink@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_K@Z.c)
 */

bool __fastcall DirectComposition::CInteractionTrackerMarshaler::EmitApplyPositionShift(
        DirectComposition::CInteractionTrackerMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  unsigned __int64 i; // rsi
  __int64 v5; // rax
  void *v7; // rcx
  unsigned __int64 v8; // rbp
  char *v9; // rcx
  unsigned int v10; // r9d
  char *v11; // r8
  __int64 v12; // rax
  __int64 v13; // rcx
  int v14; // edx
  void *v15; // [rsp+40h] [rbp+8h] BYREF

  for ( i = *((unsigned int *)this + 98); *((_DWORD *)this + 102) < (unsigned int)i; *((_DWORD *)this + 102) += v8 )
  {
    v7 = (void *)(4096LL - *((_QWORD *)(*a2)[17] + 5));
    v15 = v7;
    if ( (unsigned __int64)v7 < 0x1C )
    {
      if ( !DirectComposition::CBatch::AllocateNewFragment(a2, (unsigned __int64 *)&v15) )
        break;
      v7 = v15;
    }
    v8 = (unsigned int)(i - *((_DWORD *)this + 102));
    if ( v8 >= ((unsigned __int64)v7 - 16) / 0xC )
      LODWORD(v8) = ((unsigned __int64)v7 - 16) / 0xC;
    v15 = 0LL;
    DirectComposition::CBatch::EnsureBatchBuffer(
      (struct DirectComposition::CBatch **)a2,
      (unsigned int)(12 * v8 + 16),
      &v15);
    v9 = (char *)v15;
    v10 = 0;
    *(_DWORD *)v15 = 12 * v8 + 16;
    v11 = v9 + 16;
    *(_QWORD *)(v9 + 4) = 0LL;
    *((_DWORD *)v9 + 3) = 0;
    *((_DWORD *)v9 + 1) = 190;
    *((_DWORD *)v9 + 2) = *((_DWORD *)this + 8);
    for ( *((_DWORD *)v9 + 3) = v8; v10 < (unsigned int)v8; v11 += 12 )
    {
      v12 = *((_QWORD *)this + 46);
      v13 = *((_QWORD *)this + 50) * (v10 + *((_DWORD *)this + 102));
      ++v10;
      v14 = *(_DWORD *)(v13 + v12 + 8);
      *(_QWORD *)v11 = *(_QWORD *)(v13 + v12);
      *((_DWORD *)v11 + 2) = v14;
    }
  }
  v5 = *((unsigned int *)this + 102);
  if ( (_DWORD)v5 == (_DWORD)i )
  {
    DirectComposition::CDCompDynamicArrayBase::Shrink(
      (DirectComposition::CInteractionTrackerMarshaler *)((char *)this + 368),
      i);
    *((_DWORD *)this + 102) = 0;
    v5 = 0LL;
  }
  return v5 == *((_QWORD *)this + 49);
}
