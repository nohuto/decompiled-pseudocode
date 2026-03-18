/*
 * XREFs of HmgDecrementShareReferenceCountEx @ 0x1400358E0
 * Callers:
 *     ??1BRUSHMEMOBJ@@QEAA@XZ @ 0x14000D550 (--1BRUSHMEMOBJ@@QEAA@XZ.c)
 *     ?vRemoveRefPalettes@@YAXK@Z @ 0x140014B30 (-vRemoveRefPalettes@@YAXK@Z.c)
 *     ?vUnlock@EPATHOBJ@@QEAAXXZ @ 0x140023A90 (-vUnlock@EPATHOBJ@@QEAAXXZ.c)
 *     NtGdiDeleteObjectApp @ 0x14002B3A0 (NtGdiDeleteObjectApp.c)
 *     GrepDeleteDC @ 0x140034C20 (GrepDeleteDC.c)
 *     ?vDec_cRef@SURFACE@@QEAAXXZ @ 0x1400351C0 (-vDec_cRef@SURFACE@@QEAAXXZ.c)
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x140035220 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     ??1EPALOBJ@@QEAA@XZ @ 0x140035800 (--1EPALOBJ@@QEAA@XZ.c)
 *     ?vAltUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x140035820 (-vAltUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ?vAltUnlockFast@XDCOBJ@@QEAAXXZ @ 0x140035870 (-vAltUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     DEC_SHARE_REF_CNT @ 0x1400358C0 (DEC_SHARE_REF_CNT.c)
 *     EngUnlockSurface @ 0x140035B00 (EngUnlockSurface.c)
 *     ?GrepDeleteDCOBJ@@YAHAEAVXDCOBJ@@KPEAH@Z @ 0x14003605C (-GrepDeleteDCOBJ@@YAHAEAVXDCOBJ@@KPEAH@Z.c)
 *     ??1SURFREF@@QEAA@XZ @ 0x140036A58 (--1SURFREF@@QEAA@XZ.c)
 *     ?vUnrefPalette@XEPALOBJ@@QEAAXXZ @ 0x140036AB0 (-vUnrefPalette@XEPALOBJ@@QEAAXXZ.c)
 *     ?GrepSelectBitmap@@YA?AVGSBResult@@AEAVXDCOBJ@@PEAUHBITMAP__@@W4GSBOptions@@@Z @ 0x140036B00 (-GrepSelectBitmap@@YA-AVGSBResult@@AEAVXDCOBJ@@PEAUHBITMAP__@@W4GSBOptions@@@Z.c)
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x140037010 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     ??1SURFMEM@@QEAA@XZ @ 0x140038F80 (--1SURFMEM@@QEAA@XZ.c)
 *     GreDCSelectPen @ 0x14003ABF0 (GreDCSelectPen.c)
 *     vUnreferencePdevWorker @ 0x14003D4F0 (vUnreferencePdevWorker.c)
 *     ?vDisableSurface@PDEVOBJ@@QEAAXE@Z @ 0x14003D870 (-vDisableSurface@PDEVOBJ@@QEAAXE@Z.c)
 *     ?UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z @ 0x14003E0F8 (-UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z.c)
 *     bMigrateSurfaceForConversion @ 0x1400848F4 (bMigrateSurfaceForConversion.c)
 *     ??1BRUSHSELOBJ@@QEAA@XZ @ 0x140085760 (--1BRUSHSELOBJ@@QEAA@XZ.c)
 *     ??0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z @ 0x140085B74 (--0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z.c)
 *     vDynamicConvertNewSurfaceDCs @ 0x140086380 (vDynamicConvertNewSurfaceDCs.c)
 *     ?vCopyTo@DC@@QEAAXAEAVXDCOBJ@@@Z @ 0x1400C52C8 (-vCopyTo@DC@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?hpath@DC@@QEAAPEAUHPATH__@@PEAU2@@Z @ 0x1400C5560 (-hpath@DC@@QEAAPEAUHPATH__@@PEAU2@@Z.c)
 *     ??1PALMEMOBJ@@QEAA@XZ @ 0x1400C6030 (--1PALMEMOBJ@@QEAA@XZ.c)
 *     ?GrepSelectPalette@@YAPEAUHPALETTE__@@AEAVXDCOBJ@@PEAU1@H@Z @ 0x1400D7CEC (-GrepSelectPalette@@YAPEAUHPALETTE__@@AEAVXDCOBJ@@PEAU1@H@Z.c)
 *     EngDeletePalette @ 0x1401156E0 (EngDeletePalette.c)
 *     GreMarkPendingDestroyDC @ 0x14011C458 (GreMarkPendingDestroyDC.c)
 *     ?MulEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEBGKPEAPEAUHSURF__@@KPEAU_GDIINFO@@KPEAUtagDEVINFO@@PEAUHDEV__@@1PEAX@Z @ 0x14012FFF0 (-MulEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEBGKPEAPEAUHSURF__@@KPEAU_GDIINFO@@KPEAUtagDE.c)
 *     ?apalResetColorTable@XEPALOBJ@@QEAAXXZ @ 0x140147244 (-apalResetColorTable@XEPALOBJ@@QEAAXXZ.c)
 *     ?GreCreateColorSpace@@YAPEAUHCOLORSPACE__@@PEAU_LOGCOLORSPACEEXW@@@Z @ 0x140148120 (-GreCreateColorSpace@@YAPEAUHCOLORSPACE__@@PEAU_LOGCOLORSPACEEXW@@@Z.c)
 *     ?DrvSetSharedPalette@@YAPEAUHDEV__@@PEAU_MDEV@@@Z @ 0x140159F28 (-DrvSetSharedPalette@@YAPEAUHDEV__@@PEAU_MDEV@@@Z.c)
 *     ?OnUnexpectedThreadTerminationStatic@?$UnexpectedThreadTerminationHandler@VCOLORSPACEREF@@@@SAXPEAX@Z @ 0x1401C0D00 (-OnUnexpectedThreadTerminationStatic@-$UnexpectedThreadTerminationHandler@VCOLORSPACEREF@@@@SAXP.c)
 *     ??1XEPALOBJ2@@QEAA@XZ @ 0x1401C2508 (--1XEPALOBJ2@@QEAA@XZ.c)
 *     ?OnUnexpectedThreadTerminationStatic@?$UnexpectedThreadTerminationHandler@VXEPALOBJ2@@@@SAXPEAX@Z @ 0x1401C2540 (-OnUnexpectedThreadTerminationStatic@-$UnexpectedThreadTerminationHandler@VXEPALOBJ2@@@@SAXPEAX@.c)
 *     bInitPALOBJ @ 0x1402E2008 (bInitPALOBJ.c)
 * Callees:
 *     ?HmgDecrementShareReferenceCountExFastOpt@@YAKAEAUSESSION_GLOBALS@Base@Gre@@PEAU_BASEOBJECT@@PEAH@Z @ 0x1401C1BDC (-HmgDecrementShareReferenceCountExFastOpt@@YAKAEAUSESSION_GLOBALS@Base@Gre@@PEAU_BASEOBJECT@@PEA.c)
 */

unsigned int __fastcall HmgDecrementShareReferenceCountEx(struct _BASEOBJECT *a1, int *a2)
{
  __int64 SessionState; // rax

  SessionState = W32GetSessionState(a1);
  return HmgDecrementShareReferenceCountExFastOpt(*(struct Gre::Base::SESSION_GLOBALS **)(SessionState + 88), a1, a2);
}
