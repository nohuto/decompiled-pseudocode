/*
 * XREFs of ?reset@?$unique_ptr@VCRegion@@U?$default_delete@VCRegion@@@std@@@std@@QEAAXPEAVCRegion@@@Z @ 0x180227F24
 * Callers:
 *     ?GetContentRegion@CPrimitiveGroupDrawListGenerator@@QEAAPEBVCRegion@@XZ @ 0x180172CD0 (-GetContentRegion@CPrimitiveGroupDrawListGenerator@@QEAAPEBVCRegion@@XZ.c)
 *     ?EnableTightDirtyRegion@?$CTargetDirtyBase@$07@@QEAAX_N@Z @ 0x180189754 (-EnableTightDirtyRegion@-$CTargetDirtyBase@$07@@QEAAX_N@Z.c)
 * Callees:
 *     ??_GCRegion@@QEAAPEAXI@Z @ 0x18021E8D0 (--_GCRegion@@QEAAPEAXI@Z.c)
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
