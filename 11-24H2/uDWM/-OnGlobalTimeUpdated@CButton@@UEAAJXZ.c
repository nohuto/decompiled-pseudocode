/*
 * XREFs of ?OnGlobalTimeUpdated@CButton@@UEAAJXZ @ 0x18001D890
 * Callers:
 *     <none>
 * Callees:
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001D960 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 */

__int64 __fastcall CButton::OnGlobalTimeUpdated(CButton *this)
{
  CVisual::SetDirtyFlags(this, 0x10000u);
  return 0LL;
}
