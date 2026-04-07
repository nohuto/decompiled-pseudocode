/*
 * XREFs of ?StartImpl@CDisplaySecondaryOnlyAnimatedVisual@@EEAAJXZ @ 0x1800C1A50
 * Callers:
 *     <none>
 * Callees:
 *     ?ForceUpdateScene@CWindowList@@QEAAJXZ @ 0x180020070 (-ForceUpdateScene@CWindowList@@QEAAJXZ.c)
 *     ?SetupDelayBeforeEntranceAnimation@CDisplaySecondaryOnlyAnimatedVisual@@AEAAJXZ @ 0x18008B20C (-SetupDelayBeforeEntranceAnimation@CDisplaySecondaryOnlyAnimatedVisual@@AEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetSize@CVisual@@QEAAXHH@Z @ 0x18009522C (-SetSize@CVisual@@QEAAXHH@Z.c)
 *     ?SetCenter@CVisual@@QEAAXMM@Z @ 0x1800960CC (-SetCenter@CVisual@@QEAAXMM@Z.c)
 *     ?AddToRenderTargetRootVisualForDesktop@CDisplayAnimatedVisual@@IEAAJ_K@Z @ 0x1800BCCFC (-AddToRenderTargetRootVisualForDesktop@CDisplayAnimatedVisual@@IEAAJ_K@Z.c)
 */

__int64 __fastcall CDisplaySecondaryOnlyAnimatedVisual::StartImpl(CDisplaySecondaryOnlyAnimatedVisual *this)
{
  int updated; // ebx
  __int64 v3; // rdx
  int v5; // r8d
  CWindowList *v6; // rsi
  int v7; // edx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  unsigned __int64 v9; // [rsp+38h] [rbp+10h] BYREF

  v9 = 0LL;
  GetDesktopID(1LL, &v9);
  updated = CDisplayAnimatedVisual::AddToRenderTargetRootVisualForDesktop(this, v9);
  if ( updated < 0 )
  {
    v3 = 54LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v3,
      (__int64)"clientcore\\windows\\dwm\\udwm\\displaysecondaryonlyanimatedvisual.cpp",
      (const char *)(unsigned int)updated);
    return (unsigned int)updated;
  }
  v5 = 0;
  v6 = (CWindowList *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 53);
  if ( *((_DWORD *)this + 65) - *((_DWORD *)this + 63) >= 0 )
    v5 = *((_DWORD *)this + 65) - *((_DWORD *)this + 63);
  v7 = 0;
  if ( *((_DWORD *)this + 64) - *((_DWORD *)this + 62) >= 0 )
    v7 = *((_DWORD *)this + 64) - *((_DWORD *)this + 62);
  CVisual::SetSize(this, v7, v5);
  CVisual::SetCenter(this, (float)*((int *)this + 18) * 0.5, (float)*((int *)this + 19) * 0.5);
  updated = CDisplaySecondaryOnlyAnimatedVisual::SetupDelayBeforeEntranceAnimation(this);
  if ( updated < 0 )
  {
    v3 = 64LL;
    goto LABEL_3;
  }
  updated = CWindowList::ForceUpdateScene(v6);
  if ( updated < 0 )
  {
    v3 = 71LL;
    goto LABEL_3;
  }
  return 0LL;
}
