/*
 * XREFs of BgpFwLibraryDisable @ 0x140BB3724
 * Callers:
 *     BgLibraryDisable @ 0x140BB2724 (BgLibraryDisable.c)
 *     BgpFwLibraryDestroy @ 0x140BB3678 (BgpFwLibraryDestroy.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x14045EC7C (BgpFwFreeMemory.c)
 *     AnFwDisplayBackgroundUpdate @ 0x140BB3E44 (AnFwDisplayBackgroundUpdate.c)
 *     AnFwDisplayProgressIndicator @ 0x140BB3FD0 (AnFwDisplayProgressIndicator.c)
 *     BgpFoDestroy @ 0x140BB473C (BgpFoDestroy.c)
 *     BgpTxtDestroyRegion @ 0x140BB4B5C (BgpTxtDestroyRegion.c)
 *     AnFwFadeCompletion @ 0x140BB558C (AnFwFadeCompletion.c)
 *     LogFwReport @ 0x140BB63FC (LogFwReport.c)
 *     ResFwBackgroundTransition @ 0x140BB7D28 (ResFwBackgroundTransition.c)
 */

__int64 BgpFwLibraryDisable()
{
  __int64 result; // rax

  result = (unsigned int)dword_140EF0270;
  if ( (dword_140EF0270 & 2) != 0 )
  {
    AnFwDisplayBackgroundUpdate(0LL);
    AnFwFadeCompletion();
    if ( qword_140EF0338 )
    {
      BgpTxtDestroyRegion(qword_140EF0338);
      if ( BgpTextRegionSave == qword_140EF0338 )
        BgpTextRegionSave = 0LL;
      qword_140EF0338 = 0LL;
    }
    AnFwDisplayProgressIndicator(0LL);
    if ( qword_140EF0330 )
    {
      BgpTxtDestroyRegion(qword_140EF0330);
      if ( BgpAnimationRegionSave == qword_140EF0330 )
        BgpAnimationRegionSave = 0LL;
      qword_140EF0330 = 0LL;
    }
    if ( qword_140EF0318 )
    {
      BgpFoDestroy(qword_140EF0318);
      if ( *(_QWORD *)qword_140EF0318 )
      {
        if ( (*(_DWORD *)(qword_140EF0318 + 12) & 1) == 0 )
          BgpFwFreeMemory(*(_QWORD *)qword_140EF0318);
      }
      BgpFwFreeMemory(qword_140EF0318);
      qword_140EF0318 = 0LL;
    }
    LogFwReport();
    ResFwBackgroundTransition(1LL);
    result = 0LL;
    dword_140EF0270 &= ~2u;
    BgInternal = 0LL;
    qword_140EF0220 = 0LL;
    xmmword_140EF0210 = 0LL;
  }
  return result;
}
