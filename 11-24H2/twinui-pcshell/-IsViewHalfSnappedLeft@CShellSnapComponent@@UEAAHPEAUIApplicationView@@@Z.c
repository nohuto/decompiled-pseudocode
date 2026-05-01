/*
 * XREFs of ?IsViewHalfSnappedLeft@CShellSnapComponent@@UEAAHPEAUIApplicationView@@@Z @ 0x18059F510
 * Callers:
 *     <none>
 * Callees:
 *     ?DetermineSnapRegionForView@SnapLayoutHelpers@@YA?AW4SnapRegion@@PEAUIApplicationView@@@Z @ 0x18008B758 (-DetermineSnapRegionForView@SnapLayoutHelpers@@YA-AW4SnapRegion@@PEAUIApplicationView@@@Z.c)
 */

_BOOL8 __fastcall CShellSnapComponent::IsViewHalfSnappedLeft(CShellSnapComponent *this, struct IApplicationView *a2)
{
  return (unsigned int)SnapLayoutHelpers::DetermineSnapRegionForView((__int64)a2) == 8;
}
