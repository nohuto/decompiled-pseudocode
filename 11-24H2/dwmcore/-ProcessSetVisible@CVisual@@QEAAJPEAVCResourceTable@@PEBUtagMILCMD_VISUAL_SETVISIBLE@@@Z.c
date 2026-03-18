/*
 * XREFs of ?ProcessSetVisible@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETVISIBLE@@@Z @ 0x1801D36D4
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801114F0 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?DirtyForVisibleChild@CVisual@@IEAAXPEAV1@@Z @ 0x1800BD9C0 (-DirtyForVisibleChild@CVisual@@IEAAXPEAV1@@Z.c)
 *     ?DirtyForInvisibleChild@CVisual@@IEAAXPEAV1@@Z @ 0x1800BDF3C (-DirtyForInvisibleChild@CVisual@@IEAAXPEAV1@@Z.c)
 *     ?UpdateBackdropCounts@CVisual@@IEAAXPEBV1@_N@Z @ 0x1801D373C (-UpdateBackdropCounts@CVisual@@IEAAXPEBV1@_N@Z.c)
 */

__int64 __fastcall CVisual::ProcessSetVisible(
        CVisual *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_VISUAL_SETVISIBLE *a3)
{
  char v4; // dl
  CVisual *v6; // rcx
  bool v7; // r8

  v4 = *((_BYTE *)a3 + 8);
  if ( v4 != ((*((_BYTE *)this + 106) & 0x40) != 0) )
  {
    *((_BYTE *)this + 106) ^= (*((_BYTE *)this + 106) ^ (v4 << 6)) & 0x40;
    v6 = (CVisual *)*((_QWORD *)this + 11);
    if ( v6 )
    {
      if ( v4 )
      {
        CVisual::DirtyForVisibleChild(v6, this);
        v7 = 1;
      }
      else
      {
        CVisual::DirtyForInvisibleChild(v6, this);
        v7 = 0;
      }
      CVisual::UpdateBackdropCounts(*((CVisual **)this + 11), this, v7);
    }
  }
  return 0LL;
}
