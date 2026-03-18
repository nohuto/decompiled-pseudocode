/*
 * XREFs of ?vspDestroyDwmSpriteObjInternal@@YAXPEAUHDEV__@@_NPEAVDWMSPRITE@@@Z @ 0x1C00C486C
 * Callers:
 *     GreTransferDwmStateToSpriteState @ 0x1C00208A8 (GreTransferDwmStateToSpriteState.c)
 *     ?GreDeleteSpriteInternal@@YAJPEAUHDEV__@@PEAUHWND__@@PEAXH@Z @ 0x1C0026874 (-GreDeleteSpriteInternal@@YAJPEAUHDEV__@@PEAUHWND__@@PEAXH@Z.c)
 *     ?GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@KHHHHHPEBG@Z @ 0x1C00AB6EC (-GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@KHHH.c)
 *     ?hspCreateDwmSpriteObj@@YAPEAUHSPRITE__@@PEAUHWND__@@_KPEAUHDEV__@@H@Z @ 0x1C00C5F3C (-hspCreateDwmSpriteObj@@YAPEAUHSPRITE__@@PEAUHWND__@@_KPEAUHDEV__@@H@Z.c)
 *     GreDeleteSpriteDelayDelete @ 0x1C0266CF8 (GreDeleteSpriteDelayDelete.c)
 * Callees:
 *     ?StopSfmStateTracking@SFMLOGICALSURFACE@@QEAAJPEAUHDEV__@@PEAUSfmState@@@Z @ 0x1C0087284 (-StopSfmStateTracking@SFMLOGICALSURFACE@@QEAAJPEAUHDEV__@@PEAUSfmState@@@Z.c)
 *     ?bhLSurfDestroyLogicalSurfaceObject@@YAHPEAVSFMLOGICALSURFACE@@H@Z @ 0x1C00B4964 (-bhLSurfDestroyLogicalSurfaceObject@@YAHPEAVSFMLOGICALSURFACE@@H@Z.c)
 *     ?CleanupRegions@SFMLOGICALSURFACE@@QEAAXXZ @ 0x1C00C4A74 (-CleanupRegions@SFMLOGICALSURFACE@@QEAAXXZ.c)
 *     ?vspRemoveStateReferencesForSprite@@YAXPEAVDWMSPRITE@@@Z @ 0x1C00C4B58 (-vspRemoveStateReferencesForSprite@@YAXPEAVDWMSPRITE@@@Z.c)
 *     ?SetLogicalSurface@DWMSPRITE@@QEAAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@@Z @ 0x1C00C5C10 (-SetLogicalSurface@DWMSPRITE@@QEAAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@@Z.c)
 *     ?CheckAndProcessWindowResizeComplete@@YAXPEAVDWMSPRITE@@HPEAH@Z @ 0x1C0264EC4 (-CheckAndProcessWindowResizeComplete@@YAXPEAVDWMSPRITE@@HPEAH@Z.c)
 */

void __fastcall vspDestroyDwmSpriteObjInternal(HDEV a1, HDEV a2, struct DWMSPRITE *a3)
{
  SFMLOGICALSURFACE *v4; // rdi
  int v5; // esi
  unsigned int v7; // r14d
  Gre::Base *v8; // rcx
  int v9; // eax
  Gre::Base *v10; // rcx
  struct Gre::Base::SESSION_GLOBALS *v11; // rax
  struct Gre::Base::SESSION_GLOBALS *v12; // rax

  if ( a3 )
  {
    v4 = (SFMLOGICALSURFACE *)*((_QWORD *)a3 + 18);
    v5 = *((_DWORD *)a3 + 35) & 0x10;
    v7 = (unsigned __int8)a2;
    if ( *((int *)a3 + 29) >= 1 )
      CheckAndProcessWindowResizeComplete(a3, 1, 0LL);
    if ( v4 )
    {
      DWMSPRITE::SetLogicalSurface(a3, a2, 0LL);
      SFMLOGICALSURFACE::CleanupRegions(v4);
      v9 = *((_DWORD *)v4 + 61);
      if ( (v9 & 0x80u) != 0 && (v9 & 8) != 0 && (v9 & 0x10) != 0 )
      {
        *((_DWORD *)v4 + 61) = v9 & 0xFFFFFFEF;
        v12 = Gre::Base::Globals(v8);
        SFMLOGICALSURFACE::StopSfmStateTracking(v4, a1, *((struct SfmState **)v12 + 809));
      }
      bhLSurfDestroyLogicalSurfaceObject((HLSURF *)v4, 1);
    }
    if ( !v5 )
      vspRemoveStateReferencesForSprite(a3);
    if ( !*(_QWORD *)a3 || (EtwDwmSpriteDestroyEvent(0LL), HmgRemoveObject(*(_QWORD *)a3, v7, 0LL, 1LL, 15, 0LL)) )
      FreeObject(a3, 15LL);
    v11 = Gre::Base::Globals(v10);
    --*(_DWORD *)(*((_QWORD *)v11 + 38) + 96LL);
  }
}
