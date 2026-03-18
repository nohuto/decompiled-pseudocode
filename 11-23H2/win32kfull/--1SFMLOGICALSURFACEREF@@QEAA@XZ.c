/*
 * XREFs of ??1SFMLOGICALSURFACEREF@@QEAA@XZ @ 0x1C00C5CF0
 * Callers:
 *     GrepSfmRemoveSurfaces @ 0x1C0087020 (GrepSfmRemoveSurfaces.c)
 *     GreSfmCloseCompositorRef @ 0x1C0087114 (GreSfmCloseCompositorRef.c)
 *     GreSfmRegisterLogicalSurfaceForSignaling @ 0x1C00922A4 (GreSfmRegisterLogicalSurfaceForSignaling.c)
 *     GreAddLogicalSurfaceToDirtyQueue @ 0x1C009CF2C (GreAddLogicalSurfaceToDirtyQueue.c)
 *     GreHintSpriteShape @ 0x1C00B356C (GreHintSpriteShape.c)
 *     GreSfmOpenCompositorRef @ 0x1C00C4554 (GreSfmOpenCompositorRef.c)
 *     ?hspCreateDwmSpriteObj@@YAPEAUHSPRITE__@@PEAUHWND__@@_KPEAUHDEV__@@H@Z @ 0x1C00C5F3C (-hspCreateDwmSpriteObj@@YAPEAUHSPRITE__@@PEAUHWND__@@_KPEAUHDEV__@@H@Z.c)
 *     ?bSpDwmUpdateCursor@@YAHPEAUHSPRITE__@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_BLENDFUNCTION@@@Z @ 0x1C0133B68 (-bSpDwmUpdateCursor@@YAHPEAUHSPRITE__@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_BLENDFUNCT.c)
 *     ?bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@PEAPEAV3@@Z @ 0x1C01340F4 (-bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@P.c)
 *     CheckAndProcessSurfaceComplete @ 0x1C0266A10 (CheckAndProcessSurfaceComplete.c)
 * Callees:
 *     ?StopSfmStateTracking@SFMLOGICALSURFACE@@QEAAJPEAUHDEV__@@PEAUSfmState@@@Z @ 0x1C0087284 (-StopSfmStateTracking@SFMLOGICALSURFACE@@QEAAJPEAUHDEV__@@PEAUSfmState@@@Z.c)
 *     ?bhLSurfDestroyLogicalSurfaceObject@@YAHPEAVSFMLOGICALSURFACE@@H@Z @ 0x1C00B4964 (-bhLSurfDestroyLogicalSurfaceObject@@YAHPEAVSFMLOGICALSURFACE@@H@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013D7D0 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 */

void __fastcall SFMLOGICALSURFACEREF::~SFMLOGICALSURFACEREF(SFMLOGICALSURFACEREF *this)
{
  __int64 v1; // rax
  Gre::Base *v3; // rcx
  int v4; // eax
  struct Gre::Base::SESSION_GLOBALS *v5; // rax

  v1 = *((_QWORD *)this + 4);
  if ( v1 )
  {
    _InterlockedDecrement((volatile signed __int32 *)(v1 + 12));
    if ( *((_DWORD *)this + 10) == 1 )
    {
      v3 = (Gre::Base *)*((_QWORD *)this + 4);
      v4 = *((_DWORD *)v3 + 61);
      if ( (v4 & 0x80u) != 0 && (v4 & 8) != 0 && (v4 & 0x10) != 0 )
      {
        *((_DWORD *)v3 + 61) = v4 & 0xFFFFFFEF;
        v5 = Gre::Base::Globals(v3);
        SFMLOGICALSURFACE::StopSfmStateTracking(*((SFMLOGICALSURFACE **)this + 4), 0LL, *((struct SfmState **)v5 + 809));
      }
      bhLSurfDestroyLogicalSurfaceObject(*((HLSURF **)this + 4), 1);
    }
  }
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(this);
}
