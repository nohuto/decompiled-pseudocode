/*
 * XREFs of ?RemoveSelfFromParent@CVisual@@QEAAJXZ @ 0x180105498
 * Callers:
 *     ?ShowProjectionBorder@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x1800478B4 (-ShowProjectionBorder@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 *     ?ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180049060 (-ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ??1CProjectedShadowScene@@MEAA@XZ @ 0x1800CDCE0 (--1CProjectedShadowScene@@MEAA@XZ.c)
 *     ?ZOrderProjectedShadowReceiverVisual@CProjectedShadowScene@@AEAAJXZ @ 0x1800CF324 (-ZOrderProjectedShadowReceiverVisual@CProjectedShadowScene@@AEAAJXZ.c)
 *     ?ToggleAutoParenting@CWindowList@@AEAAJPEAVCWindowData@@@Z @ 0x18010CC54 (-ToggleAutoParenting@CWindowList@@AEAAJPEAVCWindowData@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CVisual::RemoveSelfFromParent(CVisual *this)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 3);
  if ( v2 )
    return VisualCollection::Remove((VisualCollection *)(v2 + 32), this);
  else
    return 0LL;
}
