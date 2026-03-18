/*
 * XREFs of ResFwFreeContext @ 0x140BA34C4
 * Callers:
 *     BgFreeContext @ 0x140BA0664 (BgFreeContext.c)
 * Callees:
 *     MmFreePagesFromMdl @ 0x14038C030 (MmFreePagesFromMdl.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 *     AnFwDisableBackgroundUpdateTimer @ 0x140BA008C (AnFwDisableBackgroundUpdateTimer.c)
 *     BgpFwReservePoolSwap @ 0x140BA1828 (BgpFwReservePoolSwap.c)
 *     ResFwpPageOutBackground @ 0x140BA1C34 (ResFwpPageOutBackground.c)
 *     AnFwFadeCompletion @ 0x140BA358C (AnFwFadeCompletion.c)
 *     BgpTxtCacheDestroy @ 0x140BA4354 (BgpTxtCacheDestroy.c)
 *     LogFwReport @ 0x140BA43FC (LogFwReport.c)
 */

void __fastcall ResFwFreeContext(__int64 a1)
{
  struct _MDL *v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // rcx

  if ( (dword_140EEFD90 & 0x100000) != 0 )
  {
    BgpTxtCacheDestroy();
    AnFwDisableBackgroundUpdateTimer();
    AnFwFadeCompletion();
    LogFwReport();
    if ( *(_QWORD *)(a1 + 16) )
    {
      BgpFwReservePoolSwap(1, 0LL, 0, 0LL);
      MmFreePagesFromMdl(*(PMDL *)(a1 + 8));
      ExFreePoolWithTag(*(PVOID *)(a1 + 8), 0);
    }
    dword_140EEFD90 &= 0xFFEFF7FD;
    qword_140EEFE50 = BgpAnimationRegionSave;
    qword_140EEFE58 = BgpTextRegionSave;
    qword_140EEFD40 = 0LL;
    BgInternal = 0LL;
    xmmword_140EEFD30 = 0LL;
    ResFwpPageOutBackground(v4, v3);
  }
  else
  {
    v2 = *(struct _MDL **)(a1 + 8);
    if ( v2 )
    {
      MmFreePagesFromMdl(v2);
      ExFreePoolWithTag(*(PVOID *)(a1 + 8), 0);
    }
  }
}
