/*
 * XREFs of ?hdev@SURFACE@@QEAAXPEAUHDEV__@@@Z @ 0x1C0040210
 * Callers:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C001B5AC (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 *     ?vMarkSurfacesWithHDEV@@YAXPEAVPDEV@@@Z @ 0x1C0035A9C (-vMarkSurfacesWithHDEV@@YAXPEAVPDEV@@@Z.c)
 *     ?hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z @ 0x1C003B100 (-hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z.c)
 *     ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z @ 0x1C005ED70 (-bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z.c)
 *     EngModifySurface @ 0x1C00ABA10 (EngModifySurface.c)
 *     EngAssociateSurface @ 0x1C00B09D0 (EngAssociateSurface.c)
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C00C6D84 (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 *     bDynamicModeChange @ 0x1C00C75B0 (bDynamicModeChange.c)
 *     pProcessDfbSurfacesInternal @ 0x1C015AC20 (pProcessDfbSurfacesInternal.c)
 *     ?DrvTransferGdiObjects@@YAXPEAUHDEV__@@0K@Z @ 0x1C0161E24 (-DrvTransferGdiObjects@@YAXPEAUHDEV__@@0K@Z.c)
 * Callees:
 *     memset @ 0x1C00D69C0 (memset.c)
 */

void __fastcall SURFACE::hdev(SURFACE *this, HDEV a2)
{
  *((_QWORD *)this + 89) = *(_QWORD *)(*(_QWORD *)(SGDGetSessionState(this) + 24) + 6088LL);
  memset((char *)this + 728, 0, 0x40uLL);
  RtlCaptureStackBackTrace(0, 8u, (PVOID *)this + 91, 0LL);
  *((_QWORD *)this + 6) = a2;
  *((_QWORD *)this + 87) = a2;
}
