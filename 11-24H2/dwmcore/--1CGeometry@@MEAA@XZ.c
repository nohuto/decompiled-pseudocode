/*
 * XREFs of ??1CGeometry@@MEAA@XZ @ 0x180133814
 * Callers:
 *     ??_ECRectangleGeometry@@UEAAPEAXI@Z @ 0x180133770 (--_ECRectangleGeometry@@UEAAPEAXI@Z.c)
 *     ??1CPathGeometry@@MEAA@XZ @ 0x18018079C (--1CPathGeometry@@MEAA@XZ.c)
 *     ??1CCombinedGeometry@@MEAA@XZ @ 0x1801EAADC (--1CCombinedGeometry@@MEAA@XZ.c)
 *     ??1?$CRegionGeometryGeneratedT@VCRegionGeometry@@VCGeometry@@@@UEAA@XZ @ 0x1801F742C (--1-$CRegionGeometryGeneratedT@VCRegionGeometry@@VCGeometry@@@@UEAA@XZ.c)
 *     ??1CProxyGeometry@@MEAA@XZ @ 0x180203B5C (--1CProxyGeometry@@MEAA@XZ.c)
 *     ??_ECLineGeometry@@UEAAPEAXI@Z @ 0x180218940 (--_ECLineGeometry@@UEAAPEAXI@Z.c)
 *     ??1CGeometryGroup@@MEAA@XZ @ 0x18029BF10 (--1CGeometryGroup@@MEAA@XZ.c)
 * Callees:
 *     ??1CShapePtr@@QEAA@XZ @ 0x180079AF0 (--1CShapePtr@@QEAA@XZ.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180134248 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 */

void __fastcall CGeometry::~CGeometry(struct CResource **this)
{
  CResource::UnRegisterNotifierInternal((CResource *)this, this[10]);
  this[10] = 0LL;
  CShapePtr::~CShapePtr(this + 13);
  CShapePtr::~CShapePtr(this + 11);
  CResource::~CResource((CResource *)this);
}
