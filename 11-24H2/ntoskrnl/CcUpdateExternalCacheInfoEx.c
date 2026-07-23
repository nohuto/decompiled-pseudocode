/*
 * XREFs of CcUpdateExternalCacheInfoEx @ 0x140578190
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x14022B260 (KeReleaseInStackQueuedSpinLock.c)
 *     CcScheduleLazyWriteScan @ 0x140264F40 (CcScheduleLazyWriteScan.c)
 *     CcDeductDirtyPagesInternal @ 0x1402E5440 (CcDeductDirtyPagesInternal.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1403597C0 (KeAcquireInStackQueuedSpinLock.c)
 *     CcChargeDirtyPagesInternal @ 0x140442A90 (CcChargeDirtyPagesInternal.c)
 */

__int64 __fastcall CcUpdateExternalCacheInfoEx(_QWORD *a1, _QWORD *a2)
{
  __int64 v2; // rsi
  _QWORD *v3; // r13
  unsigned __int64 v4; // rbx
  _QWORD *v5; // rbp
  bool v6; // r15
  __int64 v9; // rcx
  __int64 v10; // rax
  unsigned int v11; // r14d
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-58h] BYREF
  char v13; // [rsp+90h] [rbp+8h]
  bool v15; // [rsp+A0h] [rbp+18h]

  v2 = a1[8];
  v3 = (_QWORD *)a1[9];
  v4 = 0LL;
  v5 = a2;
  v6 = 0;
  v13 = 0;
  v15 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( *(_DWORD *)a2 != 1 )
    return 3221225485LL;
  v9 = a2[5];
  v10 = a1[1];
  if ( v9 <= v10 )
  {
    if ( v9 < v10 )
    {
      v13 = 0;
      v4 = v10 - v9;
    }
  }
  else
  {
    v13 = 1;
    v4 = v9 - v10;
  }
  if ( !v10 )
  {
    v6 = v9 != 0;
    v15 = v9 != 0;
  }
  if ( v4 )
  {
    do
    {
      v11 = v4;
      if ( v4 > 0xFFFFFFFF )
        v11 = -1;
      v4 -= v11;
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v2 + 768), &LockHandle);
      if ( v13 )
      {
        CcChargeDirtyPagesInternal(0LL, 0LL, 0LL, v11, v2, (__int64)v3);
      }
      else
      {
        if ( a1[1] < (unsigned __int64)v11 )
          v11 = *((_DWORD *)a1 + 2);
        CcDeductDirtyPagesInternal(0LL, v11, v2, v3);
      }
      KeReleaseInStackQueuedSpinLock(&LockHandle);
    }
    while ( v4 );
    v5 = a2;
    v6 = v15;
  }
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v2 + 768), &LockHandle);
  a1[1] = v5[5];
  a1[6] = v5[6];
  a1[7] = v5[7];
  if ( v6 )
    CcScheduleLazyWriteScan((_BYTE *)v2, v3, 0, 0);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return 0LL;
}
