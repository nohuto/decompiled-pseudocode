/*
 * XREFs of CmObliterateRMTxArray @ 0x1407DE59C
 * Callers:
 *     CmpTryToRundownHive @ 0x1402BB3C0 (CmpTryToRundownHive.c)
 *     CmpPerformUnloadKey @ 0x140963D3C (CmpPerformUnloadKey.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExReleaseFastMutexUnsafe @ 0x1402C5B00 (ExReleaseFastMutexUnsafe.c)
 *     LOCK_TRANSACTION_LIST @ 0x14087F02C (LOCK_TRANSACTION_LIST.c)
 *     CmpCleanupTransactionState @ 0x140A01734 (CmpCleanupTransactionState.c)
 */

_QWORD ***__fastcall CmObliterateRMTxArray(__int64 a1)
{
  __int64 *v2; // rdx
  __int64 *v3; // rax
  __int64 *v4; // rcx
  __int64 **v5; // rax
  __int64 **v6; // rax
  _QWORD *v7; // rdx
  __int64 v8; // rax
  _QWORD ***result; // rax
  _QWORD **v10; // [rsp+20h] [rbp-10h] BYREF
  __int64 *v11; // [rsp+28h] [rbp-8h]

  v11 = (__int64 *)&v10;
  v10 = &v10;
  LOCK_TRANSACTION_LIST();
  v2 = (__int64 *)CmpLazyCommitListHead;
  while ( v2 != &CmpLazyCommitListHead )
  {
    v3 = v2;
    v4 = v2;
    v2 = (__int64 *)*v2;
    if ( v3[4] == a1 )
    {
      if ( (__int64 *)v2[1] != v3
        || (v5 = (__int64 **)v3[1], *v5 != v4)
        || (*v5 = v2, v2[1] = (__int64)v5, v6 = (__int64 **)v11, (_QWORD ***)*v11 != &v10) )
      {
LABEL_13:
        __fastfail(3u);
      }
      v4[1] = (__int64)v11;
      *v4 = (__int64)&v10;
      *v6 = v4;
      v11 = v4;
    }
  }
  ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
  KeLeaveCriticalRegion();
  while ( 1 )
  {
    v7 = v10;
    if ( v10[1] != &v10 )
      goto LABEL_13;
    v8 = (__int64)*v10;
    if ( (_QWORD **)(*v10)[1] != v10 )
      goto LABEL_13;
    v10 = (_QWORD **)*v10;
    *(_QWORD *)(v8 + 8) = &v10;
    result = &v10;
    if ( v7 == &v10 )
      return result;
    CmpCleanupTransactionState(a1, v7 - 4, 8LL);
  }
}
