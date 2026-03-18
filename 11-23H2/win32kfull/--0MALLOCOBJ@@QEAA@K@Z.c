/*
 * XREFs of ??0MALLOCOBJ@@QEAA@K@Z @ 0x1C0115D18
 * Callers:
 *     ?bAppendSysDirectory@@YAHPEAGPEBGI@Z @ 0x1C00194B4 (-bAppendSysDirectory@@YAHPEAGPEBGI@Z.c)
 *     bReadUserSystemEUDCRegistry @ 0x1C001ACF0 (bReadUserSystemEUDCRegistry.c)
 *     bAddAllFlEntry @ 0x1C001ADEC (bAddAllFlEntry.c)
 *     bUnloadEudcFont @ 0x1C0115BF4 (bUnloadEudcFont.c)
 *     ?BackPropagateLargeBitmapBits@UMPDOBJ@@QEAAXPEAU_SURFOBJ@@PEAXH@Z @ 0x1C013F8E8 (-BackPropagateLargeBitmapBits@UMPDOBJ@@QEAAXPEAU_SURFOBJ@@PEAXH@Z.c)
 *     ?ObtainSectionForNetworkedFontFile@@YAJPEAU_UNICODE_STRING@@PEAU_FILEVIEW@@PEAU_OBJECT_ATTRIBUTES@@PEAT_LARGE_INTEGER@@_N@Z @ 0x1C028A270 (-ObtainSectionForNetworkedFontFile@@YAJPEAU_UNICODE_STRING@@PEAU_FILEVIEW@@PEAU_OBJECT_ATTRIBUTE.c)
 *     GreEudcLoadLinkW @ 0x1C029E0C8 (GreEudcLoadLinkW.c)
 *     bDeleteFlEntry @ 0x1C029EF40 (bDeleteFlEntry.c)
 *     bWriteUserSystemEUDCRegistry @ 0x1C029FA48 (bWriteUserSystemEUDCRegistry.c)
 *     ?bAttemptReload@PFFOBJ@@QEAAHXZ @ 0x1C02D5858 (-bAttemptReload@PFFOBJ@@QEAAHXZ.c)
 *     ?TryResurrectHff@UmfdHostLifeTimeManager@@CA_N_KPEAVPFF@@@Z @ 0x1C02E0280 (-TryResurrectHff@UmfdHostLifeTimeManager@@CA_N_KPEAVPFF@@@Z.c)
 * Callees:
 *     <none>
 */

MALLOCOBJ *__fastcall MALLOCOBJ::MALLOCOBJ(MALLOCOBJ *this, unsigned int a2)
{
  __int64 v3; // rax

  *(_QWORD *)this = 0LL;
  if ( !a2 || (v3 = Win32AllocPoolZInit(a2, 1886221383LL), (*(_QWORD *)this = v3) == 0LL) )
    EngSetLastError(8u);
  return this;
}
