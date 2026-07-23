/*
 * XREFs of ResFwFreeContext @ 0x140BB54C4
 * Callers:
 *     BgFreeContext @ 0x140BB2664 (BgFreeContext.c)
 * Callees:
 *     MmFreePagesFromMdl @ 0x14048E2C0 (MmFreePagesFromMdl.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 *     AnFwDisableBackgroundUpdateTimer @ 0x140BB208C (AnFwDisableBackgroundUpdateTimer.c)
 *     BgpFwReservePoolSwap @ 0x140BB3828 (BgpFwReservePoolSwap.c)
 *     ResFwpPageOutBackground @ 0x140BB3C34 (ResFwpPageOutBackground.c)
 *     AnFwFadeCompletion @ 0x140BB558C (AnFwFadeCompletion.c)
 *     BgpTxtCacheDestroy @ 0x140BB6354 (BgpTxtCacheDestroy.c)
 *     LogFwReport @ 0x140BB63FC (LogFwReport.c)
 */

void __fastcall ResFwFreeContext(__int64 a1)
{
  struct _MDL *v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // rcx

  if ( (dword_140EF0270 & 0x100000) != 0 )
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
    dword_140EF0270 &= 0xFFEFF7FD;
    qword_140EF0330 = BgpAnimationRegionSave;
    qword_140EF0338 = BgpTextRegionSave;
    qword_140EF0220 = 0LL;
    BgInternal = 0LL;
    xmmword_140EF0210 = 0LL;
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
