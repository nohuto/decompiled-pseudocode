/*
 * XREFs of ?StDmSinglePageCopy@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAXPEAD2PEAU_ST_PAGE_LOCATION@1@PEAU_STDM_READ_CONTEXT@1@@Z @ 0x14039B624
 * Callers:
 *     ?StDmpSinglePageRetrieve@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1@PEAXPEAU_ST_PAGE_LOCATION@1@@Z @ 0x14039AB00 (-StDmpSinglePageRetrieve@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1.c)
 *     ?StDmFinishPageRetrieve@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_LOCATION@1@PEAU_STDM_READ_CONTEXT@1@PEAU_ST_WORK_ITEM@1@J@Z @ 0x14039B140 (-StDmFinishPageRetrieve@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_LOCATION@1@P.c)
 *     ?StDmSinglePageTransfer@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAXPEAD11PEAU_ST_PAGE_LOCATION@1@PEAU_STDM_READ_CONTEXT@1@@Z @ 0x14039B530 (-StDmSinglePageTransfer@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAXPEAD11PEAU_ST_PAGE_LO.c)
 * Callees:
 *     ?StLockReleaseShared@@YAXPEAUVLOCK@@K@Z @ 0x140399948 (-StLockReleaseShared@@YAXPEAUVLOCK@@K@Z.c)
 *     ?StLockAcquireShared@@YAKPEAUVLOCK@@@Z @ 0x14039BF08 (-StLockAcquireShared@@YAKPEAUVLOCK@@@Z.c)
 *     SmStoreDecompressBuffer @ 0x14039C718 (SmStoreDecompressBuffer.c)
 *     SmStoreCompletePendingDecompress @ 0x1404CDB54 (SmStoreCompletePendingDecompress.c)
 *     SmStoreHashCompressedData @ 0x1404F5BF8 (SmStoreHashCompressedData.c)
 *     ?StRegionAccessExceptionFilter@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_EXCEPTION_POINTERS@@PEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_LOCATION@1@PEAJ@Z @ 0x14060C7F8 (-StRegionAccessExceptionFilter@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_EXCEPTION_POINTERS@@PEAU_ST_DATA.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmSinglePageCopy(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 a6)
{
  int v8; // ebx
  __int64 v10; // r9
  unsigned __int64 v11; // r12
  __int64 v12; // r10
  size_t v13; // r8
  char v14; // al
  const void *v15; // rdx
  struct VLOCK *v16; // rcx
  unsigned int v17; // ecx
  _QWORD *v18; // r13
  int v19; // r9d
  size_t v20; // r8
  int v22; // [rsp+40h] [rbp-58h]
  __int64 v23; // [rsp+48h] [rbp-50h] BYREF
  void *Src; // [rsp+50h] [rbp-48h]
  unsigned int v26; // [rsp+B8h] [rbp+20h]

  v8 = 0;
  v10 = *(unsigned int *)(a1 + 824);
  v11 = v10 + a3;
  v12 = *(_QWORD *)(a1 + 1400);
  v13 = -*(_DWORD *)(v12 + 8) & (*(_DWORD *)(v12 + 8) + (unsigned int)*(unsigned __int16 *)(a5 + 4) - 1);
  Src = (void *)a4;
  if ( (a4 & 1) != 0 )
  {
    a4 &= ~1uLL;
    Src = *(void **)(a6 + 408);
  }
  if ( (v11 & 3) != 0 )
  {
    v14 = v11;
    v11 &= 0xFFFFFFFFFFFFFFFCuLL;
    v15 = (const void *)(a3 & 0xFFFFFFFFFFFFFFFCuLL);
    if ( (v14 & 2) != 0 )
    {
      memmove((void *)a4, v15, (unsigned int)(v10 + v13));
      v22 = 0;
      goto LABEL_31;
    }
    if ( *(_DWORD *)(v12 + 24) )
    {
      memmove(*(void **)(a1 + 2168), (const void *)v11, v13);
      v11 = *(_QWORD *)(a1 + 2168);
    }
  }
  if ( (*(_DWORD *)(a1 + 776) & 0x20000) != 0 )
  {
    v16 = (struct VLOCK *)(*(_QWORD *)(a1 + 800) + 6840LL);
    if ( a6 == -448 )
      StLockAcquireShared(v16);
    else
      StLockReleaseShared((signed __int64 *)v16);
    v8 = 1;
  }
  v17 = *(unsigned __int16 *)(a5 + 4);
  v26 = v17;
  if ( (*(_DWORD *)(a1 + 776) & 0x800000) != 0 )
  {
    v23 = 0LL;
    if ( (int)SmStoreHashCompressedData(*(_QWORD *)(a1 + 800), v11, v17, &v23) < 0
      || *(_DWORD *)(a5 + 16) != (_DWORD)v23 )
    {
      v22 = -1073740576;
      *(_DWORD *)(a5 + 20) = *(_DWORD *)(a5 + 20) & 0xFFFFFFF3 | 4;
      goto LABEL_31;
    }
    v17 = v26;
  }
  if ( v17 >= 0x1000 )
  {
    v20 = v17;
    goto LABEL_18;
  }
  v18 = (_QWORD *)(a5 + 8);
  v19 = v11;
  v11 = (unsigned __int64)Src;
  v22 = SmStoreDecompressBuffer(*(_QWORD *)(a1 + 800), (_DWORD)Src, v13, v19, v17, a2, a5 + 8);
  if ( v22 == -1073741420 )
  {
    v22 = -1073741552;
    goto LABEL_31;
  }
  if ( v22 != 259 )
  {
LABEL_15:
    if ( v22 < 0 )
    {
      v22 = -1073740576;
      *(_DWORD *)(a5 + 20) = *(_DWORD *)(a5 + 20) & 0xFFFFFFF3 | 4;
      goto LABEL_31;
    }
    if ( v11 == a4 )
      goto LABEL_30;
    v20 = 4096LL;
LABEL_18:
    memmove((void *)a4, (const void *)v11, v20);
LABEL_30:
    v22 = 0;
    goto LABEL_31;
  }
  if ( v11 != a4 )
  {
    v22 = SmStoreCompletePendingDecompress(*(_QWORD *)(a1 + 800), *v18, 0LL);
    *v18 = 0LL;
    if ( v22 == -1073741248 )
    {
      *v18 = 2LL;
      goto LABEL_31;
    }
    goto LABEL_15;
  }
LABEL_31:
  if ( v8 )
    *(_DWORD *)(a6 + 448) = StLockAcquireShared((struct VLOCK *)(*(_QWORD *)(a1 + 800) + 6840LL));
  return (unsigned int)v22;
}
