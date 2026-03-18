/*
 * XREFs of MiFreeLargeZeroPages @ 0x1403A67F0
 * Callers:
 *     MiCommitExistingVad @ 0x140213020 (MiCommitExistingVad.c)
 *     MiCreateLargePfnList @ 0x14036E934 (MiCreateLargePfnList.c)
 *     MiCleanupPageTablePages @ 0x1403A679C (MiCleanupPageTablePages.c)
 *     MiAllocateFastLargePagesForMdl @ 0x1403A7798 (MiAllocateFastLargePagesForMdl.c)
 *     MiPfnRangeIsZero @ 0x14066E2AC (MiPfnRangeIsZero.c)
 *     MiAllocateLargeProcessPagesFromCache @ 0x14069197C (MiAllocateLargeProcessPagesFromCache.c)
 *     MiFreeCacheSlice @ 0x1406926A8 (MiFreeCacheSlice.c)
 *     MiAllocateFastAwePages @ 0x1407F833C (MiAllocateFastAwePages.c)
 *     MiCreatePagingFileMap @ 0x140942908 (MiCreatePagingFileMap.c)
 * Callees:
 *     MiReleaseFreshPage @ 0x140221FC0 (MiReleaseFreshPage.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x140222210 (MiInsertPageInFreeOrZeroedList.c)
 *     MiLockPageInline @ 0x140291550 (MiLockPageInline.c)
 *     MiUnlockPage @ 0x1402915F0 (MiUnlockPage.c)
 *     MiSetPfnModified @ 0x1402E4730 (MiSetPfnModified.c)
 *     MiUpdateLargePageBitMap @ 0x1403A29EC (MiUpdateLargePageBitMap.c)
 *     KeYieldProcessorEx @ 0x1403F9C60 (KeYieldProcessorEx.c)
 *     MiConvertBaseLargePage @ 0x140459758 (MiConvertBaseLargePage.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     MiInsertPossiblyBadPage @ 0x140683470 (MiInsertPossiblyBadPage.c)
 */

__int64 __fastcall MiFreeLargeZeroPages(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // r9
  __int64 v4; // r10
  unsigned __int8 v5; // si
  char v6; // r13
  __int64 v7; // r8
  __int64 v8; // rdi
  BOOL v9; // r15d
  __int64 v10; // rbp
  __int64 *v11; // rcx
  __int64 v12; // rbx
  __int64 v14; // rax
  unsigned __int64 v15; // r12
  ULONG_PTR v16; // rcx
  __int64 v18; // [rsp+68h] [rbp+10h]
  int v19; // [rsp+70h] [rbp+18h] BYREF

  v18 = a2;
  v3 = a2;
  v4 = a1;
  v5 = 2;
  v6 = 6;
  if ( KeGetCurrentIrql() != 2 )
    v6 = 2;
  v7 = (unsigned int)-a3;
  v8 = 0LL;
  v9 = v7 != 0;
  v10 = 0LL;
  do
  {
    while ( 1 )
    {
      v11 = (__int64 *)(v3 + 24 * v10);
      v12 = *v11;
      if ( (__int64 *)*v11 == v11 )
        break;
      if ( *(__int64 **)(v12 + 8) != v11 || (v14 = *(_QWORD *)v12, *(_QWORD *)(*(_QWORD *)v12 + 8LL) != v12) )
        __fastfail(3u);
      *v11 = v14;
      *(_QWORD *)(v14 + 8) = v11;
      if ( (_DWORD)v10 == 3 )
      {
        MiReleaseFreshPage(v12, a2, v7);
        v3 = v18;
        ++v8;
        v4 = a1;
      }
      else
      {
        v15 = MiPageSizes[v10];
        MiUpdateLargePageBitMap(v4, 0xAAAAAAAAAAAAAAABuLL * ((v12 + 0x220000000000LL) >> 4), v15, v6);
        if ( (v6 & 4) != 0 )
        {
          v19 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v12 + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v19);
            while ( *(__int64 *)(v12 + 24) < 0 );
          }
        }
        else
        {
          v5 = MiLockPageInline(v12);
        }
        if ( (*(_BYTE *)(v12 + 34) & 0x10) != 0 )
          MiSetPfnModified(v12, 0);
        MiConvertBaseLargePage(v12, 0LL);
        v16 = 0xAAAAAAAAAAAAAAABuLL * ((v12 + 0x220000000000LL) >> 4);
        if ( (*(_QWORD *)(v12 + 40) & 0x20000000000LL) != 0 )
        {
          _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          MiInsertPossiblyBadPage(v16);
          if ( v5 < 2u )
          {
            if ( KiIrqlFlags )
            {
              LOBYTE(a2) = v5;
              KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), a2);
            }
            __writecr8(v5);
          }
        }
        else
        {
          MiInsertPageInFreeOrZeroedList(v16, (unsigned int)(v9 + 1));
          MiUnlockPage(v12, v5);
        }
        v3 = v18;
        v8 += v15;
        v4 = a1;
        v5 = 2;
      }
    }
    v10 = (unsigned int)(v10 + 1);
  }
  while ( (unsigned int)v10 < 4 );
  return v8;
}
