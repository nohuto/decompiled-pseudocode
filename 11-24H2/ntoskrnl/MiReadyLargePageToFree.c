/*
 * XREFs of MiReadyLargePageToFree @ 0x14021B69C
 * Callers:
 *     MiFreeLargePageMemory @ 0x14021B56C (MiFreeLargePageMemory.c)
 * Callees:
 *     MiBadRefCount @ 0x14029D568 (MiBadRefCount.c)
 *     MiLockPageInline @ 0x1402A1150 (MiLockPageInline.c)
 *     MiUnlockPage @ 0x1402A11F0 (MiUnlockPage.c)
 *     MiLargePageHasNoDanglingReferences @ 0x140476464 (MiLargePageHasNoDanglingReferences.c)
 *     MiPrepareLargePageSubPageForFree @ 0x140693DB0 (MiPrepareLargePageSubPageForFree.c)
 */

__int64 __fastcall MiReadyLargePageToFree(unsigned __int64 a1, int a2, char a3)
{
  unsigned __int64 v4; // r14
  __int64 v5; // r15
  unsigned __int64 *v6; // rsi
  unsigned int v7; // ebp
  unsigned __int64 *v9; // rbx
  __int64 v10; // rdi
  char v11; // al
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // r12
  char v14; // al
  __int64 v15; // rbx
  unsigned __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // r8

  v4 = a1;
  v5 = MiPageSizes[a2];
  v6 = (unsigned __int64 *)(48 * a1 - 0x220000000000LL);
  v7 = 0;
  if ( (unsigned int)MiLargePageHasNoDanglingReferences(v6) )
    return 1LL;
  v9 = v6;
  v10 = 0LL;
  v11 = MiLockPageInline(v6);
  v12 = 0xFFFFFF0000000000uLL;
  LOBYTE(v12) = v11;
  *v6 = v5 ^ (*v6 ^ v5) & 0xFFFFFF0000000000uLL;
  MiUnlockPage(v6, v12);
  v13 = v5 + v4;
  while ( v4 < v13 )
  {
    if ( (unsigned int)MiPrepareLargePageSubPageForFree(v9) )
    {
      ++v10;
    }
    else if ( (a3 & 4) != 0 )
    {
      MiBadRefCount(v9, v17, v18);
    }
    v9 += 6;
    ++v4;
  }
  if ( !v10 )
    return 0LL;
  if ( v10 == v5 )
    return 1LL;
  v14 = MiLockPageInline(v6);
  v15 = (*v6 & 0xFFFFFFFFFFLL) - v10;
  v16 = v15 ^ (v15 ^ *v6) & 0xFFFFFF0000000000uLL;
  *v6 = v16;
  LOBYTE(v16) = v14;
  MiUnlockPage(v6, v16);
  LOBYTE(v7) = v15 == 0;
  return v7;
}
