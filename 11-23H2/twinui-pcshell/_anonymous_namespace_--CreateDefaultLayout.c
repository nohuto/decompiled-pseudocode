/*
 * XREFs of _anonymous_namespace_::CreateDefaultLayout @ 0x18067F970
 * Callers:
 *     ?CalculateSnapRegion@SnapLayoutProvider@@QEAA?AUCalculatedSnapRegion@@AEBUSnapRegionCalculationArgs@@@Z @ 0x18067F050 (-CalculateSnapRegion@SnapLayoutProvider@@QEAA-AUCalculatedSnapRegion@@AEBUSnapRegionCalculationA.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 */

void ****__fastcall anonymous_namespace_::CreateDefaultLayout(void ****a1, char a2)
{
  void ***v4; // rax
  void **v5; // rcx

  v4 = (void ***)operator new(8uLL);
  v5 = &TopBottomSnapLayout::`vftable';
  if ( !a2 )
    v5 = &DefaultSnapLayout::`vftable';
  *v4 = v5;
  *a1 = v4;
  return a1;
}
