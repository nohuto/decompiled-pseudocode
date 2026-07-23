/*
 * XREFs of ?SmCompressCtxCompletePendingEntry@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_SM_COMPRESS_THREAD_CTX@1@@Z @ 0x140495094
 * Callers:
 *     ?SmCompressCtxWorkerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x1403830C0 (-SmCompressCtxWorkerThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmCompressCtxProcessEntry@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_THREAD_CTX@1@PEAU_SM_COMPRESS_ENTRY@1@@Z @ 0x140383570 (-SmCompressCtxProcessEntry@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_THREAD_CTX@1@PEAU_.c)
 * Callees:
 *     ?SmCompressCtxCompleteEntry@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_THREAD_CTX@1@PEAU_SM_WORK_ITEM@1@KKJ@Z @ 0x140383954 (-SmCompressCtxCompleteEntry@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_THREAD_CTX@1@PEAU.c)
 *     SmStoreCompletePendingCompress @ 0x14060D96C (SmStoreCompletePendingCompress.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmCompressCtxCompletePendingEntry(__int64 a1)
{
  unsigned __int64 *v2; // rdx
  __int64 *v3; // r8
  unsigned __int64 v4; // rdi
  __int64 v5; // rbx
  int v6; // eax
  __int64 result; // rax
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF
  unsigned int v9; // [rsp+48h] [rbp+10h]

  v9 = 0;
  LODWORD(v8) = 0;
  v2 = (unsigned __int64 *)(a1 + 40);
  v3 = *(__int64 **)(a1 + 48);
  if ( v3 == (__int64 *)(a1 + 40) )
    return 0LL;
  v4 = *v2;
  *v2 = *(_QWORD *)*v2 & 0xFFFFFFFFFFFFFFF8uLL;
  if ( (__int64 *)v4 == v3 )
  {
    *(_QWORD *)(a1 + 48) = a1 + 40;
    *v2 = 0LL;
  }
  else
  {
    *v3 = *v3 & 7 | (8 * ((unsigned __int64)*v3 >> 3) - 8);
  }
  v5 = *(_QWORD *)(v4 + 24);
  v6 = SmStoreCompletePendingCompress((struct _SM_COMPRESSED_PAGE_HEADER *)(v5 + 112), (__int64)&v8);
  SMKM_STORE_MGR<SM_TRAITS>::SmCompressCtxCompleteEntry((__int64 *)a1, v5, v9, v8, v6);
  *(_QWORD *)v4 = *(_DWORD *)v4 & 7 | ((**(_QWORD **)(a1 + 64) & 0xFFFFFFFFFFFFFFF8uLL) + 8);
  **(_QWORD **)(a1 + 64) = v4 | **(_DWORD **)(a1 + 64) & 7;
  result = 1LL;
  *(_QWORD *)(a1 + 64) = v4;
  return result;
}
