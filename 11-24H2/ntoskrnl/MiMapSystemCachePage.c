/*
 * XREFs of MiMapSystemCachePage @ 0x1404C2D08
 * Callers:
 *     MmCopyToCachedPage @ 0x14034F0D4 (MmCopyToCachedPage.c)
 * Callees:
 *     MiSetPfnModified @ 0x140215EC0 (MiSetPfnModified.c)
 *     MiUnlockPage @ 0x1402A11F0 (MiUnlockPage.c)
 *     MiSafeLockPage @ 0x140334630 (MiSafeLockPage.c)
 *     MiAddLockedPageCharge @ 0x14033F050 (MiAddLockedPageCharge.c)
 *     MiMapFrame @ 0x14034D110 (MiMapFrame.c)
 */

__int64 __fastcall MiMapSystemCachePage(ULONG_PTR BugCheckParameter2, _QWORD *a2, char a3)
{
  ULONG_PTR v6; // rdi
  char v7; // al
  unsigned __int8 v8; // si
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9

  while ( 1 )
  {
    if ( (*a2 & 1) == 0 )
      return 0LL;
    v6 = (*a2 >> 12) & 0xFFFFFFFFFFLL;
    v7 = MiSafeLockPage(v6);
    v8 = v7;
    if ( v7 == 17 )
      return 0LL;
    if ( (*a2 & 1) == 0 )
      goto LABEL_11;
    v9 = 48 * v6 - 0x220000000000LL;
    if ( ((*a2 >> 12) & 0xFFFFFFFFFFLL) == v6 )
      break;
    MiUnlockPage(v9, v7);
  }
  if ( !(unsigned int)MiAddLockedPageCharge(v9, 0) )
  {
LABEL_11:
    MiUnlockPage(48 * v6 - 0x220000000000LL, v8);
    return 0LL;
  }
  if ( (a3 & 4) == 0 || !_bittest64((const signed __int64 *)(48 * v6 - 0x220000000000LL + 40), 0x35u) )
    MiSetPfnModified(48 * v6 - 0x220000000000LL, 1);
  MiUnlockPage(48 * v6 - 0x220000000000LL, v8);
  return MiMapFrame(BugCheckParameter2, v6, v10, v11);
}
