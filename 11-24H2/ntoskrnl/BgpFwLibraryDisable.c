/*
 * XREFs of BgpFwLibraryDisable @ 0x140BB1724
 * Callers:
 *     BgLibraryDisable @ 0x140BB0724 (BgLibraryDisable.c)
 *     BgpFwLibraryDestroy @ 0x140BB1678 (BgpFwLibraryDestroy.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x14037DE10 (BgpFwFreeMemory.c)
 *     AnFwDisplayBackgroundUpdate @ 0x140BB1E44 (AnFwDisplayBackgroundUpdate.c)
 *     AnFwDisplayProgressIndicator @ 0x140BB1FD0 (AnFwDisplayProgressIndicator.c)
 *     BgpFoDestroy @ 0x140BB273C (BgpFoDestroy.c)
 *     BgpTxtDestroyRegion @ 0x140BB2B5C (BgpTxtDestroyRegion.c)
 *     AnFwFadeCompletion @ 0x140BB358C (AnFwFadeCompletion.c)
 *     LogFwReport @ 0x140BB43FC (LogFwReport.c)
 *     ResFwBackgroundTransition @ 0x140BB5D28 (ResFwBackgroundTransition.c)
 */

__int64 BgpFwLibraryDisable()
{
  __int64 result; // rax

  result = (unsigned int)dword_140EF0050;
  if ( (dword_140EF0050 & 2) != 0 )
  {
    AnFwDisplayBackgroundUpdate(0LL);
    AnFwFadeCompletion();
    if ( qword_140EF0118 )
    {
      BgpTxtDestroyRegion(qword_140EF0118);
      if ( BgpTextRegionSave == qword_140EF0118 )
        BgpTextRegionSave = 0LL;
      qword_140EF0118 = 0LL;
    }
    AnFwDisplayProgressIndicator(0LL);
    if ( qword_140EF0110 )
    {
      BgpTxtDestroyRegion(qword_140EF0110);
      if ( BgpAnimationRegionSave == qword_140EF0110 )
        BgpAnimationRegionSave = 0LL;
      qword_140EF0110 = 0LL;
    }
    if ( qword_140EF00F8 )
    {
      BgpFoDestroy(qword_140EF00F8);
      if ( *(_QWORD *)qword_140EF00F8 )
      {
        if ( (*(_DWORD *)(qword_140EF00F8 + 12) & 1) == 0 )
          BgpFwFreeMemory(*(_QWORD *)qword_140EF00F8);
      }
      BgpFwFreeMemory(qword_140EF00F8);
      qword_140EF00F8 = 0LL;
    }
    LogFwReport();
    ResFwBackgroundTransition(1LL);
    result = 0LL;
    dword_140EF0050 &= ~2u;
    BgInternal = 0LL;
    qword_140EF0000 = 0LL;
    xmmword_140EEFFF0 = 0LL;
  }
  return result;
}
