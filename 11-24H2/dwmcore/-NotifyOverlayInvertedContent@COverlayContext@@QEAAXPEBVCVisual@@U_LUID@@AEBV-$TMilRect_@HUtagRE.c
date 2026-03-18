/*
 * XREFs of ?NotifyOverlayInvertedContent@COverlayContext@@QEAAXPEBVCVisual@@U_LUID@@AEBV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x180245C54
 * Callers:
 *     ?PushOverlayClip@CDrawingContext@@QEAAJPEAVIBitmapResource@@AEBV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x180266F20 (-PushOverlayClip@CDrawingContext@@QEAAJPEAVIBitmapResource@@AEBV-$TMilRect_@HUtagRECT@@UD2D_POIN.c)
 * Callees:
 *     ?IsEmpty@?$TMilRect@HUtagRECT@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ @ 0x180027EE0 (-IsEmpty@-$TMilRect@HUtagRECT@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?FindOverlayPlaneIndex@COverlayContext@@AEBAHPEBVCVisual@@U_LUID@@@Z @ 0x1801EE648 (-FindOverlayPlaneIndex@COverlayContext@@AEBAHPEBVCVisual@@U_LUID@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall COverlayContext::NotifyOverlayInvertedContent(
        COverlayContext *a1,
        const struct CVisual *a2,
        struct _LUID a3,
        _DWORD *a4)
{
  __int64 result; // rax
  __int64 v6; // rcx
  __int64 v7; // rdi
  bool IsEmpty; // al
  __int64 v9; // rdx
  char v10; // r8
  int v11; // eax
  int v12; // eax
  int v13; // eax

  result = COverlayContext::FindOverlayPlaneIndex(a1, a2, a3);
  if ( (_DWORD)result != -1 )
  {
    v7 = *(_QWORD *)(v6 + 12680) + 392LL * (int)result;
    TMilRect<int,tagRECT,D2D_POINTANDSIZE_L,RectUniqueness::_CMilRectL_>::IsEmpty((_DWORD *)(v7 + 260));
    IsEmpty = TMilRect<int,tagRECT,D2D_POINTANDSIZE_L,RectUniqueness::_CMilRectL_>::IsEmpty(a4);
    if ( v10 )
    {
      if ( IsEmpty )
      {
        *(_QWORD *)(v9 + 8) = 0LL;
        *(_QWORD *)v9 = 0LL;
      }
      else
      {
        *(_OWORD *)v9 = *(_OWORD *)a4;
      }
    }
    else if ( !IsEmpty )
    {
      if ( *a4 < *(_DWORD *)v9 )
        *(_DWORD *)v9 = *a4;
      v11 = a4[1];
      if ( v11 < *(_DWORD *)(v9 + 4) )
        *(_DWORD *)(v9 + 4) = v11;
      v12 = a4[2];
      if ( v12 > *(_DWORD *)(v9 + 8) )
        *(_DWORD *)(v9 + 8) = v12;
      v13 = a4[3];
      if ( v13 > *(_DWORD *)(v9 + 12) )
        *(_DWORD *)(v9 + 12) = v13;
    }
    result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v7 + 16) + 320LL))(*(_QWORD *)(v7 + 16));
    *(_DWORD *)(v7 + 276) = result;
  }
  return result;
}
