/*
 * XREFs of MiPrepareLargePageSubPageForFree @ 0x140687880
 * Callers:
 *     MiReadyLargePageToFree @ 0x14038D6BC (MiReadyLargePageToFree.c)
 * Callees:
 *     MiSetPfnIdentity @ 0x1402293B0 (MiSetPfnIdentity.c)
 *     MiClearPfnImageVerified @ 0x1402CC5F0 (MiClearPfnImageVerified.c)
 *     MiUnlockPage @ 0x14032B850 (MiUnlockPage.c)
 *     MiLockPageInline @ 0x14032B8A0 (MiLockPageInline.c)
 */

__int64 __fastcall MiPrepareLargePageSubPageForFree(ULONG_PTR a1)
{
  unsigned __int8 v2; // al
  unsigned __int8 v4; // bl
  unsigned __int8 v5; // bl

  if ( (unsigned __int16)*(_DWORD *)(a1 + 32) != 2 )
  {
    v2 = MiLockPageInline(a1);
    if ( (unsigned __int16)*(_DWORD *)(a1 + 32) != 2 )
    {
      *(_QWORD *)(a1 + 24) |= 0x4000000000000000uLL;
      MiUnlockPage(a1, v2);
      return 0LL;
    }
    MiUnlockPage(a1, v2);
  }
  if ( ((*(_QWORD *)(a1 + 40) >> 60) & 7) == 3 )
  {
    v4 = MiLockPageInline(a1);
    MiClearPfnImageVerified(a1, 12);
    MiUnlockPage(a1, v4);
  }
  if ( ((*(_QWORD *)(a1 + 40) >> 60) & 7) == 1 )
  {
    v5 = MiLockPageInline(a1);
    MiSetPfnIdentity(a1, 0);
    MiUnlockPage(a1, v5);
  }
  return 1LL;
}
