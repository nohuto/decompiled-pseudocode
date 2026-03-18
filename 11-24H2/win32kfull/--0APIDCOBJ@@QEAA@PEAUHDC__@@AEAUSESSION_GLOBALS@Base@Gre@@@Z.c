/*
 * XREFs of ??0APIDCOBJ@@QEAA@PEAUHDC__@@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400C8FBC
 * Callers:
 *     NtGdiFastPolyPolyline @ 0x1400C7B70 (NtGdiFastPolyPolyline.c)
 *     GreGradientFill @ 0x1400C87D4 (GreGradientFill.c)
 *     DxgkEngAcquireStableVisRgn @ 0x1400C8EE0 (DxgkEngAcquireStableVisRgn.c)
 *     ?GreStretchDIBitsInternalImpl@@YAHPEAUHDC__@@HHHHHHHHAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@KKIPEAX@Z @ 0x1400C95C8 (-GreStretchDIBitsInternalImpl@@YAHPEAUHDC__@@HHHHHHHHAEAV-$umptr_r@E@@PEAUtagBITMAPINFO@@KKIPEAX.c)
 *     GreSpDwmSyncCaptureSurfaceBits @ 0x14010A148 (GreSpDwmSyncCaptureSurfaceBits.c)
 *     NtGdiExtFloodFill @ 0x14015AE80 (NtGdiExtFloodFill.c)
 *     GreRealizeDefaultPalette @ 0x1401E60CC (GreRealizeDefaultPalette.c)
 *     GreCreateHalftonePalette @ 0x14030F3CC (GreCreateHalftonePalette.c)
 *     GreIsDCCurrentPalette @ 0x14030F7C4 (GreIsDCCurrentPalette.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400A4334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1401541FC (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1402595AC (--0DCOBJ@@QEAA@PEAUHDC__@@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VAPIDCOBJ@@@@QEAA@XZ @ 0x1402FEFB4 (--0-$UnexpectedThreadTerminationHandler@VAPIDCOBJ@@@@QEAA@XZ.c)
 */

APIDCOBJ *__fastcall APIDCOBJ::APIDCOBJ(APIDCOBJ *this, HDC a2, struct Gre::Base::SESSION_GLOBALS *a3)
{
  __int64 v4; // rax

  DCOBJ::DCOBJ(this, a2, a3);
  UnexpectedThreadTerminationHandler<APIDCOBJ>::UnexpectedThreadTerminationHandler<APIDCOBJ>((char *)this + 72);
  v4 = *(_QWORD *)this;
  *((_BYTE *)this + 104) = 1;
  if ( v4 )
  {
    if ( *(_WORD *)(v4 + 12) != 1 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM();
    if ( *(_WORD *)(*(_QWORD *)this + 12LL) != 1 )
    {
      XDCOBJ::vUnlockNoNullSet(this);
      *(_QWORD *)this = 0LL;
    }
  }
  return this;
}
