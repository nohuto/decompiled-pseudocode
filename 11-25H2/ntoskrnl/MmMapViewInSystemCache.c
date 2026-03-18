/*
 * XREFs of MmMapViewInSystemCache @ 0x1403B44EC
 * Callers:
 *     CcGetVacbMiss @ 0x1403B3D50 (CcGetVacbMiss.c)
 * Callees:
 *     MiAddViewsForSection @ 0x140213970 (MiAddViewsForSection.c)
 *     MiOffsetToProtos @ 0x1402BBD30 (MiOffsetToProtos.c)
 *     MiObtainSystemCacheView @ 0x1402C0010 (MiObtainSystemCacheView.c)
 *     MiUnlockWorkingSetOptimal @ 0x1402C04C8 (MiUnlockWorkingSetOptimal.c)
 *     MiLockWorkingSetOptimal @ 0x1402C0690 (MiLockWorkingSetOptimal.c)
 *     MiManageSubsectionView @ 0x1403200E0 (MiManageSubsectionView.c)
 *     MiIncreaseUsedPtes @ 0x1403837D0 (MiIncreaseUsedPtes.c)
 *     MiSectionControlArea @ 0x1403B4FE0 (MiSectionControlArea.c)
 *     MiGetSystemCacheReverseMap @ 0x1403B53D0 (MiGetSystemCacheReverseMap.c)
 *     MiReadyReservedView @ 0x1404C30BC (MiReadyReservedView.c)
 *     MiRemoveSystemCacheReferences @ 0x1404C56A0 (MiRemoveSystemCacheReferences.c)
 */

__int64 __fastcall MmMapViewInSystemCache(
        __int64 a1,
        __int64 *a2,
        unsigned __int64 *a3,
        __int64 a4,
        unsigned __int8 a5)
{
  _DWORD *v7; // r9
  __int64 v8; // rbx
  ULONG_PTR v9; // rdi
  __int64 result; // rax
  __int64 v11; // rcx
  unsigned __int64 v12; // rbx
  __int64 v13; // r15
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 *v16; // r14
  unsigned __int64 v17; // rsi
  _QWORD *SystemCacheReverseMap; // rbp
  unsigned __int64 v19; // rbx
  __int64 v20; // r12
  unsigned __int64 v21; // rbx
  __int64 v22; // r9
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // r9
  unsigned __int64 v25; // r15
  unsigned __int64 v26; // r8
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rax
  unsigned __int64 v30; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v31; // [rsp+28h] [rbp-40h]
  __int64 *v32; // [rsp+30h] [rbp-38h]
  unsigned int v33; // [rsp+70h] [rbp+8h]

  v30 = 0LL;
  a5 = 0;
  if ( (*(_DWORD *)(a1 + 56) & 0x20) != 0 )
    return 3221225608LL;
  v8 = MiSectionControlArea(a1);
  v33 = ((*v7 & 0xFFF) != 0) + (*v7 >> 12);
  v9 = MiOffsetToProtos(v8, *a3, &v30);
  result = MiAddViewsForSection((int **)v9, v33 + v30, 5);
  if ( (int)result < 0 )
  {
    ++dword_140E385A0;
  }
  else
  {
    v11 = *(_WORD *)(v8 + 60) & 0x3FF;
    v12 = *a2;
    v13 = *((_QWORD *)qword_140E2FD48 + v11);
    if ( *a2 )
    {
      MiReadyReservedView(v13, *a2);
    }
    else
    {
      v14 = MiObtainSystemCacheView(v13);
      v12 = v14;
      if ( !v14 )
      {
        ++dword_140E385A0;
        MiRemoveSystemCacheReferences(v9);
        return 3221225495LL;
      }
      *a2 = v14;
    }
    v15 = *(_QWORD *)(v9 + 8);
    v16 = (__int64 *)(((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    v17 = v15 + 8 * v30;
    v31 = v15 + 8LL * *(unsigned int *)(v9 + 44);
    v32 = &v16[v33];
    SystemCacheReverseMap = (_QWORD *)MiGetSystemCacheReverseMap(v12);
    v19 = *a3 >> 2;
    v20 = v13 + 18816;
    v21 = v33 & 0x3F | SystemCacheReverseMap[4] & 0xC00000000000FFC0uLL | v19 & 0x3FFFFFFFFFFF0000LL;
    v23 = MiLockWorkingSetOptimal(v13 + 18816, (unsigned __int64)v16, &a5, v22);
    v24 = (unsigned __int64)v32;
    v25 = v23;
    SystemCacheReverseMap[4] = v21;
    SystemCacheReverseMap[2] &= 0xFFFFFFFFFFFFFFFCuLL;
    SystemCacheReverseMap[3] = v9;
    if ( (unsigned __int64)v16 < v24 )
    {
      v26 = v31;
      do
      {
        if ( v17 >= v26 )
        {
          v9 = *(_QWORD *)(v9 + 16);
          v17 = *(_QWORD *)(v9 + 8);
          v29 = *(unsigned int *)(v9 + 44);
          SystemCacheReverseMap[3] |= 1uLL;
          v26 = v17 + 8 * v29;
        }
        v28 = (v17 << 16) | 0x400;
        if ( qword_140E2D940 )
        {
          v27 = v17 << 16;
          if ( (qword_140E2D940 & v28) != 0 )
            v28 = v27 | 0x410;
          else
            v28 = qword_140E2D940 | v27 | 0x400;
        }
        *v16 = v28;
        v17 += 8LL;
        ++v16;
      }
      while ( (unsigned __int64)v16 < v24 );
    }
    SystemCacheReverseMap[4] |= 0xC000000000000000uLL;
    MiIncreaseUsedPtes(0xC000000000000000uLL, v25, v33, 2);
    MiUnlockWorkingSetOptimal(v20, v25, a5);
    MiManageSubsectionView(
      (__int64 *)v9,
      SystemCacheReverseMap,
      (2 * (unsigned __int8)SystemCacheReverseMap[3]) & 2 | 1);
    return 0LL;
  }
  return result;
}
