/*
 * XREFs of ?SetBorderParameters@CWindowBorder@@QEAAJAEBUtagRECT@@MHAEBU_D3DCOLORVALUE@@W4BorderStyle@1@W4ShadowStyle@1@@Z @ 0x18003567C
 * Callers:
 *     ?InitializeVisualTreeClone@CWindowBorder@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x18000660C (-InitializeVisualTreeClone@CWindowBorder@@IEAAJPEAV1@W4CloneOptions@@@Z.c)
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x18003D8E0 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 *     ?EnsureBackgroundEffects@CAcrylicSheet@@AEAAJXZ @ 0x1800A2B40 (-EnsureBackgroundEffects@CAcrylicSheet@@AEAAJXZ.c)
 *     ?AddIconPlate@UserResizeVisual@implementation@Transitions@Udwm@winrt@@AEAAXXZ @ 0x180104184 (-AddIconPlate@UserResizeVisual@implementation@Transitions@Udwm@winrt@@AEAAXXZ.c)
 * Callees:
 *     ?CreateAndAttachBorderBrush@CWindowBorder@@AEAAJPEAUISpriteVisual@Composition@UI@Windows@@@Z @ 0x1800331B4 (-CreateAndAttachBorderBrush@CWindowBorder@@AEAAJPEAUISpriteVisual@Composition@UI@Windows@@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180033668 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?SetBorderModeForContentClip@CWindowBorder@@AEAAXXZ @ 0x180035864 (-SetBorderModeForContentClip@CWindowBorder@@AEAAXXZ.c)
 *     ?SetClipRectangle@CWindowBorder@@AEAAXPEAVCRectangleGeometryProxy@@AEBUtagRECT@@@Z @ 0x1800359A8 (-SetClipRectangle@CWindowBorder@@AEAAXPEAVCRectangleGeometryProxy@@AEBUtagRECT@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D254 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CWindowBorder::SetBorderParameters(
        __int64 a1,
        const struct tagRECT *a2,
        __int64 a3,
        int a4,
        float *a5,
        int a6,
        int a7)
{
  float v7; // xmm2_4
  int v10; // ecx
  __int128 v11; // xmm0
  std::_Ref_count_base *v12; // rcx
  struct Windows::UI::Composition::ISpriteVisual *v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  int v17; // eax
  unsigned int v18; // esi
  int v19; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  LOBYTE(a3) = -*((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 17);
  v10 = *((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 17) != 0 ? a7 : 0;
  if ( v7 == *(float *)(a1 + 320)
    && a4 == *(_DWORD *)(a1 + 324)
    && *a5 == *(float *)(a1 + 332)
    && a5[1] == *(float *)(a1 + 336)
    && a5[2] == *(float *)(a1 + 340)
    && a5[3] == *(float *)(a1 + 344)
    && a6 == *(_DWORD *)(a1 + 348)
    && v10 == *(_DWORD *)(a1 + 328) )
  {
    goto LABEL_12;
  }
  *(float *)(a1 + 320) = v7;
  *(_DWORD *)(a1 + 324) = a4;
  v11 = *(_OWORD *)a5;
  *(_DWORD *)(a1 + 328) = v10;
  *(_DWORD *)(a1 + 348) = a6;
  *(_OWORD *)(a1 + 332) = v11;
  CWindowBorder::SetBorderModeForContentClip((CWindowBorder *)a1);
  v12 = *(std::_Ref_count_base **)(a1 + 296);
  *(_QWORD *)(a1 + 288) = 0LL;
  *(_QWORD *)(a1 + 296) = 0LL;
  if ( v12 )
    std::_Ref_count_base::_Decref(v12);
  v13 = *(struct Windows::UI::Composition::ISpriteVisual **)(a1 + 280);
  if ( !v13 || (v17 = CWindowBorder::CreateAndAttachBorderBrush((CWindowBorder *)a1, v13), v18 = v17, v17 >= 0) )
  {
LABEL_12:
    v14 = *(_QWORD *)(a1 + 248);
    *(struct tagRECT *)(a1 + 304) = *a2;
    if ( v14 )
    {
      if ( a2->left != *(_DWORD *)(v14 + 120) || a2->top != *(_DWORD *)(v14 + 124) )
      {
        *(_QWORD *)(v14 + 120) = *(_QWORD *)&a2->left;
        (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v14 + 24LL))(v14, 8LL, a3);
      }
      v15 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 248) + 16LL) + 16LL);
      (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v15 + 16) + 304LL))(
        *(_QWORD *)(v15 + 16),
        *(unsigned int *)(v15 + 24));
      CWindowBorder::SetClipRectangle((CWindowBorder *)a1, *(struct CRectangleGeometryProxy **)(a1 + 264), a2);
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x284,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowborder.cpp",
      (const char *)(unsigned int)v17,
      v19);
    return v18;
  }
}
