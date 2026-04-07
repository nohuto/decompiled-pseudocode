/*
 * XREFs of ?CancelCrossfade@CButton@@QEAAJXZ @ 0x18007F2EC
 * Callers:
 *     ?CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_NPEAPEAV1@@Z @ 0x180031D68 (-CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_NPEAPEAV1@@Z.c)
 * Callees:
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001D960 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 */

__int64 __fastcall CButton::CancelCrossfade(CButton *this)
{
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // r8

  result = 0LL;
  if ( *((_QWORD *)this + 43) )
  {
    *((_BYTE *)this + 240) |= 0x40u;
    CVisual::SetDirtyFlags(this, 0x10000);
    return CContainerVisual::RenderRecursive(this, v3, v4);
  }
  return result;
}
