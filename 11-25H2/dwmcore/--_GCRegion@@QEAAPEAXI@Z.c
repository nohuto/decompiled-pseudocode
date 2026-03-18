/*
 * XREFs of ??_GCRegion@@QEAAPEAXI@Z @ 0x180229D54
 * Callers:
 *     ??1CPrimitiveGroupDrawListGenerator@@EEAA@XZ @ 0x180044A4C (--1CPrimitiveGroupDrawListGenerator@@EEAA@XZ.c)
 *     ??1?$unique_ptr@VCRegion@@U?$default_delete@VCRegion@@@std@@@std@@QEAA@XZ @ 0x18020AC50 (--1-$unique_ptr@VCRegion@@U-$default_delete@VCRegion@@@std@@@std@@QEAA@XZ.c)
 *     ?reset@?$unique_ptr@VCRegion@@U?$default_delete@VCRegion@@@std@@@std@@QEAAXPEAVCRegion@@@Z @ 0x1802338A4 (-reset@-$unique_ptr@VCRegion@@U-$default_delete@VCRegion@@@std@@@std@@QEAAXPEAVCRegion@@@Z.c)
 *     ?_Destroy@?$_Ref_count_obj2@VCRegion@@@std@@EEAAXXZ @ 0x180287D20 (-_Destroy@-$_Ref_count_obj2@VCRegion@@@std@@EEAAXXZ.c)
 * Callees:
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180099AE0 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18025C2F4 (--3@YAXPEAX_K@Z.c)
 */

FastRegion::CRegion **__fastcall CRegion::`scalar deleting destructor'(FastRegion::CRegion **this, char a2)
{
  FastRegion::CRegion::FreeMemory(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x48uLL);
  return this;
}
