/*
 * XREFs of ?SmCompressCtxProcessEntry@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_THREAD_CTX@1@PEAU_SM_COMPRESS_ENTRY@1@@Z @ 0x140383570
 * Callers:
 *     ?SmCompressCtxWorkerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x1403830C0 (-SmCompressCtxWorkerThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 * Callees:
 *     SmStoreCompressBuffer @ 0x140383774 (SmStoreCompressBuffer.c)
 *     ?SmCompressCtxCompleteEntry@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_THREAD_CTX@1@PEAU_SM_WORK_ITEM@1@KKJ@Z @ 0x140383954 (-SmCompressCtxCompleteEntry@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_THREAD_CTX@1@PEAU.c)
 *     SmHwAcceleratorPartitionMgrGetDescriptor @ 0x140383B28 (SmHwAcceleratorPartitionMgrGetDescriptor.c)
 *     ?SmCompressCtxCompletePendingEntry@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_SM_COMPRESS_THREAD_CTX@1@@Z @ 0x140495094 (-SmCompressCtxCompletePendingEntry@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_SM_COMPRESS_THREAD_CTX.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmCompressCtxProcessEntry(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // r14
  __int64 v5; // r12
  __int64 v6; // rax
  __int64 v7; // r15
  unsigned __int64 *v8; // rsi
  __int64 *v9; // rdx
  unsigned __int64 v10; // rdi
  unsigned __int64 *Descriptor; // rax
  int v12; // edx
  __int64 result; // rax
  unsigned int v14; // ebp
  unsigned __int64 *v15; // rcx
  __int64 v16; // r8
  unsigned __int64 *v17; // rdx
  _DWORD *v18; // rcx
  int v19; // [rsp+60h] [rbp+8h] BYREF

  v19 = 0;
  v3 = *(_QWORD *)(a2 + 80);
  v5 = *(_QWORD *)(a1 + 8);
  v6 = *(_QWORD *)(v3 + 16);
  v7 = *(_QWORD *)(v6 + 24);
  if ( *(int *)(v3 + 8) < 0 )
  {
    memmove(*(void **)(a1 + 32), *(const void **)(v6 + 24), 0x1000uLL);
    v7 = *(_QWORD *)(a1 + 32);
  }
  v8 = (unsigned __int64 *)(a1 + 56);
  while ( 1 )
  {
    v9 = *(__int64 **)(a1 + 64);
    if ( v9 != (__int64 *)v8 )
    {
      v10 = *v8;
      *v8 = *(_QWORD *)*v8 & 0xFFFFFFFFFFFFFFF8uLL;
      if ( (__int64 *)v10 == v9 )
      {
        *v8 = 0LL;
        *(_QWORD *)(a1 + 64) = a1 + 56;
      }
      else
      {
        *v9 = *v9 & 7 | (8 * ((unsigned __int64)*v9 >> 3) - 8);
      }
      goto LABEL_9;
    }
    v14 = 0;
    if ( *(_QWORD *)(a1 + 48) != a1 + 40 )
      v14 = *(_DWORD *)(a1 + 72) < 8u ? 2 : 6;
    Descriptor = (unsigned __int64 *)SmHwAcceleratorPartitionMgrGetDescriptor(
                                       *(_QWORD *)(a1 + 16),
                                       v14,
                                       *(unsigned int *)(v5 + 168));
    v10 = (unsigned __int64)Descriptor;
    if ( Descriptor )
      break;
    if ( (v14 & 2) == 0 )
      goto LABEL_9;
    SMKM_STORE_MGR<SM_TRAITS>::SmCompressCtxCompletePendingEntry(a1);
  }
  if ( (*(_DWORD *)Descriptor & 2) != 0 )
    ++*(_DWORD *)(a1 + 72);
LABEL_9:
  v12 = SmStoreCompressBuffer(
          *(unsigned int *)(*(_QWORD *)(a2 + 64) + 4832LL),
          v7,
          a2 + 72,
          *(_QWORD *)(a1 + 24),
          v10,
          &v19);
  if ( v12 == 259 )
  {
    *(_QWORD *)(v10 + 24) = v3;
    v15 = (unsigned __int64 *)(a1 + 40);
    if ( v7 == *(_QWORD *)(a1 + 32) )
    {
      v16 = **(_QWORD **)(a1 + 48) >> 3;
      *(_QWORD *)v10 = *v15 | *(_DWORD *)v10 & 7;
      v17 = *(unsigned __int64 **)(a1 + 48);
      *v15 = v10;
      if ( v17 == v15 )
      {
        *(_QWORD *)(a1 + 48) = v10;
        v17 = (unsigned __int64 *)v10;
      }
      *v17 = *(_DWORD *)v17 & 7 | (unsigned __int64)(8 * v16 + 8);
      return SMKM_STORE_MGR<SM_TRAITS>::SmCompressCtxCompletePendingEntry(a1);
    }
    else
    {
      *(_QWORD *)v10 = *(_DWORD *)v10 & 7 | ((**(_QWORD **)(a1 + 48) & 0xFFFFFFFFFFFFFFF8uLL) + 8);
      v18 = *(_DWORD **)(a1 + 48);
      result = v10 | *v18 & 7;
      *(_QWORD *)v18 = result;
      *(_QWORD *)(a1 + 48) = v10;
    }
  }
  else
  {
    if ( v10 )
    {
      *(_QWORD *)v10 = *(_DWORD *)v10 & 7 | ((**(_QWORD **)(a1 + 64) & 0xFFFFFFFFFFFFFFF8uLL) + 8);
      **(_QWORD **)(a1 + 64) = v10 | **(_DWORD **)(a1 + 64) & 7;
      *(_QWORD *)(a1 + 64) = v10;
    }
    return SMKM_STORE_MGR<SM_TRAITS>::SmCompressCtxCompleteEntry(a1, v3, v19, -1, v12);
  }
  return result;
}
