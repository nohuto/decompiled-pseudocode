/*
 * XREFs of MiMapSystemCachePage @ 0x1404C9858
 * Callers:
 *     MmCopyToCachedPage @ 0x1402EDA94 (MmCopyToCachedPage.c)
 * Callees:
 *     MiSafeLockPage @ 0x140216290 (MiSafeLockPage.c)
 *     MiUnlockPage @ 0x1402915F0 (MiUnlockPage.c)
 *     MiSetPfnModified @ 0x1402E4730 (MiSetPfnModified.c)
 *     MiMapFrame @ 0x1402EBAD0 (MiMapFrame.c)
 *     MiAddLockedPageCharge @ 0x1402F6F40 (MiAddLockedPageCharge.c)
 */

__int64 __fastcall MiMapSystemCachePage(ULONG_PTR BugCheckParameter2, _QWORD *a2, __int64 a3)
{
  char v3; // bp
  ULONG_PTR v6; // rdi
  char v7; // al
  unsigned __int8 v8; // si
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9

  v3 = a3;
  while ( 1 )
  {
    if ( (*a2 & 1) == 0 )
      return 0LL;
    v6 = (*a2 >> 12) & 0xFFFFFFFFFFLL;
    v7 = MiSafeLockPage(v6, (__int64)a2, a3);
    v8 = v7;
    if ( v7 == 17 )
      return 0LL;
    if ( (*a2 & 1) == 0 )
      goto LABEL_12;
    v9 = 48 * v6 - 0x220000000000LL;
    if ( ((*a2 >> 12) & 0xFFFFFFFFFFLL) == v6 )
      break;
    MiUnlockPage(v9, v7);
  }
  if ( !(unsigned int)MiAddLockedPageCharge(v9, 0) )
  {
LABEL_12:
    MiUnlockPage(48 * v6 - 0x220000000000LL, v8);
    return 0LL;
  }
  if ( (v3 & 4) == 0 || !_bittest64((const signed __int64 *)(48 * v6 - 0x220000000000LL + 40), 0x35u) )
    MiSetPfnModified(48 * v6 - 0x220000000000LL, 1);
  MiUnlockPage(48 * v6 - 0x220000000000LL, v8);
  return MiMapFrame(BugCheckParameter2, v6, v10, v11);
}
