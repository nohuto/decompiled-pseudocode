/*
 * XREFs of MiPfnShareCountIsZero @ 0x140342440
 * Callers:
 *     MiWsleFree @ 0x14022FD60 (MiWsleFree.c)
 *     MiUnlockPageTableCharges @ 0x1402CBD20 (MiUnlockPageTableCharges.c)
 *     MiReduceShareCount @ 0x140340D70 (MiReduceShareCount.c)
 *     MiDecommitFreePage @ 0x140341580 (MiDecommitFreePage.c)
 *     MiDecommitFreePagesTail @ 0x1404EDBB0 (MiDecommitFreePagesTail.c)
 * Callees:
 *     MiInsertPageInList @ 0x14021AFB0 (MiInsertPageInList.c)
 *     MiGetPfnPriority @ 0x140230FB0 (MiGetPfnPriority.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140231F50 (MI_READ_PTE_LOCK_FREE.c)
 *     MiReleasePageFileInfo @ 0x1402346B0 (MiReleasePageFileInfo.c)
 *     MiInsertProtectedStandbyPage @ 0x14023C818 (MiInsertProtectedStandbyPage.c)
 *     MiMapPageInHyperSpaceWorker @ 0x14024DAC0 (MiMapPageInHyperSpaceWorker.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x140343510 (MiInsertPageInFreeOrZeroedList.c)
 *     MiGetPagingFileOffset @ 0x14037C4CC (MiGetPagingFileOffset.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

__int64 __fastcall MiPfnShareCountIsZero(unsigned __int64 a1, __int64 a2)
{
  __int64 v5; // rax
  __int64 v6; // rcx
  unsigned int v7; // edx
  __int64 v9; // r14
  __int64 v10; // rsi
  unsigned __int64 v11; // r8
  __int64 *v12; // r10
  __int64 v13; // r9
  __int64 v14; // rax
  char v15; // al
  int v16; // [rsp+80h] [rbp+8h]
  unsigned __int64 v17; // [rsp+90h] [rbp+18h]

  v16 = *(_DWORD *)(a1 + 32);
  if ( *(__int64 *)(a1 + 40) < 0 )
  {
    v9 = *(_QWORD *)(a1 + 16) >> 5;
    v10 = ((unsigned int)*(_QWORD *)(a1 + 8) >> 3) & 0x1FF;
    v11 = MiMapPageInHyperSpaceWorker(*(_QWORD *)(a1 + 40) & 0xFFFFFFFFFFLL, 0LL, 0x80000000);
    v12 = (__int64 *)(v11 + 8 * v10);
    v13 = ((unsigned __int64)*v12 >> 12) & 0xFFFFFFFFFFLL;
    if ( 48 * v13 - 0x220000000000LL != a1 )
      KeBugCheckEx(
        0x4Eu,
        6uLL,
        0xAAAAAAAAAAAAAAABuLL * ((__int64)(a1 + 0x220000000000LL) >> 4),
        (ULONG_PTR)v12,
        *(_QWORD *)(v11 + 8 * v10));
    v14 = 32 * ((v13 << 7) | v9 & 0x1F | 0x40);
    if ( qword_140E2D940 )
    {
      if ( (v14 & qword_140E2D940) != 0 )
        v14 |= 0x10uLL;
      else
        v14 |= qword_140E2D940;
    }
    *v12 = v14;
    *(_QWORD *)KeGetCurrentPrcb()->MmInternal = 0LL;
    *(_QWORD *)(((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) = CLFS_LSN_NULL_EXT;
  }
  LOWORD(v16) = v16 - 1;
  if ( !(_WORD)v16 )
  {
    if ( (*(_QWORD *)(a1 + 24) & 0x4000000000000000LL) != 0 )
    {
      if ( (v16 & 0x10000000) != 0 )
        HIBYTE(v16) &= ~0x10u;
      *(_DWORD *)(a1 + 32) = v16;
      v17 = *(_QWORD *)(a1 + 16);
      if ( (v17 & 0x400) == 0 && ((v17 & 4) != 0 || (v17 & 2) != 0) )
      {
        if ( v17 )
          MiReleasePageFileInfo(*((_QWORD *)qword_140E2FD48 + ((*(_QWORD *)(a1 + 40) >> 43) & 0x3FFLL)), v17, 1);
      }
      MiInsertPageInFreeOrZeroedList(0xAAAAAAAAAAAAAAABuLL * ((__int64)(a1 + 0x220000000000LL) >> 4));
      return 4LL;
    }
    v5 = MI_READ_PTE_LOCK_FREE(a1 + 16);
    v6 = -9LL;
    if ( (v5 & 0x400) != 0 )
      v6 = -2049LL;
    *(_QWORD *)(a1 + 16) = v5 & v6;
    if ( (v16 & 0x100000) != 0 )
    {
      v7 = 8;
      *(_DWORD *)(a1 + 32) = v16;
    }
    else
    {
      BYTE2(v16) = BYTE2(v16) & 0xF8 | 2;
      *(_DWORD *)(a1 + 32) = v16;
      if ( a2 && (unsigned int)MiGetPfnPriority(a1) < 5 )
      {
        MiInsertProtectedStandbyPage(a2, a1);
        return 4LL;
      }
      v7 = 4;
    }
    MiInsertPageInList(a1, v7);
    return 4LL;
  }
  if ( (*(_QWORD *)(a1 + 24) & 0x4000000000000000LL) != 0 )
  {
    BYTE2(v16) |= 7u;
  }
  else
  {
    if ( (v16 & 0x100000) != 0 )
    {
      v15 = BYTE2(v16) & 0xF8 | 3;
    }
    else if ( (v16 & 0x80000) != 0 )
    {
      v15 = BYTE2(v16) & 0xF8 | 3;
    }
    else
    {
      v15 = BYTE2(v16) & 0xF8 | 2;
    }
    BYTE2(v16) = v15;
  }
  *(_DWORD *)(a1 + 32) = v16;
  if ( (*(_DWORD *)(a1 + 16) & 0x400LL) == 0 && (unsigned int)MiGetPagingFileOffset(*(_QWORD *)(a1 + 16)) )
    *(_BYTE *)(*((_QWORD *)qword_140E2FD48 + ((*(_QWORD *)(a1 + 40) >> 43) & 0x3FFLL)) + 723LL) = 1;
  return 3LL;
}
