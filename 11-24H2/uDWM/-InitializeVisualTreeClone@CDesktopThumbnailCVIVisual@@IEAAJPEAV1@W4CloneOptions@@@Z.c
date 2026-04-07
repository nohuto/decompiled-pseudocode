/*
 * XREFs of ?InitializeVisualTreeClone@CDesktopThumbnailCVIVisual@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x1800BC304
 * Callers:
 *     ?CloneVisualTree@CDesktopThumbnailCVIVisual@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z @ 0x1800BBC20 (-CloneVisualTree@CDesktopThumbnailCVIVisual@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z.c)
 * Callees:
 *     ?InitializeVisualTreeClone@CRenderDataVisual@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x1800203D8 (-InitializeVisualTreeClone@CRenderDataVisual@@IEAAJPEAV1@W4CloneOptions@@@Z.c)
 *     ?AddRef@CMILRefCountBase@@UEAAKXZ @ 0x1800263E0 (-AddRef@CMILRefCountBase@@UEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CDesktopThumbnailCVIVisual::InitializeVisualTreeClone(_QWORD *a1, CRenderDataVisual *a2)
{
  int v4; // eax
  unsigned int v5; // esi
  CMILRefCountBase *v7; // rcx
  CMILRefCountBase *v8; // rcx
  CMILRefCountBase *v9; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = CRenderDataVisual::InitializeVisualTreeClone((__int64)a1, a2);
  v5 = v4;
  if ( v4 >= 0 )
  {
    *((_QWORD *)a2 + 32) = a1[32];
    v7 = (CMILRefCountBase *)a1[32];
    if ( v7 )
      CMILRefCountBase::AddRef(v7);
    *((_QWORD *)a2 + 30) = a1[30];
    v8 = (CMILRefCountBase *)a1[30];
    if ( v8 )
      CMILRefCountBase::AddRef(v8);
    *((_QWORD *)a2 + 33) = a1[33];
    v9 = (CMILRefCountBase *)a1[33];
    if ( v9 )
      CMILRefCountBase::AddRef(v9);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x20F,
      (__int64)"clientcore\\windows\\dwm\\udwm\\desktopthumbnail.cpp",
      (const char *)(unsigned int)v4);
    return v5;
  }
}
