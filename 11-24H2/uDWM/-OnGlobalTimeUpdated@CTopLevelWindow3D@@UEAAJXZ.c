/*
 * XREFs of ?OnGlobalTimeUpdated@CTopLevelWindow3D@@UEAAJXZ @ 0x18001D870
 * Callers:
 *     <none>
 * Callees:
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001D960 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 */

__int64 __fastcall CTopLevelWindow3D::OnGlobalTimeUpdated(CTopLevelWindow3D *this)
{
  CVisual::SetDirtyFlags(this, 0x1000u);
  return 0LL;
}
