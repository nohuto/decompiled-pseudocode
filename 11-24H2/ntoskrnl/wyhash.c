/*
 * XREFs of wyhash @ 0x140382B78
 * Callers:
 *     SmHpChunkHeapProtect @ 0x140379518 (SmHpChunkHeapProtect.c)
 *     ?StCompactRegions@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEADK1KK@Z @ 0x14037AAF0 (-StCompactRegions@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEADK1KK@Z.c)
 *     ?StDmPageRemove@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14037F670 (-StDmPageRemove@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     SmHpChunkFree @ 0x140380F50 (SmHpChunkFree.c)
 *     ?StDmPageRecordUnprotect@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@@Z @ 0x140381180 (-StDmPageRecordUnprotect@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@@Z.c)
 *     SmHpBufferUpdateFullness @ 0x140381C40 (SmHpBufferUpdateFullness.c)
 *     SmHpUnprotectListNeighbors @ 0x140381E34 (SmHpUnprotectListNeighbors.c)
 *     SmHpBufferProtectEx @ 0x140382050 (SmHpBufferProtectEx.c)
 *     SmHpChunkAlloc @ 0x140382D30 (SmHpChunkAlloc.c)
 *     SmHpChunkUnprotect @ 0x140382F80 (SmHpChunkUnprotect.c)
 *     ?SmCompressCtxCompleteEntry@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_THREAD_CTX@1@PEAU_SM_WORK_ITEM@1@KKJ@Z @ 0x140383954 (-SmCompressCtxCompleteEntry@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_THREAD_CTX@1@PEAU.c)
 *     SmStoreCopyHashCompressedBuffer @ 0x14045A978 (SmStoreCopyHashCompressedBuffer.c)
 *     MiValidateMdlTracker @ 0x1404A8FEC (MiValidateMdlTracker.c)
 *     MiAddMdlTracker @ 0x1404CBC78 (MiAddMdlTracker.c)
 *     SmStoreHashCompressedData @ 0x1404F34F8 (SmStoreHashCompressedData.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wyhash(_QWORD *a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v5; // r8
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rdi
  __int64 v8; // r11
  __int64 v9; // r11
  unsigned __int128 v10; // rax
  __int64 v11; // rcx
  unsigned __int64 v12; // r11
  __int64 v13; // rax
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rcx
  unsigned __int128 v17; // rax
  unsigned __int128 v18; // rax
  __int64 v20; // rcx

  v5 = (((a3 ^ 0x2D358DCCAA6C78A5uLL) * (unsigned __int128)0x8BB84B93962EACC9uLL) >> 64) ^ (0x8BB84B93962EACC9uLL
                                                                                          * (a3 ^ 0x2D358DCCAA6C78A5LL)) ^ a3;
  if ( a2 <= 0x10 )
  {
    if ( a2 < 4 )
    {
      v16 = 0LL;
      if ( a2 )
        v15 = *((unsigned __int8 *)a1 + a2 - 1) | ((((unsigned __int64)*(unsigned __int8 *)a1 << 8) | *((unsigned __int8 *)a1 + (a2 >> 1))) << 8);
      else
        v15 = 0LL;
    }
    else
    {
      v20 = (a2 >> 1) & 0x7FFFFFFFFFFFFFFCLL;
      v15 = ((unsigned __int64)*(unsigned int *)a1 << 32) | *(unsigned int *)((char *)a1 + v20);
      v16 = ((unsigned __int64)*(unsigned int *)((char *)a1 + a2 - 4) << 32) | *(unsigned int *)((char *)a1
                                                                                               + a2
                                                                                               - v20
                                                                                               - 4);
    }
  }
  else
  {
    v6 = a2;
    if ( a2 < 0x30 )
      goto LABEL_6;
    v7 = v5;
    v8 = v5;
    do
    {
      v6 -= 48LL;
      v9 = a1[5] ^ v8;
      v5 = (((*a1 ^ 0x8BB84B93962EACC9uLL) * (unsigned __int128)(a1[1] ^ v5)) >> 64) ^ ((*a1 ^ 0x8BB84B93962EACC9uLL)
                                                                                      * (a1[1] ^ v5));
      v10 = (a1[2] ^ 0x4B33A62ED433D4A3uLL) * (unsigned __int128)(a1[3] ^ v7);
      v11 = a1[4];
      a1 += 6;
      v7 = *((_QWORD *)&v10 + 1) ^ v10;
      v8 = (((v11 ^ 0x4D5A2DA51DE1AA47uLL) * (unsigned __int128)(unsigned __int64)v9) >> 64) ^ ((v11 ^ 0x4D5A2DA51DE1AA47LL)
                                                                                              * v9);
    }
    while ( v6 >= 0x30 );
    v5 ^= v7 ^ v8;
    if ( v6 > 0x10 )
    {
LABEL_6:
      v12 = ((v6 - 17) >> 4) + 1;
      v6 += -16LL * v12;
      do
      {
        v13 = a1[1] ^ v5;
        v14 = *a1 ^ 0x8BB84B93962EACC9uLL;
        a1 += 2;
        v5 = ((v14 * (unsigned __int128)(unsigned __int64)v13) >> 64) ^ (v14 * v13);
        --v12;
      }
      while ( v12 );
    }
    v15 = *(_QWORD *)((char *)a1 + v6 - 16);
    v16 = *(_QWORD *)((char *)a1 + v6 - 8);
  }
  v17 = (v15 ^ 0x8BB84B93962EACC9uLL) * (unsigned __int128)(v5 ^ v16);
  v18 = ((unsigned __int64)v17 ^ a2 ^ 0x2D358DCCAA6C78A5LL)
      * (unsigned __int128)(*((_QWORD *)&v17 + 1) ^ 0x8BB84B93962EACC9uLL);
  return *((_QWORD *)&v18 + 1) ^ v18;
}
