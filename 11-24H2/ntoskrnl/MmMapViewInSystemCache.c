/*
 * XREFs of MmMapViewInSystemCache @ 0x140356F24
 * Callers:
 *     CcGetVacbMiss @ 0x140356790 (CcGetVacbMiss.c)
 * Callees:
 *     MiObtainSystemCacheView @ 0x140209EE0 (MiObtainSystemCacheView.c)
 *     MiUnlockWorkingSetOptimal @ 0x14020A46C (MiUnlockWorkingSetOptimal.c)
 *     MiLockWorkingSetOptimal @ 0x14020A640 (MiLockWorkingSetOptimal.c)
 *     MiIncreaseUsedPtes @ 0x140299D80 (MiIncreaseUsedPtes.c)
 *     MiOffsetToProtos @ 0x1402C28D0 (MiOffsetToProtos.c)
 *     MiAddViewsForSection @ 0x140336DD0 (MiAddViewsForSection.c)
 *     MiGetSystemCacheReverseMap @ 0x1403559C0 (MiGetSystemCacheReverseMap.c)
 *     MiSectionControlArea @ 0x140355A80 (MiSectionControlArea.c)
 *     MiManageSubsectionView @ 0x1403621F0 (MiManageSubsectionView.c)
 *     MiReadyReservedView @ 0x14044D858 (MiReadyReservedView.c)
 *     MiRemoveSystemCacheReferences @ 0x1404BF2B0 (MiRemoveSystemCacheReferences.c)
 */

__int64 __fastcall MmMapViewInSystemCache(__int64 a1, __int64 *a2, unsigned __int64 *a3, __int64 a4, char a5)
{
  _DWORD *v7; // r9
  unsigned __int64 v8; // rbx
  ULONG_PTR v9; // rdi
  __int64 result; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rcx
  unsigned __int64 v15; // rbx
  __int64 v16; // r15
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 *v19; // r14
  unsigned __int64 v20; // rsi
  _QWORD *SystemCacheReverseMap; // rbp
  unsigned __int64 v22; // rbx
  __int64 v23; // r12
  unsigned __int64 v24; // rbx
  __int64 v25; // r9
  ULONG_PTR v26; // rax
  unsigned __int64 v27; // r9
  unsigned __int64 v28; // r15
  unsigned __int64 v29; // r8
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rax
  unsigned __int64 v33; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v34; // [rsp+28h] [rbp-40h]
  __int64 *v35; // [rsp+30h] [rbp-38h]
  unsigned int v36; // [rsp+70h] [rbp+8h]

  v33 = 0LL;
  a5 = 0;
  if ( (*(_DWORD *)(a1 + 56) & 0x20) != 0 )
    return 3221225608LL;
  v8 = MiSectionControlArea(a1);
  v36 = ((*v7 & 0xFFF) != 0) + (*v7 >> 12);
  v9 = MiOffsetToProtos(v8, *a3, &v33);
  result = MiAddViewsForSection((int **)v9, v36 + v33, 5);
  if ( (int)result < 0 )
  {
    ++dword_140E38920;
  }
  else
  {
    v14 = *(_WORD *)(v8 + 60) & 0x3FF;
    v15 = *a2;
    v16 = *((_QWORD *)qword_140E300C8 + v14);
    if ( *a2 )
    {
      MiReadyReservedView(v16, *a2);
    }
    else
    {
      v17 = MiObtainSystemCacheView(v16, v11, v12, v13);
      v15 = v17;
      if ( !v17 )
      {
        ++dword_140E38920;
        MiRemoveSystemCacheReferences(v9);
        return 3221225495LL;
      }
      *a2 = v17;
    }
    v18 = *(_QWORD *)(v9 + 8);
    v19 = (__int64 *)(((v15 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    v20 = v18 + 8 * v33;
    v34 = v18 + 8LL * *(unsigned int *)(v9 + 44);
    v35 = &v19[v36];
    SystemCacheReverseMap = (_QWORD *)MiGetSystemCacheReverseMap(v15);
    v22 = *a3 >> 2;
    v23 = v16 + 18816;
    v24 = v36 & 0x3F | SystemCacheReverseMap[4] & 0xC00000000000FFC0uLL | v22 & 0x3FFFFFFFFFFF0000LL;
    v26 = MiLockWorkingSetOptimal(v16 + 18816, (unsigned __int64)v19, (unsigned __int8 *)&a5, v25);
    v27 = (unsigned __int64)v35;
    v28 = v26;
    SystemCacheReverseMap[4] = v24;
    SystemCacheReverseMap[2] &= 0xFFFFFFFFFFFFFFFCuLL;
    SystemCacheReverseMap[3] = v9;
    if ( (unsigned __int64)v19 < v27 )
    {
      v29 = v34;
      do
      {
        if ( v20 >= v29 )
        {
          v9 = *(_QWORD *)(v9 + 16);
          v20 = *(_QWORD *)(v9 + 8);
          v32 = *(unsigned int *)(v9 + 44);
          SystemCacheReverseMap[3] |= 1uLL;
          v29 = v20 + 8 * v32;
        }
        v31 = (v20 << 16) | 0x400;
        if ( qword_140E2DCC0 )
        {
          v30 = v20 << 16;
          if ( (qword_140E2DCC0 & v31) != 0 )
            v31 = v30 | 0x410;
          else
            v31 = qword_140E2DCC0 | v30 | 0x400;
        }
        *v19 = v31;
        v20 += 8LL;
        ++v19;
      }
      while ( (unsigned __int64)v19 < v27 );
    }
    SystemCacheReverseMap[4] |= 0xC000000000000000uLL;
    MiIncreaseUsedPtes(0xC000000000000000uLL, v28, v36, 2LL);
    MiUnlockWorkingSetOptimal(v23, v28, a5);
    MiManageSubsectionView(v9, SystemCacheReverseMap, (2 * (unsigned __int8)SystemCacheReverseMap[3]) & 2 | 1u);
    return 0LL;
  }
  return result;
}
