/*
 * XREFs of ??1?$AutoResource@$1?Win32FreePool@@YAXPEAX@Z@@QEAA@XZ @ 0x1C001B1E0
 * Callers:
 *     ?bAppendSysDirectory@@YAHPEAGPEBGI@Z @ 0x1C00194B4 (-bAppendSysDirectory@@YAHPEAGPEBGI@Z.c)
 *     bReadUserSystemEUDCRegistry @ 0x1C001ACF0 (bReadUserSystemEUDCRegistry.c)
 *     ??1MALLOCOBJ@@QEAA@XZ @ 0x1C001B1C8 (--1MALLOCOBJ@@QEAA@XZ.c)
 *     bAddFlEntry @ 0x1C0112C30 (bAddFlEntry.c)
 *     bUnloadEudcFont @ 0x1C0115BF4 (bUnloadEudcFont.c)
 *     ?ObtainSectionForNetworkedFontFile@@YAJPEAU_UNICODE_STRING@@PEAU_FILEVIEW@@PEAU_OBJECT_ATTRIBUTES@@PEAT_LARGE_INTEGER@@_N@Z @ 0x1C028A270 (-ObtainSectionForNetworkedFontFile@@YAJPEAU_UNICODE_STRING@@PEAU_FILEVIEW@@PEAU_OBJECT_ATTRIBUTE.c)
 *     GreEudcLoadLinkW @ 0x1C029E0C8 (GreEudcLoadLinkW.c)
 *     bDeleteFlEntry @ 0x1C029EF40 (bDeleteFlEntry.c)
 *     bWriteUserSystemEUDCRegistry @ 0x1C029FA48 (bWriteUserSystemEUDCRegistry.c)
 *     ?bAttemptReload@PFFOBJ@@QEAAHXZ @ 0x1C02D5858 (-bAttemptReload@PFFOBJ@@QEAAHXZ.c)
 *     ?TryResurrectHff@UmfdHostLifeTimeManager@@CA_N_KPEAVPFF@@@Z @ 0x1C02E0280 (-TryResurrectHff@UmfdHostLifeTimeManager@@CA_N_KPEAVPFF@@@Z.c)
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
