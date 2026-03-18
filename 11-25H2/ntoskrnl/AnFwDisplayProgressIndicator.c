/*
 * XREFs of AnFwDisplayProgressIndicator @ 0x140BA1FD0
 * Callers:
 *     BgDisplayProgressIndicator @ 0x140BA0628 (BgDisplayProgressIndicator.c)
 *     BgpFwLibraryDisable @ 0x140BA1724 (BgpFwLibraryDisable.c)
 * Callees:
 *     KeSetCoalescableTimer @ 0x1402ECF90 (KeSetCoalescableTimer.c)
 *     KeInitializeTimer @ 0x140454D20 (KeInitializeTimer.c)
 *     KeInitializeDpc @ 0x140454E30 (KeInitializeDpc.c)
 *     BgpTxtDisplayCharacter @ 0x140473A88 (BgpTxtDisplayCharacter.c)
 *     AnFwpProgressAnimationManual @ 0x140BA227C (AnFwpProgressAnimationManual.c)
 *     AnFwpDisableProgressTimer @ 0x140BA3CB4 (AnFwpDisableProgressTimer.c)
 *     BgpTxtCacheDestroy @ 0x140BA4354 (BgpTxtCacheDestroy.c)
 *     LogFwStat @ 0x140BA4790 (LogFwStat.c)
 */

__int64 __fastcall AnFwDisplayProgressIndicator(char a1, __int64 a2)
{
  bool v2; // al
  unsigned __int16 i; // ax
  __int64 v5; // rdx

  LOBYTE(a2) = byte_140EEF831;
  if ( !a1 && !byte_140EEF831 )
    return 0LL;
  v2 = 0;
  if ( (dword_140EEFD90 & 0x100000) != 0 )
    v2 = (dword_140EEFD90 & 0x1000) != 0;
  if ( !a1 )
  {
    if ( (dword_140EEFD90 & 0xC00) != 0xC00 && !v2 )
      AnFwpDisableProgressTimer();
    word_140E0ECB0 = -7989;
    BgpTxtDisplayCharacter(qword_140EEFE50, 57547LL, 0, 0LL, 0LL);
    BgpTxtCacheDestroy();
    return 0LL;
  }
  if ( byte_140EEF831 )
  {
    if ( !v2 )
      return 3221225659LL;
  }
  else
  {
    if ( !qword_140EEFE50 )
      return 3221225626LL;
    if ( (dword_140EEFD90 & 0x40000) != 0 )
      return 3221225473LL;
    byte_140EEF831 = 1;
    if ( !v2 )
    {
      word_140E0ECB0 = word_140E0ECA8;
      LogFwStat(1LL, 2LL);
      for ( i = word_140E0ECB0; i <= (unsigned __int16)word_140E0ECAC; i = ++word_140E0ECB0 )
        BgpTxtDisplayCharacter(qword_140EEFE50, i, 1, 0LL, 0LL);
      v5 = 57718LL;
      if ( dword_140EEFF1C != 1 )
        v5 = 57547LL;
      word_140E0ECB0 = v5;
      BgpTxtDisplayCharacter(qword_140EEFE50, v5, 0, 0LL, 0LL);
      qword_140EEF828 = LogFwStat(0LL, 2LL);
      KeInitializeTimer(&stru_140E64CC0);
      KeInitializeDpc(&stru_140E64C00, AnFwpProgressIndicatorTimer, 0LL);
      KeSetCoalescableTimer(&stru_140E64CC0, 0LL, 0x1Eu, 0, &stru_140E64C00);
      return 0LL;
    }
    qword_140EEF828 = 0LL;
    word_140E0ECB0 = word_140E0ECA8 - 1;
  }
  AnFwpProgressAnimationManual((unsigned int)dword_140EEFD90, a2);
  return 0LL;
}
