/*
 * XREFs of MiCreatePageChains @ 0x14048E910
 * Callers:
 *     MiZeroAndReleasePages @ 0x140217770 (MiZeroAndReleasePages.c)
 *     MiAllocateLargeZeroPages @ 0x14026F2E8 (MiAllocateLargeZeroPages.c)
 *     MiInitializeMdlOneNodeBatchPages @ 0x140393A14 (MiInitializeMdlOneNodeBatchPages.c)
 *     MiGroupZeroHugeRange @ 0x140686BE4 (MiGroupZeroHugeRange.c)
 *     MiFindLargePageMemory @ 0x140A8F22C (MiFindLargePageMemory.c)
 * Callees:
 *     MiAllocatePool @ 0x140277450 (MiAllocatePool.c)
 *     MiGetOptimalEngineMix @ 0x14048EB84 (MiGetOptimalEngineMix.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 __fastcall MiCreatePageChains(__int64 a1, unsigned int a2, int a3, __int64 a4)
{
  __int64 v6; // rbx
  unsigned int OptimalEngineMix; // esi
  __int64 v8; // r8
  unsigned __int16 v9; // bp
  int v10; // edx
  _WORD *i; // rax
  unsigned __int64 v12; // r12
  __int64 v13; // r15
  __int64 v14; // r14
  __int64 Pool; // rax
  __int64 v16; // rdx
  __int64 result; // rax
  _QWORD *v18; // rax
  unsigned __int64 v19; // rcx
  __int64 v20; // xmm0_8
  int v21; // eax
  __int64 v22; // r15
  __int64 v23; // rcx
  unsigned int *v24; // r14
  unsigned int *v25; // r12
  __int64 v26; // rbp
  _WORD *j; // rax
  __int64 v30; // [rsp+30h] [rbp-58h] BYREF
  int v31; // [rsp+38h] [rbp-50h]

  LODWORD(v6) = 0;
  if ( !_bittest64(&MiFlags, 0x26u) )
    return 0LL;
  OptimalEngineMix = 0;
  v30 = 0LL;
  v31 = 0;
  v8 = *(_QWORD *)(qword_140E2DC38 + 384LL * a2 + 376);
  if ( (*(_DWORD *)(v8 + 36) & 1) != 0 )
  {
    v9 = 0;
    v10 = 1;
    for ( i = &unk_140E2DC32; (__int64)i < (__int64)&word_140E2DC36; ++i )
    {
      OptimalEngineMix = (unsigned __int16)*i;
      if ( *i )
      {
        OptimalEngineMix = *(_DWORD *)(168LL * v10 + v8 + 172);
        if ( !OptimalEngineMix )
        {
          OptimalEngineMix = 1;
          v10 = (KeGetCurrentPrcb()->PowerState.ArchitecturalEfficiencyClass != 1) + 1;
        }
        v9 = word_140E2DC28;
        *((_DWORD *)&v30 + v10) = OptimalEngineMix;
        break;
      }
      ++v10;
    }
  }
  else
  {
    v22 = 4LL;
    v23 = a2 * (unsigned __int16)KeNumberNodes;
    v24 = (unsigned int *)(qword_140E2DC10 + 4 * v23);
    v25 = &v24[(unsigned __int16)KeNumberNodes];
LABEL_14:
    if ( v24 < v25 )
    {
      v6 = *v24;
      v26 = 0LL;
      for ( j = (_WORD *)(*(_QWORD *)(qword_140E2DC38 + 384 * v6 + 376) + 24LL); ; ++j )
      {
        if ( v26 >= 3 )
        {
          ++v24;
          goto LABEL_14;
        }
        OptimalEngineMix = (unsigned __int16)*j;
        if ( *j )
          break;
        ++v26;
      }
      OptimalEngineMix = MiGetOptimalEngineMix(v23, (unsigned int)v6, &v30);
      if ( !OptimalEngineMix )
      {
        *((_DWORD *)&v30 + v26) = 1;
        OptimalEngineMix = 1;
      }
    }
    if ( v24 == v25 )
    {
      OptimalEngineMix = 1;
      LODWORD(v6) = a2;
      if ( KeGetCurrentPrcb()->PowerState.ArchitecturalEfficiencyClass != 1 )
        v22 = 8LL;
      *(_DWORD *)((char *)&v30 + v22) = 1;
    }
    v9 = *(_WORD *)(*(_QWORD *)(384LL * (unsigned int)v6 + qword_140E2DC38 + 376) + 16LL);
  }
  v12 = (unsigned __int64)OptimalEngineMix << 7;
  v13 = OptimalEngineMix;
  v14 = 48LL * v9 + 376;
  Pool = MiAllocatePool(0x40uLL, v14 + v12 + a4 + 168, 1834641741);
  v16 = Pool;
  if ( !Pool )
    return 0LL;
  if ( OptimalEngineMix )
  {
    v18 = (_QWORD *)(Pool + 280);
    do
    {
      v18[1] = v18;
      *v18 = v18;
      v18 += 16;
      --v13;
    }
    while ( v13 );
  }
  v19 = v12 + v16 + 168;
  *(_QWORD *)(v16 + 144) = v19;
  *(_DWORD *)(v19 + 4) = v9;
  if ( a4 )
    *(_QWORD *)(v16 + 152) = v14 + *(_QWORD *)(v16 + 144);
  v20 = v30;
  *(_QWORD *)v16 = a1;
  *(_DWORD *)(v16 + 20) = a3;
  v21 = v31;
  *(_QWORD *)(v16 + 96) = v20;
  *(_DWORD *)(v16 + 104) = v21;
  result = v16;
  *(_DWORD *)(v16 + 24) = OptimalEngineMix;
  *(_DWORD *)(v16 + 88) = v6;
  *(_DWORD *)(v16 + 92) = a2;
  *(_DWORD *)(v16 + 112) = 1;
  return result;
}
