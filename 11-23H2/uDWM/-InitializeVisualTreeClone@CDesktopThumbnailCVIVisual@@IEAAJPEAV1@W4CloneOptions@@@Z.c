/*
 * XREFs of ?InitializeVisualTreeClone@CDesktopThumbnailCVIVisual@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x1800B6458
 * Callers:
 *     ?CloneVisualTree@CDesktopThumbnailCVIVisual@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z @ 0x1800B5D50 (-CloneVisualTree@CDesktopThumbnailCVIVisual@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z.c)
 * Callees:
 *     ?InitializeVisualTreeClone@CRenderDataVisual@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x1800021A8 (-InitializeVisualTreeClone@CRenderDataVisual@@IEAAJPEAV1@W4CloneOptions@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D254 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CDesktopThumbnailCVIVisual::InitializeVisualTreeClone(_QWORD *a1, CRenderDataVisual *a2)
{
  int v4; // eax
  unsigned int v5; // esi
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = CRenderDataVisual::InitializeVisualTreeClone((__int64)a1, a2);
  v5 = v4;
  if ( v4 >= 0 )
  {
    *((_QWORD *)a2 + 38) = a1[38];
    v7 = a1[38];
    if ( v7 )
      _InterlockedIncrement((volatile signed __int32 *)(v7 + 8));
    *((_QWORD *)a2 + 36) = a1[36];
    v8 = a1[36];
    if ( v8 )
      _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
    *((_QWORD *)a2 + 39) = a1[39];
    v9 = a1[39];
    if ( v9 )
      _InterlockedIncrement((volatile signed __int32 *)(v9 + 8));
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x216,
      (__int64)"clientcore\\windows\\dwm\\udwm\\desktopthumbnail.cpp",
      (const char *)(unsigned int)v4);
    return v5;
  }
}
