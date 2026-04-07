/*
 * XREFs of ?ZOrderProjectedShadowReceiverVisual@CProjectedShadowScene@@AEAAJXZ @ 0x180054DA0
 * Callers:
 *     ?UpdateProjectedShadowReceiverVisual@CProjectedShadowScene@@AEAAJXZ @ 0x180054520 (-UpdateProjectedShadowReceiverVisual@CProjectedShadowScene@@AEAAJXZ.c)
 *     ?WindowZOrderChanged@CProjectedShadowScene@@QEAAXXZ @ 0x1800CB22C (-WindowZOrderChanged@CProjectedShadowScene@@QEAAXXZ.c)
 * Callees:
 *     ?RemoveSelfFromParent@CVisual@@QEAAJXZ @ 0x18001D834 (-RemoveSelfFromParent@CVisual@@QEAAJXZ.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180025CA0 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?GetLowestProjectedShadowCasterWindowForDesktop@CWindowList@@QEAAPEAVCTopLevelWindow@@_K@Z @ 0x180054E40 (-GetLowestProjectedShadowCasterWindowForDesktop@CWindowList@@QEAAPEAVCTopLevelWindow@@_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CProjectedShadowScene::ZOrderProjectedShadowReceiverVisual(CProjectedShadowScene *this)
{
  struct CTopLevelWindow *LowestProjectedShadowCasterWindowForDesktop; // rax
  __int64 v3; // rcx
  int inserted; // ebx
  __int64 v5; // rdx
  int v7; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( *((_BYTE *)this + 64) && *((_QWORD *)this + 7) )
  {
    LowestProjectedShadowCasterWindowForDesktop = CWindowList::GetLowestProjectedShadowCasterWindowForDesktop(
                                                    *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53),
                                                    *((_QWORD *)this + 2));
    if ( LowestProjectedShadowCasterWindowForDesktop )
      v3 = *((_QWORD *)LowestProjectedShadowCasterWindowForDesktop + 3);
    else
      v3 = 0LL;
    if ( v3 )
    {
      inserted = VisualCollection::InsertRelative(
                   (VisualCollection *)(v3 + 144),
                   *((CMILRefCountBase ****)this + 7),
                   (CMILRefCountBase ***)LowestProjectedShadowCasterWindowForDesktop,
                   0);
      if ( inserted < 0 )
      {
        v5 = 156LL;
LABEL_8:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v5,
          (unsigned int)"clientcore\\windows\\dwm\\udwm\\projectedshadowscene.cpp",
          (const char *)(unsigned int)inserted,
          v7);
        return (unsigned int)inserted;
      }
    }
    else
    {
      inserted = CVisual::RemoveSelfFromParent(*((CContainerVisual ***)this + 7));
      if ( inserted < 0 )
      {
        v5 = 162LL;
        goto LABEL_8;
      }
    }
  }
  return 0LL;
}
