/*
 * XREFs of MmMapViewInSystemCache @ 0x1402D5CA4
 * Callers:
 *     CcGetVacbMiss @ 0x1402D5510 (CcGetVacbMiss.c)
 * Callees:
 *     MiAddViewsForSection @ 0x14020DA70 (MiAddViewsForSection.c)
 *     MiObtainSystemCacheView @ 0x140241D90 (MiObtainSystemCacheView.c)
 *     MiUnlockWorkingSetOptimal @ 0x14024231C (MiUnlockWorkingSetOptimal.c)
 *     MiLockWorkingSetOptimal @ 0x1402424F0 (MiLockWorkingSetOptimal.c)
 *     MiIncreaseUsedPtes @ 0x14028A180 (MiIncreaseUsedPtes.c)
 *     MiManageSubsectionView @ 0x1402BAAB0 (MiManageSubsectionView.c)
 *     MiGetSystemCacheReverseMap @ 0x1402D4740 (MiGetSystemCacheReverseMap.c)
 *     MiSectionControlArea @ 0x1402D4800 (MiSectionControlArea.c)
 *     MiOffsetToProtos @ 0x140319D40 (MiOffsetToProtos.c)
 *     MiReadyReservedView @ 0x1404C04A8 (MiReadyReservedView.c)
 *     MiRemoveSystemCacheReferences @ 0x1404C3D80 (MiRemoveSystemCacheReferences.c)
 */

__int64 __fastcall MmMapViewInSystemCache(__int64 a1, __int64 *a2, _QWORD *a3, __int64 a4, char a5)
{
  _DWORD *v7; // r9
  unsigned __int64 v8; // rbx
  ULONG_PTR v9; // rdi
  __int64 result; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rcx
  unsigned __int64 v14; // rbx
  __int64 v15; // r15
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 *v18; // r14
  unsigned __int64 v19; // rsi
  _QWORD *SystemCacheReverseMap; // rbp
  __int64 v21; // rbx
  __int64 v22; // r12
  unsigned __int64 v23; // rbx
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // r9
  unsigned __int64 v26; // r15
  unsigned __int64 v27; // r8
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v32; // [rsp+28h] [rbp-40h]
  __int64 *v33; // [rsp+30h] [rbp-38h]
  unsigned int v34; // [rsp+70h] [rbp+8h]

  v31 = 0LL;
  a5 = 0;
  if ( (*(_DWORD *)(a1 + 56) & 0x20) != 0 )
    return 3221225608LL;
  v8 = MiSectionControlArea(a1);
  v34 = ((*v7 & 0xFFF) != 0) + (*v7 >> 12);
  v9 = MiOffsetToProtos(v8, *a3, &v31);
  result = MiAddViewsForSection((int **)v9, v34 + v31, 5LL);
  if ( (int)result < 0 )
  {
    ++dword_140E387E0;
  }
  else
  {
    v13 = *(_WORD *)(v8 + 60) & 0x3FF;
    v14 = *a2;
    v15 = *((_QWORD *)qword_140E2FF88 + v13);
    if ( *a2 )
    {
      MiReadyReservedView(v15, *a2);
    }
    else
    {
      v16 = MiObtainSystemCacheView(v15, v11, v12);
      v14 = v16;
      if ( !v16 )
      {
        ++dword_140E387E0;
        MiRemoveSystemCacheReferences(v9);
        return 3221225495LL;
      }
      *a2 = v16;
    }
    v17 = *(_QWORD *)(v9 + 8);
    v18 = (__int64 *)(((v14 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    v19 = v17 + 8 * v31;
    v32 = v17 + 8LL * *(unsigned int *)(v9 + 44);
    v33 = &v18[v34];
    SystemCacheReverseMap = (_QWORD *)MiGetSystemCacheReverseMap(v14);
    v21 = *a3 >> 2;
    v22 = v15 + 18816;
    v23 = v34 & 0x3F | SystemCacheReverseMap[4] & 0xC00000000000FFC0uLL | v21 & 0x3FFFFFFFFFFF0000LL;
    v24 = MiLockWorkingSetOptimal(v15 + 18816, (unsigned __int64)v18, (unsigned __int8 *)&a5);
    v25 = (unsigned __int64)v33;
    v26 = v24;
    SystemCacheReverseMap[4] = v23;
    SystemCacheReverseMap[2] &= 0xFFFFFFFFFFFFFFFCuLL;
    SystemCacheReverseMap[3] = v9;
    if ( (unsigned __int64)v18 < v25 )
    {
      v27 = v32;
      do
      {
        if ( v19 >= v27 )
        {
          v9 = *(_QWORD *)(v9 + 16);
          v19 = *(_QWORD *)(v9 + 8);
          v30 = *(unsigned int *)(v9 + 44);
          SystemCacheReverseMap[3] |= 1uLL;
          v27 = v19 + 8 * v30;
        }
        v29 = (v19 << 16) | 0x400;
        if ( qword_140E2DB80 )
        {
          v28 = v19 << 16;
          if ( (qword_140E2DB80 & v29) != 0 )
            v29 = v28 | 0x410;
          else
            v29 = qword_140E2DB80 | v28 | 0x400;
        }
        *v18 = v29;
        v19 += 8LL;
        ++v18;
      }
      while ( (unsigned __int64)v18 < v25 );
    }
    SystemCacheReverseMap[4] |= 0xC000000000000000uLL;
    MiIncreaseUsedPtes(0xC000000000000000uLL, v26, v34, 2);
    MiUnlockWorkingSetOptimal(v22, v26, a5);
    MiManageSubsectionView(
      (__int64 *)v9,
      SystemCacheReverseMap,
      (2 * (unsigned __int8)SystemCacheReverseMap[3]) & 2 | 1);
    return 0LL;
  }
  return result;
}
