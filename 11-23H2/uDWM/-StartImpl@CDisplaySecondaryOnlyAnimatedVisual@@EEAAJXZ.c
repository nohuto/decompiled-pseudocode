/*
 * XREFs of ?StartImpl@CDisplaySecondaryOnlyAnimatedVisual@@EEAAJXZ @ 0x1800BDE10
 * Callers:
 *     <none>
 * Callees:
 *     ?GetRenderTargetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z @ 0x18002D59C (-GetRenderTargetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x18003A5D0 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?MoveToFront@CVisual@@QEAAJ_N@Z @ 0x180045AEC (-MoveToFront@CVisual@@QEAAJ_N@Z.c)
 *     ?ForceUpdateScene@CWindowList@@QEAAJXZ @ 0x180046D50 (-ForceUpdateScene@CWindowList@@QEAAJXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D254 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetupDelayBeforeEntranceAnimation@CDisplaySecondaryOnlyAnimatedVisual@@AEAAJXZ @ 0x1800BDD44 (-SetupDelayBeforeEntranceAnimation@CDisplaySecondaryOnlyAnimatedVisual@@AEAAJXZ.c)
 *     ?SetCenter@CVisual@@QEAAXNN@Z @ 0x180105508 (-SetCenter@CVisual@@QEAAXNN@Z.c)
 */

__int64 __fastcall CDisplaySecondaryOnlyAnimatedVisual::StartImpl(CDisplaySecondaryOnlyAnimatedVisual *this)
{
  CWindowList *v2; // rsi
  struct CVisual *RenderTargetRootVisualForDesktop; // rax
  int inserted; // ebx
  __int64 v5; // rdx
  int v7; // eax
  int v8; // edx
  int v9; // eax
  int v10; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  unsigned __int64 v12; // [rsp+48h] [rbp+10h] BYREF
  int v13; // [rsp+50h] [rbp+18h] BYREF
  int v14; // [rsp+54h] [rbp+1Ch]

  v12 = 0LL;
  GetDesktopID(1LL, &v12);
  v2 = (CWindowList *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 54);
  RenderTargetRootVisualForDesktop = CWindowList::GetRenderTargetRootVisualForDesktop(v2, v12);
  inserted = VisualCollection::InsertRelative(
               (struct CVisual *)((char *)RenderTargetRootVisualForDesktop + 32),
               (unsigned __int64)this,
               0LL,
               0,
               v10);
  if ( inserted < 0 )
  {
    v5 = 59LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"clientcore\\windows\\dwm\\udwm\\displaysecondaryonlyanimatedvisual.cpp",
      (const char *)(unsigned int)inserted);
    return (unsigned int)inserted;
  }
  inserted = CVisual::MoveToFront(this, 0);
  if ( inserted < 0 )
  {
    v5 = 60LL;
    goto LABEL_3;
  }
  v7 = 0;
  v8 = *((_DWORD *)this + 77) - *((_DWORD *)this + 75);
  if ( *((_DWORD *)this + 76) - *((_DWORD *)this + 74) >= 0 )
    v7 = *((_DWORD *)this + 76) - *((_DWORD *)this + 74);
  v13 = v7;
  v9 = 0;
  if ( v8 >= 0 )
    v9 = v8;
  v14 = v9;
  (*(void (__fastcall **)(CDisplaySecondaryOnlyAnimatedVisual *, int *))(*(_QWORD *)this + 104LL))(this, &v13);
  CVisual::SetCenter(this, (double)(*((_DWORD *)this + 32) / 2), (double)(*((_DWORD *)this + 33) / 2));
  inserted = CDisplaySecondaryOnlyAnimatedVisual::SetupDelayBeforeEntranceAnimation(this);
  if ( inserted < 0 )
  {
    v5 = 68LL;
    goto LABEL_3;
  }
  inserted = CWindowList::ForceUpdateScene(v2);
  if ( inserted < 0 )
  {
    v5 = 75LL;
    goto LABEL_3;
  }
  return 0LL;
}
