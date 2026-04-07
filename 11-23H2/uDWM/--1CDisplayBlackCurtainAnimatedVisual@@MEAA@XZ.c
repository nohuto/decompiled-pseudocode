/*
 * XREFs of ??1CDisplayBlackCurtainAnimatedVisual@@MEAA@XZ @ 0x1800BD488
 * Callers:
 *     ??_GCDisplayBlackCurtainAnimatedVisual@@MEAAPEAXI@Z @ 0x1800BD510 (--_GCDisplayBlackCurtainAnimatedVisual@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A13B4 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Stop@CDisplayAnimatedVisual@@QEAAJW4StopOption@1@@Z @ 0x1800B7EA4 (-Stop@CDisplayAnimatedVisual@@QEAAJW4StopOption@1@@Z.c)
 */

void __fastcall CDisplayBlackCurtainAnimatedVisual::~CDisplayBlackCurtainAnimatedVisual(
        CDisplayBlackCurtainAnimatedVisual *this)
{
  int v2; // eax
  __int64 v3; // rax
  bool v4; // zf
  char v5; // al
  int v6; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *(_QWORD *)this = &CDisplayBlackCurtainAnimatedVisual::`vftable'{for `CRenderDataVisual'};
  *((_QWORD *)this + 36) = &CDisplayExtendToDuplicateAnimatedVisual::`vftable'{for `IAnimationListener'};
  v2 = CDisplayAnimatedVisual::Stop((__int64 *)this, 0);
  if ( v2 < 0 )
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x23,
      (__int64)"clientcore\\windows\\dwm\\udwm\\displayblackcurtainanimatedvisual.cpp",
      (const char *)(unsigned int)v2,
      v6);
  v3 = *((_QWORD *)this + 55);
  if ( v3 )
  {
    v4 = (*(_DWORD *)(v3 + 8))-- == 1;
    v5 = CDesktopManager::s_fTimelineDirty;
    if ( v4 )
      v5 = 1;
    CDesktopManager::s_fTimelineDirty = v5;
  }
  CDisplayAnimatedVisual::~CDisplayAnimatedVisual(this);
}
