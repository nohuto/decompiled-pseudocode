/*
 * XREFs of AnFwDisplayProgressIndicator @ 0x140BB1FD0
 * Callers:
 *     BgDisplayProgressIndicator @ 0x140BB0628 (BgDisplayProgressIndicator.c)
 *     BgpFwLibraryDisable @ 0x140BB1724 (BgpFwLibraryDisable.c)
 * Callees:
 *     KeSetCoalescableTimer @ 0x140334000 (KeSetCoalescableTimer.c)
 *     KeInitializeTimer @ 0x140455420 (KeInitializeTimer.c)
 *     KeInitializeDpc @ 0x140455470 (KeInitializeDpc.c)
 *     BgpTxtDisplayCharacter @ 0x140472A28 (BgpTxtDisplayCharacter.c)
 *     AnFwpProgressAnimationManual @ 0x140BB227C (AnFwpProgressAnimationManual.c)
 *     AnFwpDisableProgressTimer @ 0x140BB3CB4 (AnFwpDisableProgressTimer.c)
 *     BgpTxtCacheDestroy @ 0x140BB4354 (BgpTxtCacheDestroy.c)
 *     LogFwStat @ 0x140BB4790 (LogFwStat.c)
 */

__int64 __fastcall AnFwDisplayProgressIndicator(char a1, __int64 a2)
{
  bool v2; // al
  unsigned __int16 i; // ax
  __int64 v5; // rdx

  LOBYTE(a2) = byte_140EEFAC8;
  if ( !a1 && !byte_140EEFAC8 )
    return 0LL;
  v2 = 0;
  if ( (dword_140EF0050 & 0x100000) != 0 )
    v2 = (dword_140EF0050 & 0x1000) != 0;
  if ( !a1 )
  {
    if ( (dword_140EF0050 & 0xC00) != 0xC00 && !v2 )
      AnFwpDisableProgressTimer();
    word_140E0EE24 = -7989;
    BgpTxtDisplayCharacter(qword_140EF0110, 57547LL, 0, 0LL, 0LL);
    BgpTxtCacheDestroy();
    return 0LL;
  }
  if ( byte_140EEFAC8 )
  {
    if ( !v2 )
      return 3221225659LL;
  }
  else
  {
    if ( !qword_140EF0110 )
      return 3221225626LL;
    if ( (dword_140EF0050 & 0x40000) != 0 )
      return 3221225473LL;
    byte_140EEFAC8 = 1;
    if ( !v2 )
    {
      word_140E0EE24 = word_140E0EE1C;
      LogFwStat(1LL, 2LL);
      for ( i = word_140E0EE24; i <= (unsigned __int16)word_140E0EEC8; i = ++word_140E0EE24 )
        BgpTxtDisplayCharacter(qword_140EF0110, i, 1, 0LL, 0LL);
      v5 = 57718LL;
      if ( dword_140EF01DC != 1 )
        v5 = 57547LL;
      word_140E0EE24 = v5;
      BgpTxtDisplayCharacter(qword_140EF0110, v5, 0, 0LL, 0LL);
      qword_140EEFAD0 = LogFwStat(0LL, 2LL);
      KeInitializeTimer(&stru_140E64F00);
      KeInitializeDpc(&stru_140E64E40, AnFwpProgressIndicatorTimer, 0LL);
      KeSetCoalescableTimer(&stru_140E64F00, 0LL, 0x1Eu, 0, &stru_140E64E40);
      return 0LL;
    }
    qword_140EEFAD0 = 0LL;
    word_140E0EE24 = word_140E0EE1C - 1;
  }
  AnFwpProgressAnimationManual((unsigned int)dword_140EF0050, a2);
  return 0LL;
}
