/*
 * XREFs of ?SmAsyncReadQueueInsert@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_ASYNC_READ_QUEUE@1@PEAU_SM_ASYNC_DIRECT_READ_CTX@1@K@Z @ 0x14027D21C
 * Callers:
 *     ?SmIoCtxQueueWork@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITEM@1@@Z @ 0x14029F070 (-SmIoCtxQueueWork@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITE.c)
 * Callees:
 *     ExQueueWorkItemToPrivatePool @ 0x14027B744 (ExQueueWorkItemToPrivatePool.c)
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeQueryActiveProcessorCountEx @ 0x140339940 (KeQueryActiveProcessorCountEx.c)
 */

ULONG_PTR *__fastcall SMKM_STORE_MGR<SM_TRAITS>::SmAsyncReadQueueInsert(
        __int64 a1,
        __int64 a2,
        ULONG_PTR a3,
        unsigned int a4)
{
  KSPIN_LOCK *v5; // r15
  __int128 *v7; // rdi
  int v9; // eax
  KIRQL v10; // r12
  unsigned __int64 v11; // rbx
  __int128 v12; // xmm0
  __int64 v13; // r8
  ULONG_PTR *result; // rax
  _QWORD *v15; // rcx
  ULONG_PTR *v16; // rdx
  ULONG_PTR BugCheckParameter2[2]; // [rsp+30h] [rbp-10h] BYREF

  BugCheckParameter2[0] = 0LL;
  v5 = (KSPIN_LOCK *)(a2 + 768);
  BugCheckParameter2[1] = (ULONG_PTR)BugCheckParameter2;
  v7 = (__int128 *)(a2 + 24LL * a4);
  v9 = *(_DWORD *)(a3 + 40);
  *(_DWORD *)(a3 + 32) ^= ((unsigned __int8)a4 ^ (unsigned __int8)*(_DWORD *)(a3 + 32)) & 7;
  *(_DWORD *)(a3 + 40) = v9 ^ ((unsigned __int8)v9 ^ (unsigned __int8)(a4 >> 3)) & 3;
  v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 768));
  if ( *((_DWORD *)v7 + 4) || *((_DWORD *)v7 + 5) )
  {
    *(_QWORD *)a3 = **((_QWORD **)v7 + 1) + 1LL;
    **((_QWORD **)v7 + 1) = a3;
    *((_QWORD *)v7 + 1) = a3;
    v11 = *(_QWORD *)a3;
    if ( v11 >= KeQueryActiveProcessorCountEx(0xFFFFu) && *((__int128 **)v7 + 1) != v7 )
    {
      v12 = *v7;
      *((_QWORD *)v7 + 1) = v7;
      *(_OWORD *)BugCheckParameter2 = v12;
      *(_QWORD *)v7 = 0LL;
    }
  }
  else
  {
    v16 = (ULONG_PTR *)BugCheckParameter2[1];
    *(_QWORD *)a3 = *(_QWORD *)BugCheckParameter2[1] + 1LL;
    *v16 = a3;
    BugCheckParameter2[1] = a3;
  }
  *((_DWORD *)v7 + 4) += *(_DWORD *)BugCheckParameter2[1];
  KeReleaseSpinLock(v5, v10);
  while ( 1 )
  {
    result = BugCheckParameter2;
    if ( (ULONG_PTR *)BugCheckParameter2[1] == BugCheckParameter2 )
      break;
    v15 = (_QWORD *)BugCheckParameter2[0];
    result = *(ULONG_PTR **)BugCheckParameter2[0];
    BugCheckParameter2[0] = *(_QWORD *)BugCheckParameter2[0];
    if ( v15 == (_QWORD *)BugCheckParameter2[1] )
    {
      BugCheckParameter2[0] = 0LL;
      result = BugCheckParameter2;
      BugCheckParameter2[1] = (ULONG_PTR)BugCheckParameter2;
    }
    else
    {
      --*(_QWORD *)BugCheckParameter2[1];
    }
    if ( !v15 )
      break;
    *v15 = 0LL;
    v15[2] = SMKM_STORE_MGR<SM_TRAITS>::SmAsyncReadQueueWorker;
    v15[3] = v15;
    ExQueueWorkItemToPrivatePool(v15, a4, v13, *(_QWORD *)(a1 + 2208), *(_QWORD *)(a1 + 2096));
  }
  return result;
}
