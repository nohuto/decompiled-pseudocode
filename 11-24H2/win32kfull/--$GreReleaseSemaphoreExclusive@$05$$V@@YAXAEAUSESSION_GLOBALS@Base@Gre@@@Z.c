/*
 * XREFs of ??$GreReleaseSemaphoreExclusive@$05$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140022278
 * Callers:
 *     ?GdiMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@H@Z @ 0x140023754 (-GdiMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@H@Z.c)
 *     ?bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z @ 0x140058164 (-bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z.c)
 *     ?GrepDrawEscape@@YAHAEAVXDCOBJ@@HAEBV?$umptr_r@D@@@Z @ 0x14032669C (-GrepDrawEscape@@YAHAEAVXDCOBJ@@HAEBV-$umptr_r@D@@@Z.c)
 *     GreUnlockDisplayArea @ 0x14032EDE0 (GreUnlockDisplayArea.c)
 * Callees:
 *     ??$GrepReleaseLockValidate@$05@@YAXXZ @ 0x140020C00 (--$GrepReleaseLockValidate@$05@@YAXXZ.c)
 */

void __fastcall GreReleaseSemaphoreExclusive<6,>(__int64 *a1)
{
  __int64 v1; // rbx

  v1 = *a1;
  EtwTraceGreLockReleaseSemaphore(L"Sprite", *a1 + 1040);
  GrepReleaseLockValidate<6>();
  GreReleaseSemaphoreExclusiveInternal((HSEMAPHORE)(v1 + 1040));
}
