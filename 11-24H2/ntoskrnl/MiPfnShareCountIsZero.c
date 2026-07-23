/*
 * XREFs of MiPfnShareCountIsZero @ 0x14024D700
 * Callers:
 *     MiReduceShareCount @ 0x140206F10 (MiReduceShareCount.c)
 *     MiWsleFree @ 0x140248D20 (MiWsleFree.c)
 *     MiUnlockPageTableCharges @ 0x1403DB820 (MiUnlockPageTableCharges.c)
 *     MiDecommitFreePagesTail @ 0x1404EF800 (MiDecommitFreePagesTail.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140246FA0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiReleasePageFileInfo @ 0x1402486F0 (MiReleasePageFileInfo.c)
 *     MiMapPageInHyperSpaceWorker @ 0x14024BEF0 (MiMapPageInHyperSpaceWorker.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14024EF60 (MiInsertPageInFreeOrZeroedList.c)
 *     MiInsertProtectedStandbyPage @ 0x1402567C0 (MiInsertProtectedStandbyPage.c)
 *     MiInsertPageInList @ 0x140300420 (MiInsertPageInList.c)
 *     MiGetPfnPriority @ 0x140335630 (MiGetPfnPriority.c)
 *     MiGetPagingFileOffset @ 0x140341C00 (MiGetPagingFileOffset.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

__int64 __fastcall MiPfnShareCountIsZero(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  __int64 v7; // rbp
  __int64 v8; // rdi
  unsigned __int64 v9; // r9
  __int64 *v10; // r10
  __int64 v11; // r8
  __int64 v12; // rax
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rdx
  char v17; // al
  int v18; // [rsp+80h] [rbp+8h]
  unsigned __int64 v19; // [rsp+90h] [rbp+18h]

  v18 = *(_DWORD *)(a1 + 32);
  if ( *(__int64 *)(a1 + 40) < 0 )
  {
    v7 = *(_QWORD *)(a1 + 16) >> 5;
    v8 = ((unsigned int)*(_QWORD *)(a1 + 8) >> 3) & 0x1FF;
    v9 = MiMapPageInHyperSpaceWorker(*(_QWORD *)(a1 + 40) & 0xFFFFFFFFFFLL, 0LL, 0x80000000);
    v10 = (__int64 *)(v9 + 8 * v8);
    v11 = ((unsigned __int64)*v10 >> 12) & 0xFFFFFFFFFFLL;
    if ( 48 * v11 - 0x220000000000LL != a1 )
      KeBugCheckEx(
        0x4Eu,
        6uLL,
        0xAAAAAAAAAAAAAAABuLL * ((a1 + 0x220000000000LL) >> 4),
        (ULONG_PTR)v10,
        *(_QWORD *)(v9 + 8 * v8));
    v12 = 32 * ((v11 << 7) | v7 & 0x1F | 0x40);
    if ( qword_140E2DCC0 )
    {
      if ( (v12 & qword_140E2DCC0) != 0 )
        v12 |= 0x10uLL;
      else
        v12 |= qword_140E2DCC0;
    }
    *v10 = v12;
    a4 = (_QWORD *)(((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    *(_QWORD *)KeGetCurrentPrcb()->MmInternal = 0LL;
    *a4 = CLFS_LSN_NULL_EXT;
  }
  LOWORD(v18) = v18 - 1;
  if ( !(_WORD)v18 )
  {
    if ( (*(_QWORD *)(a1 + 24) & 0x4000000000000000LL) != 0 )
    {
      if ( (v18 & 0x10000000) != 0 )
        HIBYTE(v18) &= ~0x10u;
      *(_DWORD *)(a1 + 32) = v18;
      v19 = *(_QWORD *)(a1 + 16);
      if ( (v19 & 0x400) == 0 && ((v19 & 4) != 0 || (v19 & 2) != 0) )
      {
        if ( v19 )
          MiReleasePageFileInfo(
            *((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(a1 + 40) >> 43) & 0x3FFLL)),
            v19,
            1LL,
            (__int64)a4);
      }
      MiInsertPageInFreeOrZeroedList(0xAAAAAAAAAAAAAAABuLL * ((a1 + 0x220000000000LL) >> 4));
      return 4LL;
    }
    v14 = MI_READ_PTE_LOCK_FREE(a1 + 16);
    v15 = -9LL;
    if ( (v14 & 0x400) != 0 )
      v15 = -2049LL;
    *(_QWORD *)(a1 + 16) = v14 & v15;
    if ( (v18 & 0x100000) != 0 )
    {
      v16 = 8LL;
      *(_DWORD *)(a1 + 32) = v18;
    }
    else
    {
      BYTE2(v18) = BYTE2(v18) & 0xF8 | 2;
      *(_DWORD *)(a1 + 32) = v18;
      if ( a2 && (unsigned int)MiGetPfnPriority(a1) < 5 )
      {
        MiInsertProtectedStandbyPage(a2, a1);
        return 4LL;
      }
      v16 = 4LL;
    }
    MiInsertPageInList(a1, v16);
    return 4LL;
  }
  if ( (*(_QWORD *)(a1 + 24) & 0x4000000000000000LL) != 0 )
  {
    BYTE2(v18) |= 7u;
  }
  else
  {
    if ( (v18 & 0x100000) != 0 )
    {
      v17 = BYTE2(v18) & 0xF8 | 3;
    }
    else if ( (v18 & 0x80000) != 0 )
    {
      v17 = BYTE2(v18) & 0xF8 | 3;
    }
    else
    {
      v17 = BYTE2(v18) & 0xF8 | 2;
    }
    BYTE2(v18) = v17;
  }
  *(_DWORD *)(a1 + 32) = v18;
  if ( (*(_DWORD *)(a1 + 16) & 0x400LL) == 0 && (unsigned int)MiGetPagingFileOffset(*(_QWORD *)(a1 + 16)) )
    *(_BYTE *)(*((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(a1 + 40) >> 43) & 0x3FFLL)) + 723LL) = 1;
  return 3LL;
}
