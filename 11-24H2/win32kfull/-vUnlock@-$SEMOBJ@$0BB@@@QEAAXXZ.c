/*
 * XREFs of ?vUnlock@?$SEMOBJ@$0BB@@@QEAAXXZ @ 0x1400BBE78
 * Callers:
 *     ?bInit@RFONTOBJ@@QEAAHAEAVUDCOBJ@@HKAEBUTag@1@@Z @ 0x14005DC90 (-bInit@RFONTOBJ@@QEAAHAEAVUDCOBJ@@HKAEBUTag@1@@Z.c)
 *     ?GrepGetTextFaceW@@YAHAEAVUDCOBJ@@HPEAGH@Z @ 0x14005EFB0 (-GrepGetTextFaceW@@YAHAEAVUDCOBJ@@HPEAGH@Z.c)
 *     ?bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH@Z @ 0x1400B7F2C (-bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH.c)
 *     ?GrepEnumFonts@@YAHAEAVXDCOBJ@@KKPEBGKPEAKPEAX@Z @ 0x1400BAB48 (-GrepEnumFonts@@YAHAEAVXDCOBJ@@KKPEBGKPEAKPEAX@Z.c)
 *     NtGdiGetFontFileInfo @ 0x1400BADF0 (NtGdiGetFontFileInfo.c)
 *     ?GrepGetCharSet@@YAKAEAVUDCOBJ@@@Z @ 0x1400BB50C (-GrepGetCharSet@@YAKAEAVUDCOBJ@@@Z.c)
 *     ?prfntDeactivateEudcRFONTs@@YAXPEBQEAVPFE@@PEAU_LIST_ENTRY@@@Z @ 0x1400BB798 (-prfntDeactivateEudcRFONTs@@YAXPEBQEAVPFE@@PEAU_LIST_ENTRY@@@Z.c)
 *     ?vInit@RFONTOBJ@@QEAAXAEAVUDCOBJ@@PEAVPFE@@PEAU_EUDCLOGFONT@@H@Z @ 0x1400BB830 (-vInit@RFONTOBJ@@QEAAXAEAVUDCOBJ@@PEAVPFE@@PEAU_EUDCLOGFONT@@H@Z.c)
 *     ?GrepGetOutlineTextMetrics@@YAKAEAVUDCOBJ@@KPEAU_OUTLINETEXTMETRICW@@PEAU_TMDIFF@@W4EntryPoint@RFONTOBJ@@@Z @ 0x1400BEDA0 (-GrepGetOutlineTextMetrics@@YAKAEAVUDCOBJ@@KPEAU_OUTLINETEXTMETRICW@@PEAU_TMDIFF@@W4EntryPoint@R.c)
 *     ?dwGetFontLanguageInfo@@YAKAEAVUDCOBJ@@@Z @ 0x1400BFB58 (-dwGetFontLanguageInfo@@YAKAEAVUDCOBJ@@@Z.c)
 *     ?GrepGetKerningPairs@@YAKAEAVUDCOBJ@@KPEAUtagKERNINGPAIR@@W4EntryPoint@RFONTOBJ@@@Z @ 0x1400C1550 (-GrepGetKerningPairs@@YAKAEAVUDCOBJ@@KPEAUtagKERNINGPAIR@@W4EntryPoint@RFONTOBJ@@@Z.c)
 *     ?hLoadMemFonts@PUBLIC_PFTOBJ@@QEAAPEAXPEAPEAUFONTFILEVIEW@@PEAUtagDESIGNVECTOR@@KPEAKPEAH@Z @ 0x140113770 (-hLoadMemFonts@PUBLIC_PFTOBJ@@QEAAPEAXPEAPEAUFONTFILEVIEW@@PEAUtagDESIGNVECTOR@@KPEAKPEAH@Z.c)
 *     GreRemoveDisplayDriverRealizations @ 0x140132334 (GreRemoveDisplayDriverRealizations.c)
 *     ?bUnloadAllButPermanentFonts@PFTOBJ@@QEAAHH@Z @ 0x140145D50 (-bUnloadAllButPermanentFonts@PFTOBJ@@QEAAHH@Z.c)
 *     bAddAllFlEntry @ 0x140152750 (bAddAllFlEntry.c)
 *     ?RegistryNotificaionEnumerationEnd@@YAXPEAK@Z @ 0x140199488 (-RegistryNotificaionEnumerationEnd@@YAXPEAK@Z.c)
 *     vCleanupPrivateFonts @ 0x140199500 (vCleanupPrivateFonts.c)
 *     ?DestroyFont@PDEVOBJ@@QEAAXPEAU_FONTOBJ@@@Z @ 0x1401B19A4 (-DestroyFont@PDEVOBJ@@QEAAXPEAU_FONTOBJ@@@Z.c)
 *     NtGdiGetFontFileData @ 0x1401B7450 (NtGdiGetFontFileData.c)
 *     NtGdiGetPublicFontTableChangeCookie @ 0x1401C5B20 (NtGdiGetPublicFontTableChangeCookie.c)
 *     vUnlinkAllEudcRFONTsAndPFEs @ 0x1401ED0FC (vUnlinkAllEudcRFONTsAndPFEs.c)
 *     ?bSetNewFDX@RFONTOBJ@@QEAAHAEAVUDCOBJ@@AEAU_FD_XFORM@@K@Z @ 0x1401F6558 (-bSetNewFDX@RFONTOBJ@@QEAAHAEAVUDCOBJ@@AEAU_FD_XFORM@@K@Z.c)
 *     ?GetProcessSessionFonts@@YAJPEAU_EPROCESS@@IIPEAI1PEAPEAXPEAG@Z @ 0x1401F8694 (-GetProcessSessionFonts@@YAJPEAU_EPROCESS@@IIPEAI1PEAPEAXPEAG@Z.c)
 *     vLinkEudcPFEs @ 0x1401FB78C (vLinkEudcPFEs.c)
 *     ?GrepRemoveFontMemResource@@YAHPEAX@Z @ 0x140214100 (-GrepRemoveFontMemResource@@YAHPEAX@Z.c)
 *     ?vUnlinkAllEudcFromRFONTList@@YAXXZ @ 0x14021CC4C (-vUnlinkAllEudcFromRFONTList@@YAXXZ.c)
 *     vRemoveAllInactiveRFONTs @ 0x14021F5CC (vRemoveAllInactiveRFONTs.c)
 *     ?bLoadRemoteFonts@PUBLIC_PFTOBJ@@QEAAHAEAVXDCOBJ@@PEAPEAUFONTFILEVIEW@@IPEAUtagDESIGNVECTOR@@PEAU_UNIVERSAL_FONT_ID@@PEAH@Z @ 0x140221180 (-bLoadRemoteFonts@PUBLIC_PFTOBJ@@QEAAHAEAVXDCOBJ@@PEAPEAUFONTFILEVIEW@@IPEAUtagDESIGNVECTOR@@PEA.c)
 *     ?GetFontResourceInfoInternalW@@YAHPEBGKKIPEA_KPEAXK@Z @ 0x1402217AC (-GetFontResourceInfoInternalW@@YAHPEBGKKIPEA_KPEAXK@Z.c)
 *     ?QueryFonts@PUBLIC_PFTOBJ@@QEAAHPEAU_UNIVERSAL_FONT_ID@@KPEAT_LARGE_INTEGER@@@Z @ 0x140259878 (-QueryFonts@PUBLIC_PFTOBJ@@QEAAHPEAU_UNIVERSAL_FONT_ID@@KPEAT_LARGE_INTEGER@@@Z.c)
 *     ?vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVUDCOBJ@@@Z @ 0x14025BE74 (-vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVUDCOBJ@@@Z.c)
 *     ?OnHostReady@UmfdHostLifeTimeManager@@SAXXZ @ 0x14025E048 (-OnHostReady@UmfdHostLifeTimeManager@@SAXXZ.c)
 *     ?UmfdZombifyAllUmfdFonts@@YAXXZ @ 0x140263C44 (-UmfdZombifyAllUmfdFonts@@YAXXZ.c)
 *     ?bInitPrivatePFT@@YAHXZ @ 0x140264E30 (-bInitPrivatePFT@@YAHXZ.c)
 *     GreEudcLoadLinkW @ 0x14030C258 (GreEudcLoadLinkW.c)
 *     vUnlinkEudcRFONTs @ 0x14030CF78 (vUnlinkEudcRFONTs.c)
 *     vUnlinkEudcRFONTsAndPFEs @ 0x14030D064 (vUnlinkEudcRFONTsAndPFEs.c)
 *     ?ChangeGhostFont@PUBLIC_PFTOBJ@@QEAAHPEAXH@Z @ 0x14030DA70 (-ChangeGhostFont@PUBLIC_PFTOBJ@@QEAAHPEAXH@Z.c)
 *     ?GetEmbedFonts@PUBLIC_PFTOBJ@@QEAAKXZ @ 0x14030DBB4 (-GetEmbedFonts@PUBLIC_PFTOBJ@@QEAAKXZ.c)
 *     ?VerifyPFF@PUBLIC_PFTOBJ@@QEAAHPEAVPFF@@@Z @ 0x14030DD0C (-VerifyPFF@PUBLIC_PFTOBJ@@QEAAHPEAVPFF@@@Z.c)
 *     ?bLoadFonts@DEVICE_PFTOBJ@@QEAAHPEAUHDEV__@@I@Z @ 0x14030DDA0 (-bLoadFonts@DEVICE_PFTOBJ@@QEAAHPEAUHDEV__@@I@Z.c)
 *     ?CleanupPvtData@@YAXPEAVPFF@@@Z @ 0x14030E980 (-CleanupPvtData@@YAXPEAVPFF@@@Z.c)
 *     NtGdiAddEmbFontToDC @ 0x140327990 (NtGdiAddEmbFontToDC.c)
 *     NtGdiAddRemoteMMInstanceToDC @ 0x140327AD0 (NtGdiAddRemoteMMInstanceToDC.c)
 *     ?TryResurrectPffApcRoutine@UmfdHostLifeTimeManager@@CAXPEAX00@Z @ 0x140336620 (-TryResurrectPffApcRoutine@UmfdHostLifeTimeManager@@CAXPEAX00@Z.c)
 *     NtGdiGetUFIPathname @ 0x140337D70 (NtGdiGetUFIPathname.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x1400A428C (W32GetCurrentWin32kSessionId.c)
 *     GrepReleasePublicPFTSemaphoreEx @ 0x14015CA30 (GrepReleasePublicPFTSemaphoreEx.c)
 */

void __fastcall SEMOBJ<17>::vUnlock(HSEMAPHORE *a1)
{
  HSEMAPHORE v1; // rdi
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v4; // rsi
  __int64 *ThreadWin32Thread; // rax
  __int64 v6; // rax
  __int64 v7; // rsi
  _QWORD *v8; // rdx
  int CurrentWin32kSessionId; // ebx
  __int64 CurrentThreadProcess; // rax

  v1 = *a1;
  if ( *a1 == (HSEMAPHORE)-2LL )
  {
    GrepReleasePublicPFTSemaphoreEx();
  }
  else if ( v1 )
  {
    EtwTraceGreLockReleaseSemaphore(L"PublicPFT", *a1);
    CurrentThread = KeGetCurrentThread();
    v4 = 0LL;
    if ( !(unsigned __int8)KeIsAttachedProcess()
      || (CurrentWin32kSessionId = W32GetCurrentWin32kSessionId(),
          CurrentThreadProcess = PsGetCurrentThreadProcess(),
          CurrentWin32kSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v4 = *ThreadWin32Thread;
    }
    v6 = v4 + 8;
    v7 = -v4;
    v8 = (_QWORD *)(v6 & -(__int64)(v7 != 0));
    if ( v8 )
    {
      if ( (*(_BYTE *)((v6 & -(__int64)(v7 != 0)) + 0x19))-- == 1 )
        *v8 &= ~0x20000uLL;
      if ( !*v8 )
        GrepOnAllLocksReleased();
    }
    GreReleaseSemaphoreExclusiveInternal(v1);
  }
  *a1 = 0LL;
}
