/*
 * XREFs of ??B?$SmartObjStackRef@UtagMENU@@@@QEBA_NXZ @ 0x1C00E4940
 * Callers:
 *     xxxGetSystemMenu @ 0x1C00E2BDC (xxxGetSystemMenu.c)
 *     xxxMNCanClose @ 0x1C00E47A8 (xxxMNCanClose.c)
 *     ?SetLPITEMInfoNoRedraw@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@@PEAU_UNICODE_STRING@@PEAH@Z @ 0x1C00E558C (-SetLPITEMInfoNoRedraw@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@.c)
 *     xxxEnableMenuItem @ 0x1C02216E0 (xxxEnableMenuItem.c)
 *     xxxGetMenuBarInfo @ 0x1C02304BC (xxxGetMenuBarInfo.c)
 *     _ServerFixupMenuDC @ 0x1C023424C (_ServerFixupMenuDC.c)
 * Callees:
 *     <none>
 */

bool __fastcall SmartObjStackRef<tagMENU>::operator bool(__int64 a1)
{
  return *(_QWORD *)(a1 + 16) || **(_QWORD **)a1 != 0LL;
}
