/*
 * XREFs of ?StDmHandleDecompressionFailure@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAD1PEAU_ST_PAGE_LOCATION@1@PEAU_STDM_READ_CONTEXT@1@@Z @ 0x14060A0A8
 * Callers:
 *     ?StDmPageError@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAD1PEAU_ST_PAGE_LOCATION@1@PEAU_STDM_READ_CONTEXT@1@J@Z @ 0x14060A408 (-StDmPageError@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAD1PEAU_ST_PAGE_LOCATION@1@PEAU_.c)
 * Callees:
 *     ?StLockReleaseShared@@YAXPEAUVLOCK@@K@Z @ 0x1402F6C50 (-StLockReleaseShared@@YAXPEAUVLOCK@@K@Z.c)
 *     ?StLockAcquireShared@@YAKPEAUVLOCK@@@Z @ 0x1402F9208 (-StLockAcquireShared@@YAKPEAUVLOCK@@@Z.c)
 *     SmStoreDecompressBuffer @ 0x1402F9A18 (SmStoreDecompressBuffer.c)
 *     ?BTreeSearchResultCleanup@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUSEARCH_RESULT@1@K@Z @ 0x1403790B8 (-BTreeSearchResultCleanup@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAA.c)
 *     ?BTreeSearchKey@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@T_SM_PAGE_KEY@@PEAUSEARCH_RESULT@1@@Z @ 0x14037CC80 (-BTreeSearchKey@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONT.c)
 *     SmHpChunkUnprotect @ 0x140382F80 (SmHpChunkUnprotect.c)
 *     ?ST_PAGE_RECORD_GET@?$ST_STORE@USM_TRAITS@@@@SAPEAU_ST_PAGE_RECORD@1@PEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_ENTRY@1@@Z @ 0x14042A960 (-ST_PAGE_RECORD_GET@-$ST_STORE@USM_TRAITS@@@@SAPEAU_ST_PAGE_RECORD@1@PEAU_ST_DATA_MGR@1@PEAU_ST_.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     ?StDmFixSingleBitCorruption@?$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEADKK@Z @ 0x140609D94 (-StDmFixSingleBitCorruption@-$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEADKK@Z.c)
 *     ?StDmPageError@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAD1PEAU_ST_PAGE_LOCATION@1@PEAU_STDM_READ_CONTEXT@1@J@Z @ 0x14060A408 (-StDmPageError@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAD1PEAU_ST_PAGE_LOCATION@1@PEAU_.c)
 *     ?StRegionAccessExceptionFilter@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_EXCEPTION_POINTERS@@PEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_LOCATION@1@PEAJ@Z @ 0x14060ADB8 (-StRegionAccessExceptionFilter@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_EXCEPTION_POINTERS@@PEAU_ST_DATA.c)
 *     SmRecordDecompressionFailureDumpPayload @ 0x14060D6D0 (SmRecordDecompressionFailureDumpPayload.c)
 *     MmStoreLogDecompressionFailure @ 0x14068DA68 (MmStoreLogDecompressionFailure.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmHandleDecompressionFailure(
        __int64 a1,
        const void *a2,
        void *a3,
        ULONG_PTR a4,
        __int64 a5)
{
  int v6; // r12d
  unsigned int v9; // esi
  _DWORD *v10; // rbx
  char *v11; // rdx
  int v12; // edx
  unsigned __int16 *v13; // r15
  struct VLOCK *v14; // rcx
  void *v15; // r12
  __int64 v16; // r8
  ULONG v17; // eax
  int v18; // eax
  int v19; // edx
  unsigned int v20; // esi
  int v22; // [rsp+58h] [rbp-80h]
  int v23; // [rsp+60h] [rbp-78h]
  __int128 v24; // [rsp+68h] [rbp-70h] BYREF
  __int128 v25; // [rsp+78h] [rbp-60h]
  __int64 v26; // [rsp+88h] [rbp-50h]
  ULONG_PTR v27; // [rsp+90h] [rbp-48h]

  v6 = (int)a2;
  v27 = a4;
  v9 = 0;
  v22 = *(_DWORD *)a4 >> *(_DWORD *)(a1 + 812);
  v23 = (_DWORD)a2 - 16 * (*(_DWORD *)a4 & *(_DWORD *)(a1 + 808));
  v10 = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  v26 = 1LL;
  DWORD2(v25) = -1;
  if ( (int)B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchKey(
              (struct NP_CONTEXT **)a1,
              *(_DWORD *)(*(_QWORD *)(a5 + 416) + 16LL),
              (__int64)&v24) >= 0 )
  {
    if ( DWORD2(v25) == -1 || !DWORD2(v25) )
      v11 = (char *)&v24 + 8;
    else
      v11 = (char *)(v24 + 16LL * (unsigned int)(DWORD2(v25) - 1));
    v10 = ST_STORE<SM_TRAITS>::ST_PAGE_RECORD_GET((_DWORD *)a1, *((_QWORD *)v11 + 1));
  }
  B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchResultCleanup(
    a1,
    (__int64)&v24,
    0);
  if ( v10 )
  {
    if ( *(_DWORD *)a4 != *v10 )
      goto LABEL_13;
    v12 = 4096;
    if ( (v10[1] & 0xFFF) != 0 )
      v12 = v10[1] & 0xFFF;
    v13 = (unsigned __int16 *)(a4 + 4);
    if ( *(unsigned __int16 *)(a4 + 4) != v12 )
LABEL_13:
      KeBugCheckEx(0x1C7u, 3uLL, a4, (ULONG_PTR)v10, 0LL);
    SmHpChunkUnprotect(a1 + 192, (__int64)v10, 2, 2u);
  }
  else
  {
    v13 = (unsigned __int16 *)(a4 + 4);
  }
  if ( (*(_DWORD *)(a1 + 776) & 0x200000) != 0 )
  {
    v14 = (struct VLOCK *)(*(_QWORD *)(a1 + 800) + 6840LL);
    if ( a5 == -448 )
      StLockAcquireShared(v14);
    else
      StLockReleaseShared(v14);
    v15 = *(void **)(a5 + 408);
    memmove(v15, a2, *(unsigned __int16 *)(a4 + 4));
    if ( v15 )
    {
      v13 = (unsigned __int16 *)(a4 + 4);
      v9 = ST_STORE<SM_TRAITS>::StDmFixSingleBitCorruption(
             a1,
             (__int64)v15,
             *(unsigned __int16 *)(a4 + 4),
             *(_DWORD *)(a4 + 16)) & 1;
    }
    else
    {
      v13 = (unsigned __int16 *)(v27 + 4);
    }
    if ( v9 )
    {
      v17 = *v13;
      if ( (unsigned __int16)v17 >= 0x1000u )
      {
        memmove(a3, v15, 0x1000uLL);
        v18 = 0;
      }
      else
      {
        *(_QWORD *)(a4 + 8) = 2LL;
        v18 = SmStoreDecompressBuffer(
                *(_QWORD *)(a1 + 800),
                (UCHAR *)a3,
                v16,
                (__int64)v15,
                v17,
                *(PVOID *)(a5 + 16),
                (_QWORD *)(a4 + 8));
        *(_QWORD *)(a4 + 8) = 0LL;
      }
      if ( v18 >= 0 )
        v9 |= 2u;
    }
    *(_DWORD *)(a5 + 448) = StLockAcquireShared((struct VLOCK *)(*(_QWORD *)(a1 + 800) + 6840LL));
    v6 = (int)a2;
  }
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 2316));
  v19 = *v13;
  _InterlockedIncrement(&dword_140E2893C);
  v20 = v9 >> 1;
  if ( v20 )
    _InterlockedIncrement(&dword_140E28938);
  MmStoreLogDecompressionFailure(v6, v19, v20, dword_140E28938, dword_140E2893C);
  SmRecordDecompressionFailureDumpPayload(
    v23,
    *(_DWORD *)(a1 + 784),
    *v13,
    v22,
    *(_DWORD *)(a1 + 1376),
    *(_DWORD *)(a4 + 16),
    v6,
    a3,
    *(_QWORD *)(a5 + 416) + 16LL);
  if ( !v20 )
    return 3221226720LL;
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 2312));
  return 0LL;
}
