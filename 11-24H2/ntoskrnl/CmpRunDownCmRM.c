/*
 * XREFs of CmpRunDownCmRM @ 0x140A00C70
 * Callers:
 *     CmShutdownCmRM @ 0x140A00C24 (CmShutdownCmRM.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExReleaseFastMutexUnsafe @ 0x1402C5B00 (ExReleaseFastMutexUnsafe.c)
 *     ObDereferenceObjectDeferDelete @ 0x1403B48A0 (ObDereferenceObjectDeferDelete.c)
 *     LOCK_TRANSACTION_LIST @ 0x14087F02C (LOCK_TRANSACTION_LIST.c)
 *     LOCK_CM_RM_LIST @ 0x140A01674 (LOCK_CM_RM_LIST.c)
 *     CmpCleanupTransactionState @ 0x140A01734 (CmpCleanupTransactionState.c)
 *     CmpDelayFreeCmRm @ 0x140AAA048 (CmpDelayFreeCmRm.c)
 */

void __fastcall CmpRunDownCmRM(__int64 *a1, char a2)
{
  __int64 *v4; // rcx
  _QWORD *v5; // rdx
  __int64 v6; // rax
  __int64 *v7; // rcx
  __int64 **v8; // rax
  __int64 *v9; // rax
  __int64 *v10; // rdx
  __int64 **v11; // rax
  __int64 **v12; // rax
  __int64 v13; // rax
  void *v14; // rcx
  void *v15; // rcx
  _QWORD **v16; // [rsp+20h] [rbp-10h] BYREF
  __int64 *v17; // [rsp+28h] [rbp-8h]

  if ( a1 && !*((_DWORD *)a1 + 16) )
  {
    v17 = (__int64 *)&v16;
    v16 = &v16;
    LOCK_TRANSACTION_LIST();
    v4 = (__int64 *)CmpLazyCommitListHead;
    while ( v4 != &CmpLazyCommitListHead )
    {
      v9 = v4;
      v10 = v4;
      v4 = (__int64 *)*v4;
      if ( (__int64 *)v9[4] == a1 )
      {
        if ( (__int64 *)v4[1] != v9 )
          goto LABEL_11;
        v11 = (__int64 **)v9[1];
        if ( *v11 != v10 )
          goto LABEL_11;
        *v11 = v4;
        v4[1] = (__int64)v11;
        v12 = (__int64 **)v17;
        if ( (_QWORD ***)*v17 != &v16 )
          goto LABEL_11;
        v10[1] = (__int64)v17;
        *v10 = (__int64)&v16;
        *v12 = v10;
        v17 = v10;
      }
    }
    ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
    KeLeaveCriticalRegion();
    while ( 1 )
    {
      v5 = v16;
      if ( v16[1] != &v16 )
        goto LABEL_11;
      v6 = (__int64)*v16;
      if ( (_QWORD **)(*v16)[1] != v16 )
        goto LABEL_11;
      v16 = (_QWORD **)*v16;
      *(_QWORD *)(v6 + 8) = &v16;
      if ( v5 == &v16 )
        break;
      CmpCleanupTransactionState(a1, v5 - 4, 4LL);
    }
    LOCK_CM_RM_LIST();
    *((_DWORD *)a1 + 26) |= 8u;
    v7 = (__int64 *)*a1;
    if ( *(__int64 **)(*a1 + 8) != a1 || (v8 = (__int64 **)a1[1], *v8 != a1) )
LABEL_11:
      __fastfail(3u);
    *v8 = v7;
    v7[1] = (__int64)v8;
    v13 = a1[10];
    if ( v13 )
    {
      *(_QWORD *)(v13 + 4152) = 0LL;
      a1[10] = 0LL;
    }
    ExReleaseFastMutexUnsafe(&CmpRmListLock);
    KeLeaveCriticalRegion();
    v14 = (void *)a1[7];
    if ( v14 )
    {
      ObDereferenceObjectDeferDelete(v14);
      a1[7] = 0LL;
    }
    v15 = (void *)a1[5];
    if ( v15 )
    {
      ObDereferenceObjectDeferDelete(v15);
      a1[5] = 0LL;
    }
    if ( a2 == 1 )
      CmpDelayFreeCmRm(a1);
  }
}
