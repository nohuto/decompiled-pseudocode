/*
 * XREFs of ?AreEquivalentDevModes@@YA_NQEBU_devicemodeW@@0@Z @ 0x140123460
 * Callers:
 *     ?DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHH3@Z @ 0x1401170F8 (-DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHH3@Z.c)
 *     ?DrvWriteDisplayDriverParameters@@YAJPEAUtagGRAPHICS_DEVICE@@KPEBGQEAU_devicemodeW@@HH@Z @ 0x140122F94 (-DrvWriteDisplayDriverParameters@@YAJPEAUtagGRAPHICS_DEVICE@@KPEBGQEAU_devicemodeW@@HH@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall AreEquivalentDevModes(const struct _devicemodeW *const a1, const struct _devicemodeW *const a2)
{
  return a1->dmPelsWidth == a2->dmPelsWidth
      && a1->dmPelsHeight == a2->dmPelsHeight
      && a1->dmBitsPerPel == a2->dmBitsPerPel
      && a1->dmDisplayFrequency == a2->dmDisplayFrequency
      && a1->dmDisplayFixedOutput == a2->dmDisplayFixedOutput
      && a1->dmDisplayOrientation == a2->dmDisplayOrientation
      && a1->dmDisplayFlags == a2->dmDisplayFlags;
}
