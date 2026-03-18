/*
 * XREFs of ??0?$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ @ 0x1C013D794
 * Callers:
 *     ?CreateCompatibleSurface@@YA?AVSURFREF@@PEAUHDEV__@@KPEAUHPALETTE__@@HHHHHHHHHKKPEAX@Z @ 0x1C0025B70 (-CreateCompatibleSurface@@YA-AVSURFREF@@PEAUHDEV__@@KPEAUHPALETTE__@@HHHHHHHHHKKPEAX@Z.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C004CC34 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     GreDwmGetSurfaceData @ 0x1C00C3F38 (GreDwmGetSurfaceData.c)
 *     GreSfmGetDirtyRgn @ 0x1C00C786C (GreSfmGetDirtyRgn.c)
 *     GreSetRedirectionSurfaceSignaling @ 0x1C00CCB94 (GreSetRedirectionSurfaceSignaling.c)
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C00F98B0 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z @ 0x1C0104C40 (-TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C011C870 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?SpCreateSurface@@YA?AVSURFREF@@PEAUHDEV__@@PEAUtagSIZE@@@Z @ 0x1C01349A0 (-SpCreateSurface@@YA-AVSURFREF@@PEAUHDEV__@@PEAUtagSIZE@@@Z.c)
 *     ??0COLORTRANSFORMOBJ@@QEAA@PEAX@Z @ 0x1C02644C0 (--0COLORTRANSFORMOBJ@@QEAA@PEAX@Z.c)
 *     ??0SURFREF@@QEAA@XZ @ 0x1C0264500 (--0SURFREF@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@$$QEAV0@@Z @ 0x1C0264E28 (--0SURFREF@@QEAA@$$QEAV0@@Z.c)
 *     GreDwmGetRedirectionStyle @ 0x1C0266EE4 (GreDwmGetRedirectionStyle.c)
 *     GreHLsurfSetPresentFlags @ 0x1C026724C (GreHLsurfSetPresentFlags.c)
 *     GreHLsurfSetUpdateId @ 0x1C02673B4 (GreHLsurfSetUpdateId.c)
 *     ?pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z @ 0x1C029944C (-pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z.c)
 *     ??0COLORSPACEREF@@QEAA@PEAUHCOLORSPACE__@@@Z @ 0x1C02CD900 (--0COLORSPACEREF@@QEAA@PEAUHCOLORSPACE__@@@Z.c)
 *     ?GreCreateColorTransform@@YAPEAXPEAUHDC__@@PEAUtagLOGCOLORSPACEW@@PEAXK2K2K@Z @ 0x1C02CDB14 (-GreCreateColorTransform@@YAPEAXPEAUHDC__@@PEAUtagLOGCOLORSPACEW@@PEAXK2K2K@Z.c)
 * Callees:
 *     <none>
 */

_OWORD *__fastcall UnexpectedThreadTerminationHandler<SURFREF>::UnexpectedThreadTerminationHandler<SURFREF>(_OWORD *a1)
{
  *a1 = 0LL;
  a1[1] = 0LL;
  PushThreadGuardedObject(
    a1,
    a1,
    UnexpectedThreadTerminationHandler<COLORTRANSFORMOBJ>::OnUnexpectedThreadTerminationStatic);
  return a1;
}
