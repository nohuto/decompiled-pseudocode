/*
 * XREFs of ?_LayoutChildren@CMultitaskingViewElementBase@@IEAAXW4DCompThumbnailAnimation@@PEAUIUIAnimationStoryboardEventHandler2@@@Z @ 0x1804C57E0
 * Callers:
 *     ?SetThumbnailSourceSize@CSwitchItemElement@@UEAAXAEBUtagSIZE@@@Z @ 0x1804C2880 (-SetThumbnailSourceSize@CSwitchItemElement@@UEAAXAEBUtagSIZE@@@Z.c)
 *     ?Show@CSwitchItemElement@@UEAAXXZ @ 0x1804C28B0 (-Show@CSwitchItemElement@@UEAAXXZ.c)
 *     ?AddChild@CMultitaskingViewElementBase@@UEAAJPEAUIMultitaskingViewElement@@@Z @ 0x1804C3530 (-AddChild@CMultitaskingViewElementBase@@UEAAJPEAUIMultitaskingViewElement@@@Z.c)
 *     ?RemoveChild@CMultitaskingViewElementBase@@UEAAJPEAUIMultitaskingViewElement@@_N@Z @ 0x1804C4B50 (-RemoveChild@CMultitaskingViewElementBase@@UEAAJPEAUIMultitaskingViewElement@@_N@Z.c)
 *     ?SetPosition@CMultitaskingViewElementBase@@UEAAXAEBUCRect@Geometry@@W4DCompThumbnailAnimation@@PEAUIUIAnimationStoryboardEventHandler2@@@Z @ 0x1804C5190 (-SetPosition@CMultitaskingViewElementBase@@UEAAXAEBUCRect@Geometry@@W4DCompThumbnailAnimation@@P.c)
 *     ?EndUpdates@CSwitchItemGrid@@UEAAXXZ @ 0x1804C7EA0 (-EndUpdates@CSwitchItemGrid@@UEAAXXZ.c)
 *     ?ResetRowHeight@CSwitchItemGrid@@UEAAXXZ @ 0x1804C91A0 (-ResetRowHeight@CSwitchItemGrid@@UEAAXXZ.c)
 *     ?UpdateGridMetrics@CSwitchItemGrid@@UEAAXAEBUGridMetrics@@@Z @ 0x1804C9890 (-UpdateGridMetrics@CSwitchItemGrid@@UEAAXAEBUGridMetrics@@@Z.c)
 *     ?Show@SwitchItemThumbnailElement@@UEAAXXZ @ 0x1804D55A0 (-Show@SwitchItemThumbnailElement@@UEAAXXZ.c)
 *     ?FrameRectChanged@CVirtualDesktopContainerElement@@UEAAXAEBUtagRECT@@@Z @ 0x1804DEA40 (-FrameRectChanged@CVirtualDesktopContainerElement@@UEAAXAEBUtagRECT@@@Z.c)
 * Callees:
 *     ?IsEmpty@CRect@Geometry@@QEBA_NXZ @ 0x1800B6B84 (-IsEmpty@CRect@Geometry@@QEBA_NXZ.c)
 *     ?_PointerMove@CMultitaskingViewElementBase@@IEAAXAEBVMultitaskingViewPointerInputArgs@@@Z @ 0x1804C58D4 (-_PointerMove@CMultitaskingViewElementBase@@IEAAXAEBVMultitaskingViewPointerInputArgs@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CMultitaskingViewElementBase::_LayoutChildren(_QWORD *a1, unsigned int a2, __int64 a3)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rcx

  if ( !Geometry::CRect::IsEmpty((Geometry::CRect *)(a1 + 7)) )
  {
    v8 = a1[11];
    if ( v8 )
      (*(void (__fastcall **)(__int64, __int64, _QWORD, __int64))(*(_QWORD *)v8 + 24LL))(v8, v6, a2, v7);
    (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*a1 + 520LL))(a1, a2, a3);
    if ( *((_DWORD *)a1 + 24) == 1 )
      CMultitaskingViewElementBase::_PointerMove(
        (CMultitaskingViewElementBase *)a1,
        (const struct MultitaskingViewPointerInputArgs *)(a1 + 18));
  }
}
