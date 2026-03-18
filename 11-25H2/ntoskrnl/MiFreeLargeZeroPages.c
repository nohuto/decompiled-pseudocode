/*
 * XREFs of MiFreeLargeZeroPages @ 0x14038FA8C
 * Callers:
 *     MiCommitExistingVad @ 0x1403840D0 (MiCommitExistingVad.c)
 *     MiCleanupPageTablePages @ 0x14038FA38 (MiCleanupPageTablePages.c)
 *     MiAllocateFastLargePagesForMdl @ 0x1403907B8 (MiAllocateFastLargePagesForMdl.c)
 *     MiCreateLargePfnList @ 0x140405A3C (MiCreateLargePfnList.c)
 *     MiPfnRangeIsZero @ 0x14066276C (MiPfnRangeIsZero.c)
 *     MiAllocateLargeProcessPagesFromCache @ 0x14068651C (MiAllocateLargeProcessPagesFromCache.c)
 *     MiFreeCacheSlice @ 0x140687248 (MiFreeCacheSlice.c)
 *     MiAllocateFastAwePages @ 0x1407E84AC (MiAllocateFastAwePages.c)
 *     MiCreatePagingFileMap @ 0x14093E008 (MiCreatePagingFileMap.c)
 * Callees:
 *     MiUnlockPage @ 0x14032B850 (MiUnlockPage.c)
 *     MiLockPageInline @ 0x14032B8A0 (MiLockPageInline.c)
 *     MiReleaseFreshPage @ 0x1403432C0 (MiReleaseFreshPage.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x140343510 (MiInsertPageInFreeOrZeroedList.c)
 *     MiSetPfnModified @ 0x1403871E0 (MiSetPfnModified.c)
 *     MiUpdateLargePageBitMap @ 0x14038D1D8 (MiUpdateLargePageBitMap.c)
 *     KeYieldProcessorEx @ 0x1403F49C0 (KeYieldProcessorEx.c)
 *     MiConvertBaseLargePage @ 0x140464978 (MiConvertBaseLargePage.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     MiInsertPossiblyBadPage @ 0x140677C6C (MiInsertPossiblyBadPage.c)
 */

__int64 __fastcall MiFreeLargeZeroPages(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // r9
  __int64 v4; // r10
  unsigned __int8 v5; // si
  char v6; // r13
  __int64 v7; // rdi
  __int16 v8; // r15
  __int64 v9; // rbp
  __int64 *v10; // rcx
  __int64 v11; // rbx
  __int64 v13; // rax
  unsigned __int64 v14; // r12
  __int64 v15; // r8
  __int64 v16; // r9
  ULONG_PTR v17; // rcx
  __int64 v18; // rdx
  int v21; // [rsp+70h] [rbp+18h] BYREF

  v3 = a2;
  v4 = a1;
  v5 = 2;
  v6 = 6;
  if ( KeGetCurrentIrql() != 2 )
    v6 = 2;
  v7 = 0LL;
  v8 = a3 != 0;
  v9 = 0LL;
  do
  {
    while ( 1 )
    {
      v10 = (__int64 *)(v3 + 24 * v9);
      v11 = *v10;
      if ( (__int64 *)*v10 == v10 )
        break;
      if ( *(__int64 **)(v11 + 8) != v10 || (v13 = *(_QWORD *)v11, *(_QWORD *)(*(_QWORD *)v11 + 8LL) != v11) )
        __fastfail(3u);
      *v10 = v13;
      *(_QWORD *)(v13 + 8) = v10;
      if ( (_DWORD)v9 == 3 )
      {
        MiReleaseFreshPage(v11);
        v3 = a2;
        ++v7;
        v4 = a1;
      }
      else
      {
        v14 = MiPageSizes[v9];
        MiUpdateLargePageBitMap(v4, 0xAAAAAAAAAAAAAAABuLL * ((v11 + 0x220000000000LL) >> 4), v14, v6);
        if ( (v6 & 4) != 0 )
        {
          v21 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v11 + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v21);
            while ( *(__int64 *)(v11 + 24) < 0 );
          }
        }
        else
        {
          v5 = MiLockPageInline(v11);
        }
        if ( (*(_BYTE *)(v11 + 34) & 0x10) != 0 )
          MiSetPfnModified(v11, 0);
        MiConvertBaseLargePage(v11, 0LL, v15, v16);
        v17 = 0xAAAAAAAAAAAAAAABuLL * ((v11 + 0x220000000000LL) >> 4);
        if ( (*(_QWORD *)(v11 + 40) & 0x20000000000LL) != 0 )
        {
          _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          MiInsertPossiblyBadPage(v17);
          if ( v5 < 2u )
          {
            if ( KiIrqlFlags )
            {
              LOBYTE(v18) = v5;
              KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v18);
            }
            __writecr8(v5);
          }
        }
        else
        {
          MiInsertPageInFreeOrZeroedList(v17, v8 + 1);
          MiUnlockPage(v11, v5);
        }
        v3 = a2;
        v7 += v14;
        v4 = a1;
        v5 = 2;
      }
    }
    v9 = (unsigned int)(v9 + 1);
  }
  while ( (unsigned int)v9 < 4 );
  return v7;
}
