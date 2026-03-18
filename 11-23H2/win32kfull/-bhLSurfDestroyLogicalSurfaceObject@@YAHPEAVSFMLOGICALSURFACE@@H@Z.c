/*
 * XREFs of ?bhLSurfDestroyLogicalSurfaceObject@@YAHPEAVSFMLOGICALSURFACE@@H@Z @ 0x1C00B4964
 * Callers:
 *     ?CreateHLSURFClone@SFMLOGICALSURFACE@@SAPEAUHLSURF__@@PEAUHDEV__@@PEAV1@HHH@Z @ 0x1C00853DC (-CreateHLSURFClone@SFMLOGICALSURFACE@@SAPEAUHLSURF__@@PEAUHDEV__@@PEAV1@HHH@Z.c)
 *     GrepSfmRemoveSurfaces @ 0x1C0087020 (GrepSfmRemoveSurfaces.c)
 *     GreSfmCloseCompositorRef @ 0x1C0087114 (GreSfmCloseCompositorRef.c)
 *     CleanupHLSURF @ 0x1C00A0130 (CleanupHLSURF.c)
 *     GreHintSpriteShape @ 0x1C00B356C (GreHintSpriteShape.c)
 *     ?vspDestroyDwmSpriteObjInternal@@YAXPEAUHDEV__@@_NPEAVDWMSPRITE@@@Z @ 0x1C00C486C (-vspDestroyDwmSpriteObjInternal@@YAXPEAUHDEV__@@_NPEAVDWMSPRITE@@@Z.c)
 *     ??1SFMLOGICALSURFACEREF@@QEAA@XZ @ 0x1C00C5CF0 (--1SFMLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ?hlsurfCreateLogicalSurfaceObject@@YAPEAUHLSURF__@@QEAUHDEV__@@KPEAU_CD_HLSURF_CREATIONCONTEXT@@@Z @ 0x1C00C61EC (-hlsurfCreateLogicalSurfaceObject@@YAPEAUHLSURF__@@QEAUHDEV__@@KPEAU_CD_HLSURF_CREATIONCONTEXT@@.c)
 *     SFMLOGICALSURFACEREF_vDestructorWrap @ 0x1C0268160 (SFMLOGICALSURFACEREF_vDestructorWrap.c)
 * Callees:
 *     ?DeInitialize@SFMLOGICALSURFACE@@QEAAXPEAUHLSURF__@@@Z @ 0x1C00C4980 (-DeInitialize@SFMLOGICALSURFACE@@QEAAXPEAUHLSURF__@@@Z.c)
 */

__int64 __fastcall bhLSurfDestroyLogicalSurfaceObject(HLSURF *a1, int a2)
{
  HLSURF v2; // rsi
  unsigned int v3; // ebx
  SFMLOGICALSURFACE *v5; // rdi
  char v7; // [rsp+20h] [rbp-18h]

  v2 = *a1;
  v3 = 0;
  v5 = (SFMLOGICALSURFACE *)a1;
  if ( *a1 )
  {
    v7 = 18;
    v5 = (SFMLOGICALSURFACE *)HmgRemoveObject(v2, 0LL, 0LL, 1LL, v7, 0LL);
  }
  if ( v5 )
  {
    SFMLOGICALSURFACE::DeInitialize(v5, v2);
    FreeObject(v5, 18LL);
    if ( a2 )
      EtwLogicalSurfDestroyEvent(v2, 0LL);
    return 1;
  }
  return v3;
}
