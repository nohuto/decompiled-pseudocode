/*
 * XREFs of AnFwDisplayProgressIndicator @ 0x140BB3FD0
 * Callers:
 *     BgDisplayProgressIndicator @ 0x140BB2628 (BgDisplayProgressIndicator.c)
 *     BgpFwLibraryDisable @ 0x140BB3724 (BgpFwLibraryDisable.c)
 * Callees:
 *     KeSetCoalescableTimer @ 0x1402BE6B0 (KeSetCoalescableTimer.c)
 *     KeInitializeTimer @ 0x14044A0E0 (KeInitializeTimer.c)
 *     KeInitializeDpc @ 0x14044A220 (KeInitializeDpc.c)
 *     BgpTxtDisplayCharacter @ 0x14046ECF8 (BgpTxtDisplayCharacter.c)
 *     AnFwpProgressAnimationManual @ 0x140BB427C (AnFwpProgressAnimationManual.c)
 *     AnFwpDisableProgressTimer @ 0x140BB5CB4 (AnFwpDisableProgressTimer.c)
 *     BgpTxtCacheDestroy @ 0x140BB6354 (BgpTxtCacheDestroy.c)
 *     LogFwStat @ 0x140BB6790 (LogFwStat.c)
 */

__int64 __fastcall AnFwDisplayProgressIndicator(char a1, __int64 a2)
{
  bool v2; // al
  unsigned __int16 i; // ax
  __int64 v5; // rdx

  LOBYTE(a2) = byte_140EEFD21;
  if ( !a1 && !byte_140EEFD21 )
    return 0LL;
  v2 = 0;
  if ( (dword_140EF0270 & 0x100000) != 0 )
    v2 = (dword_140EF0270 & 0x1000) != 0;
  if ( !a1 )
  {
    if ( (dword_140EF0270 & 0xC00) != 0xC00 && !v2 )
      AnFwpDisableProgressTimer();
    word_140E0EEEC = -7989;
    BgpTxtDisplayCharacter(qword_140EF0330, 57547LL, 0, 0LL, 0LL);
    BgpTxtCacheDestroy();
    return 0LL;
  }
  if ( byte_140EEFD21 )
  {
    if ( !v2 )
      return 3221225659LL;
  }
  else
  {
    if ( !qword_140EF0330 )
      return 3221225626LL;
    if ( (dword_140EF0270 & 0x40000) != 0 )
      return 3221225473LL;
    byte_140EEFD21 = 1;
    if ( !v2 )
    {
      word_140E0EEEC = word_140E0EF8C;
      LogFwStat(1LL, 2LL);
      for ( i = word_140E0EEEC; i <= (unsigned __int16)word_140E0EF88; i = ++word_140E0EEEC )
        BgpTxtDisplayCharacter(qword_140EF0330, i, 1, 0LL, 0LL);
      v5 = 57718LL;
      if ( dword_140EF03FC != 1 )
        v5 = 57547LL;
      word_140E0EEEC = v5;
      BgpTxtDisplayCharacter(qword_140EF0330, v5, 0, 0LL, 0LL);
      qword_140EEFD18 = LogFwStat(0LL, 2LL);
      KeInitializeTimer(&stru_140E65080);
      KeInitializeDpc(&stru_140E64FC0, AnFwpProgressIndicatorTimer, 0LL);
      KeSetCoalescableTimer(&stru_140E65080, 0LL, 0x1Eu, 0, &stru_140E64FC0);
      return 0LL;
    }
    qword_140EEFD18 = 0LL;
    word_140E0EEEC = word_140E0EF8C - 1;
  }
  AnFwpProgressAnimationManual((unsigned int)dword_140EF0270, a2);
  return 0LL;
}
