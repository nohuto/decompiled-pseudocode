/*
 * XREFs of ?GetSyncLockCount@CDDisplayRenderTarget@@UEBAI_KI@Z @ 0x18028A140
 * Callers:
 *     <none>
 * Callees:
 *     ?PresentNeeded@CDDisplayRenderTarget@@IEBA_NXZ @ 0x1801E10E0 (-PresentNeeded@CDDisplayRenderTarget@@IEBA_NXZ.c)
 *     ?DoesIntersect@CTreeDirty@@QEBA_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801FB794 (-DoesIntersect@CTreeDirty@@QEBA_NAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@.c)
 *     ?GetOutstandingPresents@CTargetStats@@QEAAI_K@Z @ 0x180218498 (-GetOutstandingPresents@CTargetStats@@QEAAI_K@Z.c)
 */

__int64 __fastcall CDDisplayRenderTarget::GetSyncLockCount(
        CDDisplayRenderTarget *this,
        LARGE_INTEGER a2,
        unsigned int a3)
{
  unsigned int v6; // ebx
  char v7; // r14
  unsigned int OutstandingPresents; // esi

  v6 = 0;
  v7 = CDDisplayRenderTarget::PresentNeeded((CDDisplayRenderTarget *)((char *)this - 160));
  if ( v7 || *((_DWORD *)this + 8352) != 1 )
  {
    OutstandingPresents = CTargetStats::GetOutstandingPresents((CDDisplayRenderTarget *)((char *)this + 33368), a2);
    if ( a3 > OutstandingPresents
      && (v7
       || CTreeDirty::DoesIntersect(*((_QWORD *)this + 4) + 112LL, (const struct D2D_RECT_F *)((char *)this + 30744))) )
    {
      return a3 - OutstandingPresents;
    }
  }
  return v6;
}
