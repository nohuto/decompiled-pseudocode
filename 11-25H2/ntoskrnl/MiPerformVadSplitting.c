/*
 * XREFs of MiPerformVadSplitting @ 0x1402A3F44
 * Callers:
 *     MiDeletePartialVad @ 0x1402A3A10 (MiDeletePartialVad.c)
 * Callees:
 *     MiLockWorkingSetExclusive @ 0x140211FE0 (MiLockWorkingSetExclusive.c)
 *     MiAdvanceVadView @ 0x1402A4550 (MiAdvanceVadView.c)
 *     MiInsertVad @ 0x1402A80AC (MiInsertVad.c)
 *     MiUnlockVadTree @ 0x1402A8690 (MiUnlockVadTree.c)
 *     MiLockVadTree @ 0x1402B54D0 (MiLockVadTree.c)
 *     MiUnlockWorkingSetExclusive @ 0x1402B7680 (MiUnlockWorkingSetExclusive.c)
 *     MiPostInsertVad @ 0x1402BCBB0 (MiPostInsertVad.c)
 *     UNLOCK_PAGE_TABLE_COMMITMENT @ 0x140320330 (UNLOCK_PAGE_TABLE_COMMITMENT.c)
 *     MiCountSharedPages @ 0x14037DA64 (MiCountSharedPages.c)
 *     MiComputePageCommitment @ 0x14037DDA4 (MiComputePageCommitment.c)
 *     LOCK_PAGE_TABLE_COMMITMENT @ 0x140384DF0 (LOCK_PAGE_TABLE_COMMITMENT.c)
 *     PsReturnProcessPagedPoolQuota @ 0x1403C5AE0 (PsReturnProcessPagedPoolQuota.c)
 *     MiLockNestedVad @ 0x140A140EC (MiLockNestedVad.c)
 *     MiUnlockNestedVad @ 0x140A15348 (MiUnlockNestedVad.c)
 */

__int64 __fastcall MiPerformVadSplitting(__int64 **a1)
{
  int v1; // r8d
  __int64 *v2; // rdi
  __int64 *v3; // rsi
  __int64 *v4; // r14
  __int64 v5; // r12
  unsigned __int64 v6; // r15
  __int64 v7; // rbp
  __int64 v8; // rbx
  int v9; // eax
  char v10; // r15
  __int64 *v11; // r13
  ULONG_PTR v12; // rbx
  __int64 v13; // rbp
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 result; // rax
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rcx
  int v19; // r9d
  __int64 v20; // rax
  int v21; // r9d
  char v22; // r8
  unsigned __int64 v23; // rbx
  unsigned __int64 v24; // rbp
  __int64 v25; // r15
  __int64 v26; // rax
  unsigned __int64 v27; // rax
  __int64 *v28; // rcx
  ULONG_PTR v29; // rax
  ULONG_PTR BugCheckParameter1; // [rsp+40h] [rbp-78h]
  unsigned __int64 v31; // [rsp+48h] [rbp-70h]
  ULONG_PTR BugCheckParameter3; // [rsp+50h] [rbp-68h]
  struct _KTHREAD *CurrentThread; // [rsp+58h] [rbp-60h]
  unsigned __int64 v34; // [rsp+60h] [rbp-58h]
  unsigned __int64 v35; // [rsp+68h] [rbp-50h]
  char v36; // [rsp+C0h] [rbp+8h]
  int v37; // [rsp+C8h] [rbp+10h]
  __int64 *v38; // [rsp+D0h] [rbp+18h]
  __int64 v39; // [rsp+D8h] [rbp+20h]

  v1 = *((_DWORD *)a1 + 4);
  v2 = a1[1];
  CurrentThread = KeGetCurrentThread();
  BugCheckParameter1 = (ULONG_PTR)CurrentThread->ApcState.Process;
  v39 = BugCheckParameter1 + 1024;
  BugCheckParameter3 = 0LL;
  v31 = 0LL;
  v35 = (unsigned __int64)a1[3];
  v34 = (unsigned __int64)a1[4];
  v37 = v1;
  v3 = *a1;
  if ( v1 == 1 )
  {
    v4 = 0LL;
  }
  else
  {
    v4 = *a1;
    if ( v1 == 2 )
      v3 = 0LL;
    else
      v3 = (__int64 *)*v3;
  }
  v5 = 0LL;
  if ( (*((unsigned int *)v2 + 13) | ((unsigned __int64)*((unsigned __int8 *)v2 + 34) << 32)) == 0x7FFFFFFFDLL )
  {
    v6 = 0LL;
    v7 = 0x7FFFFFFFDLL;
  }
  else
  {
    v6 = *((unsigned int *)v2 + 13) | ((unsigned __int64)*((unsigned __int8 *)v2 + 34) << 32);
    v7 = 0LL;
  }
  v8 = v7;
  if ( v1 == 3 )
  {
    v28 = v4;
    if ( (*((unsigned int *)v4 + 7) | ((unsigned __int64)*((unsigned __int8 *)v4 + 33) << 32))
       - (*((unsigned int *)v4 + 6) | ((unsigned __int64)*((unsigned __int8 *)v4 + 32) << 32))
       + 1 > (*((unsigned int *)v3 + 7) | ((unsigned __int64)*((unsigned __int8 *)v3 + 33) << 32))
           - (*((unsigned int *)v3 + 6) | ((unsigned __int64)*((unsigned __int8 *)v3 + 32) << 32))
           + 1 )
      v28 = v3;
    v38 = v28;
    MiLockNestedVad();
  }
  else
  {
    v38 = 0LL;
  }
  LOCK_PAGE_TABLE_COMMITMENT(CurrentThread, BugCheckParameter1);
  v9 = v2[6] & 0x200000;
  if ( v6 )
  {
    if ( v9 )
    {
      LOBYTE(v19) = MiLockWorkingSetExclusive(v39);
      v36 = v19;
      v20 = MiComputePageCommitment(v35, v34, (_DWORD)v2, v19, 4, 0LL, 0LL);
      v22 = v36;
      v5 = v20;
    }
    else
    {
      v26 = MiCountSharedPages(
              v2,
              ((v35 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
              ((v34 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      v22 = 17;
      v36 = 17;
      v5 = ((__int64)(((v34 >> 9) & 0x7FFFFFFFF8LL) - ((v35 >> 9) & 0x7FFFFFFFF8LL)) >> 3) - v26 + 1;
    }
    if ( v37 == 1 )
    {
      v7 = v6 - v5;
    }
    else
    {
      if ( v37 != 2 )
      {
        v11 = v38;
        if ( (v2[6] & 0x200000) != 0 )
        {
          LOBYTE(v21) = v22;
          v7 = MiComputePageCommitment(
                 *((_DWORD *)v38 + 6) << 12,
                 (*((_DWORD *)v38 + 7) << 12) | 0xFFFu,
                 (_DWORD)v38,
                 v21,
                 4,
                 0LL,
                 0LL);
        }
        else
        {
          v23 = 8
              * ((*((unsigned int *)v38 + 6) | ((unsigned __int64)*((unsigned __int8 *)v38 + 32) << 32)) & 0xFFFFFFFFFLL)
              - 0x98000000000LL;
          v24 = 8
              * ((*((unsigned int *)v38 + 7) | ((unsigned __int64)*((unsigned __int8 *)v38 + 33) << 32)) & 0xFFFFFFFFFLL)
              - 0x98000000000LL;
          v7 = ((__int64)(v24 - v23) >> 3) - MiCountSharedPages(v38, v23, v24) + 1;
        }
        v25 = v6 - v5 - v7;
        if ( v38 == v4 )
        {
          v8 = v7;
          v7 = v25;
        }
        else
        {
          v8 = v25;
        }
        goto LABEL_51;
      }
      v8 = v6 - v5;
    }
    v11 = v38;
LABEL_51:
    v10 = v36;
    goto LABEL_11;
  }
  if ( v9 )
    v10 = MiLockWorkingSetExclusive(v39);
  else
    v10 = 17;
  v11 = v38;
LABEL_11:
  if ( v10 == 17 )
    v10 = MiLockWorkingSetExclusive(v39);
  MiLockVadTree(3LL);
  if ( v4 )
  {
    if ( (*((unsigned int *)v4 + 13) | ((unsigned __int64)*((unsigned __int8 *)v4 + 34) << 32)) == 0x7FFFFFFFDLL )
    {
      *((_DWORD *)v4 + 13) = -3;
      *((_BYTE *)v4 + 34) = 7;
    }
    else
    {
      *((_DWORD *)v4 + 13) = v8;
      *((_BYTE *)v4 + 34) = BYTE4(v8);
    }
    v12 = BugCheckParameter1;
    v31 = 8
        * ((*((unsigned int *)v4 + 7) | ((unsigned __int64)*((unsigned __int8 *)v4 + 33) << 32))
         - (*((unsigned int *)v4 + 6) | ((unsigned __int64)*((unsigned __int8 *)v4 + 32) << 32)))
        + 8;
    v27 = (*((unsigned int *)v4 + 7) | ((unsigned __int64)*((unsigned __int8 *)v4 + 33) << 32)) + 1;
    *((_DWORD *)v2 + 6) = *((_DWORD *)v4 + 7) + 1;
    *((_BYTE *)v2 + 32) = BYTE4(v27);
    MiInsertVad(v4, BugCheckParameter1, 3LL);
  }
  else
  {
    v12 = BugCheckParameter1;
  }
  if ( v3 )
  {
    if ( (*((unsigned int *)v3 + 13) | ((unsigned __int64)*((unsigned __int8 *)v3 + 34) << 32)) == 0x7FFFFFFFDLL )
    {
      *((_DWORD *)v3 + 13) = -3;
      *((_BYTE *)v3 + 34) = 7;
    }
    else
    {
      *((_DWORD *)v3 + 13) = v7;
      *((_BYTE *)v3 + 34) = BYTE4(v7);
    }
    v17 = *((unsigned int *)v3 + 6) | ((unsigned __int64)*((unsigned __int8 *)v3 + 32) << 32);
    v18 = (*((unsigned int *)v3 + 7) | ((unsigned __int64)*((unsigned __int8 *)v3 + 33) << 32)) - v17;
    *((_DWORD *)v2 + 7) = *((_DWORD *)v3 + 6) - 1;
    v13 = v31 + 8 * v18 + 8;
    *((_BYTE *)v2 + 33) = (v17 - 1) >> 32;
    MiInsertVad(v3, v12, 3LL);
  }
  else
  {
    v13 = v31;
  }
  if ( (*((unsigned int *)v2 + 13) | ((unsigned __int64)*((unsigned __int8 *)v2 + 34) << 32)) == 0x7FFFFFFFDLL )
  {
    *((_DWORD *)v2 + 13) = -3;
    *((_BYTE *)v2 + 34) = 7;
  }
  else
  {
    if ( (v2[6] & 0x200000) == 0
      && (*((unsigned int *)v2 + 13) | ((unsigned __int64)*((unsigned __int8 *)v2 + 34) << 32)) < 0x7FFFFFFFDLL )
    {
      v29 = 0LL;
      if ( v13 )
        v29 = v13;
      BugCheckParameter3 = v29;
    }
    *((_DWORD *)v2 + 13) = v5;
    *((_BYTE *)v2 + 34) = BYTE4(v5);
  }
  MiAdvanceVadView(v2, 0LL);
  LOBYTE(v14) = 17;
  MiUnlockVadTree(3LL, v14);
  LOBYTE(v15) = v10;
  MiUnlockWorkingSetExclusive(v12 + 1024, v15);
  if ( v4 )
    MiPostInsertVad(v4, v12, 0LL);
  if ( v3 )
    MiPostInsertVad(v3, v12, 0LL);
  UNLOCK_PAGE_TABLE_COMMITMENT(CurrentThread, v12);
  if ( v11 )
    MiUnlockNestedVad(v11);
  result = BugCheckParameter3;
  if ( BugCheckParameter3 )
    return PsReturnProcessPagedPoolQuota(v12, BugCheckParameter3);
  return result;
}
