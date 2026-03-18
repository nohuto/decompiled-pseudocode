/*
 * XREFs of ??1SURFREF@@QEAA@XZ @ 0x1C007E42C
 * Callers:
 *     NtGdiDdDDICreateDCFromMemory @ 0x1C0006FD0 (NtGdiDdDDICreateDCFromMemory.c)
 *     NtGdiDdDDIDestroyDCFromMemory @ 0x1C000BD90 (NtGdiDdDDIDestroyDCFromMemory.c)
 *     RecreateRedirectionBitmap @ 0x1C00229DC (RecreateRedirectionBitmap.c)
 *     GreReferenceObject @ 0x1C00260F4 (GreReferenceObject.c)
 *     GreDereferenceObject @ 0x1C0049FA8 (GreDereferenceObject.c)
 *     GreSelectRedirectionBitmap @ 0x1C004BE50 (GreSelectRedirectionBitmap.c)
 *     ?GreGetDIBitsInternalImpl@@YAHPEAUHDC__@@PEAUHBITMAP__@@IIAEAV?$umptr_w@E@@PEAUtagBITMAPINFO@@III@Z @ 0x1C004C270 (-GreGetDIBitsInternalImpl@@YAHPEAUHDC__@@PEAUHBITMAP__@@IIAEAV-$umptr_w@E@@PEAUtagBITMAPINFO@@II.c)
 *     EngCopyBits @ 0x1C004D530 (EngCopyBits.c)
 *     GreMaskBlt @ 0x1C0079B5C (GreMaskBlt.c)
 *     ?bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOBJ@@K@Z@Z @ 0x1C007D354 (-bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOB.c)
 *     GreIsReusedDeviceDependentBitmap @ 0x1C00A3AA4 (GreIsReusedDeviceDependentBitmap.c)
 *     ?TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z @ 0x1C0104C40 (-TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z.c)
 *     ?vSetPointer@@YAXPEAUHDEV__@@PEAU_CURSINFO@@KKK@Z @ 0x1C0135788 (-vSetPointer@@YAXPEAUHDEV__@@PEAU_CURSINFO@@KKK@Z.c)
 *     ??1SURFFAKEOBJ@@QEAA@XZ @ 0x1C013E6E0 (--1SURFFAKEOBJ@@QEAA@XZ.c)
 *     ?vSpReadFromScreen@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C0280D5C (-vSpReadFromScreen@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     EngMarkBandingSurface @ 0x1C028DFD0 (EngMarkBandingSurface.c)
 *     GrePlgBlt @ 0x1C0290660 (GrePlgBlt.c)
 *     GreGetBitmapDpiScaleValue @ 0x1C02A7534 (GreGetBitmapDpiScaleValue.c)
 *     ?UMPDDrvEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z @ 0x1C02B9830 (-UMPDDrvEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z.c)
 *     NtGdiEngCreateBitmap @ 0x1C02C8B30 (NtGdiEngCreateBitmap.c)
 *     NtGdiEngDeleteSurface @ 0x1C02C9110 (NtGdiEngDeleteSurface.c)
 *     NtGdiMonoBitmap @ 0x1C02D0900 (NtGdiMonoBitmap.c)
 * Callees:
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013D7D0 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 */

void __fastcall SURFREF::~SURFREF(SURFREF *this)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 4);
  if ( v2 )
    DEC_SHARE_REF_CNT(v2);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(this);
}
