/*
 * XREFs of ?SkipInvalidPff@@YAPEAVPFF@@PEAV1@@Z @ 0x1C013DEC0
 * Callers:
 *     ?pPFFGet@DEVICE_PFTOBJ@@QEAAPEAVPFF@@PEAUHDEV__@@PEAPEAPEAV2@@Z @ 0x1C0003F94 (-pPFFGet@DEVICE_PFTOBJ@@QEAAPEAVPFF@@PEAUHDEV__@@PEAPEAPEAV2@@Z.c)
 *     ?bCleanupPFT@PUBLIC_PFTOBJ@@QEAAXW4eCleanupMode@1@PEAK@Z @ 0x1C0076F94 (-bCleanupPFT@PUBLIC_PFTOBJ@@QEAAXW4eCleanupMode@1@PEAK@Z.c)
 *     ?GetProcessSessionFonts@@YAJPEAU_EPROCESS@@IIPEAI1PEAPEAXPEAG@Z @ 0x1C007EBC8 (-GetProcessSessionFonts@@YAJPEAU_EPROCESS@@IIPEAI1PEAPEAXPEAG@Z.c)
 *     ?pPFFGet@PUBLIC_PFTOBJ@@QEAAPEAVPFF@@PEBGKKPEAUtagDESIGNVECTOR@@KPEAPEAPEAV2@H@Z @ 0x1C0082A74 (-pPFFGet@PUBLIC_PFTOBJ@@QEAAPEAVPFF@@PEBGKKPEAUtagDESIGNVECTOR@@KPEAPEAPEAV2@H@Z.c)
 *     vUnlinkAllEudcRFONTsAndPFEsWorker @ 0x1C0085E98 (vUnlinkAllEudcRFONTsAndPFEsWorker.c)
 *     ?OnHostReady@UmfdHostLifeTimeManager@@SAXXZ @ 0x1C009E9B8 (-OnHostReady@UmfdHostLifeTimeManager@@SAXXZ.c)
 *     ?bUnloadAllButPermanentFonts@PFTOBJ@@QEAAHH@Z @ 0x1C00C5280 (-bUnloadAllButPermanentFonts@PFTOBJ@@QEAAHH@Z.c)
 *     vLinkEudcPFEsWorker @ 0x1C00CAE30 (vLinkEudcPFEsWorker.c)
 *     ?bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH@Z @ 0x1C01135E0 (-bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH.c)
 *     ?bUnloadEUDCFont@PFTOBJ@@QEAAHPEAG@Z @ 0x1C0115ED0 (-bUnloadEUDCFont@PFTOBJ@@QEAAHPEAG@Z.c)
 *     vDeactivateEudcRFONTsWorker @ 0x1C013F37C (vDeactivateEudcRFONTsWorker.c)
 *     _lambda_42f186421c331d4d68df43a01bbfc838_::operator() @ 0x1C013F4E8 (_lambda_42f186421c331d4d68df43a01bbfc838_--operator().c)
 *     ?GetPFFFromId@@YAPEAVPFF@@PEAVPFT@@IPEAPEAPEAV1@@Z @ 0x1C015921A (-GetPFFFromId@@YAPEAVPFF@@PEAVPFT@@IPEAPEAPEAV1@@Z.c)
 *     ?ChangeGhostFont@PUBLIC_PFTOBJ@@QEAAHPEAXH@Z @ 0x1C0269FCC (-ChangeGhostFont@PUBLIC_PFTOBJ@@QEAAHPEAXH@Z.c)
 *     ?GetEmbedFonts@PUBLIC_PFTOBJ@@QEAAKXZ @ 0x1C026A118 (-GetEmbedFonts@PUBLIC_PFTOBJ@@QEAAKXZ.c)
 *     ?HFFToPPFF@PFTOBJ@@QEAAPEAVPFF@@_K@Z @ 0x1C026A214 (-HFFToPPFF@PFTOBJ@@QEAAPEAVPFF@@_K@Z.c)
 *     ?QueryFonts@PUBLIC_PFTOBJ@@QEAAHPEAU_UNIVERSAL_FONT_ID@@KPEAT_LARGE_INTEGER@@@Z @ 0x1C026A408 (-QueryFonts@PUBLIC_PFTOBJ@@QEAAHPEAU_UNIVERSAL_FONT_ID@@KPEAT_LARGE_INTEGER@@@Z.c)
 *     ?VerifyPFF@PUBLIC_PFTOBJ@@QEAAHPEAVPFF@@@Z @ 0x1C026A528 (-VerifyPFF@PUBLIC_PFTOBJ@@QEAAHPEAVPFF@@@Z.c)
 *     vUnlinkEudcRFONTsAndPFEsWorker @ 0x1C02A024C (vUnlinkEudcRFONTsAndPFEsWorker.c)
 *     vUnlinkEudcRFONTsWorker @ 0x1C02A03A0 (vUnlinkEudcRFONTsWorker.c)
 * Callees:
 *     Feature_1519700280__private_IsEnabledDeviceUsage @ 0x1C013E1E4 (Feature_1519700280__private_IsEnabledDeviceUsage.c)
 */

struct PFF *__fastcall SkipInvalidPff(struct PFF *a1)
{
  bool v2; // cc

  v2 = dword_1C035A150 <= 0;
  if ( dword_1C035A150 < 0 )
  {
    _InterlockedCompareExchange(&dword_1C035A150, Feature_1519700280__private_IsEnabledDeviceUsage() != 0, -1);
    v2 = dword_1C035A150 <= 0;
  }
  if ( !v2 )
  {
    while ( a1 && (*((_DWORD *)a1 + 13) & 0x10000) != 0 )
      a1 = (struct PFF *)*((_QWORD *)a1 + 1);
  }
  return a1;
}
