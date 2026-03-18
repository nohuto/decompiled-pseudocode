/*
 * XREFs of MiUnlinkBadPages @ 0x1406747FC
 * Callers:
 *     MmMarkPhysicalMemoryAsGood @ 0x140675100 (MmMarkPhysicalMemoryAsGood.c)
 * Callees:
 *     MiReleaseNonPagedResources @ 0x14020C57C (MiReleaseNonPagedResources.c)
 *     MiSafeLockPage @ 0x140216290 (MiSafeLockPage.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x140222210 (MiInsertPageInFreeOrZeroedList.c)
 *     MiUnlockPage @ 0x1402915F0 (MiUnlockPage.c)
 *     MiIsPageOnBadList @ 0x14030492C (MiIsPageOnBadList.c)
 *     MiUnlinkPageFromBadList @ 0x14039398C (MiUnlinkPageFromBadList.c)
 *     MiIsPageInHugePfn @ 0x1403CEEA0 (MiIsPageInHugePfn.c)
 *     MiMarkHugePfnGood @ 0x140671374 (MiMarkHugePfnGood.c)
 *     MiSetPfnRemovalRequested @ 0x1406745D0 (MiSetPfnRemovalRequested.c)
 *     MiMarkFileOnlyPfnGood @ 0x14067B63C (MiMarkFileOnlyPfnGood.c)
 */

__int64 __fastcall MiUnlinkBadPages(ULONG_PTR BugCheckParameter2, ULONG_PTR a2)
{
  ULONG_PTR v3; // rdi
  __int64 v4; // rsi
  ULONG_PTR i; // rbx
  __int64 v6; // rdx
  __int64 v7; // r8
  int v8; // eax
  ULONG_PTR v9; // rcx
  ULONG_PTR v10; // rcx
  __int64 v11; // rcx
  char v12; // bp
  __int64 v13; // r15
  int v15; // [rsp+50h] [rbp+8h]
  int v16; // [rsp+50h] [rbp+8h]

  v3 = BugCheckParameter2;
  v4 = 0LL;
  for ( i = 48 * BugCheckParameter2 - 0x220000000000LL; v3 < a2; i += 48LL )
  {
    if ( (unsigned int)MiIsPageInHugePfn(v3) )
    {
      v8 = MiMarkHugePfnGood(v3);
      v9 = i - 48;
      if ( v8 >= 0 )
        v9 = i;
      i = v9;
      v10 = v3 - 1;
      if ( v8 >= 0 )
        v10 = v3;
      v3 = v10;
      v11 = v4 + 1;
      if ( v8 != 274 )
        v11 = v4;
      v4 = v11;
    }
    else
    {
      v12 = MiSafeLockPage(v3, v6, v7);
      if ( v12 != 17 )
      {
        v13 = *((_QWORD *)qword_140E2FF88 + ((*(_QWORD *)(i + 40) >> 43) & 0x3FFLL));
        if ( (*(_DWORD *)(i + 32) & 0x40000000) != 0 )
        {
          MiSetPfnRemovalRequested(i, 0, 1, 0LL);
          ++v4;
          v15 = *(_DWORD *)(i + 32);
          HIBYTE(v15) &= ~0x80u;
          *(_DWORD *)(i + 32) = v15;
          if ( _bittest64((const signed __int64 *)(i + 40), 0x35u) )
            MiMarkFileOnlyPfnGood(i);
          else
            MiReleaseNonPagedResources(v13, 1uLL);
        }
        else if ( MiIsPageOnBadList(i) )
        {
          v16 = *(_DWORD *)(i + 32);
          HIBYTE(v16) &= ~0x80u;
          *(_DWORD *)(i + 32) = v16;
          MiUnlinkPageFromBadList(i, 0);
          *(_QWORD *)(i + 24) |= 0x4000000000000000uLL;
          MiInsertPageInFreeOrZeroedList(v3, 2LL);
          MiReleaseNonPagedResources(v13, 1uLL);
          ++v4;
        }
        MiUnlockPage(i, v12);
      }
    }
    ++v3;
  }
  return v4;
}
