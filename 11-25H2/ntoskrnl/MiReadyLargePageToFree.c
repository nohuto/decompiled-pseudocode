/*
 * XREFs of MiReadyLargePageToFree @ 0x14038D6BC
 * Callers:
 *     MiFreeLargePageMemory @ 0x14038C050 (MiFreeLargePageMemory.c)
 * Callees:
 *     MiBadRefCount @ 0x1402360FC (MiBadRefCount.c)
 *     MiUnlockPage @ 0x14032B850 (MiUnlockPage.c)
 *     MiLockPageInline @ 0x14032B8A0 (MiLockPageInline.c)
 *     MiLargePageHasNoDanglingReferences @ 0x14047A7C4 (MiLargePageHasNoDanglingReferences.c)
 *     MiPrepareLargePageSubPageForFree @ 0x140687880 (MiPrepareLargePageSubPageForFree.c)
 */

__int64 __fastcall MiReadyLargePageToFree(unsigned __int64 a1, int a2, char a3)
{
  unsigned __int64 v4; // r14
  __int64 v5; // r15
  unsigned __int64 *v6; // rsi
  unsigned int v7; // ebp
  __int64 v9; // rbx
  __int64 v10; // rdi
  unsigned __int8 v11; // al
  unsigned __int64 v12; // r12
  unsigned __int8 v13; // al
  __int64 v14; // rbx

  v4 = a1;
  v5 = MiPageSizes[a2];
  v6 = (unsigned __int64 *)(48 * a1 - 0x220000000000LL);
  v7 = 0;
  if ( (unsigned int)MiLargePageHasNoDanglingReferences(v6) )
    return 1LL;
  v9 = (__int64)v6;
  v10 = 0LL;
  v11 = MiLockPageInline((__int64)v6);
  *v6 = v5 ^ (*v6 ^ v5) & 0xFFFFFF0000000000uLL;
  MiUnlockPage((__int64)v6, v11);
  v12 = v5 + v4;
  while ( v4 < v12 )
  {
    if ( (unsigned int)MiPrepareLargePageSubPageForFree(v9) )
    {
      ++v10;
    }
    else if ( (a3 & 4) != 0 )
    {
      MiBadRefCount(v9);
    }
    v9 += 48LL;
    ++v4;
  }
  if ( !v10 )
    return 0LL;
  if ( v10 == v5 )
    return 1LL;
  v13 = MiLockPageInline((__int64)v6);
  v14 = (*v6 & 0xFFFFFFFFFFLL) - v10;
  *v6 = v14 ^ (v14 ^ *v6) & 0xFFFFFF0000000000uLL;
  MiUnlockPage((__int64)v6, v13);
  LOBYTE(v7) = v14 == 0;
  return v7;
}
