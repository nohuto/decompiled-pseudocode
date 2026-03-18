/*
 * XREFs of ??0HmgInsertObjectHelper@@QEAA@XZ @ 0x1C0264924
 * Callers:
 *     ?CreateHLSURFClone@SFMLOGICALSURFACE@@SAPEAUHLSURF__@@PEAUHDEV__@@PEAV1@HHH@Z @ 0x1C00853DC (-CreateHLSURFClone@SFMLOGICALSURFACE@@SAPEAUHLSURF__@@PEAUHDEV__@@PEAV1@HHH@Z.c)
 *     hfontCreate @ 0x1C00C4ED0 (hfontCreate.c)
 *     ?hspCreateDwmSpriteObj@@YAPEAUHSPRITE__@@PEAUHWND__@@_KPEAUHDEV__@@H@Z @ 0x1C00C5F3C (-hspCreateDwmSpriteObj@@YAPEAUHSPRITE__@@PEAUHWND__@@_KPEAUHDEV__@@H@Z.c)
 *     ?hlsurfCreateLogicalSurfaceObject@@YAPEAUHLSURF__@@QEAUHDEV__@@KPEAU_CD_HLSURF_CREATIONCONTEXT@@@Z @ 0x1C00C61EC (-hlsurfCreateLogicalSurfaceObject@@YAPEAUHLSURF__@@QEAUHDEV__@@KPEAU_CD_HLSURF_CREATIONCONTEXT@@.c)
 *     ?hrgnAssociate@RGNOBJ@@QEAAPEAUHRGN__@@XZ @ 0x1C00C7C70 (-hrgnAssociate@RGNOBJ@@QEAAPEAUHRGN__@@XZ.c)
 *     DrawFrameControl @ 0x1C011A100 (DrawFrameControl.c)
 *     EngCreateDriverObj @ 0x1C0283EA0 (EngCreateDriverObj.c)
 *     ?bInit@UMPDOBJ@@QEAAHXZ @ 0x1C0299064 (-bInit@UMPDOBJ@@QEAAHXZ.c)
 *     ?hCreate@COLORTRANSFORMOBJ@@QEAAPEAXAEAVXDCOBJ@@PEAUtagLOGCOLORSPACEW@@PEAXK2K2K@Z @ 0x1C029A0BC (-hCreate@COLORTRANSFORMOBJ@@QEAAPEAXAEAVXDCOBJ@@PEAUtagLOGCOLORSPACEW@@PEAXK2K2K@Z.c)
 *     NtGdiCreateClientObj @ 0x1C02A7B20 (NtGdiCreateClientObj.c)
 * Callees:
 *     ??0?$UnexpectedThreadTerminationHandler@VHmgInsertObjectHelper@@@@QEAA@XZ @ 0x1C013D870 (--0-$UnexpectedThreadTerminationHandler@VHmgInsertObjectHelper@@@@QEAA@XZ.c)
 */

HmgInsertObjectHelper *__fastcall HmgInsertObjectHelper::HmgInsertObjectHelper(HmgInsertObjectHelper *this)
{
  UnexpectedThreadTerminationHandler<HmgInsertObjectHelper>::UnexpectedThreadTerminationHandler<HmgInsertObjectHelper>(this);
  *((_QWORD *)this + 4) = 0LL;
  return this;
}
