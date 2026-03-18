/*
 * XREFs of ?SkipInvalidPff@@YAPEAVPFF@@PEAV1@@Z @ 0x14030DCEC
 * Callers:
 *     ?pPFFGet@DEVICE_PFTOBJ@@QEAAPEAVPFF@@PEAUHDEV__@@PEAPEAPEAV2@@Z @ 0x1400BA59C (-pPFFGet@DEVICE_PFTOBJ@@QEAAPEAVPFF@@PEAUHDEV__@@PEAPEAPEAV2@@Z.c)
 *     ?pPFFGet@PUBLIC_PFTOBJ@@QEAAPEAVPFF@@PEBGKKPEAUtagDESIGNVECTOR@@KPEAPEAPEAV2@H@Z @ 0x1400FDD28 (-pPFFGet@PUBLIC_PFTOBJ@@QEAAPEAVPFF@@PEBGKKPEAUtagDESIGNVECTOR@@KPEAPEAPEAV2@H@Z.c)
 *     ?bUnloadAllButPermanentFonts@PFTOBJ@@QEAAHH@Z @ 0x140145D50 (-bUnloadAllButPermanentFonts@PFTOBJ@@QEAAHH@Z.c)
 *     ?bCleanupPFT@PUBLIC_PFTOBJ@@QEAAXW4eCleanupMode@1@PEAK@Z @ 0x140199568 (-bCleanupPFT@PUBLIC_PFTOBJ@@QEAAXW4eCleanupMode@1@PEAK@Z.c)
 *     ?GetPFFFromId@@YAPEAVPFF@@PEAVPFT@@IPEAPEAPEAV1@@Z @ 0x1401B77CC (-GetPFFFromId@@YAPEAVPFF@@PEAVPFT@@IPEAPEAPEAV1@@Z.c)
 *     vUnlinkAllEudcRFONTsAndPFEsWorker @ 0x1401ED1F0 (vUnlinkAllEudcRFONTsAndPFEsWorker.c)
 *     ?GetProcessSessionFonts@@YAJPEAU_EPROCESS@@IIPEAI1PEAPEAXPEAG@Z @ 0x1401F8694 (-GetProcessSessionFonts@@YAJPEAU_EPROCESS@@IIPEAI1PEAPEAXPEAG@Z.c)
 *     vLinkEudcPFEsWorker @ 0x1401FB840 (vLinkEudcPFEsWorker.c)
 *     ?QueryFonts@PUBLIC_PFTOBJ@@QEAAHPEAU_UNIVERSAL_FONT_ID@@KPEAT_LARGE_INTEGER@@@Z @ 0x140259878 (-QueryFonts@PUBLIC_PFTOBJ@@QEAAHPEAU_UNIVERSAL_FONT_ID@@KPEAT_LARGE_INTEGER@@@Z.c)
 *     _UmfdZombifyAllUmfdFonts_::_2_::_lambda_1_::operator() @ 0x14025DB04 (_UmfdZombifyAllUmfdFonts_--_2_--_lambda_1_--operator().c)
 *     ?OnHostReady@UmfdHostLifeTimeManager@@SAXXZ @ 0x14025E048 (-OnHostReady@UmfdHostLifeTimeManager@@SAXXZ.c)
 *     vDeactivateEudcRFONTsWorker @ 0x14030C94C (vDeactivateEudcRFONTsWorker.c)
 *     vUnlinkEudcRFONTsAndPFEsWorker @ 0x14030D168 (vUnlinkEudcRFONTsAndPFEsWorker.c)
 *     vUnlinkEudcRFONTsWorker @ 0x14030D2B0 (vUnlinkEudcRFONTsWorker.c)
 *     ?ChangeGhostFont@PUBLIC_PFTOBJ@@QEAAHPEAXH@Z @ 0x14030DA70 (-ChangeGhostFont@PUBLIC_PFTOBJ@@QEAAHPEAXH@Z.c)
 *     ?GetEmbedFonts@PUBLIC_PFTOBJ@@QEAAKXZ @ 0x14030DBB4 (-GetEmbedFonts@PUBLIC_PFTOBJ@@QEAAKXZ.c)
 *     ?HFFToPPFF@PFTOBJ@@QEAAPEAVPFF@@_K@Z @ 0x14030DCA8 (-HFFToPPFF@PFTOBJ@@QEAAPEAVPFF@@_K@Z.c)
 *     ?VerifyPFF@PUBLIC_PFTOBJ@@QEAAHPEAVPFF@@@Z @ 0x14030DD0C (-VerifyPFF@PUBLIC_PFTOBJ@@QEAAHPEAVPFF@@@Z.c)
 * Callees:
 *     <none>
 */

struct PFF *__fastcall SkipInvalidPff(struct PFF *a1)
{
  while ( a1 && (*((_DWORD *)a1 + 13) & 0x10000) != 0 )
    a1 = (struct PFF *)*((_QWORD *)a1 + 1);
  return a1;
}
