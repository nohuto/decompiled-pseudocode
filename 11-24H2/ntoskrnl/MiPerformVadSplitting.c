/*
 * XREFs of MiPerformVadSplitting @ 0x1403C877C
 * Callers:
 *     MiDeletePartialVad @ 0x1402675A0 (MiDeletePartialVad.c)
 * Callees:
 *     MiCountSharedPages @ 0x1402100F4 (MiCountSharedPages.c)
 *     MiComputePageCommitment @ 0x140212C0C (MiComputePageCommitment.c)
 *     MiLockVadTree @ 0x140240750 (MiLockVadTree.c)
 *     MiUnlockWorkingSetExclusive @ 0x140243400 (MiUnlockWorkingSetExclusive.c)
 *     MiPostInsertVad @ 0x14028F1F0 (MiPostInsertVad.c)
 *     MiInsertVad @ 0x140290150 (MiInsertVad.c)
 *     MiUnlockVadTree @ 0x140291980 (MiUnlockVadTree.c)
 *     MiLockWorkingSetExclusive @ 0x1403367E0 (MiLockWorkingSetExclusive.c)
 *     UNLOCK_PAGE_TABLE_COMMITMENT @ 0x140362450 (UNLOCK_PAGE_TABLE_COMMITMENT.c)
 *     LOCK_PAGE_TABLE_COMMITMENT @ 0x1403C8D90 (LOCK_PAGE_TABLE_COMMITMENT.c)
 *     MiAdvanceVadView @ 0x1403C8DEC (MiAdvanceVadView.c)
 *     PsReturnProcessPagedPoolQuota @ 0x1403C8EA0 (PsReturnProcessPagedPoolQuota.c)
 *     MiLockNestedVad @ 0x140A12F2C (MiLockNestedVad.c)
 *     MiUnlockNestedVad @ 0x140A15178 (MiUnlockNestedVad.c)
 */

__int64 __fastcall MiPerformVadSplitting(__int64 a1)
{
  int v1; // r8d
  __int64 v2; // rdi
  __int64 v3; // rsi
  __int64 v4; // r14
  __int64 v5; // r12
  unsigned __int64 v6; // r15
  __int64 v7; // rbp
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // eax
  unsigned __int8 v13; // r15
  __int64 v14; // r13
  __int64 v15; // r9
  ULONG_PTR v16; // rbx
  __int64 v17; // rbp
  __int64 result; // rax
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // rcx
  __int64 v21; // rax
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // rbx
  unsigned __int64 v24; // rbp
  __int64 v25; // r15
  __int64 v26; // rax
  unsigned __int64 v27; // rax
  __int64 v28; // rcx
  ULONG_PTR v29; // rax
  ULONG_PTR BugCheckParameter1; // [rsp+40h] [rbp-78h]
  unsigned __int64 v31; // [rsp+48h] [rbp-70h]
  ULONG_PTR BugCheckParameter3; // [rsp+50h] [rbp-68h]
  struct _KTHREAD *CurrentThread; // [rsp+58h] [rbp-60h]
  unsigned __int64 v34; // [rsp+60h] [rbp-58h]
  unsigned __int64 v35; // [rsp+68h] [rbp-50h]
  char v36; // [rsp+C0h] [rbp+8h]
  int v37; // [rsp+C8h] [rbp+10h]
  __int64 v38; // [rsp+D0h] [rbp+18h]
  __int64 v39; // [rsp+D8h] [rbp+20h]

  v1 = *(_DWORD *)(a1 + 16);
  v2 = *(_QWORD *)(a1 + 8);
  CurrentThread = KeGetCurrentThread();
  BugCheckParameter1 = (ULONG_PTR)CurrentThread->ApcState.Process;
  v39 = BugCheckParameter1 + 1024;
  BugCheckParameter3 = 0LL;
  v31 = 0LL;
  v35 = *(_QWORD *)(a1 + 24);
  v34 = *(_QWORD *)(a1 + 32);
  v37 = v1;
  v3 = *(_QWORD *)a1;
  if ( v1 == 1 )
  {
    v4 = 0LL;
  }
  else
  {
    v4 = *(_QWORD *)a1;
    if ( v1 == 2 )
      v3 = 0LL;
    else
      v3 = *(_QWORD *)v3;
  }
  v5 = 0LL;
  if ( (*(unsigned int *)(v2 + 52) | ((unsigned __int64)*(unsigned __int8 *)(v2 + 34) << 32)) == 0x7FFFFFFFDLL )
  {
    v6 = 0LL;
    v7 = 0x7FFFFFFFDLL;
  }
  else
  {
    v6 = *(unsigned int *)(v2 + 52) | ((unsigned __int64)*(unsigned __int8 *)(v2 + 34) << 32);
    v7 = 0LL;
  }
  v8 = v7;
  if ( v1 == 3 )
  {
    v28 = v4;
    if ( (*(unsigned int *)(v4 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v4 + 33) << 32))
       - (*(unsigned int *)(v4 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v4 + 32) << 32))
       + 1 > (*(unsigned int *)(v3 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v3 + 33) << 32))
           - (*(unsigned int *)(v3 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v3 + 32) << 32))
           + 1 )
      v28 = v3;
    v38 = v28;
    MiLockNestedVad(v28);
  }
  else
  {
    v38 = 0LL;
  }
  LOCK_PAGE_TABLE_COMMITMENT(CurrentThread, BugCheckParameter1);
  v12 = *(_DWORD *)(v2 + 48) & 0x200000;
  if ( v6 )
  {
    if ( v12 )
    {
      v36 = MiLockWorkingSetExclusive(v39);
      v21 = MiComputePageCommitment(v35, v34, v2, v36, 4, 0LL, 0LL);
      LOBYTE(v10) = v36;
      v5 = v21;
    }
    else
    {
      v26 = MiCountSharedPages(
              v2,
              ((v35 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
              ((v34 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      LOBYTE(v10) = 17;
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
        v14 = v38;
        v22 = (unsigned __int64)*(unsigned __int8 *)(v38 + 32) << 32;
        if ( (*(_DWORD *)(v2 + 48) & 0x200000) != 0 )
        {
          v7 = MiComputePageCommitment(
                 (*(unsigned int *)(v38 + 24) | v22) << 12,
                 ((*(unsigned int *)(v38 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v38 + 33) << 32)) << 12) | 0xFFF,
                 v38,
                 v10,
                 4,
                 0LL,
                 0LL);
        }
        else
        {
          v23 = 8 * ((*(unsigned int *)(v38 + 24) | v22) & 0xFFFFFFFFFLL) - 0x98000000000LL;
          v24 = 8
              * ((*(unsigned int *)(v38 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v38 + 33) << 32)) & 0xFFFFFFFFFLL)
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
        goto LABEL_52;
      }
      v8 = v6 - v5;
    }
    v14 = v38;
LABEL_52:
    v13 = v36;
    goto LABEL_11;
  }
  if ( v12 )
    v13 = MiLockWorkingSetExclusive(v39);
  else
    v13 = 17;
  v14 = v38;
LABEL_11:
  if ( v13 == 17 )
    v13 = MiLockWorkingSetExclusive(v39);
  MiLockVadTree(3, v9, v10, v11);
  if ( v4 )
  {
    if ( (*(unsigned int *)(v4 + 52) | ((unsigned __int64)*(unsigned __int8 *)(v4 + 34) << 32)) == 0x7FFFFFFFDLL )
    {
      *(_DWORD *)(v4 + 52) = -3;
      *(_BYTE *)(v4 + 34) = 7;
    }
    else
    {
      *(_DWORD *)(v4 + 52) = v8;
      *(_BYTE *)(v4 + 34) = BYTE4(v8);
    }
    v16 = BugCheckParameter1;
    v31 = 8
        * ((*(unsigned int *)(v4 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v4 + 33) << 32))
         - (*(unsigned int *)(v4 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v4 + 32) << 32)))
        + 8;
    v27 = (*(unsigned int *)(v4 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v4 + 33) << 32)) + 1;
    *(_DWORD *)(v2 + 24) = *(_DWORD *)(v4 + 28) + 1;
    *(_BYTE *)(v2 + 32) = BYTE4(v27);
    MiInsertVad(v4, BugCheckParameter1, 3LL, v15);
  }
  else
  {
    v16 = BugCheckParameter1;
  }
  if ( v3 )
  {
    if ( (*(unsigned int *)(v3 + 52) | ((unsigned __int64)*(unsigned __int8 *)(v3 + 34) << 32)) == 0x7FFFFFFFDLL )
    {
      *(_DWORD *)(v3 + 52) = -3;
      *(_BYTE *)(v3 + 34) = 7;
    }
    else
    {
      *(_DWORD *)(v3 + 52) = v7;
      *(_BYTE *)(v3 + 34) = BYTE4(v7);
    }
    v19 = *(unsigned int *)(v3 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v3 + 32) << 32);
    v20 = (*(unsigned int *)(v3 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v3 + 33) << 32)) - v19;
    *(_DWORD *)(v2 + 28) = *(_DWORD *)(v3 + 24) - 1;
    v17 = v31 + 8 * v20 + 8;
    *(_BYTE *)(v2 + 33) = (v19 - 1) >> 32;
    MiInsertVad(v3, v16, 3LL, v15);
  }
  else
  {
    v17 = v31;
  }
  if ( (*(unsigned int *)(v2 + 52) | ((unsigned __int64)*(unsigned __int8 *)(v2 + 34) << 32)) == 0x7FFFFFFFDLL )
  {
    *(_DWORD *)(v2 + 52) = -3;
    *(_BYTE *)(v2 + 34) = 7;
  }
  else
  {
    if ( (*(_DWORD *)(v2 + 48) & 0x200000) == 0
      && (*(unsigned int *)(v2 + 52) | ((unsigned __int64)*(unsigned __int8 *)(v2 + 34) << 32)) < 0x7FFFFFFFDLL )
    {
      v29 = 0LL;
      if ( v17 )
        v29 = v17;
      BugCheckParameter3 = v29;
    }
    *(_DWORD *)(v2 + 52) = v5;
    *(_BYTE *)(v2 + 34) = BYTE4(v5);
  }
  MiAdvanceVadView(v2, 0LL);
  MiUnlockVadTree(3, 0x11u);
  MiUnlockWorkingSetExclusive(v16 + 1024, v13);
  if ( v4 )
    MiPostInsertVad(v4, v16, 0LL);
  if ( v3 )
    MiPostInsertVad(v3, v16, 0LL);
  UNLOCK_PAGE_TABLE_COMMITMENT((__int64)CurrentThread, v16);
  if ( v14 )
    MiUnlockNestedVad(v14);
  result = BugCheckParameter3;
  if ( BugCheckParameter3 )
    return PsReturnProcessPagedPoolQuota(v16, BugCheckParameter3);
  return result;
}
