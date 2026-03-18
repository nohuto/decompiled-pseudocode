/*
 * XREFs of MiPerformVadSplitting @ 0x140405FC8
 * Callers:
 *     MiDeletePartialVad @ 0x1403CDE5C (MiDeletePartialVad.c)
 * Callees:
 *     MiLockWorkingSetExclusive @ 0x14020D480 (MiLockWorkingSetExclusive.c)
 *     MiUnlockWorkingSetExclusive @ 0x140218550 (MiUnlockWorkingSetExclusive.c)
 *     MiCountSharedPages @ 0x140235F64 (MiCountSharedPages.c)
 *     MiComputePageCommitment @ 0x140238A7C (MiComputePageCommitment.c)
 *     MiPostInsertVad @ 0x14025EBE0 (MiPostInsertVad.c)
 *     MiInsertVad @ 0x14025FB40 (MiInsertVad.c)
 *     MiUnlockVadTree @ 0x140261370 (MiUnlockVadTree.c)
 *     UNLOCK_PAGE_TABLE_COMMITMENT @ 0x1402BAD10 (UNLOCK_PAGE_TABLE_COMMITMENT.c)
 *     MiLockVadTree @ 0x1402DEE70 (MiLockVadTree.c)
 *     LOCK_PAGE_TABLE_COMMITMENT @ 0x1404065E0 (LOCK_PAGE_TABLE_COMMITMENT.c)
 *     MiAdvanceVadView @ 0x14040663C (MiAdvanceVadView.c)
 *     PsReturnProcessPagedPoolQuota @ 0x1404066F0 (PsReturnProcessPagedPoolQuota.c)
 *     MiLockNestedVad @ 0x140A19DBC (MiLockNestedVad.c)
 *     MiUnlockNestedVad @ 0x140A20078 (MiUnlockNestedVad.c)
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
  int v11; // eax
  unsigned __int8 v12; // r15
  __int64 v13; // r13
  ULONG_PTR v14; // rbx
  __int64 v15; // rbp
  __int64 result; // rax
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rcx
  __int64 v19; // rax
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // rbx
  unsigned __int64 v22; // rbp
  __int64 v23; // r15
  __int64 v24; // rax
  unsigned __int64 v25; // rax
  __int64 v26; // rcx
  ULONG_PTR v27; // rax
  ULONG_PTR BugCheckParameter1; // [rsp+40h] [rbp-78h]
  unsigned __int64 v29; // [rsp+48h] [rbp-70h]
  ULONG_PTR BugCheckParameter3; // [rsp+50h] [rbp-68h]
  struct _KTHREAD *CurrentThread; // [rsp+58h] [rbp-60h]
  unsigned __int64 v32; // [rsp+60h] [rbp-58h]
  unsigned __int64 v33; // [rsp+68h] [rbp-50h]
  char v34; // [rsp+C0h] [rbp+8h]
  int v35; // [rsp+C8h] [rbp+10h]
  __int64 v36; // [rsp+D0h] [rbp+18h]
  __int64 v37; // [rsp+D8h] [rbp+20h]

  v1 = *(_DWORD *)(a1 + 16);
  v2 = *(_QWORD *)(a1 + 8);
  CurrentThread = KeGetCurrentThread();
  BugCheckParameter1 = (ULONG_PTR)CurrentThread->ApcState.Process;
  v37 = BugCheckParameter1 + 1024;
  BugCheckParameter3 = 0LL;
  v29 = 0LL;
  v33 = *(_QWORD *)(a1 + 24);
  v32 = *(_QWORD *)(a1 + 32);
  v35 = v1;
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
    v26 = v4;
    if ( (*(unsigned int *)(v4 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v4 + 33) << 32))
       - (*(unsigned int *)(v4 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v4 + 32) << 32))
       + 1 > (*(unsigned int *)(v3 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v3 + 33) << 32))
           - (*(unsigned int *)(v3 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v3 + 32) << 32))
           + 1 )
      v26 = v3;
    v36 = v26;
    MiLockNestedVad(v26);
  }
  else
  {
    v36 = 0LL;
  }
  LOCK_PAGE_TABLE_COMMITMENT(CurrentThread, BugCheckParameter1);
  v11 = *(_DWORD *)(v2 + 48) & 0x200000;
  if ( v6 )
  {
    if ( v11 )
    {
      v34 = MiLockWorkingSetExclusive(v37);
      v19 = MiComputePageCommitment(v33, v32, v2, v34, 4, 0LL, 0LL);
      LOBYTE(v10) = v34;
      v5 = v19;
    }
    else
    {
      v24 = MiCountSharedPages(
              v2,
              ((v33 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
              ((v32 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      LOBYTE(v10) = 17;
      v34 = 17;
      v5 = ((__int64)(((v32 >> 9) & 0x7FFFFFFFF8LL) - ((v33 >> 9) & 0x7FFFFFFFF8LL)) >> 3) - v24 + 1;
    }
    if ( v35 == 1 )
    {
      v7 = v6 - v5;
    }
    else
    {
      if ( v35 != 2 )
      {
        v13 = v36;
        v20 = (unsigned __int64)*(unsigned __int8 *)(v36 + 32) << 32;
        if ( (*(_DWORD *)(v2 + 48) & 0x200000) != 0 )
        {
          v7 = MiComputePageCommitment(
                 (*(unsigned int *)(v36 + 24) | v20) << 12,
                 ((*(unsigned int *)(v36 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v36 + 33) << 32)) << 12) | 0xFFF,
                 v36,
                 v10,
                 4,
                 0LL,
                 0LL);
        }
        else
        {
          v21 = 8 * ((*(unsigned int *)(v36 + 24) | v20) & 0xFFFFFFFFFLL) - 0x98000000000LL;
          v22 = 8
              * ((*(unsigned int *)(v36 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v36 + 33) << 32)) & 0xFFFFFFFFFLL)
              - 0x98000000000LL;
          v7 = ((__int64)(v22 - v21) >> 3) - MiCountSharedPages(v36, v21, v22) + 1;
        }
        v23 = v6 - v5 - v7;
        if ( v36 == v4 )
        {
          v8 = v7;
          v7 = v23;
        }
        else
        {
          v8 = v23;
        }
        goto LABEL_52;
      }
      v8 = v6 - v5;
    }
    v13 = v36;
LABEL_52:
    v12 = v34;
    goto LABEL_11;
  }
  if ( v11 )
    v12 = MiLockWorkingSetExclusive(v37);
  else
    v12 = 17;
  v13 = v36;
LABEL_11:
  if ( v12 == 17 )
    v12 = MiLockWorkingSetExclusive(v37);
  MiLockVadTree(3, v9, v10);
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
    v14 = BugCheckParameter1;
    v29 = 8
        * ((*(unsigned int *)(v4 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v4 + 33) << 32))
         - (*(unsigned int *)(v4 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v4 + 32) << 32)))
        + 8;
    v25 = (*(unsigned int *)(v4 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v4 + 33) << 32)) + 1;
    *(_DWORD *)(v2 + 24) = *(_DWORD *)(v4 + 28) + 1;
    *(_BYTE *)(v2 + 32) = BYTE4(v25);
    MiInsertVad(v4, BugCheckParameter1, 3);
  }
  else
  {
    v14 = BugCheckParameter1;
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
    v17 = *(unsigned int *)(v3 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v3 + 32) << 32);
    v18 = (*(unsigned int *)(v3 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v3 + 33) << 32)) - v17;
    *(_DWORD *)(v2 + 28) = *(_DWORD *)(v3 + 24) - 1;
    v15 = v29 + 8 * v18 + 8;
    *(_BYTE *)(v2 + 33) = (v17 - 1) >> 32;
    MiInsertVad(v3, v14, 3);
  }
  else
  {
    v15 = v29;
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
      v27 = 0LL;
      if ( v15 )
        v27 = v15;
      BugCheckParameter3 = v27;
    }
    *(_DWORD *)(v2 + 52) = v5;
    *(_BYTE *)(v2 + 34) = BYTE4(v5);
  }
  MiAdvanceVadView(v2, 0LL);
  MiUnlockVadTree(3, 0x11u);
  MiUnlockWorkingSetExclusive(v14 + 1024, v12);
  if ( v4 )
    MiPostInsertVad(v4, v14, 0LL);
  if ( v3 )
    MiPostInsertVad(v3, v14, 0LL);
  UNLOCK_PAGE_TABLE_COMMITMENT((__int64)CurrentThread, v14);
  if ( v13 )
    MiUnlockNestedVad(v13);
  result = BugCheckParameter3;
  if ( BugCheckParameter3 )
    return PsReturnProcessPagedPoolQuota(v14, BugCheckParameter3);
  return result;
}
