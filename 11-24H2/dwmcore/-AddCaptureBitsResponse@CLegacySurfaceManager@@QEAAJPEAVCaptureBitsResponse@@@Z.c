/*
 * XREFs of ?AddCaptureBitsResponse@CLegacySurfaceManager@@QEAAJPEAVCaptureBitsResponse@@@Z @ 0x18022ECF8
 * Callers:
 *     ?ProcessCaptureBits@CLegacyVisualCaptureRenderTarget@@QEAAJPEAVCChannelContext@@PEBUtagMILCMD_LEGACYVISUALCAPTURERENDERTARGET_CAPTUREBITS@@@Z @ 0x1801E5F28 (-ProcessCaptureBits@CLegacyVisualCaptureRenderTarget@@QEAAJPEAVCChannelContext@@PEBUtagMILCMD_LE.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CLegacySurfaceManager::AddCaptureBitsResponse(
        CLegacySurfaceManager *this,
        struct CaptureBitsResponse *a2)
{
  _QWORD *v3; // rcx

  *((_QWORD *)this + 26) = a2;
  (**(void (__fastcall ***)(struct CaptureBitsResponse *))a2)(a2);
  v3 = (_QWORD *)*((_QWORD *)this + 26);
  if ( v3[7] )
  {
    (*(void (__fastcall **)(_QWORD *))(*v3 + 32LL))(v3);
    *((_BYTE *)this + 220) = 1;
  }
  return 0LL;
}
