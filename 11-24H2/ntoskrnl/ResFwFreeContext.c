/*
 * XREFs of ResFwFreeContext @ 0x140BB34C4
 * Callers:
 *     BgFreeContext @ 0x140BB0664 (BgFreeContext.c)
 * Callees:
 *     MmFreePagesFromMdl @ 0x1403A37F0 (MmFreePagesFromMdl.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 *     AnFwDisableBackgroundUpdateTimer @ 0x140BB008C (AnFwDisableBackgroundUpdateTimer.c)
 *     BgpFwReservePoolSwap @ 0x140BB1828 (BgpFwReservePoolSwap.c)
 *     ResFwpPageOutBackground @ 0x140BB1C34 (ResFwpPageOutBackground.c)
 *     AnFwFadeCompletion @ 0x140BB358C (AnFwFadeCompletion.c)
 *     BgpTxtCacheDestroy @ 0x140BB4354 (BgpTxtCacheDestroy.c)
 *     LogFwReport @ 0x140BB43FC (LogFwReport.c)
 */

void __fastcall ResFwFreeContext(__int64 a1)
{
  struct _MDL *v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // rcx

  if ( (dword_140EF0050 & 0x100000) != 0 )
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
    dword_140EF0050 &= 0xFFEFF7FD;
    qword_140EF0110 = BgpAnimationRegionSave;
    qword_140EF0118 = BgpTextRegionSave;
    qword_140EF0000 = 0LL;
    BgInternal = 0LL;
    xmmword_140EEFFF0 = 0LL;
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
