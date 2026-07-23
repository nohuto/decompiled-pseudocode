/*
 * XREFs of MiPrepareLargePageSubPageForFree @ 0x140693DB0
 * Callers:
 *     MiReadyLargePageToFree @ 0x14021B69C (MiReadyLargePageToFree.c)
 * Callees:
 *     MiSetPfnIdentity @ 0x140216B00 (MiSetPfnIdentity.c)
 *     MiLockPageInline @ 0x1402A1150 (MiLockPageInline.c)
 *     MiUnlockPage @ 0x1402A11F0 (MiUnlockPage.c)
 *     MiClearPfnImageVerified @ 0x1402EAB40 (MiClearPfnImageVerified.c)
 */

__int64 __fastcall MiPrepareLargePageSubPageForFree(ULONG_PTR a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int8 v5; // al
  unsigned __int8 v7; // bl
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned __int8 v10; // bl

  if ( (unsigned __int16)*(_DWORD *)(a1 + 32) != 2 )
  {
    v5 = MiLockPageInline(a1, a2, a3, a4);
    if ( (unsigned __int16)*(_DWORD *)(a1 + 32) != 2 )
    {
      *(_QWORD *)(a1 + 24) |= 0x4000000000000000uLL;
      MiUnlockPage(a1, v5);
      return 0LL;
    }
    MiUnlockPage(a1, v5);
  }
  if ( ((*(_QWORD *)(a1 + 40) >> 60) & 7) == 3 )
  {
    v7 = MiLockPageInline(a1, a2, a3, a4);
    MiClearPfnImageVerified(a1, 12LL, v8, v9);
    MiUnlockPage(a1, v7);
  }
  if ( ((*(_QWORD *)(a1 + 40) >> 60) & 7) == 1 )
  {
    v10 = MiLockPageInline(a1, a2, a3, a4);
    MiSetPfnIdentity(a1, 0);
    MiUnlockPage(a1, v10);
  }
  return 1LL;
}
