/*
 * XREFs of ??$GreAcquireSemaphore@$05$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140060C00
 * Callers:
 *     ?GdiMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@H@Z @ 0x140023754 (-GdiMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@H@Z.c)
 *     ??0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1400579FC (--0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     GreUpdateSpriteVisRgn @ 0x1400617E0 (GreUpdateSpriteVisRgn.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x140061FD0 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     ?GrepUpdateSpriteImpl@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXAEAVOPTAPIDCOBJ@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_BLENDFUNCTION@@KPEAUtagRECT@@PEAUtagMINIWINDOWINFO@@HHK@Z @ 0x1400CBC4C (-GrepUpdateSpriteImpl@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXAEAVOPTAPIDCOBJ@@PEAUtagPOINT@@PEAUtagSIZE.c)
 *     ??0ENTER_DWM_CRIT@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHDEV__@@@Z @ 0x140196AB0 (--0ENTER_DWM_CRIT@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHDEV__@@@Z.c)
 *     ?GrepDrawEscape@@YAHAEAVXDCOBJ@@HAEBV?$umptr_r@D@@@Z @ 0x14032669C (-GrepDrawEscape@@YAHAEAVXDCOBJ@@HAEBV-$umptr_r@D@@@Z.c)
 * Callees:
 *     ??$GrepAcquireLockValidate@$05@@YAXXZ @ 0x140023FC8 (--$GrepAcquireLockValidate@$05@@YAXXZ.c)
 */

__int64 __fastcall GreAcquireSemaphore<6,>(__int64 *a1)
{
  __int64 v1; // rbx

  v1 = *a1;
  EtwTraceGreLockAcquireSemaphoreExclusive(L"Sprite", *a1 + 1040, 0LL);
  GreAcquireSemaphoreInternal((HSEMAPHORE)(v1 + 1040));
  return GrepAcquireLockValidate<6>();
}
