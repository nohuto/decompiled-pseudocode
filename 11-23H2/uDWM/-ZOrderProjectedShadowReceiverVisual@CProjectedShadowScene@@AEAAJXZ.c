/*
 * XREFs of ?ZOrderProjectedShadowReceiverVisual@CProjectedShadowScene@@AEAAJXZ @ 0x1800CF324
 * Callers:
 *     ?ZOrder@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z @ 0x180041680 (-ZOrder@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z.c)
 *     ?UpdateProjectedShadowReceiverVisual@CProjectedShadowScene@@AEAAJXZ @ 0x1800CF1A8 (-UpdateProjectedShadowReceiverVisual@CProjectedShadowScene@@AEAAJXZ.c)
 * Callees:
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x18003A5D0 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?GetLowestProjectedShadowCasterWindowForDesktop@CWindowList@@QEAAPEAVCTopLevelWindow@@_K@Z @ 0x18006EEBE (-GetLowestProjectedShadowCasterWindowForDesktop@CWindowList@@QEAAPEAVCTopLevelWindow@@_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D254 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RemoveSelfFromParent@CVisual@@QEAAJXZ @ 0x180105498 (-RemoveSelfFromParent@CVisual@@QEAAJXZ.c)
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
                                                    *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 54),
                                                    *((_QWORD *)this + 2));
    if ( LowestProjectedShadowCasterWindowForDesktop )
      v3 = *((_QWORD *)LowestProjectedShadowCasterWindowForDesktop + 3);
    else
      v3 = 0LL;
    if ( v3 )
    {
      inserted = VisualCollection::InsertRelative(
                   (VisualCollection *)(v3 + 32),
                   *((_QWORD *)this + 7),
                   LowestProjectedShadowCasterWindowForDesktop,
                   0,
                   v7);
      if ( inserted < 0 )
      {
        v5 = 170LL;
LABEL_9:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v5,
          (__int64)"clientcore\\windows\\dwm\\udwm\\projectedshadowscene.cpp",
          (const char *)(unsigned int)inserted);
        return (unsigned int)inserted;
      }
    }
    else
    {
      inserted = CVisual::RemoveSelfFromParent(*((CVisual **)this + 7));
      if ( inserted < 0 )
      {
        v5 = 176LL;
        goto LABEL_9;
      }
    }
  }
  return 0LL;
}
