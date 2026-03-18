/*
 * XREFs of memmove @ 0x140340480
 * Callers:
 *     ?GreGetDIBitsInternalWorker@@YAHKAEAVDCOBJ@@AEAVPDEVOBJ@@AEAVSURFREF@@AEAVXEPALOBJ@@IIAEAV?$umptr_w@E@@PEAUtagBITMAPINFO@@III@Z @ 0x14000EA14 (-GreGetDIBitsInternalWorker@@YAHKAEAVDCOBJ@@AEAVPDEVOBJ@@AEAVSURFREF@@AEAVXEPALOBJ@@IIAEAV-$umpt.c)
 *     NtGdiExtGetObjectW @ 0x140014310 (NtGdiExtGetObjectW.c)
 *     GreExtGetObjectW @ 0x14001442C (GreExtGetObjectW.c)
 *     ?GrepCreateDIBitmapReal@@YAPEAUHBITMAP__@@AEAVOPTAPIDCOBJ@@KAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@KIPEAXK3K_KPEAPEAX@Z @ 0x140018544 (-GrepCreateDIBitmapReal@@YAPEAUHBITMAP__@@AEAVOPTAPIDCOBJ@@KAEAV-$umptr_r@E@@PEAUtagBITMAPINFO@@.c)
 *     hfontCreate @ 0x140025080 (hfontCreate.c)
 *     ?bDoGetSetBitmapBits@@YAHPEAU_SURFOBJ@@0H@Z @ 0x140028D88 (-bDoGetSetBitmapBits@@YAHPEAU_SURFOBJ@@0H@Z.c)
 *     ?GRIB_CopyHidData@@YAIQEAUtagHIDDATA@@PEAI1PEAPEAUtagRAWINPUT@@I@Z @ 0x14002C3BC (-GRIB_CopyHidData@@YAIQEAUtagHIDDATA@@PEAI1PEAPEAUtagRAWINPUT@@I@Z.c)
 *     CreateNewEventEntry @ 0x14003CA7C (CreateNewEventEntry.c)
 *     NtUserfnPOWERBROADCAST @ 0x14003E140 (NtUserfnPOWERBROADCAST.c)
 *     NtUserQueryInformationThread @ 0x14003E400 (NtUserQueryInformationThread.c)
 *     ?ResizeVisExcludeMemory@@YAHPEAU_CalcVisRgnData@@@Z @ 0x140045BAC (-ResizeVisExcludeMemory@@YAHPEAU_CalcVisRgnData@@@Z.c)
 *     NtUserfnINDEVICECHANGE @ 0x140047020 (NtUserfnINDEVICECHANGE.c)
 *     NtUserCreateWindowEx @ 0x14004AF20 (NtUserCreateWindowEx.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVUDCOBJ@@HKAEBUTag@1@@Z @ 0x14005DC90 (-bInit@RFONTOBJ@@QEAAHAEAVUDCOBJ@@HKAEBUTag@1@@Z.c)
 *     ?GrepGetTextFaceW@@YAHAEAVUDCOBJ@@HPEAGH@Z @ 0x14005EFB0 (-GrepGetTextFaceW@@YAHAEAVUDCOBJ@@HPEAGH@Z.c)
 *     ?ppfeMapFont@LFONTCOREOBJ@@QEAAPEAVPFE@@AEAUPARAMETERS@MAPPER@@PEAKPEAU_POINTL@@1@Z @ 0x1400606A0 (-ppfeMapFont@LFONTCOREOBJ@@QEAAPEAVPFE@@AEAUPARAMETERS@MAPPER@@PEAKPEAU_POINTL@@1@Z.c)
 *     ?xxxRemoveDeleteMenuHelper@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@IKH@Z @ 0x1400701D4 (-xxxRemoveDeleteMenuHelper@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@IKH@Z.c)
 *     xxxInsertMenuItem @ 0x140071A30 (xxxInsertMenuItem.c)
 *     ?SetLPITEMInfoNoRedraw@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@@PEAU_UNICODE_STRING@@PEAH@Z @ 0x1400726F0 (-SetLPITEMInfoNoRedraw@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@.c)
 *     DefSetText @ 0x140073730 (DefSetText.c)
 *     ?MNAllocMenuItems@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@_N@Z @ 0x140073BE8 (-MNAllocMenuItems@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@_N@Z.c)
 *     NtUserGetRawInputDeviceInfo @ 0x140077300 (NtUserGetRawInputDeviceInfo.c)
 *     NtUserSystemParametersInfoForDpi @ 0x140079C40 (NtUserSystemParametersInfoForDpi.c)
 *     ?AddEllipsisAndDrawLine@@YAHPEAUHDC__@@HPEAGHKPEAUDRAWTEXTDATA@@H@Z @ 0x14007DD88 (-AddEllipsisAndDrawLine@@YAHPEAUHDC__@@HPEAGHKPEAUDRAWTEXTDATA@@H@Z.c)
 *     ?AllocTouchInputInfo@@YAPEAUHTOUCHINPUT__@@PEAUtagTHREADINFO@@IPEBUtagTOUCHINPUT@@IPEAK@Z @ 0x1400857EC (-AllocTouchInputInfo@@YAPEAUHTOUCHINPUT__@@PEAUtagTHREADINFO@@IPEBUtagTOUCHINPUT@@IPEAK@Z.c)
 *     ?Grow@?$CDynamicArray@PEAVIInputQueue@@$0HHHAHDFF@@@IEAAJI@Z @ 0x14008A7B4 (-Grow@-$CDynamicArray@PEAVIInputQueue@@$0HHHAHDFF@@@IEAAJI@Z.c)
 *     NtGdiTransformPoints @ 0x140095490 (NtGdiTransformPoints.c)
 *     NtUserMsgWaitForMultipleObjectsEx @ 0x14009E630 (NtUserMsgWaitForMultipleObjectsEx.c)
 *     RenderNineGridInternal @ 0x14009F6F0 (RenderNineGridInternal.c)
 *     DNG_StretchCol @ 0x1400A05D0 (DNG_StretchCol.c)
 *     DNG_DrawRow @ 0x1400A0760 (DNG_DrawRow.c)
 *     ?vStrWrite04@stretch@@YAXPEAU_STRRUN@1@PEAU_XRUNLEN@1@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1400A0C70 (-vStrWrite04@stretch@@YAXPEAU_STRRUN@1@PEAU_XRUNLEN@1@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z.c)
 *     ?vStrWrite32@stretch@@YAXPEAU_STRRUN@1@PEAU_XRUNLEN@1@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1400A1210 (-vStrWrite32@stretch@@YAXPEAU_STRRUN@1@PEAU_XRUNLEN@1@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z.c)
 *     ?vStrWrite01@stretch@@YAXPEAU_STRRUN@1@PEAU_XRUNLEN@1@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1400A2950 (-vStrWrite01@stretch@@YAXPEAU_STRRUN@1@PEAU_XRUNLEN@1@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z.c)
 *     NtUserProcessConnect @ 0x1400A5000 (NtUserProcessConnect.c)
 *     NtGdiSTROBJ_bGetAdvanceWidths @ 0x1400AA3D0 (NtGdiSTROBJ_bGetAdvanceWidths.c)
 *     ?NtGdiSTROBJ_bEnumInternal@@YAHPEAU_STROBJ@@PEAKPEAPEAU_GLYPHPOS@@H@Z @ 0x1400AB66C (-NtGdiSTROBJ_bEnumInternal@@YAHPEAU_STROBJ@@PEAKPEAPEAU_GLYPHPOS@@H@Z.c)
 *     ?UmfdHostSendCompleteWaitReceive@@YAJW4FontDriverType@@@Z @ 0x1400B339C (-UmfdHostSendCompleteWaitReceive@@YAJW4FontDriverType@@@Z.c)
 *     ?TryCopyMemoryFromProbedPointer@@YA_NPEAX0I@Z @ 0x1400B417C (-TryCopyMemoryFromProbedPointer@@YA_NPEAX0I@Z.c)
 *     ?Insert@?$CSortedVector@IPEAUFONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBIAEBQEAUFONTFILEVIEW@@@Z @ 0x1400B64AC (-Insert@-$CSortedVector@IPEAUFONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBIAEBQEAUFONTFILEVIEW@@@Z.c)
 *     BuildAndLoadLinkedFontRoutine @ 0x1400B7D40 (BuildAndLoadLinkedFontRoutine.c)
 *     ?bAppendSysDirectory@@YAHPEAGPEBGI@Z @ 0x1400B907C (-bAppendSysDirectory@@YAHPEAGPEBGI@Z.c)
 *     ??0MAPPER@@QEAA@AEAUPARAMETERS@0@PEAKPEAU_POINTL@@1PEBUtagENUMLOGFONTEXDVW@@PEBGK@Z @ 0x1400B99D4 (--0MAPPER@@QEAA@AEAUPARAMETERS@0@PEAKPEAU_POINTL@@1PEBUtagENUMLOGFONTEXDVW@@PEBGK@Z.c)
 *     NtGdiGetTextFaceW @ 0x1400BB210 (NtGdiGetTextFaceW.c)
 *     ?vInit@RFONTOBJ@@QEAAXAEAVUDCOBJ@@PEAVPFE@@PEAU_EUDCLOGFONT@@H@Z @ 0x1400BB830 (-vInit@RFONTOBJ@@QEAAXAEAVUDCOBJ@@PEAVPFE@@PEAU_EUDCLOGFONT@@H@Z.c)
 *     ?GrepGetOutlineTextMetrics@@YAKAEAVUDCOBJ@@KPEAU_OUTLINETEXTMETRICW@@PEAU_TMDIFF@@W4EntryPoint@RFONTOBJ@@@Z @ 0x1400BEDA0 (-GrepGetOutlineTextMetrics@@YAKAEAVUDCOBJ@@KPEAU_OUTLINETEXTMETRICW@@PEAU_TMDIFF@@W4EntryPoint@R.c)
 *     vProcessEntry @ 0x1400C1270 (vProcessEntry.c)
 *     ?GrepSetDIBitsToDeviceInternalImpl@@YAHAEAVXDCOBJ@@HHKKHHKKAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@KIHPEAX@Z @ 0x1400C5BA4 (-GrepSetDIBitsToDeviceInternalImpl@@YAHAEAVXDCOBJ@@HHKKHHKKAEAV-$umptr_r@E@@PEAUtagBITMAPINFO@@K.c)
 *     ?GreStretchDIBitsInternalImpl@@YAHPEAUHDC__@@HHHHHHHHAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@KKIPEAX@Z @ 0x1400C95C8 (-GreStretchDIBitsInternalImpl@@YAHPEAUHDC__@@HHHHHHHHAEAV-$umptr_r@E@@PEAUtagBITMAPINFO@@KKIPEAX.c)
 *     ?bSubtractComplex@RGNOBJ@@QEAAHPEAU_RECTL@@0H@Z @ 0x1400CFC34 (-bSubtractComplex@RGNOBJ@@QEAAHPEAU_RECTL@@0H@Z.c)
 *     ?ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z @ 0x1400D89F0 (-ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z.c)
 *     ?ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXKPEAX@Z @ 0x1400D8D1C (-ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXKPEAX@Z.c)
 *     NtGdiPATHOBJ_bEnum @ 0x1400D8DE0 (NtGdiPATHOBJ_bEnum.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1400D9ADC (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     ?pppUserModeCallback@@YAJKPEAXK0K@Z @ 0x1400D9D9C (-pppUserModeCallback@@YAJKPEAXK0K@Z.c)
 *     NtGdiFONTOBJ_pifi @ 0x1400D9EE0 (NtGdiFONTOBJ_pifi.c)
 *     ?bSafeReadBits@@YAHPEAX0K@Z @ 0x1400DC114 (-bSafeReadBits@@YAHPEAX0K@Z.c)
 *     ?bSafeCopyBits@@YAHPEAX0K@Z @ 0x1400DC5D4 (-bSafeCopyBits@@YAHPEAX0K@Z.c)
 *     ?GreCreateDIBBrush@@YAPEAUHBRUSH__@@PEAXKIHH0@Z @ 0x1400E40C0 (-GreCreateDIBBrush@@YAPEAUHBRUSH__@@PEAXKIHH0@Z.c)
 *     ShrinkDIB_CY @ 0x1400EDAE0 (ShrinkDIB_CY.c)
 *     ShrinkDIB_CY_SrkCX @ 0x1400EE710 (ShrinkDIB_CY_SrkCX.c)
 *     FastExpAA_CY @ 0x1400EF480 (FastExpAA_CY.c)
 *     FixupGrayScan @ 0x1400EFC9C (FixupGrayScan.c)
 *     FixupColorScan @ 0x1400F0050 (FixupColorScan.c)
 *     GrayShrinkDIB_CY @ 0x1400F0870 (GrayShrinkDIB_CY.c)
 *     ExpandDIB_CY @ 0x1400F11C0 (ExpandDIB_CY.c)
 *     xxxProcessSetWindowPosEvent @ 0x1400F48B0 (xxxProcessSetWindowPosEvent.c)
 *     vIFIMetricsToEnumLogFontExDvW @ 0x1400F8E98 (vIFIMetricsToEnumLogFontExDvW.c)
 *     ?bGrow@EFSOBJ@@QEAAHXZ @ 0x1400F8FE8 (-bGrow@EFSOBJ@@QEAAHXZ.c)
 *     ?WriteEFE@EFSOBJ@@QEAAXAEBU_EFENTRY@@AEAVPFEOBJ@@@Z @ 0x1400F9B3C (-WriteEFE@EFSOBJ@@QEAAXAEBU_EFENTRY@@AEAVPFEOBJ@@@Z.c)
 *     cjCopyFontDataW @ 0x1400F9D58 (cjCopyFontDataW.c)
 *     ?Remove@?$CSortedVector@_K_K@NSInstrumentation@@QEAA_NAEB_K@Z @ 0x1401010C0 (-Remove@-$CSortedVector@_K_K@NSInstrumentation@@QEAA_NAEB_K@Z.c)
 *     ?Insert@?$CSortedVector@_K_K@NSInstrumentation@@QEAA_NAEB_K0@Z @ 0x140101178 (-Insert@-$CSortedVector@_K_K@NSInstrumentation@@QEAA_NAEB_K0@Z.c)
 *     _GetUserObjectInformation @ 0x1401063F8 (_GetUserObjectInformation.c)
 *     NtUserSetInformationThread @ 0x140106950 (NtUserSetInformationThread.c)
 *     ?MakeITable@@YAHPEAEPEAURGBX@@H@Z @ 0x14010E158 (-MakeITable@@YAHPEAEPEAURGBX@@H@Z.c)
 *     NtGdiResizePalette @ 0x14010EC60 (NtGdiResizePalette.c)
 *     ??0PFFMEMOBJ@@QEAA@IPEBGKKPEAUtagDESIGNVECTOR@@K_KPEAUHDEV__@@PEAUDHPDEV__@@PEAVPFT@@KKPEAUFNTCHECKSUM@@PEAPEAUFONTFILEVIEW@@PEAU_UNIVERSAL_FONT_ID@@H@Z @ 0x140113D2C (--0PFFMEMOBJ@@QEAA@IPEBGKKPEAUtagDESIGNVECTOR@@K_KPEAUHDEV__@@PEAUDHPDEV__@@PEAVPFT@@KKPEAUFNTCH.c)
 *     GreGetCannonicalName @ 0x1401169A0 (GreGetCannonicalName.c)
 *     xxxInterSendMsgEx @ 0x14011A1D0 (xxxInterSendMsgEx.c)
 *     InputAABFDATAToAA24 @ 0x14011D8F0 (InputAABFDATAToAA24.c)
 *     ?bTriangleMesh@@YAHPEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAU_GRADIENT_TRIANGLE@@KKPEAU_RECTL@@4PEAU_POINTL@@@Z @ 0x140120574 (-bTriangleMesh@@YAHPEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAU_GRADIENT_TRIANGLE@@KKPEAU_R.c)
 *     ?bEngFastFillEnum@@YAHAEAVEPATHOBJ@@PEAU_RECTL@@KP6AX1KPEAX@ZP6AXJPEAU_ROW@@K2@Z2@Z @ 0x1401244C4 (-bEngFastFillEnum@@YAHAEAVEPATHOBJ@@PEAU_RECTL@@KP6AX1KPEAX@ZP6AXJPEAU_ROW@@K2@Z2@Z.c)
 *     ?CaptureUsermodeParameters@QueryTrueTypeOutlineRequest@@UEAAXPEAX@Z @ 0x140125A70 (-CaptureUsermodeParameters@QueryTrueTypeOutlineRequest@@UEAAXPEAX@Z.c)
 *     ?CaptureUsermodeParameters@QueryGlyphMetricsPlusBitsRequest@@UEAAXPEAX@Z @ 0x140125C00 (-CaptureUsermodeParameters@QueryGlyphMetricsPlusBitsRequest@@UEAAXPEAX@Z.c)
 *     ?CaptureUsermodeParameters@QueryAdvanceWidthsRequest@@UEAAXPEAX@Z @ 0x140125E50 (-CaptureUsermodeParameters@QueryAdvanceWidthsRequest@@UEAAXPEAX@Z.c)
 *     ?CaptureUsermodeParameters@QueryFontDataRequest@@UEAAXPEAX@Z @ 0x140125F00 (-CaptureUsermodeParameters@QueryFontDataRequest@@UEAAXPEAX@Z.c)
 *     HT_CreateDeviceHalftoneInfo @ 0x140127DF4 (HT_CreateDeviceHalftoneInfo.c)
 *     GetCachedSMP @ 0x140129054 (GetCachedSMP.c)
 *     CreateStandardMonoPattern @ 0x1401299CC (CreateStandardMonoPattern.c)
 *     NtUserRegisterRawInputDevices @ 0x14012F7B0 (NtUserRegisterRawInputDevices.c)
 *     InitializeFUDI @ 0x1401399E0 (InitializeFUDI.c)
 *     AAHalftoneBitmap @ 0x14013A0D8 (AAHalftoneBitmap.c)
 *     ?vSrcCopyS32D32Identity@@YAXPEAUBLTINFO@@@Z @ 0x140145860 (-vSrcCopyS32D32Identity@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS1D1LtoR@@YAXPEAUBLTINFO@@@Z @ 0x140150820 (-vSrcCopyS1D1LtoR@@YAXPEAUBLTINFO@@@Z.c)
 *     ?bGetRegString@@YA_NPEAXPEBGPEAGK@Z @ 0x140151D00 (-bGetRegString@@YA_NPEAXPEBGPEAGK@Z.c)
 *     ?bHookRedir@@YAHAEAVXDCOBJ@@@Z @ 0x1401550B4 (-bHookRedir@@YAHAEAVXDCOBJ@@@Z.c)
 *     NtGdiGetDIBitsInternal @ 0x140155610 (NtGdiGetDIBitsInternal.c)
 *     ?CreateUsermodeParameters@FontManagementRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x140157B10 (-CreateUsermodeParameters@FontManagementRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z.c)
 *     ?CreateUsermodeParameters@LoadFontFileRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x140157D90 (-CreateUsermodeParameters@LoadFontFileRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z.c)
 *     ?CreateUsermodeParameters@QueryGlyphMetricsPlusBitsRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x140158560 (-CreateUsermodeParameters@QueryGlyphMetricsPlusBitsRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z.c)
 *     ?CreateUsermodeParameters@QueryAdvanceWidthsRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x1401586F0 (-CreateUsermodeParameters@QueryAdvanceWidthsRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z.c)
 *     ?CreateUsermodeParameters@QueryFontDataRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x140158980 (-CreateUsermodeParameters@QueryFontDataRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z.c)
 *     ?bPushMergeScrScan@STACKOBJ@@QEAAHXZ @ 0x14015C304 (-bPushMergeScrScan@STACKOBJ@@QEAAHXZ.c)
 *     ?bExpandScanline@STACKOBJ@@QEAAHKK@Z @ 0x14015C704 (-bExpandScanline@STACKOBJ@@QEAAHKK@Z.c)
 *     NtUserConsoleControl @ 0x14015D3C0 (NtUserConsoleControl.c)
 *     ?bCaptureBitmapInfo@@YAHPEAUtagBITMAPINFO@@KIPEAPEAU1@@Z @ 0x1401630F8 (-bCaptureBitmapInfo@@YAHPEAUtagBITMAPINFO@@KIPEAPEAU1@@Z.c)
 *     vSpDynamicModeChange @ 0x14016C8D0 (vSpDynamicModeChange.c)
 *     NtUserInternalGetWindowText @ 0x140170390 (NtUserInternalGetWindowText.c)
 *     ??$read@E@?$umptr_r@E@@QEBA_NPEAE_K_J@Z @ 0x1401775DC (--$read@E@-$umptr_r@E@@QEBA_NPEAE_K_J@Z.c)
 *     ??$read@U_POINTL@@@?$umptr_r@UtagPOINT@@@@QEBA_NPEAU_POINTL@@_K_J@Z @ 0x1401776EC (--$read@U_POINTL@@@-$umptr_r@UtagPOINT@@@@QEBA_NPEAU_POINTL@@_K_J@Z.c)
 *     NtGdiSetDIBitsToDeviceInternal @ 0x140177AC0 (NtGdiSetDIBitsToDeviceInternal.c)
 *     ?bExtendGlyphSet@@YA_NPEAPEAU_FD_GLYPHSET@@0@Z @ 0x1401797B8 (-bExtendGlyphSet@@YA_NPEAPEAU_FD_GLYPHSET@@0@Z.c)
 *     ?ConvertToAndFromWideChar@@YAHIPEAGHPEADHH@Z @ 0x14017A1B8 (-ConvertToAndFromWideChar@@YAHIPEAGHPEADHH@Z.c)
 *     ?WriteFD_GLYPHSET@@YAHPEAU_FD_GLYPHSET@@0K@Z @ 0x14017A604 (-WriteFD_GLYPHSET@@YAHPEAU_FD_GLYPHSET@@0K@Z.c)
 *     ?vFillGRectDIB32BGRA@@YAXPEAVSURFACE@@PEAU_GRADIENTRECTDATA@@@Z @ 0x14017A960 (-vFillGRectDIB32BGRA@@YAXPEAVSURFACE@@PEAU_GRADIENTRECTDATA@@@Z.c)
 *     NtGdiCreateDIBitmapInternal @ 0x14017AF20 (NtGdiCreateDIBitmapInternal.c)
 *     NtGdiHfontCreate @ 0x14017CE20 (NtGdiHfontCreate.c)
 *     GreGetPaletteEntries @ 0x140180BD0 (GreGetPaletteEntries.c)
 *     NtGdiStretchDIBitsInternal @ 0x1401858D0 (NtGdiStretchDIBitsInternal.c)
 *     NtGdiDrawStream @ 0x140186D60 (NtGdiDrawStream.c)
 *     ?vStrWrite24@stretch@@YAXPEAU_STRRUN@1@PEAU_XRUNLEN@1@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x14018A9C0 (-vStrWrite24@stretch@@YAXPEAU_STRRUN@1@PEAU_XRUNLEN@1@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z.c)
 *     ?CaptureUsermodeParameters@QueryTrueTypeTableRequest@@UEAAXPEAX@Z @ 0x14018CFF0 (-CaptureUsermodeParameters@QueryTrueTypeTableRequest@@UEAAXPEAX@Z.c)
 *     TextCopy @ 0x14018D23C (TextCopy.c)
 *     xxxSystemParametersInfoWorker @ 0x14018F9C8 (xxxSystemParametersInfoWorker.c)
 *     _BuildNameList @ 0x140194F68 (_BuildNameList.c)
 *     ?vRop2FunctionA@@YAXPEAK00K@Z @ 0x140195DA0 (-vRop2FunctionA@@YAXPEAK00K@Z.c)
 *     NtGdiEnumFonts @ 0x140198BE0 (NtGdiEnumFonts.c)
 *     ?vSrcCopyS24D24Identity@@YAXPEAUBLTINFO@@@Z @ 0x140199DE0 (-vSrcCopyS24D24Identity@@YAXPEAUBLTINFO@@@Z.c)
 *     NtGdiExtCreatePen @ 0x140199EB0 (NtGdiExtCreatePen.c)
 *     ReferenceClass @ 0x14019A370 (ReferenceClass.c)
 *     ExpandDIB_CY_ExpCX @ 0x14019E5E0 (ExpandDIB_CY_ExpCX.c)
 *     ?Remove@?$CSortedVector@IPEAUFONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBI@Z @ 0x14019F660 (-Remove@-$CSortedVector@IPEAUFONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBI@Z.c)
 *     DwmAsyncUpdateVisRgn @ 0x1401A082C (DwmAsyncUpdateVisRgn.c)
 *     ?FntCacheAllocate@UmfdFontCacheEntry@@SA_NPEAEIIW4FontDriverType@@@Z @ 0x1401A1708 (-FntCacheAllocate@UmfdFontCacheEntry@@SA_NPEAEIIW4FontDriverType@@@Z.c)
 *     ?vFillGRectDIB24BGR@@YAXPEAVSURFACE@@PEAU_GRADIENTRECTDATA@@@Z @ 0x1401A24A0 (-vFillGRectDIB24BGR@@YAXPEAVSURFACE@@PEAU_GRADIENTRECTDATA@@@Z.c)
 *     ?bSetHTSrcSurfInfo@@YAHPEAU_SURFOBJ@@VXEPALOBJ@@PEAU_HTSURFACEINFO@@PEAU_XLATEOBJ@@@Z @ 0x1401A6E7C (-bSetHTSrcSurfInfo@@YAHPEAU_SURFOBJ@@VXEPALOBJ@@PEAU_HTSURFACEINFO@@PEAU_XLATEOBJ@@@Z.c)
 *     NtGdiDoPalette @ 0x1401A77D0 (NtGdiDoPalette.c)
 *     ?SafeCopyUnicodeString@@YAXPEAU_UNICODE_STRING@@QEAU1@@Z @ 0x1401B10E0 (-SafeCopyUnicodeString@@YAXPEAU_UNICODE_STRING@@QEAU1@@Z.c)
 *     ?ProbeAndReadIFIMETRICS@@YAPEAU_IFIMETRICS@@PEAU1@H_K@Z @ 0x1401B35E0 (-ProbeAndReadIFIMETRICS@@YAPEAU_IFIMETRICS@@PEAU1@H_K@Z.c)
 *     ?ProbeAndReadFD_GLYPHSET@@YAPEAU_FD_GLYPHSET@@PEBU1@HK_K@Z @ 0x1401B39AC (-ProbeAndReadFD_GLYPHSET@@YAPEAU_FD_GLYPHSET@@PEBU1@HK_K@Z.c)
 *     RemoveProcessFromJob @ 0x1401B81E0 (RemoveProcessFromJob.c)
 *     ?vSrcCopyS16D16Identity@@YAXPEAUBLTINFO@@@Z @ 0x1401B8790 (-vSrcCopyS16D16Identity@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS8D8IdentityLtoR@@YAXPEAUBLTINFO@@@Z @ 0x1401BBB80 (-vSrcCopyS8D8IdentityLtoR@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vRop2FunctionC@@YAXPEAK00K@Z @ 0x1401BC360 (-vRop2FunctionC@@YAXPEAK00K@Z.c)
 *     ?vSrcCopyS4D4Identity@@YAXPEAUBLTINFO@@@Z @ 0x1401BEDE0 (-vSrcCopyS4D4Identity@@YAXPEAUBLTINFO@@@Z.c)
 *     ?UMPDDrvEscape@@YAKPEAU_SURFOBJ@@KKPEAXK1@Z @ 0x1401C0320 (-UMPDDrvEscape@@YAKPEAU_SURFOBJ@@KKPEAXK1@Z.c)
 *     ?pxlo@UMPDOBJ@@QEAAHPEAPEAU_XLATEOBJ@@@Z @ 0x1401C11A4 (-pxlo@UMPDOBJ@@QEAAHPEAPEAU_XLATEOBJ@@@Z.c)
 *     ?UMPDDrvEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAKKPEAUtagDEVINFO@@PEAUHDEV__@@1PEAX@Z @ 0x1401C6230 (-UMPDDrvEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAKKPEAUtagDEVINFO@.c)
 *     ?CaptureUsermodeParameters@QueryFontFileRequest@@UEAAXPEAX@Z @ 0x1401CE420 (-CaptureUsermodeParameters@QueryFontFileRequest@@UEAAXPEAX@Z.c)
 *     ?pSpGrowRanges@@YAPEAU_SPRITERANGE@@PEAU_SPRITESTATE@@PEAU1@PEAPEAU_SPRITESCAN@@PEAPEAU1@@Z @ 0x1401CE680 (-pSpGrowRanges@@YAPEAU_SPRITERANGE@@PEAU_SPRITESTATE@@PEAU1@PEAPEAU_SPRITESCAN@@PEAPEAU1@@Z.c)
 *     NtUserCreateLocalMemHandle @ 0x1401D11E0 (NtUserCreateLocalMemHandle.c)
 *     NtGdiGetMonitorID @ 0x1401D2400 (NtGdiGetMonitorID.c)
 *     ?LOADSTRING@@YAHPEAXIPEAGH@Z @ 0x1401D3774 (-LOADSTRING@@YAHPEAXIPEAGH@Z.c)
 *     ?ulGetEntries@XEPALOBJ@@QEAAKKKPEAUtagPALETTEENTRY@@H@Z @ 0x1401D4D18 (-ulGetEntries@XEPALOBJ@@QEAAKKKPEAUtagPALETTEENTRY@@H@Z.c)
 *     NtGdiGetGlyphIndicesWInternal @ 0x1401D6720 (NtGdiGetGlyphIndicesWInternal.c)
 *     ?CacheGlyphBits@UMPDOBJ@@QEAAPEAU_GLYPHBITS@@PEAU2@@Z @ 0x1401D9B88 (-CacheGlyphBits@UMPDOBJ@@QEAAPEAU_GLYPHBITS@@PEAU2@@Z.c)
 *     ?GrepGetUFI@@YAHAEAVUDCOBJ@@PEAU_UNIVERSAL_FONT_ID@@PEAUtagDESIGNVECTOR@@PEAK33PEAPEAXW4EntryPoint@RFONTOBJ@@@Z @ 0x1401DA444 (-GrepGetUFI@@YAHAEAVUDCOBJ@@PEAU_UNIVERSAL_FONT_ID@@PEAUtagDESIGNVECTOR@@PEAK33PEAPEAXW4EntryPoi.c)
 *     ?vFillGRectDIB32RGB@@YAXPEAVSURFACE@@PEAU_GRADIENTRECTDATA@@@Z @ 0x1401DD040 (-vFillGRectDIB32RGB@@YAXPEAVSURFACE@@PEAU_GRADIENTRECTDATA@@@Z.c)
 *     RemoteShadowCleanup @ 0x1401E0124 (RemoteShadowCleanup.c)
 *     ?UmfdEscPATHOBJ_bCommonTo@@YAHP6AHPEAU_PATHOBJ@@PEAU_POINTFIX@@K@Z01K@Z @ 0x1401E0DF0 (-UmfdEscPATHOBJ_bCommonTo@@YAHP6AHPEAU_PATHOBJ@@PEAU_POINTFIX@@K@Z01K@Z.c)
 *     _CreateAcceleratorTable @ 0x1401E24C8 (_CreateAcceleratorTable.c)
 *     NtGdiSetLinkedUFIs @ 0x1401E4C60 (NtGdiSetLinkedUFIs.c)
 *     ?bSetLinkedUFIs@XDCOBJ@@QEAAHPEAU_UNIVERSAL_FONT_ID@@I@Z @ 0x1401E4DD4 (-bSetLinkedUFIs@XDCOBJ@@QEAAHPEAU_UNIVERSAL_FONT_ID@@I@Z.c)
 *     SfnIMECONTROL @ 0x1401E57B0 (SfnIMECONTROL.c)
 *     AllocateUnicodeString @ 0x1401E85D0 (AllocateUnicodeString.c)
 *     ?vFillGRectDIB32Bitfields@@YAXPEAVSURFACE@@PEAU_GRADIENTRECTDATA@@@Z @ 0x1401ED5F0 (-vFillGRectDIB32Bitfields@@YAXPEAVSURFACE@@PEAU_GRADIENTRECTDATA@@@Z.c)
 *     _ConvertMemHandle @ 0x1401EF21C (_ConvertMemHandle.c)
 *     ?CaptureUsermodeParameters@FontManagementRequest@@UEAAXPEAX@Z @ 0x1401EF5D0 (-CaptureUsermodeParameters@FontManagementRequest@@UEAAXPEAX@Z.c)
 *     _SetWindowStationUser @ 0x1401F3A08 (_SetWindowStationUser.c)
 *     ?GetProcessSessionFonts@@YAJPEAU_EPROCESS@@IIPEAI1PEAPEAXPEAG@Z @ 0x1401F8694 (-GetProcessSessionFonts@@YAJPEAU_EPROCESS@@IIPEAI1PEAPEAXPEAG@Z.c)
 *     NtUserGetTouchInputInfo @ 0x1401F9DF0 (NtUserGetTouchInputInfo.c)
 *     ??0PFFMEMOBJ@@QEAA@PEAVPFF@@KKPEAVPFT@@@Z @ 0x1401FB214 (--0PFFMEMOBJ@@QEAA@PEAVPFF@@KKPEAVPFT@@@Z.c)
 *     FONTOBJ_vGetInfo @ 0x1401FB690 (FONTOBJ_vGetInfo.c)
 *     ?UmfdEscParseFontResources@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1401FD678 (-UmfdEscParseFontResources@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ?ReadLinearityDataImp@@YAHPEAXU_UNICODE_STRING@@W4tagCALIBRATION_TYPE@@PEAKPEAPEAE@Z @ 0x140200790 (-ReadLinearityDataImp@@YAHPEAXU_UNICODE_STRING@@W4tagCALIBRATION_TYPE@@PEAKPEAPEAE@Z.c)
 *     ?LoadCPUserPreferences@@YAHPEAU_UNICODE_STRING@@K@Z @ 0x140207A74 (-LoadCPUserPreferences@@YAHPEAU_UNICODE_STRING@@K@Z.c)
 *     ?UMPDDrvDitherColor@@YAKPEAUDHPDEV__@@KKPEAK@Z @ 0x140207F50 (-UMPDDrvDitherColor@@YAKPEAUDHPDEV__@@KKPEAK@Z.c)
 *     PREALLOCMEM2 @ 0x140208170 (PREALLOCMEM2.c)
 *     NtGdiCreateDIBBrush @ 0x14020DF40 (NtGdiCreateDIBBrush.c)
 *     ?bCaptureLINEATTRS@@YAHPEAPEAU_LINEATTRS@@PEAU1@@Z @ 0x140212A20 (-bCaptureLINEATTRS@@YAHPEAPEAU_LINEATTRS@@PEAU1@@Z.c)
 *     ?UMPDDrvQueryFontData@@YAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z @ 0x140215600 (-UMPDDrvQueryFontData@@YAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z.c)
 *     xxxClientCopyDDEIn1 @ 0x140215C30 (xxxClientCopyDDEIn1.c)
 *     ?Transfer@ThreadRestrictNewHandlesRegion@@QEAAXPEAV1@@Z @ 0x140217AC8 (-Transfer@ThreadRestrictNewHandlesRegion@@QEAAXPEAV1@@Z.c)
 *     NtGdiMakeFontDir @ 0x14021BEF0 (NtGdiMakeFontDir.c)
 *     ?ZOrderByOwner@@YAPEAUtagSMWP@@PEAU1@@Z @ 0x14022AC48 (-ZOrderByOwner@@YAPEAUtagSMWP@@PEAU1@@Z.c)
 *     NtUserGetGestureConfig @ 0x140242510 (NtUserGetGestureConfig.c)
 *     NtUserSetGestureConfig @ 0x140246270 (NtUserSetGestureConfig.c)
 *     NtUserSetWindowCompositionAttribute @ 0x140246D90 (NtUserSetWindowCompositionAttribute.c)
 *     NtUserUserHandleGrantAccess @ 0x140247B90 (NtUserUserHandleGrantAccess.c)
 *     xxxRemoteReconnect @ 0x14024FFF8 (xxxRemoteReconnect.c)
 *     ?DdcciGetCapabilitiesStringFromMonitor@CPhysicalMonitorHandle@@AEAAJXZ @ 0x14025C4B0 (-DdcciGetCapabilitiesStringFromMonitor@CPhysicalMonitorHandle@@AEAAJXZ.c)
 *     DwmSyncGetCompositionAttribute @ 0x14025C770 (DwmSyncGetCompositionAttribute.c)
 *     NtGdiGetLinkedUFIs @ 0x14025CFA0 (NtGdiGetLinkedUFIs.c)
 *     NtGdiExtEscape @ 0x14025E9E0 (NtGdiExtEscape.c)
 *     NtGdiExtTextOutW @ 0x14025F050 (NtGdiExtTextOutW.c)
 *     NtGdiGetCharABCWidthsW @ 0x14025F670 (NtGdiGetCharABCWidthsW.c)
 *     NtGdiGetCharWidthW @ 0x14025FA10 (NtGdiGetCharWidthW.c)
 *     NtGdiGetFontData @ 0x14025FC90 (NtGdiGetFontData.c)
 *     NtGdiGetFontUnicodeRanges @ 0x14025FEE0 (NtGdiGetFontUnicodeRanges.c)
 *     NtGdiGetGlyphOutline @ 0x140260020 (NtGdiGetGlyphOutline.c)
 *     NtGdiGetKerningPairs @ 0x1402602F0 (NtGdiGetKerningPairs.c)
 *     NtGdiGetOutlineTextMetricsInternalW @ 0x140260450 (NtGdiGetOutlineTextMetricsInternalW.c)
 *     NtGdiGetRealizationInfo @ 0x140260620 (NtGdiGetRealizationInfo.c)
 *     NtGdiGetTextExtent @ 0x1402608F0 (NtGdiGetTextExtent.c)
 *     NtGdiGetTextExtentExW @ 0x140260B20 (NtGdiGetTextExtentExW.c)
 *     NtGdiGetUFI @ 0x140261040 (NtGdiGetUFI.c)
 *     NtGdiPolyTextOutW @ 0x140261230 (NtGdiPolyTextOutW.c)
 *     ?Grow@?$CDynamicArray@PEAUtagWND@@$0HHHAHDFF@@@IEAAJI@Z @ 0x140264EFC (-Grow@-$CDynamicArray@PEAUtagWND@@$0HHHAHDFF@@@IEAAJI@Z.c)
 *     GreRealizePalette @ 0x140266580 (GreRealizePalette.c)
 *     ?FormFullImageName@@YAKPEBU_UNICODE_STRING@@PEAU1@1@Z @ 0x140266DF4 (-FormFullImageName@@YAKPEBU_UNICODE_STRING@@PEAU1@1@Z.c)
 *     AllocGestureInfo @ 0x14026761C (AllocGestureInfo.c)
 *     ExpandHTPatX @ 0x140268578 (ExpandHTPatX.c)
 *     ?vSrcAlignCopyMemory@@YAXPEAE0K@Z @ 0x14026AAA0 (-vSrcAlignCopyMemory@@YAXPEAE0K@Z.c)
 *     ?bUnHookBmpDrv@@YAHAEAVXDCOBJ@@@Z @ 0x14026AE14 (-bUnHookBmpDrv@@YAHAEAVXDCOBJ@@@Z.c)
 *     ?bUnHookRedir@@YAHAEAVXDCOBJ@@@Z @ 0x14026AF84 (-bUnHookRedir@@YAHAEAVXDCOBJ@@@Z.c)
 *     ?RegQueryValueCal@@YAJPEAXU_UNICODE_STRING@@KPEAEKPEAK@Z @ 0x14026EEB8 (-RegQueryValueCal@@YAJPEAXU_UNICODE_STRING@@KPEAEKPEAK@Z.c)
 *     ?PostHidInput@@YAHPEAUDEVICEINFO@@PEAXKPEAUtagWND@@_K@Z @ 0x140271E98 (-PostHidInput@@YAHPEAUDEVICEINFO@@PEAXKPEAUtagWND@@_K@Z.c)
 *     ?DeviceCDROMNotifyWorker@@YAJPEAU_TARGET_DEVICE_CUSTOM_NOTIFICATION@@PEAU_CDROM_NOTIFY@@@Z @ 0x140278C80 (-DeviceCDROMNotifyWorker@@YAJPEAU_TARGET_DEVICE_CUSTOM_NOTIFICATION@@PEAU_CDROM_NOTIFY@@@Z.c)
 *     ?DeviceClassCDROMNotifyWorker@@YAJPEAU_DEVICE_INTERFACE_CHANGE_NOTIFICATION@@@Z @ 0x140278EF8 (-DeviceClassCDROMNotifyWorker@@YAJPEAU_DEVICE_INTERFACE_CHANGE_NOTIFICATION@@@Z.c)
 *     ?ProbeAndCaptureSoftKbdData@@YAPEAUtagSOFTKBDDATA@@PEAU1@@Z @ 0x14027F9D4 (-ProbeAndCaptureSoftKbdData@@YAPEAUtagSOFTKBDDATA@@PEAU1@@Z.c)
 *     GetTaskName @ 0x1402882B8 (GetTaskName.c)
 *     ?ProbeAndDeepCaptureWinStaDesktopObjectAttributes@@YAJHPEAU_OBJECT_ATTRIBUTES@@AEAY0BAA@GAEAU1@AEAU_SECURITY_QUALITY_OF_SERVICE@@AEAPEAXAEAU_UNICODE_STRING@@AEAPEAG@Z @ 0x14028A568 (-ProbeAndDeepCaptureWinStaDesktopObjectAttributes@@YAJHPEAU_OBJECT_ATTRIBUTES@@AEAY0BAA@GAEAU1@A.c)
 *     ?SetHighContrastWorker@@YAHREAUtagINTERNALSETHIGHCONTRAST@@HPEAH@Z @ 0x14028FC5C (-SetHighContrastWorker@@YAHREAUtagINTERNALSETHIGHCONTRAST@@HPEAH@Z.c)
 *     ?GRID_CopyHidData@@YAIQEAUtagHIDDATA@@IREAXPEAI@Z @ 0x140290B54 (-GRID_CopyHidData@@YAIQEAUtagHIDDATA@@IREAXPEAI@Z.c)
 *     NtUserCtxDisplayIOCtl @ 0x140293830 (NtUserCtxDisplayIOCtl.c)
 *     NtUserDrawCaptionTemp @ 0x1402940D0 (NtUserDrawCaptionTemp.c)
 *     NtUserFindWindowEx @ 0x140295160 (NtUserFindWindowEx.c)
 *     NtUserGetClassInfoEx @ 0x140295740 (NtUserGetClassInfoEx.c)
 *     NtUserGetGestureExtArgs @ 0x1402961E0 (NtUserGetGestureExtArgs.c)
 *     NtUserGetInteractiveCtrlSupportedWaveforms @ 0x1402965B0 (NtUserGetInteractiveCtrlSupportedWaveforms.c)
 *     NtUserGetWindowCompositionAttribute @ 0x1402974D0 (NtUserGetWindowCompositionAttribute.c)
 *     NtUserRegisterClassExWOW @ 0x14029A770 (NtUserRegisterClassExWOW.c)
 *     NtUserResolveDesktopForWOW @ 0x14029BF60 (NtUserResolveDesktopForWOW.c)
 *     NtUserSetCalibrationData @ 0x14029C8E0 (NtUserSetCalibrationData.c)
 *     NtUserfnINLPHLPSTRUCT @ 0x1402A2200 (NtUserfnINLPHLPSTRUCT.c)
 *     ?_GrowListeners@Edgy@@YAHAEAUtagEDGY_DATA@@@Z @ 0x1402A46EC (-_GrowListeners@Edgy@@YAHAEAUtagEDGY_DATA@@@Z.c)
 *     ?_InitializeData@Edgy@@YAPEAUtagEDGY_DATA@@PEAUtagDESKTOP@@@Z @ 0x1402A49DC (-_InitializeData@Edgy@@YAPEAUtagEDGY_DATA@@PEAUtagDESKTOP@@@Z.c)
 *     ?_RemoveListenerCore@Edgy@@YAXAEAUtagEDGY_DATA@@PEAUtagEDGY_LISTENER@@@Z @ 0x1402A4CDC (-_RemoveListenerCore@Edgy@@YAXAEAUtagEDGY_DATA@@PEAUtagEDGY_LISTENER@@@Z.c)
 *     ?CaptureBroadcastString@@YAHPEAU_LARGE_UNICODE_STRING@@REAU_LARGE_STRING@@@Z @ 0x1402B153C (-CaptureBroadcastString@@YAHPEAU_LARGE_UNICODE_STRING@@REAU_LARGE_STRING@@@Z.c)
 *     SetAppCompatFlags @ 0x1402B1970 (SetAppCompatFlags.c)
 *     ?DIBtoDIBV5@@YAPEAUBITMAPV5HEADER@@REAUtagBITMAPINFOHEADER@@K@Z @ 0x1402B2050 (-DIBtoDIBV5@@YAPEAUBITMAPV5HEADER@@REAUtagBITMAPINFOHEADER@@K@Z.c)
 *     RemoteShadowStart @ 0x1402B6EFC (RemoteShadowStart.c)
 *     SfnPOUTLPINT @ 0x1402BAED0 (SfnPOUTLPINT.c)
 *     xxxClientCopyDDEOut1 @ 0x1402BB994 (xxxClientCopyDDEOut1.c)
 *     ?UserGetDwmCursorShape@CursorApiRouter@@QEAAKKREAXKREAK@Z @ 0x1402DB118 (-UserGetDwmCursorShape@CursorApiRouter@@QEAAKKREAXKREAK@Z.c)
 *     ?ParseInputReport@InteractiveControlInput@@QEAAJPEAEK@Z @ 0x1402ECB08 (-ParseInputReport@InteractiveControlInput@@QEAAJPEAEK@Z.c)
 *     AddBGRMapCache @ 0x1402F3708 (AddBGRMapCache.c)
 *     CacheRGBToXYZ @ 0x1402F3824 (CacheRGBToXYZ.c)
 *     ComputeBGRMappingTable @ 0x1402F3914 (ComputeBGRMappingTable.c)
 *     FindBGRMapCache @ 0x1402F4448 (FindBGRMapCache.c)
 *     TrimBGRMapCache @ 0x1402F48F8 (TrimBGRMapCache.c)
 *     CreateHalftoneBrushPat @ 0x1402F49F0 (CreateHalftoneBrushPat.c)
 *     BltMask_CY @ 0x1402F8050 (BltMask_CY.c)
 *     ShrinkMask_CY @ 0x1402F8730 (ShrinkMask_CY.c)
 *     GrayExpandDIB_CY @ 0x1402F8ED0 (GrayExpandDIB_CY.c)
 *     GrayExpandDIB_CY_ExpCX @ 0x1402F9650 (GrayExpandDIB_CY_ExpCX.c)
 *     ?bHookBmpDrv@@YAHAEAVXDCOBJ@@@Z @ 0x1402FC664 (-bHookBmpDrv@@YAHAEAVXDCOBJ@@@Z.c)
 *     ?bCopySection@@YAHPEAX0_K@Z @ 0x1403045E0 (-bCopySection@@YAHPEAX0_K@Z.c)
 *     ?GrepGetCharacterPlacementW@@YAKAEAVUDCOBJ@@PEAGKKPEAUtagGCP_RESULTSW@@KW4EntryPoint@RFONTOBJ@@@Z @ 0x140310390 (-GrepGetCharacterPlacementW@@YAKAEAVUDCOBJ@@PEAGKKPEAUtagGCP_RESULTSW@@KW4EntryPoint@RFONTOBJ@@@.c)
 *     ?vStrWrite08@stretch@@YAXPEAU_STRRUN@1@PEAU_XRUNLEN@1@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x140313450 (-vStrWrite08@stretch@@YAXPEAU_STRRUN@1@PEAU_XRUNLEN@1@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z.c)
 *     ?vStrWrite16@stretch@@YAXPEAU_STRRUN@1@PEAU_XRUNLEN@1@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x140313760 (-vStrWrite16@stretch@@YAXPEAU_STRRUN@1@PEAU_XRUNLEN@1@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z.c)
 *     ?vPatCpyRect1_6x6@@YAXPEAU_PATBLTFRAME@@H@Z @ 0x140314110 (-vPatCpyRect1_6x6@@YAXPEAU_PATBLTFRAME@@H@Z.c)
 *     ?vSrcCopyS1D1RtoL@@YAXPEAUBLTINFO@@@Z @ 0x140316570 (-vSrcCopyS1D1RtoL@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS8D8IdentityRtoL@@YAXPEAUBLTINFO@@@Z @ 0x1403170D0 (-vSrcCopyS8D8IdentityRtoL@@YAXPEAUBLTINFO@@@Z.c)
 *     ?WriteAbsolute8@@YAHPEBEPEAEH0@Z @ 0x14031731C (-WriteAbsolute8@@YAHPEBEPEAEH0@Z.c)
 *     ?WriteAbsolute4@@YAHPEBEPEAEH0@Z @ 0x1403184F4 (-WriteAbsolute4@@YAHPEBEPEAEH0@Z.c)
 *     ?bAddPreComputedFastFillRects@PRECOMPUTE@@SAHAEAVEPATHOBJ@@PEAU_RECTL@@K@Z @ 0x140319534 (-bAddPreComputedFastFillRects@PRECOMPUTE@@SAHAEAVEPATHOBJ@@PEAU_RECTL@@K@Z.c)
 *     ?bAddPreComputedFastStrokeRects@PRECOMPUTE@@SAHAEAVEPATHOBJ@@PEAU_RECTL@@K@Z @ 0x140319614 (-bAddPreComputedFastStrokeRects@PRECOMPUTE@@SAHAEAVEPATHOBJ@@PEAU_RECTL@@K@Z.c)
 *     ?vFillGRectDIB24Bitfields@@YAXPEAVSURFACE@@PEAU_GRADIENTRECTDATA@@@Z @ 0x14031A660 (-vFillGRectDIB24Bitfields@@YAXPEAVSURFACE@@PEAU_GRADIENTRECTDATA@@@Z.c)
 *     ?vFillGRectDIB24RGB@@YAXPEAVSURFACE@@PEAU_GRADIENTRECTDATA@@@Z @ 0x14031A950 (-vFillGRectDIB24RGB@@YAXPEAVSURFACE@@PEAU_GRADIENTRECTDATA@@@Z.c)
 *     ?BltLnkReadPat4@@YAXPEAEKPEBEKKKK@Z @ 0x14031FAF0 (-BltLnkReadPat4@@YAXPEAEKPEBEKKKK@Z.c)
 *     EngHangNotification @ 0x140322EA0 (EngHangNotification.c)
 *     ?DoFontManagement@@YAKAEAVUDCOBJ@@KKPEAXK1AEBUTag@RFONTOBJ@@@Z @ 0x140325F00 (-DoFontManagement@@YAKAEAVUDCOBJ@@KKPEAXK1AEBUTag@RFONTOBJ@@@Z.c)
 *     ?GreGetUFIPathname@@YAHPEAU_UNIVERSAL_FONT_ID@@PEAKPEAGK1KPEAH1PEAX31@Z @ 0x14032641C (-GreGetUFIPathname@@YAHPEAU_UNIVERSAL_FONT_ID@@PEAKPEAGK1KPEAH1PEAX31@Z.c)
 *     ?iOpenGLExtEscape@@YAHAEAVXDCOBJ@@HHPEAXH1@Z @ 0x140326F78 (-iOpenGLExtEscape@@YAHAEAVXDCOBJ@@HHPEAXH1@Z.c)
 *     NtGdiAddRemoteMMInstanceToDC @ 0x140327AD0 (NtGdiAddRemoteMMInstanceToDC.c)
 *     NtGdiStartDoc @ 0x140327FB0 (NtGdiStartDoc.c)
 *     ?ReAllocate@?$CSortedVector@IPEAUFONTFILEVIEW@@@NSInstrumentation@@AEAA_N_K@Z @ 0x140330384 (-ReAllocate@-$CSortedVector@IPEAUFONTFILEVIEW@@@NSInstrumentation@@AEAA_N_K@Z.c)
 *     ?UmfdEscEngCreateFile@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x14033042C (-UmfdEscEngCreateFile@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ?BackPropagateLargeBitmapBits@UMPDOBJ@@QEAAXPEAU_SURFOBJ@@PEAXH@Z @ 0x140332480 (-BackPropagateLargeBitmapBits@UMPDOBJ@@QEAAXPEAU_SURFOBJ@@PEAXH@Z.c)
 *     ?BackPropagateSmallBitmapBits@UMPDOBJ@@QEAAXPEAU_SURFOBJ@@PEAXH@Z @ 0x140332660 (-BackPropagateSmallBitmapBits@UMPDOBJ@@QEAAXPEAU_SURFOBJ@@PEAXH@Z.c)
 *     ?ProbeAndReadFD_KERNINGPAIR@@YAPEAU_FD_KERNINGPAIR@@PEBU1@H_K@Z @ 0x140332758 (-ProbeAndReadFD_KERNINGPAIR@@YAPEAU_FD_KERNINGPAIR@@PEBU1@H_K@Z.c)
 *     ?UMPDDrvFontManagement@@YAKPEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK2@Z @ 0x140333150 (-UMPDDrvFontManagement@@YAKPEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK2@Z.c)
 *     ?UMPDDrvQueryAdvanceWidths@@YAHPEAUDHPDEV__@@PEAU_FONTOBJ@@KPEAKPEAXK@Z @ 0x140334430 (-UMPDDrvQueryAdvanceWidths@@YAHPEAUDHPDEV__@@PEAU_FONTOBJ@@KPEAKPEAXK@Z.c)
 *     ?UMPDDrvQueryDeviceSupport@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@PEAU_XFORMOBJ@@KKPEAXK3@Z @ 0x1403345F0 (-UMPDDrvQueryDeviceSupport@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@PEAU_XFORMOBJ@@KKPEAXK3@Z.c)
 *     ?bSendLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAH@Z @ 0x140335914 (-bSendLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAH@Z.c)
 *     ?CopyFontFilesIntoPoolMem@UmfdHostLifeTimeManager@@SAPEAPEAXPEAPEAUFONTFILEVIEW@@KPEAK@Z @ 0x1403361F8 (-CopyFontFilesIntoPoolMem@UmfdHostLifeTimeManager@@SAPEAPEAXPEAPEAUFONTFILEVIEW@@KPEAK@Z.c)
 *     NtGdiDescribePixelFormat @ 0x140336EE0 (NtGdiDescribePixelFormat.c)
 *     NtGdiGetCharacterPlacementW @ 0x140337120 (NtGdiGetCharacterPlacementW.c)
 *     NtGdiGetEmbUFI @ 0x140337750 (NtGdiGetEmbUFI.c)
 *     NtGdiGetFontResourceInfoInternalW @ 0x1403379E0 (NtGdiGetFontResourceInfoInternalW.c)
 *     NtGdiGetRasterizerCaps @ 0x140337C90 (NtGdiGetRasterizerCaps.c)
 *     NtGdiGetUFIPathname @ 0x140337D70 (NtGdiGetUFIPathname.c)
 *     NtGdiQueryFonts @ 0x140338260 (NtGdiQueryFonts.c)
 *     NtGdiScaleValues @ 0x1403383B0 (NtGdiScaleValues.c)
 *     ?CaptureBits@@YAXPEAX0K@Z @ 0x1403388FC (-CaptureBits@@YAXPEAX0K@Z.c)
 *     NtGdiFONTOBJ_pQueryGlyphAttrs @ 0x14033A780 (NtGdiFONTOBJ_pQueryGlyphAttrs.c)
 *     NtGdiPATHOBJ_bEnumClipLines @ 0x14033AC40 (NtGdiPATHOBJ_bEnumClipLines.c)
 *     ?bExpand@STACKOBJ@@QEAAHK@Z @ 0x14033C604 (-bExpand@STACKOBJ@@QEAAHK@Z.c)
 *     ?Insert@?$CSortedVector@KUSFontReliabilityInfo@UmfdReliabilityManager@@@NSInstrumentation@@QEAA_NAEBKAEBUSFontReliabilityInfo@UmfdReliabilityManager@@@Z @ 0x14033E7C8 (-Insert@-$CSortedVector@KUSFontReliabilityInfo@UmfdReliabilityManager@@@NSInstrumentation@@QEAA_.c)
 *     ?ReAllocate@?$CSortedVector@KUSFontReliabilityInfo@UmfdReliabilityManager@@@NSInstrumentation@@AEAA_N_K@Z @ 0x14033E964 (-ReAllocate@-$CSortedVector@KUSFontReliabilityInfo@UmfdReliabilityManager@@@NSInstrumentation@@A.c)
 *     ?CaptureUsermodeParameters@EscapeRequest@@UEAAXPEAX@Z @ 0x14033F010 (-CaptureUsermodeParameters@EscapeRequest@@UEAAXPEAX@Z.c)
 *     ?CaptureUsermodeParameters@QueryGlyphAttrsRequest@@UEAAXPEAX@Z @ 0x14033F080 (-CaptureUsermodeParameters@QueryGlyphAttrsRequest@@UEAAXPEAX@Z.c)
 *     ?CreateUsermodeParameters@EscapeRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x14033F1B0 (-CreateUsermodeParameters@EscapeRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z.c)
 *     InitializeTelemetryAssertsKMWorkerInternal @ 0x14033FE28 (InitializeTelemetryAssertsKMWorkerInternal.c)
 *     RtlCopyVolatileMemory @ 0x140340280 (RtlCopyVolatileMemory.c)
 *     RtlMoveVolatileMemory @ 0x140340290 (RtlMoveVolatileMemory.c)
 *     WppTraceCallback @ 0x1403D0550 (WppTraceCallback.c)
 *     bInitOneStockFont @ 0x1403E95D0 (bInitOneStockFont.c)
 *     bInitStockFontsInternal @ 0x1403EB62C (bInitStockFontsInternal.c)
 * Callees:
 *     <none>
 */

void *__cdecl memmove(void *a1, const void *Src, size_t Size)
{
  void *result; // rax
  __int64 v4; // r11
  __int64 v5; // rdx
  __int128 v6; // xmm1
  bool v7; // cf
  signed __int64 v8; // rdx
  char v9; // r11
  _BYTE *v10; // rcx
  char v11; // r11
  char *v12; // r11
  signed __int64 v13; // rdx
  __m128 v14; // xmm0
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rcx
  __m128 v17; // xmm1
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // r9
  __int128 v20; // xmm1
  __int128 v21; // xmm2
  __int128 v22; // xmm3
  __m128 v23; // xmm4
  unsigned __int64 j; // r9
  unsigned __int64 v25; // r8
  unsigned __int64 v26; // r9
  __m128 v27; // xmm1
  __m128 v28; // xmm2
  __m128 v29; // xmm3
  __m128 v30; // xmm4
  char *v31; // rcx
  __int128 v32; // xmm0
  unsigned __int64 v33; // rcx
  size_t v34; // r8
  _OWORD *v35; // r11
  __int128 v36; // xmm1
  size_t v37; // r9
  __int128 v38; // xmm1
  __int128 v39; // xmm2
  __int128 v40; // xmm3
  __int128 v41; // xmm4
  size_t i; // r9
  size_t v43; // r8

  result = a1;
  if ( Size < 8 )
  {
    if ( Size )
    {
      v7 = Src < a1;
      v8 = (_BYTE *)Src - (_BYTE *)a1;
      if ( v7 )
      {
        v10 = (char *)a1 + Size;
        do
        {
          v11 = v10[v8 - 1];
          --v10;
          --Size;
          *v10 = v11;
        }
        while ( Size );
      }
      else
      {
        do
        {
          v9 = *((_BYTE *)a1 + v8);
          a1 = (char *)a1 + 1;
          --Size;
          *((char *)a1 - 1) = v9;
        }
        while ( Size );
      }
    }
  }
  else if ( Size > 0x10 )
  {
    if ( Size > 0x20 )
    {
      v12 = (char *)Src + Size;
      v7 = Src < a1;
      v13 = (_BYTE *)Src - (_BYTE *)a1;
      if ( v7 && v12 > a1 )
      {
        v31 = (char *)a1 + Size;
        v32 = *(_OWORD *)&v31[v13 - 16];
        v33 = (unsigned __int64)(v31 - 16);
        v34 = Size - 16;
        if ( (v33 & 0xF) != 0 )
        {
          v35 = (_OWORD *)v33;
          v33 &= 0xFFFFFFFFFFFFFFF0uLL;
          v36 = *(_OWORD *)(v33 + v13);
          *v35 = v32;
          v32 = v36;
          v34 = v33 - (_QWORD)result;
        }
        v37 = v34 >> 6;
        if ( v34 >> 6 )
        {
          v34 &= 0x3Fu;
          do
          {
            v38 = *(_OWORD *)(v33 + v13 - 16);
            v39 = *(_OWORD *)(v33 + v13 - 32);
            v40 = *(_OWORD *)(v33 + v13 - 48);
            v41 = *(_OWORD *)(v33 + v13 - 64);
            *(_OWORD *)v33 = v32;
            v33 -= 64LL;
            --v37;
            *(_OWORD *)(v33 + 48) = v38;
            *(_OWORD *)(v33 + 32) = v39;
            *(_OWORD *)(v33 + 16) = v40;
            v32 = v41;
          }
          while ( v37 );
        }
        for ( i = v34 >> 4; i; --i )
        {
          *(_OWORD *)v33 = v32;
          v32 = *(_OWORD *)(v33 + v13 - 16);
          v33 -= 16LL;
        }
        v43 = v34 & 0xF;
        if ( v43 )
          *(_OWORD *)(v33 - v43) = *(_OWORD *)(v33 - v43 + v13);
        *(_OWORD *)v33 = v32;
      }
      else
      {
        v14 = *(__m128 *)((char *)a1 + v13);
        v15 = (unsigned __int64)a1 + 16;
        if ( (v15 & 0xF) != 0 )
        {
          v16 = v15 & 0xFFFFFFFFFFFFFFF0uLL;
          v17 = *(__m128 *)(v16 + v13);
          *(__m128 *)result = v14;
          v14 = v17;
          v15 = v16 + 16;
        }
        v18 = (unsigned __int64)result + Size - v15;
        v19 = v18 >> 6;
        if ( v18 >> 6 )
        {
          if ( v19 > 0x1000 )
          {
            v26 = v18 >> 6;
            v18 &= 0x3Fu;
            _mm_prefetch((const char *)(v15 + v13 + 64), 0);
            do
            {
              v27 = *(__m128 *)(v15 + v13);
              v28 = *(__m128 *)(v15 + v13 + 16);
              v29 = *(__m128 *)(v15 + v13 + 32);
              v30 = *(__m128 *)(v15 + v13 + 48);
              _mm_stream_ps((float *)(v15 - 16), v14);
              v15 += 64LL;
              _mm_prefetch((const char *)(v15 + v13 + 64), 0);
              --v26;
              _mm_stream_ps((float *)(v15 - 64), v27);
              _mm_stream_ps((float *)(v15 - 48), v28);
              _mm_stream_ps((float *)(v15 - 32), v29);
              v14 = v30;
            }
            while ( v26 );
            _mm_sfence();
          }
          else
          {
            v18 &= 0x3Fu;
            do
            {
              v20 = *(_OWORD *)(v15 + v13);
              v21 = *(_OWORD *)(v15 + v13 + 16);
              v22 = *(_OWORD *)(v15 + v13 + 32);
              v23 = *(__m128 *)(v15 + v13 + 48);
              *(__m128 *)(v15 - 16) = v14;
              v15 += 64LL;
              --v19;
              *(_OWORD *)(v15 - 64) = v20;
              *(_OWORD *)(v15 - 48) = v21;
              *(_OWORD *)(v15 - 32) = v22;
              v14 = v23;
            }
            while ( v19 );
          }
        }
        for ( j = v18 >> 4; j; --j )
        {
          *(__m128 *)(v15 - 16) = v14;
          v14 = *(__m128 *)(v15 + v13);
          v15 += 16LL;
        }
        v25 = v18 & 0xF;
        if ( v25 )
          *(_OWORD *)(v15 + v25 - 16) = *(_OWORD *)(v15 + v25 - 16 + v13);
        *(__m128 *)(v15 - 16) = v14;
      }
    }
    else
    {
      v6 = *(_OWORD *)((char *)Src + Size - 16);
      *(_OWORD *)a1 = *(_OWORD *)Src;
      *(_OWORD *)((char *)a1 + Size - 16) = v6;
    }
  }
  else
  {
    v4 = *(_QWORD *)Src;
    v5 = *(_QWORD *)((char *)Src + Size - 8);
    *(_QWORD *)a1 = v4;
    *(_QWORD *)((char *)a1 + Size - 8) = v5;
  }
  return result;
}
