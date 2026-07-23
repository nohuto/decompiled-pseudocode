/*
 * XREFs of MiDecommitFreePage @ 0x1402068E0
 * Callers:
 *     MiDecommitSharedPageTail @ 0x140206290 (MiDecommitSharedPageTail.c)
 *     MiDecommitPrivatePageTail @ 0x1404EFCE0 (MiDecommitPrivatePageTail.c)
 * Callees:
 *     MiBadShareCount @ 0x140206F78 (MiBadShareCount.c)
 *     MiGetLeafVa @ 0x140240700 (MiGetLeafVa.c)
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

__int64 __fastcall MiDecommitFreePage(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v4; // r13
  __int64 v7; // rax
  __int64 v8; // rdx
  int v9; // r12d
  __int64 v10; // r15
  __int64 v11; // rdi
  __int64 v12; // rax
  unsigned __int64 v13; // r9
  __int64 *v14; // r10
  __int64 v15; // r8
  __int64 v16; // rax
  unsigned int v17; // r9d
  unsigned __int64 v18; // rbp
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rdx
  char v23; // al
  int v24; // [rsp+90h] [rbp+8h]
  __int64 v25; // [rsp+A0h] [rbp+18h]
  __int64 v26; // [rsp+A8h] [rbp+20h]

  v3 = a3;
  v4 = *(_QWORD *)(a1 + 120);
  if ( (*(_BYTE *)(a3 + 34) & 7) != 6 )
    MiBadShareCount(a3);
  v7 = *(_QWORD *)(a3 + 24);
  v8 = (v7 & 0x3FFFFFFFFFFFFFFFLL) - 1;
  v9 = 0;
  *(_QWORD *)(a3 + 24) = v8 ^ (v7 ^ v8) & 0xC000000000000000uLL;
  if ( (v7 & 0x3FFFFFFFFFFFFFFFLL) != 1 )
  {
    v17 = 2;
    goto LABEL_19;
  }
  v24 = *(_DWORD *)(a3 + 32);
  if ( *(__int64 *)(a3 + 40) < 0 )
  {
    v10 = a3;
    v25 = *(_QWORD *)(a3 + 16) >> 5;
    v11 = ((unsigned int)*(_QWORD *)(a3 + 8) >> 3) & 0x1FF;
    v12 = MiMapPageInHyperSpaceWorker(*(_QWORD *)(a3 + 40) & 0xFFFFFFFFFFLL, 0LL, 0x80000000LL);
    v13 = v12;
    v14 = (__int64 *)(v12 + 8 * v11);
    v15 = ((unsigned __int64)*v14 >> 12) & 0xFFFFFFFFFFLL;
    if ( 48 * v15 - 0x220000000000LL != v10 )
      KeBugCheckEx(
        0x4Eu,
        6uLL,
        0xAAAAAAAAAAAAAAABuLL * ((v10 + 0x220000000000LL) >> 4),
        (ULONG_PTR)v14,
        *(_QWORD *)(v12 + 8 * v11));
    v8 = qword_140E2DCC0;
    a3 = v15 << 7;
    v16 = 32 * (a3 | v25 & 0x1F | 0x40);
    if ( qword_140E2DCC0 )
    {
      if ( (v16 & qword_140E2DCC0) != 0 )
        v16 |= 0x10uLL;
      else
        v16 |= qword_140E2DCC0;
    }
    *v14 = v16;
    *(_QWORD *)KeGetCurrentPrcb()->MmInternal = 0LL;
    *(_QWORD *)(((v13 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) = CLFS_LSN_NULL_EXT;
  }
  LOWORD(v24) = v24 - 1;
  if ( (_WORD)v24 )
  {
    if ( (*(_QWORD *)(v3 + 24) & 0x4000000000000000LL) != 0 )
    {
      BYTE2(v24) |= 7u;
    }
    else
    {
      if ( (v24 & 0x100000) != 0 )
      {
        v23 = BYTE2(v24) & 0xF8 | 3;
      }
      else if ( (v24 & 0x80000) != 0 )
      {
        v23 = BYTE2(v24) & 0xF8 | 3;
      }
      else
      {
        v23 = BYTE2(v24) & 0xF8 | 2;
      }
      BYTE2(v24) = v23;
    }
    *(_DWORD *)(v3 + 32) = v24;
    if ( (*(_DWORD *)(v3 + 16) & 0x400LL) == 0 && (unsigned int)MiGetPagingFileOffset(*(_QWORD *)(v3 + 16)) )
      *(_BYTE *)(*((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(v3 + 40) >> 43) & 0x3FFLL)) + 723LL) = 1;
    v17 = 3;
  }
  else
  {
    if ( (*(_QWORD *)(v3 + 24) & 0x4000000000000000LL) == 0 )
    {
      v20 = MI_READ_PTE_LOCK_FREE(v3 + 16, v8, a3);
      v21 = -9LL;
      if ( (v20 & 0x400) != 0 )
        v21 = -2049LL;
      *(_QWORD *)(v3 + 16) = v20 & v21;
      if ( (v24 & 0x100000) != 0 )
      {
        v22 = 8LL;
        *(_DWORD *)(v3 + 32) = v24;
      }
      else
      {
        BYTE2(v24) = BYTE2(v24) & 0xF8 | 2;
        *(_DWORD *)(v3 + 32) = v24;
        if ( v4 && (unsigned int)MiGetPfnPriority(v3) < 5 )
        {
          MiInsertProtectedStandbyPage(v4, v3);
          v17 = 4;
          goto LABEL_19;
        }
        v22 = 4LL;
      }
      MiInsertPageInList(v3, v22);
      v17 = 4;
      goto LABEL_19;
    }
    if ( (v24 & 0x10000000) != 0 )
      HIBYTE(v24) &= ~0x10u;
    *(_DWORD *)(v3 + 32) = v24;
    v26 = *(_QWORD *)(v3 + 16);
    if ( (v26 & 0x400) == 0 && ((v26 & 4) != 0 || (v26 & 2) != 0) && v26 )
      MiReleasePageFileInfo(*((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(v3 + 40) >> 43) & 0x3FFLL)), v26, 1LL);
    MiInsertPageInFreeOrZeroedList(0xAAAAAAAAAAAAAAABuLL * ((v3 + 0x220000000000LL) >> 4));
    v17 = 4;
  }
LABEL_19:
  if ( (*(_DWORD *)(a1 + 156) & 0x20) != 0 )
  {
    v18 = a2 << 25 >> 16;
    if ( v18 >= 0xFFFFF68000000000uLL && v18 <= 0xFFFFF6FFFFFFFFFFuLL )
      v9 = 1;
    if ( v17 == 2 )
    {
      if ( v9 )
        *(_QWORD *)v3 &= ~1uLL;
    }
    else if ( v17 == 3 )
    {
      if ( !*(_DWORD *)(a1 + 128)
        && v9
        && !*(_DWORD *)(a1 + 40)
        && (unsigned __int64)MiGetLeafVa(v18) <= 0x7FFFFFFEFFFFLL )
      {
        *(_DWORD *)(a1 + 128) = 1;
      }
      if ( *(__int64 *)(v3 + 40) < 0 )
        return 4;
    }
  }
  return v17;
}
