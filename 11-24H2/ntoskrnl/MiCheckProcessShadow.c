/*
 * XREFs of MiCheckProcessShadow @ 0x140242C50
 * Callers:
 *     MiUnlockWorkingSetShared @ 0x140241CF0 (MiUnlockWorkingSetShared.c)
 *     MiUnlockWorkingSetExclusive @ 0x140243400 (MiUnlockWorkingSetExclusive.c)
 *     MmCheckProcessShadow @ 0x140482160 (MmCheckProcessShadow.c)
 * Callees:
 *     MiLockNestedPageTable @ 0x140201F50 (MiLockNestedPageTable.c)
 *     KxTryToAcquireQueuedSpinLock @ 0x14023BA08 (KxTryToAcquireQueuedSpinLock.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140246FA0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnlockPageTableInternal @ 0x1402C9C00 (MiUnlockPageTableInternal.c)
 *     MiCheckRelevantKernelShadows @ 0x1402EE648 (MiCheckRelevantKernelShadows.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

__int64 __fastcall MiCheckProcessShadow(__int64 a1, unsigned __int64 i)
{
  unsigned int v2; // ebp
  unsigned __int64 v4; // r8
  bool v5; // zf
  __int64 v6; // r15
  __int64 v7; // r14
  unsigned __int64 *v8; // rax
  unsigned int *MmInternal; // rcx
  __int64 v10; // rax
  struct _KPRCB *CurrentPrcb; // r8
  char v12; // al
  unsigned int v13; // ecx
  _DWORD *v14; // rdx
  _KSPIN_LOCK_QUEUE *volatile *v15; // rcx
  unsigned __int64 v17; // rax
  ULONG_PTR v18; // r12
  int j; // r13d
  __int64 v20; // rbx
  __int64 v21; // rdx
  __int64 v22; // r8
  ULONG_PTR v23; // rax
  ULONG_PTR v24; // rbx
  ULONG_PTR BugCheckParameter4; // rax
  unsigned int v26; // r13d
  ULONG_PTR v27; // r15
  ULONG_PTR v28; // rbx
  __int64 v29; // rdx
  __int64 v30; // r8
  ULONG_PTR v31; // rax

  v2 = i;
  if ( (MiFlags & 0x600000) == 0 || (*(_DWORD *)(a1 + 184) & 0xF) != 0 || *(_BYTE *)(a1 - 672) == 1 )
    return 0xFFFFFFFFLL;
  v4 = i & 4;
  if ( (i & 4) != 0 )
  {
    v5 = (*(_DWORD *)(a1 - 524) & 0x4000000) == 0;
    v6 = *(_QWORD *)(a1 + 264);
  }
  else
  {
    v17 = __rdtsc();
    i = (unsigned __int64)HIDWORD(v17) << 32;
    if ( (v17 & 0x3FF0) != 0 )
      return 0xFFFFFFFFLL;
    v6 = *(_QWORD *)(a1 + 264);
    v5 = v6 == 0;
  }
  if ( v5 || !*(_QWORD *)(a1 + 16) || !*(_QWORD *)(a1 + 24) )
    return 0xFFFFFFFFLL;
  if ( (_DWORD)v4 )
  {
    if ( (v2 & 1) != 0 )
      MiLockNestedPageTable(a1, 0xFFFFF6FB7DBEDF68uLL);
    v7 = 0LL;
    goto LABEL_37;
  }
  v7 = 0LL;
  if ( (*(_DWORD *)(a1 + 184) & 0xFu) <= 5 )
  {
    if ( (*(_DWORD *)(a1 + 184) & 0xF) == 1 )
      v8 = (unsigned __int64 *)&unk_140E38880;
    else
      v8 = (unsigned __int64 *)(a1 + 192);
    v4 = *v8;
    if ( (v2 & 2) == 0 )
    {
      MmInternal = (unsigned int *)KeGetCurrentPrcb()->MmInternal;
      if ( MmInternal )
        v10 = MmInternal[81];
      else
        v10 = 0LL;
      if ( (*(_DWORD *)((v10 << 6) + v4) & 0x40000000) == 0 )
        goto LABEL_17;
      return 0xFFFFFFFFLL;
    }
    for ( i = 0LL; (unsigned int)i < 4; i = (unsigned int)(i + 1) )
    {
      if ( (*(_DWORD *)(((unsigned __int64)(unsigned int)i << 6) + v4) & 0x40000000) != 0 )
        return 0xFFFFFFFFLL;
    }
  }
LABEL_17:
  if ( (v2 & 1) != 0 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v12 = *(_DWORD *)(a1 + 184) & 0xF;
    if ( v12 )
    {
      if ( v12 == 7 )
      {
        v13 = 1;
      }
      else
      {
        v13 = 3;
        if ( v12 == 5 )
          v13 = 0;
      }
      v14 = (_DWORD *)((char *)&unk_140E2FE00 + 8 * v13);
    }
    else
    {
      v13 = 2;
      v14 = (_DWORD *)(a1 + 176);
    }
    v15 = &CurrentPrcb->SelfmapLockHandle[0].LockQueue.Next + 2 * v13 + v13;
    *((_QWORD *)v15 + 1) = v14;
    *v15 = 0LL;
    if ( !(unsigned int)KxTryToAcquireQueuedSpinLock((signed __int64)v15, v14) )
      return 0xFFFFFFFFLL;
  }
LABEL_37:
  v18 = 0xFFFFF6FB7DBED000uLL;
  for ( j = 256; j; --j )
  {
    v20 = MI_READ_PTE_LOCK_FREE(v18, i, v4);
    v23 = MI_READ_PTE_LOCK_FREE(v6, v21, v22);
    if ( (v20 & 1) != 0 )
    {
      v24 = v20 & 0xCFFFFFFFFFFFFFDFuLL | 0x20;
      if ( !HIBYTE(word_140E2EEC4) )
        v23 |= 0x8000000000000000uLL;
      BugCheckParameter4 = v23 | 0x20;
      if ( v24 != BugCheckParameter4 )
      {
        if ( (v2 & 8) == 0 )
          KeBugCheckEx(0x1Au, 0x1300uLL, v18, v24, BugCheckParameter4);
        goto LABEL_56;
      }
    }
    else if ( v23 )
    {
      if ( (v2 & 8) == 0 )
        KeBugCheckEx(0x1Au, 0x1301uLL, v18, v23, v23);
      goto LABEL_56;
    }
    v18 += 8LL;
    v6 += 8LL;
    ++v7;
  }
  v26 = 512 - (((unsigned int)v18 >> 3) & 0x1FF);
  v27 = v6 - v18;
  while ( v26 )
  {
    v28 = MI_READ_PTE_LOCK_FREE(v18, i, v4);
    v31 = MI_READ_PTE_LOCK_FREE(v27 + v18, v29, v30);
    if ( (v28 & 1) != 0 && (v28 & 4) != 0 )
    {
      if ( (v2 & 8) == 0 )
        KeBugCheckEx(0x1Au, 0x1304uLL, v18, v28, v31);
      break;
    }
    if ( (v31 & 1) != 0 && (v31 & 4) != 0 )
    {
      if ( (v2 & 8) == 0 )
        KeBugCheckEx(0x1Au, 0x1305uLL, v18, v28, v31);
      break;
    }
    v18 += 8LL;
    ++v7;
    --v26;
  }
  if ( (v18 & 0xFFF) == 0 )
    v7 = 0xFFFFFFFFLL;
LABEL_56:
  if ( (v2 & 1) != 0 )
    MiUnlockPageTableInternal(a1, 0xFFFFF6FB7DBEDF68uLL);
  if ( v7 == 0xFFFFFFFFLL && (v2 & 0x10) != 0 )
    return MiCheckRelevantKernelShadows(v2);
  return v7;
}
