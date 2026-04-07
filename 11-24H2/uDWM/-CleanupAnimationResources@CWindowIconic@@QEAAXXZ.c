/*
 * XREFs of ?CleanupAnimationResources@CWindowIconic@@QEAAXXZ @ 0x1800779FC
 * Callers:
 *     ?SetRepresentationType@CWindowIconic@@QEAAJW4IconicRepresentationType@@_N@Z @ 0x1800079A0 (-SetRepresentationType@CWindowIconic@@QEAAJW4IconicRepresentationType@@_N@Z.c)
 *     ??1CWindowIconic@@MEAA@XZ @ 0x18007793C (--1CWindowIconic@@MEAA@XZ.c)
 * Callees:
 *     ?Release@CTimelineBase@@QEAAKXZ @ 0x180012270 (-Release@CTimelineBase@@QEAAKXZ.c)
 *     ?ReleaseContents@CBitmapSourceArray@@QEAAX_N@Z @ 0x1800264A8 (-ReleaseContents@CBitmapSourceArray@@QEAAX_N@Z.c)
 *     ?StopIconicAnimation@CTopLevelWindow@@QEAAXXZ @ 0x18002D990 (-StopIconicAnimation@CTopLevelWindow@@QEAAXXZ.c)
 */

void __fastcall CWindowIconic::CleanupAnimationResources(CWindowIconic *this)
{
  CTopLevelWindow *v2; // rcx
  CTimelineBase *v3; // rcx

  v2 = (CTopLevelWindow *)*((_QWORD *)this + 11);
  if ( v2 )
    CTopLevelWindow::StopIconicAnimation(v2);
  CBitmapSourceArray::ReleaseContents((CWindowIconic *)((char *)this + 32), 1);
  v3 = (CTimelineBase *)*((_QWORD *)this + 8);
  if ( v3 )
  {
    CTimelineBase::Release(v3);
    *((_QWORD *)this + 8) = 0LL;
  }
}
