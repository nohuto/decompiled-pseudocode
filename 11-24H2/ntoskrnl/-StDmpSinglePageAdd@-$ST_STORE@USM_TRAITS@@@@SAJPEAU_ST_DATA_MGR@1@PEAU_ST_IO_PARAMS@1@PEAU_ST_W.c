/*
 * XREFs of ?StDmpSinglePageAdd@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_WORK_ITEM@1@PEAK@Z @ 0x14023016C
 * Callers:
 *     ?StWorkItemProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14022F290 (-StWorkItemProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StNpLeafPageOut@?$ST_STORE@USM_TRAITS@@@@SA_KPEAUNP_CTX@NP_CONTEXT@@PEAX@Z @ 0x14060ACE0 (-StNpLeafPageOut@-$ST_STORE@USM_TRAITS@@@@SA_KPEAUNP_CTX@NP_CONTEXT@@PEAX@Z.c)
 * Callees:
 *     ?StRegionFindCompact@?$ST_STORE@USM_TRAITS@@@@SAPEAT_ST_REGION_STATE@1@PEAU_ST_DATA_MGR@1@K@Z @ 0x1402F5420 (-StRegionFindCompact@-$ST_STORE@USM_TRAITS@@@@SAPEAT_ST_REGION_STATE@1@PEAU_ST_DATA_MGR@1@K@Z.c)
 *     ?StDmReuseCurrentRegion@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_CURRENT_REGION@1@@Z @ 0x1402F578C (-StDmReuseCurrentRegion@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_CURRENT_REGION@1@.c)
 *     ?StDmCurrentRegionSet@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z @ 0x1402F6914 (-StDmCurrentRegionSet@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z.c)
 *     ?SmStReleaseStoreLockExclusive@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1402F97E8 (-SmStReleaseStoreLockExclusive@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ?SmStAcquireStoreLockExclusive@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1402F9860 (-SmStAcquireStoreLockExclusive@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ?StDmpSinglePageInsert@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_PAGE_RECORD@1@@Z @ 0x14037BE70 (-StDmpSinglePageInsert@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_S.c)
 *     ?StDmCombineRegion@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z @ 0x140380A88 (-StDmCombineRegion@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z.c)
 *     SmHpChunkFree @ 0x140380F50 (SmHpChunkFree.c)
 *     ?StDmPageRecordUnprotect@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@@Z @ 0x140381180 (-StDmPageRecordUnprotect@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@@Z.c)
 *     SmHpChunkAlloc @ 0x140382D30 (SmHpChunkAlloc.c)
 *     RtlCompressBuffer @ 0x140383BB0 (RtlCompressBuffer.c)
 *     crc32 @ 0x140455F88 (crc32.c)
 *     SmStoreCopyHashCompressedBuffer @ 0x14045A978 (SmStoreCopyHashCompressedBuffer.c)
 *     ?StDmpDummyPageRecordAllocate@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x1404AC5C0 (-StDmpDummyPageRecordAllocate@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z.c)
 *     SmCrAuthEncrypt @ 0x1404BF58C (SmCrAuthEncrypt.c)
 *     SmStoreHashCompressedData @ 0x1404F34F8 (SmStoreHashCompressedData.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmpSinglePageAdd(__int64 a1, _DWORD *a2, __int64 a3, unsigned int *a4)
{
  int v4; // esi
  int v6; // r12d
  unsigned int v7; // esi
  int v9; // r9d
  _DWORD *v11; // rdi
  __int64 v12; // r14
  int v13; // edx
  __int64 v14; // rcx
  int v15; // r13d
  UCHAR *v16; // r14
  void *v17; // rsi
  ULONG v18; // edx
  unsigned int v19; // r15d
  __int64 v20; // rax
  __int64 v21; // rsi
  __int64 v22; // r8
  _DWORD *v23; // rdi
  __int64 v24; // rcx
  int v25; // edi
  __int64 v27; // r9
  __int64 v28; // rcx
  __int64 Compact; // rax
  __int64 v30; // rax
  int v31; // eax
  int v32; // eax
  __int64 v33; // rcx
  int v34; // eax
  UCHAR *v35; // rdi
  unsigned int v36; // ecx
  ULONG FinalCompressedSize; // [rsp+40h] [rbp-29h] BYREF
  _DWORD *v38; // [rsp+48h] [rbp-21h] BYREF
  _DWORD *v39; // [rsp+50h] [rbp-19h]
  unsigned int *v40; // [rsp+58h] [rbp-11h]
  __int64 v41; // [rsp+60h] [rbp-9h]
  __int64 v42; // [rsp+68h] [rbp-1h] BYREF
  int v43; // [rsp+70h] [rbp+7h]

  FinalCompressedSize = 0;
  v4 = *a2;
  v42 = 0LL;
  v6 = 0;
  v43 = 0;
  v7 = v4 & 7;
  v40 = a4;
  v9 = *(_DWORD *)(a1 + 776);
  v41 = a3;
  v11 = a2;
  v38 = a2;
  if ( ((unsigned __int8)v9 == 0 ? 7 : 0) < v7 )
    v7 = (unsigned __int8)v9 == 0 ? 7 : 0;
  v12 = a1 + 16 * (v7 + 102LL);
  if ( *(_DWORD *)v12 == -1 || *(_DWORD *)(v12 + 4) + *a4 > *(_DWORD *)(a1 + 816) )
  {
    if ( (_BYTE)v9 )
      goto LABEL_31;
    if ( (v9 & 0x100000) == 0
      || *(_DWORD *)v12 == -1
      || (int)ST_STORE<SM_TRAITS>::StDmCombineRegion(a1) < 0
      || (int)ST_STORE<SM_TRAITS>::StDmReuseCurrentRegion(a1, a1 + 16 * (v7 + 102LL)) < 0 )
    {
      if ( (int)ST_STORE<SM_TRAITS>::StDmCurrentRegionSet(a1, v7, 0xFFFFFFFFLL) < 0 )
        __int2c();
      while ( 1 )
      {
LABEL_31:
        Compact = ST_STORE<SM_TRAITS>::StRegionFindCompact(a1, v7);
        if ( !Compact )
          return (unsigned int)-1073741697;
        v30 = (Compact - *(_QWORD *)(a1 + 1416)) >> 1;
        if ( (_DWORD)v30 == -1 )
          return (unsigned int)-1073741697;
        v31 = ST_STORE<SM_TRAITS>::StDmCurrentRegionSet(a1, v7, (unsigned int)v30);
        v25 = v31;
        if ( v31 >= 0 )
          break;
        if ( v31 != -1073741267 )
          return (unsigned int)v25;
      }
      v11 = v38;
    }
  }
  v13 = *(_DWORD *)(v12 + 4);
  v14 = *(_QWORD *)(a1 + 800);
  v15 = v13 | (*(_DWORD *)v12 << *(_DWORD *)(a1 + 812));
  v39 = (_DWORD *)(*(_QWORD *)(v12 + 8) + (unsigned int)(16 * v13));
  SMKM_STORE<SM_TRAITS>::SmStReleaseStoreLockExclusive(v14);
  v16 = (UCHAR *)v39 + *(unsigned int *)(a1 + 824);
  v17 = (void *)*((_QWORD *)v11 + 1);
  if ( (*v11 & 0x40000000) != 0 )
  {
    v18 = *(_DWORD *)(*(_QWORD *)(a3 + 16) + 40LL);
  }
  else
  {
    v34 = *(_DWORD *)(a1 + 776);
    if ( (v34 & 0x400) != 0 )
    {
      v18 = 4096;
    }
    else
    {
      if ( (v34 & 0x8000) != 0 )
      {
        memmove((void *)(*(_QWORD *)(a1 + 2168) + 4096LL), *((const void **)v11 + 1), 0x1000uLL);
        v17 = (void *)(*(_QWORD *)(a1 + 2168) + 4096LL);
      }
      v18 = 0;
    }
  }
  v19 = *(_DWORD *)(a1 + 816) - (v15 & *(_DWORD *)(a1 + 808));
  FinalCompressedSize = v18;
  if ( (*v11 & 0x40000000) != 0 )
  {
    SmStoreCopyHashCompressedBuffer(v16, v17, v18);
    goto LABEL_9;
  }
  if ( v19 >= *(_DWORD *)(a1 + 820) )
    v35 = v16;
  else
    v35 = *(UCHAR **)(a1 + 2168);
  if ( !v18 )
  {
    if ( RtlCompressBuffer(
           word_140011540[*(int *)(a1 + 1376)],
           (PUCHAR)v17,
           0x1000u,
           v35,
           0x1000u,
           0x1000u,
           &FinalCompressedSize,
           *(PVOID *)(a1 + 896)) >= 0 )
    {
      v18 = FinalCompressedSize;
    }
    else
    {
      v18 = 4096;
      FinalCompressedSize = 4096;
    }
  }
  if ( v35 != v16 )
  {
    v36 = (v18 + *(_DWORD *)(a1 + 824) + 15) >> 4;
    *v40 = v36;
    if ( v36 > v19 )
    {
      v25 = -1073741267;
LABEL_41:
      SMKM_STORE<SM_TRAITS>::SmStAcquireStoreLockExclusive(*(_QWORD *)(a1 + 800));
      return (unsigned int)v25;
    }
  }
  if ( v18 > 0xFF0 )
  {
    if ( (*(_DWORD *)(a1 + 776) & 0x200) != 0 )
    {
      v25 = -1073740762;
      goto LABEL_41;
    }
    v18 = 4096;
    v35 = (UCHAR *)v17;
    FinalCompressedSize = 4096;
  }
  if ( v35 != v16 )
    memmove(v16, v35, v18);
LABEL_9:
  if ( !*(_QWORD *)(a1 + 760) )
  {
    v25 = ST_STORE<SM_TRAITS>::StDmpDummyPageRecordAllocate(a1);
    if ( v25 < 0 )
      goto LABEL_41;
  }
  SMKM_STORE<SM_TRAITS>::SmStAcquireStoreLockExclusive(*(_QWORD *)(a1 + 800));
  v20 = SmHpChunkAlloc(a1 + 192);
  v21 = v20;
  if ( !v20 )
    return (unsigned int)-1073741670;
  ST_STORE<SM_TRAITS>::StDmPageRecordUnprotect(a1, v20);
  *(_QWORD *)(v21 + 4) = 0LL;
  *(_DWORD *)v21 = v15;
  v22 = FinalCompressedSize;
  if ( FinalCompressedSize < 0x1000 )
  {
    *(_DWORD *)(v21 + 4) = *(_DWORD *)(v21 + 4) & 0xFFFFF000 | FinalCompressedSize & 0xFFF;
    v22 = FinalCompressedSize;
  }
  v23 = v38;
  if ( (*v38 & 0x40000000) != 0 )
  {
    v6 = *(_DWORD *)(v41 + 96);
  }
  else if ( (*(_DWORD *)(a1 + 776) & 0x200000) != 0 )
  {
    v33 = *(_QWORD *)(a1 + 800);
    v38 = 0LL;
    if ( (int)SmStoreHashCompressedData(v33, v16, v22, &v38) >= 0 )
      v6 = (int)v38;
  }
  else
  {
    v6 = -1;
  }
  *(_DWORD *)(v21 + 8) = v6;
  v24 = *(_QWORD *)(a1 + 1400);
  if ( *(_DWORD *)(v24 + 24) )
  {
    v27 = -*(_DWORD *)(v24 + 8) & (*(_DWORD *)(v24 + 8) + FinalCompressedSize - 1);
    ++*(_QWORD *)(a1 + 1408);
    *(_DWORD *)(v21 + 12) = *(_DWORD *)(a1 + 1408);
    *(_WORD *)(v21 + 6) = *(_WORD *)(a1 + 1412);
    LODWORD(v42) = FinalCompressedSize;
    HIDWORD(v42) = *(_DWORD *)(v21 + 12);
    v28 = *(_QWORD *)(a1 + 1400);
    v43 = *(unsigned __int16 *)(v21 + 6);
    if ( (int)SmCrAuthEncrypt(v28, v16, v16, v27, &v42) < 0 )
    {
      v25 = -1073741174;
      goto LABEL_21;
    }
  }
  else if ( *(_BYTE *)(a1 + 776) )
  {
    v32 = crc32(0LL, v16, FinalCompressedSize);
    *v39 = v32;
  }
  v25 = ST_STORE<SM_TRAITS>::StDmpSinglePageInsert(a1, v23, v21);
  if ( v25 < 0 )
  {
LABEL_21:
    SmHpChunkFree(a1 + 192, v21);
    return (unsigned int)v25;
  }
  return 0;
}
