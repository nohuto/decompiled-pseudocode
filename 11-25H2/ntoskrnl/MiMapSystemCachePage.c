/*
 * XREFs of MiMapSystemCachePage @ 0x1404C945C
 * Callers:
 *     MmCopyToCachedPage @ 0x140223414 (MmCopyToCachedPage.c)
 * Callees:
 *     MiMapFrame @ 0x140223140 (MiMapFrame.c)
 *     MiAddLockedPageCharge @ 0x14022C890 (MiAddLockedPageCharge.c)
 *     MiSafeLockPage @ 0x140231E30 (MiSafeLockPage.c)
 *     MiUnlockPage @ 0x14032B850 (MiUnlockPage.c)
 *     MiSetPfnModified @ 0x1403871E0 (MiSetPfnModified.c)
 */

__int64 __fastcall MiMapSystemCachePage(ULONG_PTR a1, _QWORD *a2, __int64 a3)
{
  char v3; // bp
  unsigned __int64 v6; // rdi
  char v7; // al
  __int64 v8; // r8
  unsigned __int64 v9; // r9
  unsigned __int8 v10; // si
  __int64 v11; // rcx

  v3 = a3;
  while ( 1 )
  {
    if ( (*a2 & 1) == 0 )
      return 0LL;
    v6 = (*a2 >> 12) & 0xFFFFFFFFFFLL;
    v7 = MiSafeLockPage(v6, (__int64)a2, a3);
    v10 = v7;
    if ( v7 == 17 )
      return 0LL;
    if ( (*a2 & 1) == 0 )
      goto LABEL_12;
    v11 = 48 * v6 - 0x220000000000LL;
    if ( ((*a2 >> 12) & 0xFFFFFFFFFFLL) == v6 )
      break;
    MiUnlockPage(v11, v7);
  }
  if ( !(unsigned int)MiAddLockedPageCharge(v11, 0, v8, v9) )
  {
LABEL_12:
    MiUnlockPage(48 * v6 - 0x220000000000LL, v10);
    return 0LL;
  }
  if ( (v3 & 4) == 0 || !_bittest64((const signed __int64 *)(48 * v6 - 0x220000000000LL + 40), 0x35u) )
    MiSetPfnModified(48 * v6 - 0x220000000000LL, 1);
  MiUnlockPage(48 * v6 - 0x220000000000LL, v10);
  return MiMapFrame(a1, v6);
}
