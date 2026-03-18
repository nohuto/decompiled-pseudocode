/*
 * XREFs of ?GetSyncLockCount@CLegacyRenderTarget@@UEBAI_KI@Z @ 0x1801D4E40
 * Callers:
 *     <none>
 * Callees:
 *     ?PresentNeeded@CLegacyRenderTarget@@IEBA_NXZ @ 0x1801D4F14 (-PresentNeeded@CLegacyRenderTarget@@IEBA_NXZ.c)
 *     ?DoesIntersect@CTreeDirty@@QEBA_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801EF2A4 (-DoesIntersect@CTreeDirty@@QEBA_NAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@.c)
 *     ?GetOutstandingPresents@CTargetStats@@QEAAI_K@Z @ 0x18020C318 (-GetOutstandingPresents@CTargetStats@@QEAAI_K@Z.c)
 */

__int64 __fastcall CLegacyRenderTarget::GetSyncLockCount(
        CLegacyRenderTarget *this,
        unsigned __int64 a2,
        unsigned int a3)
{
  unsigned int v6; // ebx
  bool v7; // r14
  unsigned int OutstandingPresents; // esi

  v6 = 0;
  v7 = CLegacyRenderTarget::PresentNeeded((CLegacyRenderTarget *)((char *)this - 160));
  if ( v7 || *((_DWORD *)this + 8252) != 1 )
  {
    OutstandingPresents = CTargetStats::GetOutstandingPresents((CLegacyRenderTarget *)((char *)this + 32968), a2);
    if ( a3 > OutstandingPresents
      && (v7 || (unsigned __int8)CTreeDirty::DoesIntersect(*((_QWORD *)this + 3) + 112LL, (char *)this + 30352)) )
    {
      return a3 - OutstandingPresents;
    }
  }
  return v6;
}
