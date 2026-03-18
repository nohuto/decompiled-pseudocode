/*
 * XREFs of MiPfnShareCountIsZero @ 0x1402209B0
 * Callers:
 *     MiWsleFree @ 0x14021BFD0 (MiWsleFree.c)
 *     MiReduceShareCount @ 0x14023EDC0 (MiReduceShareCount.c)
 *     MiUnlockPageTableCharges @ 0x1402C7D50 (MiUnlockPageTableCharges.c)
 *     MiDecommitFreePagesTail @ 0x1404F1D60 (MiDecommitFreePagesTail.c)
 * Callees:
 *     MiGetPfnPriority @ 0x1402141E0 (MiGetPfnPriority.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021A250 (MI_READ_PTE_LOCK_FREE.c)
 *     MiReleasePageFileInfo @ 0x14021B9A0 (MiReleasePageFileInfo.c)
 *     MiMapPageInHyperSpaceWorker @ 0x14021F1A0 (MiMapPageInHyperSpaceWorker.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x140222210 (MiInsertPageInFreeOrZeroedList.c)
 *     MiInsertPageInList @ 0x14022CB10 (MiInsertPageInList.c)
 *     MiGetPagingFileOffset @ 0x1402E5A60 (MiGetPagingFileOffset.c)
 *     MiInsertProtectedStandbyPage @ 0x1402F09B0 (MiInsertProtectedStandbyPage.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 */

__int64 __fastcall MiPfnShareCountIsZero(unsigned __int64 a1, __int64 a2)
{
  __int64 v5; // rbp
  __int64 v6; // rdi
  unsigned __int64 v7; // r9
  __int64 *v8; // r10
  __int64 v9; // r8
  __int64 v10; // rax
  __int64 v12; // rax
  __int64 v13; // rcx
  char v14; // al
  int v15; // [rsp+80h] [rbp+8h]
  unsigned __int64 v16; // [rsp+90h] [rbp+18h]

  v15 = *(_DWORD *)(a1 + 32);
  if ( *(__int64 *)(a1 + 40) < 0 )
  {
    v5 = *(_QWORD *)(a1 + 16) >> 5;
    v6 = ((unsigned int)*(_QWORD *)(a1 + 8) >> 3) & 0x1FF;
    v7 = MiMapPageInHyperSpaceWorker(*(_QWORD *)(a1 + 40) & 0xFFFFFFFFFFLL, 0LL, 0x80000000LL);
    v8 = (__int64 *)(v7 + 8 * v6);
    v9 = ((unsigned __int64)*v8 >> 12) & 0xFFFFFFFFFFLL;
    if ( 48 * v9 - 0x220000000000LL != a1 )
      KeBugCheckEx(
        0x4Eu,
        6uLL,
        0xAAAAAAAAAAAAAAABuLL * ((__int64)(a1 + 0x220000000000LL) >> 4),
        (ULONG_PTR)v8,
        *(_QWORD *)(v7 + 8 * v6));
    v10 = 32 * ((v9 << 7) | v5 & 0x1F | 0x40);
    if ( qword_140E2DB80 )
    {
      if ( (v10 & qword_140E2DB80) != 0 )
        v10 |= 0x10uLL;
      else
        v10 |= qword_140E2DB80;
    }
    *v8 = v10;
    *(_QWORD *)KeGetCurrentPrcb()->MmInternal = 0LL;
    *(_QWORD *)(((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) = CLFS_LSN_NULL_EXT;
  }
  LOWORD(v15) = v15 - 1;
  if ( !(_WORD)v15 )
  {
    if ( (*(_QWORD *)(a1 + 24) & 0x4000000000000000LL) != 0 )
    {
      if ( (v15 & 0x10000000) != 0 )
        HIBYTE(v15) &= ~0x10u;
      *(_DWORD *)(a1 + 32) = v15;
      v16 = *(_QWORD *)(a1 + 16);
      if ( (v16 & 0x400) == 0 && ((v16 & 4) != 0 || (v16 & 2) != 0) )
      {
        if ( v16 )
          MiReleasePageFileInfo(*((_QWORD *)qword_140E2FF88 + ((*(_QWORD *)(a1 + 40) >> 43) & 0x3FFLL)), v16, 1LL);
      }
      MiInsertPageInFreeOrZeroedList(0xAAAAAAAAAAAAAAABuLL * ((__int64)(a1 + 0x220000000000LL) >> 4));
      return 4LL;
    }
    v12 = MI_READ_PTE_LOCK_FREE(a1 + 16);
    v13 = -9LL;
    if ( (v12 & 0x400) != 0 )
      v13 = -2049LL;
    *(_QWORD *)(a1 + 16) = v12 & v13;
    if ( (v15 & 0x100000) != 0 )
    {
      *(_DWORD *)(a1 + 32) = v15;
    }
    else
    {
      BYTE2(v15) = BYTE2(v15) & 0xF8 | 2;
      *(_DWORD *)(a1 + 32) = v15;
      if ( a2 && (unsigned int)MiGetPfnPriority(a1) < 5 )
      {
        MiInsertProtectedStandbyPage(a2, a1);
        return 4LL;
      }
    }
    MiInsertPageInList(a1);
    return 4LL;
  }
  if ( (*(_QWORD *)(a1 + 24) & 0x4000000000000000LL) != 0 )
  {
    BYTE2(v15) |= 7u;
  }
  else
  {
    if ( (v15 & 0x100000) != 0 )
    {
      v14 = BYTE2(v15) & 0xF8 | 3;
    }
    else if ( (v15 & 0x80000) != 0 )
    {
      v14 = BYTE2(v15) & 0xF8 | 3;
    }
    else
    {
      v14 = BYTE2(v15) & 0xF8 | 2;
    }
    BYTE2(v15) = v14;
  }
  *(_DWORD *)(a1 + 32) = v15;
  if ( (*(_DWORD *)(a1 + 16) & 0x400LL) == 0 && (unsigned int)MiGetPagingFileOffset(*(_QWORD *)(a1 + 16)) )
    *(_BYTE *)(*((_QWORD *)qword_140E2FF88 + ((*(_QWORD *)(a1 + 40) >> 43) & 0x3FFLL)) + 723LL) = 1;
  return 3LL;
}
