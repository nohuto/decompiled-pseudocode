/*
 * XREFs of ?InitializeVisualTreeClone@CVisual@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x180021600
 * Callers:
 *     ?InitializeVisualTreeClone@CContainerVisual@@QEAAJPEAV1@W4CloneOptions@@@Z @ 0x180020898 (-InitializeVisualTreeClone@CContainerVisual@@QEAAJPEAV1@W4CloneOptions@@@Z.c)
 *     ?InitializeVisualTreeClone@CSystemBackdropVisual@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x180034A98 (-InitializeVisualTreeClone@CSystemBackdropVisual@@IEAAJPEAV1@W4CloneOptions@@@Z.c)
 *     ?CloneVisualTree@CClientArea@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z @ 0x18003E7F0 (-CloneVisualTree@CClientArea@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z.c)
 *     ?InitializeVisualTreeClone@CDWriteText@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x180074288 (-InitializeVisualTreeClone@CDWriteText@@IEAAJPEAV1@W4CloneOptions@@@Z.c)
 *     ?CloneVisualTree@CSpriteVisual@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z @ 0x1800D0FF0 (-CloneVisualTree@CSpriteVisual@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z.c)
 *     ?CloneVisualTree@CVisual@@UEAAJPEAPEAV1@W4CloneOptions@@@Z @ 0x1800EC3F0 (-CloneVisualTree@CVisual@@UEAAJPEAPEAV1@W4CloneOptions@@@Z.c)
 *     ?CloneVisualTree@CWindowTarget@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z @ 0x1800F4700 (-CloneVisualTree@CWindowTarget@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z.c)
 * Callees:
 *     ?SetRTLMirror@CVisual@@QEAAX_N@Z @ 0x180021694 (-SetRTLMirror@CVisual@@QEAAX_N@Z.c)
 *     ?SetScale@CVisual@@QEAAXMM@Z @ 0x1800216C8 (-SetScale@CVisual@@QEAAXMM@Z.c)
 *     ?SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z @ 0x180021728 (-SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z.c)
 *     ?SetBorderMode@CVisual@@QEAAXW4Enum@MilBitmapBorderMode@@@Z @ 0x180021758 (-SetBorderMode@CVisual@@QEAAXW4Enum@MilBitmapBorderMode@@@Z.c)
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x180027EF8 (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVisual::InitializeVisualTreeClone(__int64 a1, CVisual *a2)
{
  CVisual::SetOffset(a2, (const struct tagPOINT *)(a1 + 64));
  (*(void (__fastcall **)(CVisual *, __int64))(*(_QWORD *)a2 + 80LL))(a2, a1 + 72);
  CVisual::SetScale(a2, *(float *)(a1 + 112), *(float *)(a1 + 116));
  CVisual::SetRTLMirror(a2, *(_BYTE *)(a1 + 36) & 1);
  CVisual::SetInterpolationMode(a2, *(unsigned int *)(a1 + 132));
  CVisual::SetBorderMode(a2, *(unsigned int *)(a1 + 136));
  (*(void (__fastcall **)(CVisual *))(*(_QWORD *)a2 + 88LL))(a2);
  return 0LL;
}
