/*
 * XREFs of ?DeInitialize@SFMLOGICALSURFACE@@QEAAXPEAUHLSURF__@@@Z @ 0x14002C62C
 * Callers:
 *     SFMLOGICALSURFACEREF_vDestructor @ 0x14002C4A8 (SFMLOGICALSURFACEREF_vDestructor.c)
 *     ?bhLSurfDestroyLogicalSurfaceObject@@YAHPEAVSFMLOGICALSURFACE@@H@Z @ 0x14002C588 (-bhLSurfDestroyLogicalSurfaceObject@@YAHPEAVSFMLOGICALSURFACE@@H@Z.c)
 * Callees:
 *     ?CleanupRegions@SFMLOGICALSURFACE@@QEAAXXZ @ 0x14002C6EC (-CleanupRegions@SFMLOGICALSURFACE@@QEAAXXZ.c)
 *     ?OwnsSurfaceCleanup@SFMLOGICALSURFACE@@QEAAPEAVSURFACE@@PEAUHLSURF__@@H@Z @ 0x14002C814 (-OwnsSurfaceCleanup@SFMLOGICALSURFACE@@QEAAPEAVSURFACE@@PEAUHLSURF__@@H@Z.c)
 *     ?SetShape@SFMLOGICALSURFACE@@QEAAHPEAUHDEV__@@PEAU_SURFOBJ@@@Z @ 0x14002C858 (-SetShape@SFMLOGICALSURFACE@@QEAAHPEAUHDEV__@@PEAU_SURFOBJ@@@Z.c)
 *     ?CleanupShape@SFMLOGICALSURFACE@@QEAAXPEAVSURFACE@@@Z @ 0x14002C9B4 (-CleanupShape@SFMLOGICALSURFACE@@QEAAXPEAVSURFACE@@@Z.c)
 *     ?SpNotifyLSurface@@YAJPEAUHDEV__@@PEAUHLSURF__@@HKPEAU_CD_HLSURF_CREATIONCONTEXT@@@Z @ 0x1400C751C (-SpNotifyLSurface@@YAJPEAUHDEV__@@PEAUHLSURF__@@HKPEAU_CD_HLSURF_CREATIONCONTEXT@@@Z.c)
 */

void __fastcall SFMLOGICALSURFACE::DeInitialize(SFMLOGICALSURFACE *this, HLSURF a2)
{
  Gre::Base *v4; // rcx
  HLSURF v5; // rdx
  int v6; // r8d
  HDEV *v7; // rbx
  struct SURFACE *v8; // rsi

  SfmTokenArray::DeInitialize((SFMLOGICALSURFACE *)((char *)this + 216));
  v7 = (HDEV *)((char *)this + 24);
  if ( *((_DWORD *)Gre::Base::Globals(v4) + 758) )
    *v7 = 0LL;
  *(_QWORD *)this = a2;
  v8 = SFMLOGICALSURFACE::OwnsSurfaceCleanup(this, v5, v6);
  if ( v8 )
  {
    SFMLOGICALSURFACE::SetShape(this, *v7, 0LL);
    SFMLOGICALSURFACE::CleanupShape(this, v8);
  }
  if ( *v7 )
  {
    SpNotifyLSurface(*v7, a2, 0, 0, 0LL);
    *v7 = 0LL;
  }
  SFMLOGICALSURFACE::CleanupRegions(this);
}
