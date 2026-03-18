/*
 * XREFs of ?reset@?$unique_ptr@VCRegion@@U?$default_delete@VCRegion@@@std@@@std@@QEAAXPEAVCRegion@@@Z @ 0x1802338A4
 * Callers:
 *     ?EnableTightDirtyRegion@?$CTargetDirtyBase@$07@@QEAAX_N@Z @ 0x180207354 (-EnableTightDirtyRegion@-$CTargetDirtyBase@$07@@QEAAX_N@Z.c)
 *     ?GetContentRegion@CPrimitiveGroupDrawListGenerator@@QEAAPEBVCRegion@@XZ @ 0x18022AED8 (-GetContentRegion@CPrimitiveGroupDrawListGenerator@@QEAAPEBVCRegion@@XZ.c)
 * Callees:
 *     ??_GCRegion@@QEAAPEAXI@Z @ 0x180229D54 (--_GCRegion@@QEAAPEAXI@Z.c)
 */

FastRegion::CRegion **__fastcall std::unique_ptr<CRegion>::reset(FastRegion::CRegion ***a1, FastRegion::CRegion **a2)
{
  FastRegion::CRegion **result; // rax

  result = *a1;
  *a1 = a2;
  if ( result )
    return CRegion::`scalar deleting destructor'(result, 1);
  return result;
}
