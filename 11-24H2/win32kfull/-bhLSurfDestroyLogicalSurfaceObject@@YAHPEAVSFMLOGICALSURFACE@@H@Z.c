/*
 * XREFs of ?bhLSurfDestroyLogicalSurfaceObject@@YAHPEAVSFMLOGICALSURFACE@@H@Z @ 0x14002C588
 * Callers:
 *     GreSfmCloseCompositorRef @ 0x14002AC68 (GreSfmCloseCompositorRef.c)
 *     ?vspDestroyDwmSpriteObjInternal@@YAXPEAUHDEV__@@_NPEAVDWMSPRITE@@@Z @ 0x140030624 (-vspDestroyDwmSpriteObjInternal@@YAXPEAUHDEV__@@_NPEAVDWMSPRITE@@@Z.c)
 *     ?CreateHLSURFClone@SFMLOGICALSURFACE@@SAPEAUHLSURF__@@PEAUHDEV__@@PEAV1@HHH@Z @ 0x1400C916C (-CreateHLSURFClone@SFMLOGICALSURFACE@@SAPEAUHLSURF__@@PEAUHDEV__@@PEAV1@HHH@Z.c)
 *     ?hlsurfCreateLogicalSurfaceObject@@YAPEAUHLSURF__@@QEAUHDEV__@@KPEAU_CD_HLSURF_CREATIONCONTEXT@@@Z @ 0x14016B0D4 (-hlsurfCreateLogicalSurfaceObject@@YAPEAUHLSURF__@@QEAUHDEV__@@KPEAU_CD_HLSURF_CREATIONCONTEXT@@.c)
 *     GrepSfmRemoveSurfaces @ 0x14020E640 (GrepSfmRemoveSurfaces.c)
 *     CleanupHLSURF @ 0x1402196B0 (CleanupHLSURF.c)
 * Callees:
 *     ?DeInitialize@SFMLOGICALSURFACE@@QEAAXPEAUHLSURF__@@@Z @ 0x14002C62C (-DeInitialize@SFMLOGICALSURFACE@@QEAAXPEAUHLSURF__@@@Z.c)
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
