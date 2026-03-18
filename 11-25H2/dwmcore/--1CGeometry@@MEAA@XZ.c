/*
 * XREFs of ??1CGeometry@@MEAA@XZ @ 0x180133164
 * Callers:
 *     ??_ECRectangleGeometry@@UEAAPEAXI@Z @ 0x1801330C0 (--_ECRectangleGeometry@@UEAAPEAXI@Z.c)
 *     ??1CCombinedGeometry@@MEAA@XZ @ 0x1801F7F3C (--1CCombinedGeometry@@MEAA@XZ.c)
 *     ??1?$CRegionGeometryGeneratedT@VCRegionGeometry@@VCGeometry@@@@UEAA@XZ @ 0x18020342C (--1-$CRegionGeometryGeneratedT@VCRegionGeometry@@VCGeometry@@@@UEAA@XZ.c)
 *     ??1CPathGeometry@@MEAA@XZ @ 0x18020E78C (--1CPathGeometry@@MEAA@XZ.c)
 *     ??1CProxyGeometry@@MEAA@XZ @ 0x18020FEDC (--1CProxyGeometry@@MEAA@XZ.c)
 *     ??_ECLineGeometry@@UEAAPEAXI@Z @ 0x180224600 (--_ECLineGeometry@@UEAAPEAXI@Z.c)
 *     ??1CGeometryGroup@@MEAA@XZ @ 0x1802A5CD0 (--1CGeometryGroup@@MEAA@XZ.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180023388 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ??1CShapePtr@@QEAA@XZ @ 0x1800AB910 (--1CShapePtr@@QEAA@XZ.c)
 */

void __fastcall CGeometry::~CGeometry(struct CResource **this)
{
  CResource::UnRegisterNotifierInternal((CResource *)this, this[10]);
  this[10] = 0LL;
  CShapePtr::~CShapePtr(this + 13);
  CShapePtr::~CShapePtr(this + 11);
  CResource::~CResource((CResource *)this);
}
