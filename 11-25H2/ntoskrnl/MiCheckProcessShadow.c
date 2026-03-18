/*
 * XREFs of MiCheckProcessShadow @ 0x1402BAB40
 * Callers:
 *     MiUnlockWorkingSetExclusive @ 0x1402B7680 (MiUnlockWorkingSetExclusive.c)
 *     MiUnlockWorkingSetShared @ 0x1402B9D50 (MiUnlockWorkingSetShared.c)
 *     MmCheckProcessShadow @ 0x1404877A0 (MmCheckProcessShadow.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140231F50 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnlockPageTable @ 0x14028B6B0 (MiUnlockPageTable.c)
 *     KxTryToAcquireQueuedSpinLock @ 0x1402B03EC (KxTryToAcquireQueuedSpinLock.c)
 *     MiLockNestedPageTable @ 0x1402FB780 (MiLockNestedPageTable.c)
 *     MiCheckRelevantKernelShadows @ 0x14040F96C (MiCheckRelevantKernelShadows.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

__int64 __fastcall MiCheckProcessShadow(__int64 a1, unsigned int a2)
{
  bool v4; // zf
  unsigned __int64 v5; // r15
  __int64 v6; // r14
  __int64 *v7; // rax
  __int64 v8; // r8
  unsigned int *MmInternal; // rcx
  __int64 v10; // rax
  struct _KPRCB *CurrentPrcb; // r8
  char v12; // al
  unsigned int v13; // ecx
  char *v14; // rdx
  _KSPIN_LOCK_QUEUE *volatile *v15; // rcx
  unsigned int i; // edx
  unsigned __int64 v18; // r12
  int j; // r13d
  __int64 v20; // rbx
  ULONG_PTR v21; // rax
  ULONG_PTR v22; // rbx
  ULONG_PTR BugCheckParameter4; // rax
  unsigned int v24; // r13d
  unsigned __int64 v25; // r15
  ULONG_PTR v26; // rbx
  ULONG_PTR v27; // rax

  if ( (MiFlags & 0x600000) == 0 || (*(_DWORD *)(a1 + 184) & 0xF) != 0 || *(_BYTE *)(a1 - 672) == 1 )
    return 0xFFFFFFFFLL;
  if ( (a2 & 4) != 0 )
  {
    v4 = (*(_DWORD *)(a1 - 524) & 0x4000000) == 0;
    v5 = *(_QWORD *)(a1 + 264);
  }
  else
  {
    if ( (__rdtsc() & 0x3FF0) != 0 )
      return 0xFFFFFFFFLL;
    v5 = *(_QWORD *)(a1 + 264);
    v4 = v5 == 0;
  }
  if ( v4 || !*(_QWORD *)(a1 + 16) || !*(_QWORD *)(a1 + 24) )
    return 0xFFFFFFFFLL;
  if ( (a2 & 4) != 0 )
  {
    if ( (a2 & 1) != 0 )
      MiLockNestedPageTable(a1, 0xFFFFF6FB7DBEDF68uLL);
    v6 = 0LL;
    goto LABEL_38;
  }
  v6 = 0LL;
  if ( (*(_DWORD *)(a1 + 184) & 0xFu) <= 5 )
  {
    if ( (*(_DWORD *)(a1 + 184) & 0xF) == 1 )
      v7 = (__int64 *)&unk_140E38500;
    else
      v7 = (__int64 *)(a1 + 192);
    v8 = *v7;
    if ( (a2 & 2) == 0 )
    {
      MmInternal = (unsigned int *)KeGetCurrentPrcb()->MmInternal;
      if ( MmInternal )
        v10 = MmInternal[81];
      else
        v10 = 0LL;
      if ( (*(_DWORD *)((v10 << 6) + v8) & 0x40000000) == 0 )
        goto LABEL_17;
      return 0xFFFFFFFFLL;
    }
    for ( i = 0; i < 4; ++i )
    {
      if ( (*(_DWORD *)(((unsigned __int64)i << 6) + v8) & 0x40000000) != 0 )
        return 0xFFFFFFFFLL;
    }
  }
LABEL_17:
  if ( (a2 & 1) != 0 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v12 = *(_DWORD *)(a1 + 184) & 0xF;
    if ( v12 )
    {
      if ( v12 == 7 )
      {
        v13 = 1;
        v14 = (char *)&unk_140E2FA80 + 8;
      }
      else
      {
        v13 = 3;
        if ( v12 == 5 )
          v13 = 0;
        v14 = (char *)&unk_140E2FA80 + 8 * v13;
      }
    }
    else
    {
      v13 = 2;
      v14 = (char *)(a1 + 176);
    }
    v15 = &CurrentPrcb->SelfmapLockHandle[0].LockQueue.Next + 2 * v13 + v13;
    *((_QWORD *)v15 + 1) = v14;
    *v15 = 0LL;
    if ( !(unsigned int)KxTryToAcquireQueuedSpinLock((signed __int64)v15, v14) )
      return 0xFFFFFFFFLL;
  }
LABEL_38:
  v18 = 0xFFFFF6FB7DBED000uLL;
  for ( j = 256; j; --j )
  {
    v20 = MI_READ_PTE_LOCK_FREE(v18);
    v21 = MI_READ_PTE_LOCK_FREE(v5);
    if ( (v20 & 1) != 0 )
    {
      v22 = v20 & 0xCFFFFFFFFFFFFFDFuLL | 0x20;
      if ( !HIBYTE(word_140E2EB44) )
        v21 |= 0x8000000000000000uLL;
      BugCheckParameter4 = v21 | 0x20;
      if ( v22 != BugCheckParameter4 )
      {
        if ( (a2 & 8) == 0 )
          KeBugCheckEx(0x1Au, 0x1300uLL, v18, v22, BugCheckParameter4);
        goto LABEL_61;
      }
    }
    else if ( v21 )
    {
      if ( (a2 & 8) == 0 )
        KeBugCheckEx(0x1Au, 0x1301uLL, v18, v21, v21);
      goto LABEL_61;
    }
    v18 += 8LL;
    v5 += 8LL;
    ++v6;
  }
  v24 = 512 - (((unsigned int)v18 >> 3) & 0x1FF);
  v25 = v5 - v18;
  while ( v24 )
  {
    v26 = MI_READ_PTE_LOCK_FREE(v18);
    v27 = MI_READ_PTE_LOCK_FREE(v25 + v18);
    if ( (v26 & 1) != 0 && (v26 & 4) != 0 )
    {
      if ( (a2 & 8) == 0 )
        KeBugCheckEx(0x1Au, 0x1304uLL, v18, v26, v27);
      break;
    }
    if ( (v27 & 1) != 0 && (v27 & 4) != 0 )
    {
      if ( (a2 & 8) == 0 )
        KeBugCheckEx(0x1Au, 0x1305uLL, v18, v26, v27);
      break;
    }
    v18 += 8LL;
    ++v6;
    --v24;
  }
  if ( (v18 & 0xFFF) == 0 )
    v6 = 0xFFFFFFFFLL;
LABEL_61:
  if ( (a2 & 1) != 0 )
    MiUnlockPageTable(a1, 0xFFFFF6FB7DBEDF68uLL);
  if ( v6 == 0xFFFFFFFFLL && (a2 & 0x10) != 0 )
    return MiCheckRelevantKernelShadows(a2);
  return v6;
}
