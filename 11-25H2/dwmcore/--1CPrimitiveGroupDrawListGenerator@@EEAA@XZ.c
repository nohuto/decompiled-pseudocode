/*
 * XREFs of ??1CPrimitiveGroupDrawListGenerator@@EEAA@XZ @ 0x180044A4C
 * Callers:
 *     ??_GCPrimitiveGroupDrawListGenerator@@EEAAPEAXI@Z @ 0x180044A10 (--_GCPrimitiveGroupDrawListGenerator@@EEAAPEAXI@Z.c)
 * Callees:
 *     ??_GCPrimitiveBuffer@@QEAAPEAXI@Z @ 0x180045584 (--_GCPrimitiveBuffer@@QEAAPEAXI@Z.c)
 *     ??1?$unique_ptr@$$BY0A@VCDrawListBitmap@@U?$default_delete@$$BY0A@VCDrawListBitmap@@@std@@@std@@QEAA@XZ @ 0x1800CFED0 (--1-$unique_ptr@$$BY0A@VCDrawListBitmap@@U-$default_delete@$$BY0A@VCDrawListBitmap@@@std@@@std@@.c)
 *     ??_GCRegion@@QEAAPEAXI@Z @ 0x180229D54 (--_GCRegion@@QEAAPEAXI@Z.c)
 */

void __fastcall CPrimitiveGroupDrawListGenerator::~CPrimitiveGroupDrawListGenerator(
        CPrimitiveGroupDrawListGenerator *this,
        unsigned int a2)
{
  CPrimitiveBuffer *v3; // rcx
  CPrimitiveBuffer *v4; // rcx
  CRegion *v5; // rcx

  *(_QWORD *)this = &CPrimitiveGroupDrawListGenerator::`vftable';
  v3 = (CPrimitiveBuffer *)*((_QWORD *)this + 2);
  if ( v3 )
    CPrimitiveBuffer::`scalar deleting destructor'(v3, a2);
  v4 = (CPrimitiveBuffer *)*((_QWORD *)this + 3);
  if ( v4 )
    CPrimitiveBuffer::`scalar deleting destructor'(v4, a2);
  v5 = (CRegion *)*((_QWORD *)this + 12);
  if ( v5 )
    CRegion::`scalar deleting destructor'(v5, 1u);
  std::unique_ptr<CDrawListBitmap [0]>::~unique_ptr<CDrawListBitmap [0]>((char *)this + 88);
  std::unique_ptr<CDrawListBitmap [0]>::~unique_ptr<CDrawListBitmap [0]>((char *)this + 80);
}
