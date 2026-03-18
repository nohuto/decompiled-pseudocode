/*
 * XREFs of BgpFwLibraryDisable @ 0x140BA1724
 * Callers:
 *     BgLibraryDisable @ 0x140BA0724 (BgLibraryDisable.c)
 *     BgpFwLibraryDestroy @ 0x140BA1678 (BgpFwLibraryDestroy.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x140468C70 (BgpFwFreeMemory.c)
 *     AnFwDisplayBackgroundUpdate @ 0x140BA1E44 (AnFwDisplayBackgroundUpdate.c)
 *     AnFwDisplayProgressIndicator @ 0x140BA1FD0 (AnFwDisplayProgressIndicator.c)
 *     BgpFoDestroy @ 0x140BA273C (BgpFoDestroy.c)
 *     BgpTxtDestroyRegion @ 0x140BA2B5C (BgpTxtDestroyRegion.c)
 *     AnFwFadeCompletion @ 0x140BA358C (AnFwFadeCompletion.c)
 *     LogFwReport @ 0x140BA43FC (LogFwReport.c)
 *     ResFwBackgroundTransition @ 0x140BA5D28 (ResFwBackgroundTransition.c)
 */

__int64 BgpFwLibraryDisable()
{
  __int64 result; // rax

  result = (unsigned int)dword_140EEFD90;
  if ( (dword_140EEFD90 & 2) != 0 )
  {
    AnFwDisplayBackgroundUpdate(0LL);
    AnFwFadeCompletion();
    if ( qword_140EEFE58 )
    {
      BgpTxtDestroyRegion(qword_140EEFE58);
      if ( BgpTextRegionSave == qword_140EEFE58 )
        BgpTextRegionSave = 0LL;
      qword_140EEFE58 = 0LL;
    }
    AnFwDisplayProgressIndicator(0LL);
    if ( qword_140EEFE50 )
    {
      BgpTxtDestroyRegion(qword_140EEFE50);
      if ( BgpAnimationRegionSave == qword_140EEFE50 )
        BgpAnimationRegionSave = 0LL;
      qword_140EEFE50 = 0LL;
    }
    if ( qword_140EEFE38 )
    {
      BgpFoDestroy(qword_140EEFE38);
      if ( *(_QWORD *)qword_140EEFE38 )
      {
        if ( (*(_DWORD *)(qword_140EEFE38 + 12) & 1) == 0 )
          BgpFwFreeMemory(*(_QWORD *)qword_140EEFE38);
      }
      BgpFwFreeMemory(qword_140EEFE38);
      qword_140EEFE38 = 0LL;
    }
    LogFwReport();
    ResFwBackgroundTransition(1LL);
    result = 0LL;
    dword_140EEFD90 &= ~2u;
    BgInternal = 0LL;
    qword_140EEFD40 = 0LL;
    xmmword_140EEFD30 = 0LL;
  }
  return result;
}
