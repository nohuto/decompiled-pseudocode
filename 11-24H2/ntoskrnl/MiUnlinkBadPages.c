/*
 * XREFs of MiUnlinkBadPages @ 0x1406759CC
 * Callers:
 *     MmMarkPhysicalMemoryAsGood @ 0x1406762D0 (MmMarkPhysicalMemoryAsGood.c)
 * Callees:
 *     MiInsertPageInFreeOrZeroedList @ 0x14024EF60 (MiInsertPageInFreeOrZeroedList.c)
 *     MiUnlockPage @ 0x1402A11F0 (MiUnlockPage.c)
 *     MiIsPageOnBadList @ 0x14030E80C (MiIsPageOnBadList.c)
 *     MiSafeLockPage @ 0x140334630 (MiSafeLockPage.c)
 *     MiReleaseNonPagedResources @ 0x1403358DC (MiReleaseNonPagedResources.c)
 *     MiIsPageInHugePfn @ 0x14038ED20 (MiIsPageInHugePfn.c)
 *     MiUnlinkPageFromBadList @ 0x1403F6AAC (MiUnlinkPageFromBadList.c)
 *     MiMarkHugePfnGood @ 0x140672544 (MiMarkHugePfnGood.c)
 *     MiSetPfnRemovalRequested @ 0x1406757A0 (MiSetPfnRemovalRequested.c)
 *     MiMarkFileOnlyPfnGood @ 0x14067C81C (MiMarkFileOnlyPfnGood.c)
 */

__int64 __fastcall MiUnlinkBadPages(ULONG_PTR BugCheckParameter2, ULONG_PTR a2)
{
  ULONG_PTR v3; // rdi
  __int64 v4; // rsi
  ULONG_PTR i; // rbx
  int v6; // eax
  ULONG_PTR v7; // rcx
  ULONG_PTR v8; // rcx
  __int64 v9; // rcx
  char v10; // bp
  __int64 v11; // r15
  int v13; // [rsp+50h] [rbp+8h]
  int v14; // [rsp+50h] [rbp+8h]

  v3 = BugCheckParameter2;
  v4 = 0LL;
  for ( i = 48 * BugCheckParameter2 - 0x220000000000LL; v3 < a2; i += 48LL )
  {
    if ( (unsigned int)MiIsPageInHugePfn(v3) )
    {
      v6 = MiMarkHugePfnGood(v3);
      v7 = i - 48;
      if ( v6 >= 0 )
        v7 = i;
      i = v7;
      v8 = v3 - 1;
      if ( v6 >= 0 )
        v8 = v3;
      v3 = v8;
      v9 = v4 + 1;
      if ( v6 != 274 )
        v9 = v4;
      v4 = v9;
    }
    else
    {
      v10 = MiSafeLockPage(v3);
      if ( v10 != 17 )
      {
        v11 = *((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(i + 40) >> 43) & 0x3FFLL));
        if ( (*(_DWORD *)(i + 32) & 0x40000000) != 0 )
        {
          MiSetPfnRemovalRequested(i, 0, 1, 0LL);
          ++v4;
          v13 = *(_DWORD *)(i + 32);
          HIBYTE(v13) &= ~0x80u;
          *(_DWORD *)(i + 32) = v13;
          if ( _bittest64((const signed __int64 *)(i + 40), 0x35u) )
            MiMarkFileOnlyPfnGood(i);
          else
            MiReleaseNonPagedResources(v11, 1uLL);
        }
        else if ( MiIsPageOnBadList(i) )
        {
          v14 = *(_DWORD *)(i + 32);
          HIBYTE(v14) &= ~0x80u;
          *(_DWORD *)(i + 32) = v14;
          MiUnlinkPageFromBadList(i, 0);
          *(_QWORD *)(i + 24) |= 0x4000000000000000uLL;
          MiInsertPageInFreeOrZeroedList(v3, 2LL);
          MiReleaseNonPagedResources(v11, 1uLL);
          ++v4;
        }
        MiUnlockPage(i, v10);
      }
    }
    ++v3;
  }
  return v4;
}
