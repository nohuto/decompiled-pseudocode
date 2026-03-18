/*
 * XREFs of ?StDmpSinglePageAdd@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_WORK_ITEM@1@PEAK@Z @ 0x14034B5FC
 * Callers:
 *     ?StWorkItemProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14034A720 (-StWorkItemProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StNpLeafPageOut@?$ST_STORE@USM_TRAITS@@@@SA_KPEAUNP_CTX@NP_CONTEXT@@PEAX@Z @ 0x1406006A0 (-StNpLeafPageOut@-$ST_STORE@USM_TRAITS@@@@SA_KPEAUNP_CTX@NP_CONTEXT@@PEAX@Z.c)
 * Callees:
 *     ?SmStReleaseStoreLockExclusive@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x14020CE38 (-SmStReleaseStoreLockExclusive@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ?SmStAcquireStoreLockExclusive@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x14020CEB0 (-SmStAcquireStoreLockExclusive@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ?StDmpSinglePageFindSpace@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KKPEAPEADPEAK@Z @ 0x140397A00 (-StDmpSinglePageFindSpace@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KKPEAPEADPEAK@Z.c)
 *     ?StDmpSinglePageInsert@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_PAGE_RECORD@1@@Z @ 0x140399A20 (-StDmpSinglePageInsert@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_S.c)
 *     SmHpChunkFree @ 0x14039EAF0 (SmHpChunkFree.c)
 *     ?StDmPageRecordUnprotect@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@@Z @ 0x14039ED20 (-StDmPageRecordUnprotect@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@@Z.c)
 *     SmHpChunkAlloc @ 0x1403A08F0 (SmHpChunkAlloc.c)
 *     RtlCompressBuffer @ 0x1403A15F0 (RtlCompressBuffer.c)
 *     SmStoreCopyHashCompressedBuffer @ 0x14046C4A4 (SmStoreCopyHashCompressedBuffer.c)
 *     ?StDmpDummyPageRecordAllocate@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x1404B1EAC (-StDmpDummyPageRecordAllocate@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z.c)
 *     SmCrAuthEncrypt @ 0x1404C57E0 (SmCrAuthEncrypt.c)
 *     crc32 @ 0x1404F120C (crc32.c)
 *     SmStoreHashCompressedData @ 0x1404F32F4 (SmStoreHashCompressedData.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmpSinglePageAdd(__int64 a1, int *a2, __int64 a3, unsigned int *a4)
{
  int v6; // edx
  int v7; // r15d
  unsigned int v8; // edx
  int v9; // eax
  int Space; // edi
  int v12; // ecx
  UCHAR *v13; // r14
  void *v14; // rsi
  ULONG v15; // edx
  unsigned int v16; // r12d
  __int64 v17; // rax
  __int64 v18; // rsi
  __int64 v19; // r8
  __int64 v20; // rcx
  __int64 v22; // r9
  __int64 v23; // rcx
  __int64 v24; // rcx
  int v25; // eax
  int v26; // eax
  UCHAR *v27; // rdi
  unsigned int v28; // ecx
  ULONG FinalCompressedSize; // [rsp+40h] [rbp-29h] BYREF
  int v30; // [rsp+44h] [rbp-25h] BYREF
  _DWORD *v31; // [rsp+48h] [rbp-21h] BYREF
  _DWORD *v32; // [rsp+50h] [rbp-19h]
  unsigned int *v33; // [rsp+58h] [rbp-11h]
  __int64 v34; // [rsp+60h] [rbp-9h]
  __int64 v35; // [rsp+68h] [rbp-1h] BYREF
  int v36; // [rsp+70h] [rbp+7h]

  v31 = 0LL;
  v30 = 0;
  v35 = 0LL;
  v6 = *a2;
  v7 = 0;
  v36 = 0;
  v8 = v6 & 7;
  v9 = *(_DWORD *)(a1 + 776);
  v34 = a3;
  v33 = a4;
  if ( ((unsigned __int8)v9 == 0 ? 7 : 0) < v8 )
    v8 = (unsigned __int8)v9 == 0 ? 7 : 0;
  Space = ST_STORE<SM_TRAITS>::StDmpSinglePageFindSpace(a1, v8, *a4, (unsigned int)&v31, (__int64)&v30);
  if ( Space >= 0 )
  {
    SMKM_STORE<SM_TRAITS>::SmStReleaseStoreLockExclusive(*(_QWORD *)(a1 + 800));
    v12 = *a2;
    v13 = (UCHAR *)v31 + *(unsigned int *)(a1 + 824);
    v14 = (void *)*((_QWORD *)a2 + 1);
    v32 = v31;
    if ( (v12 & 0x40000000) != 0 )
    {
      v15 = *(_DWORD *)(*(_QWORD *)(a3 + 16) + 40LL);
    }
    else
    {
      v26 = *(_DWORD *)(a1 + 776);
      if ( (v26 & 0x400) != 0 )
      {
        v15 = 4096;
      }
      else
      {
        if ( (v26 & 0x8000) != 0 )
        {
          memmove((void *)(*(_QWORD *)(a1 + 2168) + 4096LL), v14, 0x1000uLL);
          v12 = *a2;
          v14 = (void *)(*(_QWORD *)(a1 + 2168) + 4096LL);
        }
        v15 = 0;
      }
    }
    v16 = *(_DWORD *)(a1 + 816) - (v30 & *(_DWORD *)(a1 + 808));
    FinalCompressedSize = v15;
    if ( (v12 & 0x40000000) != 0 )
    {
      SmStoreCopyHashCompressedBuffer(v13, v14, v15);
      goto LABEL_8;
    }
    if ( v16 >= *(_DWORD *)(a1 + 820) )
      v27 = v13;
    else
      v27 = *(UCHAR **)(a1 + 2168);
    if ( !v15 )
    {
      if ( RtlCompressBuffer(
             *((_WORD *)qword_140011220 + *(int *)(a1 + 1376)),
             (PUCHAR)v14,
             0x1000u,
             v27,
             0x1000u,
             0x1000u,
             &FinalCompressedSize,
             *(PVOID *)(a1 + 896)) >= 0 )
      {
        v15 = FinalCompressedSize;
      }
      else
      {
        v15 = 4096;
        FinalCompressedSize = 4096;
      }
    }
    if ( v27 != v13 )
    {
      v28 = (v15 + *(_DWORD *)(a1 + 824) + 15) >> 4;
      *v33 = v28;
      if ( v28 > v16 )
      {
        Space = -1073741267;
LABEL_27:
        SMKM_STORE<SM_TRAITS>::SmStAcquireStoreLockExclusive(*(_QWORD *)(a1 + 800));
        return (unsigned int)Space;
      }
    }
    if ( v15 > 0xFF0 )
    {
      if ( (*(_DWORD *)(a1 + 776) & 0x200) != 0 )
      {
        Space = -1073740762;
        goto LABEL_27;
      }
      v15 = 4096;
      v27 = (UCHAR *)v14;
      FinalCompressedSize = 4096;
    }
    if ( v27 != v13 )
      memmove(v13, v27, v15);
LABEL_8:
    if ( !*(_QWORD *)(a1 + 760) )
    {
      Space = ST_STORE<SM_TRAITS>::StDmpDummyPageRecordAllocate(a1);
      if ( Space < 0 )
        goto LABEL_27;
    }
    SMKM_STORE<SM_TRAITS>::SmStAcquireStoreLockExclusive(*(_QWORD *)(a1 + 800));
    v17 = SmHpChunkAlloc(a1 + 192);
    v18 = v17;
    if ( !v17 )
      return (unsigned int)-1073741670;
    ST_STORE<SM_TRAITS>::StDmPageRecordUnprotect(a1, v17);
    *(_QWORD *)(v18 + 4) = 0LL;
    *(_DWORD *)v18 = v30;
    v19 = FinalCompressedSize;
    if ( FinalCompressedSize < 0x1000 )
    {
      *(_DWORD *)(v18 + 4) = *(_DWORD *)(v18 + 4) & 0xFFFFF000 | FinalCompressedSize & 0xFFF;
      v19 = FinalCompressedSize;
    }
    if ( (*a2 & 0x40000000) != 0 )
    {
      v7 = *(_DWORD *)(v34 + 96);
    }
    else if ( (*(_DWORD *)(a1 + 776) & 0x200000) != 0 )
    {
      v24 = *(_QWORD *)(a1 + 800);
      v31 = 0LL;
      if ( (int)SmStoreHashCompressedData(v24, v13, v19, &v31) >= 0 )
        v7 = (int)v31;
    }
    else
    {
      v7 = -1;
    }
    *(_DWORD *)(v18 + 8) = v7;
    v20 = *(_QWORD *)(a1 + 1400);
    if ( *(_DWORD *)(v20 + 24) )
    {
      v22 = -*(_DWORD *)(v20 + 8) & (*(_DWORD *)(v20 + 8) + FinalCompressedSize - 1);
      ++*(_QWORD *)(a1 + 1408);
      *(_DWORD *)(v18 + 12) = *(_DWORD *)(a1 + 1408);
      *(_WORD *)(v18 + 6) = *(_WORD *)(a1 + 1412);
      LODWORD(v35) = FinalCompressedSize;
      HIDWORD(v35) = *(_DWORD *)(v18 + 12);
      v23 = *(_QWORD *)(a1 + 1400);
      v36 = *(unsigned __int16 *)(v18 + 6);
      if ( (int)SmCrAuthEncrypt(v23, v13, v13, v22, &v35) < 0 )
      {
        Space = -1073741174;
LABEL_18:
        SmHpChunkFree(a1 + 192, v18);
        return (unsigned int)Space;
      }
    }
    else if ( *(_BYTE *)(a1 + 776) )
    {
      v25 = crc32(0LL, v13, FinalCompressedSize);
      *v32 = v25;
    }
    Space = ST_STORE<SM_TRAITS>::StDmpSinglePageInsert(a1, a2, v18);
    if ( Space >= 0 )
      return 0;
    goto LABEL_18;
  }
  return (unsigned int)Space;
}
