/*
 * XREFs of MiDecommitFreePage @ 0x14023E790
 * Callers:
 *     MiDecommitSharedPageTail @ 0x14023E140 (MiDecommitSharedPageTail.c)
 *     MiDecommitPrivatePageTail @ 0x1404F2240 (MiDecommitPrivatePageTail.c)
 * Callees:
 *     MiGetPfnPriority @ 0x1402141E0 (MiGetPfnPriority.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021A250 (MI_READ_PTE_LOCK_FREE.c)
 *     MiReleasePageFileInfo @ 0x14021B9A0 (MiReleasePageFileInfo.c)
 *     MiMapPageInHyperSpaceWorker @ 0x14021F1A0 (MiMapPageInHyperSpaceWorker.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x140222210 (MiInsertPageInFreeOrZeroedList.c)
 *     MiInsertPageInList @ 0x14022CB10 (MiInsertPageInList.c)
 *     MiBadShareCount @ 0x14023EE28 (MiBadShareCount.c)
 *     MiGetLeafVa @ 0x1402DEE20 (MiGetLeafVa.c)
 *     MiGetPagingFileOffset @ 0x1402E5A60 (MiGetPagingFileOffset.c)
 *     MiInsertProtectedStandbyPage @ 0x1402F09B0 (MiInsertProtectedStandbyPage.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 */

__int64 __fastcall MiDecommitFreePage(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v4; // r13
  __int64 v7; // rax
  int v8; // r12d
  __int64 v10; // rdi
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // r9
  __int64 *v13; // r10
  __int64 v14; // r8
  __int64 v15; // rax
  unsigned int v16; // r9d
  unsigned __int64 v17; // rbp
  __int64 v19; // rax
  __int64 v20; // rcx
  unsigned int v21; // edx
  char v22; // al
  int v23; // [rsp+90h] [rbp+8h]
  __int64 v24; // [rsp+A0h] [rbp+18h]
  unsigned __int64 v25; // [rsp+A8h] [rbp+20h]

  v4 = *(_QWORD *)(a1 + 120);
  if ( (*(_BYTE *)(a3 + 34) & 7) != 6 )
    MiBadShareCount(a3);
  v7 = *(_QWORD *)(a3 + 24);
  v8 = 0;
  *(_QWORD *)(a3 + 24) = ((v7 & 0x3FFFFFFFFFFFFFFFLL) - 1) ^ (v7 ^ ((v7 & 0x3FFFFFFFFFFFFFFFLL) - 1)) & 0xC000000000000000uLL;
  if ( (v7 & 0x3FFFFFFFFFFFFFFFLL) != 1 )
  {
    v16 = 2;
    goto LABEL_19;
  }
  v23 = *(_DWORD *)(a3 + 32);
  if ( *(__int64 *)(a3 + 40) < 0 )
  {
    v24 = *(_QWORD *)(a3 + 16) >> 5;
    v10 = ((unsigned int)*(_QWORD *)(a3 + 8) >> 3) & 0x1FF;
    v11 = MiMapPageInHyperSpaceWorker(*(_QWORD *)(a3 + 40) & 0xFFFFFFFFFFLL, 0LL, 0x80000000LL);
    v12 = v11;
    v13 = (__int64 *)(v11 + 8 * v10);
    v14 = ((unsigned __int64)*v13 >> 12) & 0xFFFFFFFFFFLL;
    if ( 48 * v14 - 0x220000000000LL != a3 )
      KeBugCheckEx(
        0x4Eu,
        6uLL,
        0xAAAAAAAAAAAAAAABuLL * ((__int64)(a3 + 0x220000000000LL) >> 4),
        (ULONG_PTR)v13,
        *(_QWORD *)(v11 + 8 * v10));
    v15 = 32 * ((v14 << 7) | v24 & 0x1F | 0x40);
    if ( qword_140E2DB80 )
    {
      if ( (v15 & qword_140E2DB80) != 0 )
        v15 |= 0x10uLL;
      else
        v15 |= qword_140E2DB80;
    }
    *v13 = v15;
    *(_QWORD *)KeGetCurrentPrcb()->MmInternal = 0LL;
    *(_QWORD *)(((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) = CLFS_LSN_NULL_EXT;
  }
  LOWORD(v23) = v23 - 1;
  if ( (_WORD)v23 )
  {
    if ( (*(_QWORD *)(a3 + 24) & 0x4000000000000000LL) != 0 )
    {
      BYTE2(v23) |= 7u;
    }
    else
    {
      if ( (v23 & 0x100000) != 0 )
      {
        v22 = BYTE2(v23) & 0xF8 | 3;
      }
      else if ( (v23 & 0x80000) != 0 )
      {
        v22 = BYTE2(v23) & 0xF8 | 3;
      }
      else
      {
        v22 = BYTE2(v23) & 0xF8 | 2;
      }
      BYTE2(v23) = v22;
    }
    *(_DWORD *)(a3 + 32) = v23;
    if ( (*(_DWORD *)(a3 + 16) & 0x400LL) == 0 && (unsigned int)MiGetPagingFileOffset(*(_QWORD *)(a3 + 16)) )
      *(_BYTE *)(*((_QWORD *)qword_140E2FF88 + ((*(_QWORD *)(a3 + 40) >> 43) & 0x3FFLL)) + 723LL) = 1;
    v16 = 3;
  }
  else
  {
    if ( (*(_QWORD *)(a3 + 24) & 0x4000000000000000LL) == 0 )
    {
      v19 = MI_READ_PTE_LOCK_FREE(a3 + 16);
      v20 = -9LL;
      if ( (v19 & 0x400) != 0 )
        v20 = -2049LL;
      *(_QWORD *)(a3 + 16) = v19 & v20;
      if ( (v23 & 0x100000) != 0 )
      {
        v21 = 8;
        *(_DWORD *)(a3 + 32) = v23;
      }
      else
      {
        BYTE2(v23) = BYTE2(v23) & 0xF8 | 2;
        *(_DWORD *)(a3 + 32) = v23;
        if ( v4 && (unsigned int)MiGetPfnPriority(a3) < 5 )
        {
          MiInsertProtectedStandbyPage(v4, a3);
          v16 = 4;
          goto LABEL_19;
        }
        v21 = 4;
      }
      MiInsertPageInList(a3, v21);
      v16 = 4;
      goto LABEL_19;
    }
    if ( (v23 & 0x10000000) != 0 )
      HIBYTE(v23) &= ~0x10u;
    *(_DWORD *)(a3 + 32) = v23;
    v25 = *(_QWORD *)(a3 + 16);
    if ( (v25 & 0x400) == 0 && ((v25 & 4) != 0 || (v25 & 2) != 0) && v25 )
      MiReleasePageFileInfo(*((_QWORD *)qword_140E2FF88 + ((*(_QWORD *)(a3 + 40) >> 43) & 0x3FFLL)), v25, 1LL);
    MiInsertPageInFreeOrZeroedList(0xAAAAAAAAAAAAAAABuLL * ((__int64)(a3 + 0x220000000000LL) >> 4), 2LL);
    v16 = 4;
  }
LABEL_19:
  if ( (*(_DWORD *)(a1 + 156) & 0x20) != 0 )
  {
    v17 = a2 << 25 >> 16;
    if ( v17 >= 0xFFFFF68000000000uLL && v17 <= 0xFFFFF6FFFFFFFFFFuLL )
      v8 = 1;
    if ( v16 == 2 )
    {
      if ( v8 )
        *(_QWORD *)a3 &= ~1uLL;
    }
    else if ( v16 == 3 )
    {
      if ( !*(_DWORD *)(a1 + 128)
        && v8
        && !*(_DWORD *)(a1 + 40)
        && (unsigned __int64)MiGetLeafVa(v17) <= 0x7FFFFFFEFFFFLL )
      {
        *(_DWORD *)(a1 + 128) = 1;
      }
      if ( *(__int64 *)(a3 + 40) < 0 )
        return 4;
    }
  }
  return v16;
}
