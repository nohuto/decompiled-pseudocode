/*
 * XREFs of ??0SURFREF@@QEAA@XZ @ 0x1400CDCC4
 * Callers:
 *     ?CreateCompatibleSurface@@YA?AVSURFREF@@PEAUHDEV__@@KPEAUHPALETTE__@@HHHHHHHHHKKPEAX@Z @ 0x1400148B8 (-CreateCompatibleSurface@@YA-AVSURFREF@@PEAUHDEV__@@KPEAUHPALETTE__@@HHHHHHHHHKKPEAX@Z.c)
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x14001C294 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z @ 0x14001E530 (-TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x14001FDF0 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?vSetPointer@@YAXPEAUHDEV__@@PEAU_CURSINFO@@KKK@Z @ 0x140029368 (-vSetPointer@@YAXPEAUHDEV__@@PEAU_CURSINFO@@KKK@Z.c)
 *     GreAccNotifyWindow @ 0x14002AAC0 (GreAccNotifyWindow.c)
 *     GreSelectRedirectionBitmap @ 0x1400CD670 (GreSelectRedirectionBitmap.c)
 *     UntrapAppContainerRenderingWrap @ 0x140147F00 (UntrapAppContainerRenderingWrap.c)
 *     DxgkEngBltViaGDI @ 0x1401A2AE0 (DxgkEngBltViaGDI.c)
 *     ?SpCreateSurface@@YA?AVSURFREF@@PEAUHDEV__@@PEAUtagSIZE@@@Z @ 0x1401B8A30 (-SpCreateSurface@@YA-AVSURFREF@@PEAUHDEV__@@PEAUtagSIZE@@@Z.c)
 *     NtGdiDdDDIDestroyDCFromMemory @ 0x1401BD800 (NtGdiDdDDIDestroyDCFromMemory.c)
 *     NtGdiEngAssociateSurface @ 0x140210A60 (NtGdiEngAssociateSurface.c)
 *     NtGdiDdDDICreateDCFromMemory @ 0x14025C8E0 (NtGdiDdDDICreateDCFromMemory.c)
 *     NtGdiEngMarkBandingSurface @ 0x14026C610 (NtGdiEngMarkBandingSurface.c)
 *     EngMarkBandingSurface @ 0x140305050 (EngMarkBandingSurface.c)
 *     MulProcessChildRedirectionDfbSurfaces @ 0x1403320C0 (MulProcessChildRedirectionDfbSurfaces.c)
 *     ?GrepCreateColorTransform@@YAPEAXAEAVXDCOBJ@@PEAUtagLOGCOLORSPACEW@@PEAXK2K2K@Z @ 0x14033B214 (-GrepCreateColorTransform@@YAPEAXAEAVXDCOBJ@@PEAUtagLOGCOLORSPACEW@@PEAXK2K2K@Z.c)
 * Callees:
 *     ??0?$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ @ 0x1402FA8F4 (--0-$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ.c)
 */

SURFREF *__fastcall SURFREF::SURFREF(SURFREF *this)
{
  UnexpectedThreadTerminationHandler<SURFREF>::UnexpectedThreadTerminationHandler<SURFREF>();
  *((_QWORD *)this + 4) = 0LL;
  return this;
}
