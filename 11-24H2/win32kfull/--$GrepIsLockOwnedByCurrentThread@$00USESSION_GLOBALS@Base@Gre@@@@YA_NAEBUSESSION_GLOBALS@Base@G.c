/*
 * XREFs of ??$GrepIsLockOwnedByCurrentThread@$00USESSION_GLOBALS@Base@Gre@@@@YA_NAEBUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400DD84C
 * Callers:
 *     ?vCleanupOwnedRedirectionDeviceBitmaps@@YAXAEAVPDEVOBJ@@@Z @ 0x1400DD5C0 (-vCleanupOwnedRedirectionDeviceBitmaps@@YAXAEAVPDEVOBJ@@@Z.c)
 *     vDisableSynchronize @ 0x1400DD750 (vDisableSynchronize.c)
 *     ?bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOBJ@@K@Z@Z @ 0x14011F570 (-bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOB.c)
 * Callees:
 *     ?GrepIsLockOwnedByCurrentThread@@YA_NQEAUHSEMAPHORE__@@@Z @ 0x1400DD86C (-GrepIsLockOwnedByCurrentThread@@YA_NQEAUHSEMAPHORE__@@@Z.c)
 */

bool __fastcall GrepIsLockOwnedByCurrentThread<1,Gre::Base::SESSION_GLOBALS>(_QWORD *a1)
{
  return GrepIsLockOwnedByCurrentThread((HSEMAPHORE)(*a1 + 624LL));
}
