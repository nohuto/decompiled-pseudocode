/*
 * XREFs of ??1?$AutoResource@$1?Win32FreePool@@YAXPEAX@Z@@QEAA@XZ @ 0x1401B7374
 * Callers:
 *     ?bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH@Z @ 0x1400B7F2C (-bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH.c)
 *     bAddFlEntry @ 0x1400B8A30 (bAddFlEntry.c)
 *     ?bAppendSysDirectory@@YAHPEAGPEBGI@Z @ 0x1400B907C (-bAppendSysDirectory@@YAHPEAGPEBGI@Z.c)
 *     bUnloadEudcFont @ 0x1400FE308 (bUnloadEudcFont.c)
 *     bAddAllFlEntry @ 0x140152750 (bAddAllFlEntry.c)
 *     ??1MALLOCOBJ@@QEAA@XZ @ 0x1401B735C (--1MALLOCOBJ@@QEAA@XZ.c)
 *     bReadUserSystemEUDCRegistry @ 0x140200984 (bReadUserSystemEUDCRegistry.c)
 *     ?TryResurrectHff@UmfdHostLifeTimeManager@@CA_N_KPEAVPFF@@@Z @ 0x140220F04 (-TryResurrectHff@UmfdHostLifeTimeManager@@CA_N_KPEAVPFF@@@Z.c)
 *     ?bLoadRemoteFonts@PUBLIC_PFTOBJ@@QEAAHAEAVXDCOBJ@@PEAPEAUFONTFILEVIEW@@IPEAUtagDESIGNVECTOR@@PEAU_UNIVERSAL_FONT_ID@@PEAH@Z @ 0x140221180 (-bLoadRemoteFonts@PUBLIC_PFTOBJ@@QEAAHAEAVXDCOBJ@@PEAPEAUFONTFILEVIEW@@IPEAUtagDESIGNVECTOR@@PEA.c)
 *     ?bAttemptReload@PFFOBJ@@QEAAHXZ @ 0x140228D98 (-bAttemptReload@PFFOBJ@@QEAAHXZ.c)
 *     ?ObtainSectionForNetworkedFontFile@NetworkedFontFileTable@@YAJPEAXPEBGPEAT_LARGE_INTEGER@@PEAPEAXPEAPEAUNETWORKED_FONT_FILE_NODE@@@Z @ 0x1403041D8 (-ObtainSectionForNetworkedFontFile@NetworkedFontFileTable@@YAJPEAXPEBGPEAT_LARGE_INTEGER@@PEAPEA.c)
 *     GreEudcLoadLinkW @ 0x14030C258 (GreEudcLoadLinkW.c)
 *     bDeleteFlEntry @ 0x14030C64C (bDeleteFlEntry.c)
 *     bWriteUserSystemEUDCRegistry @ 0x14030C84C (bWriteUserSystemEUDCRegistry.c)
 * Callees:
 *     <none>
 */

void __fastcall AutoResource<&void Win32FreePool(void *)>::~AutoResource<&void Win32FreePool(void *)>(void **a1)
{
  void *v2; // rcx

  v2 = *a1;
  if ( v2 )
  {
    Win32FreePool(v2);
    *a1 = 0LL;
  }
}
