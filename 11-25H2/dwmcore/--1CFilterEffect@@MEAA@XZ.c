/*
 * XREFs of ??1CFilterEffect@@MEAA@XZ @ 0x18027F95C
 * Callers:
 *     ??_GCAffineTransform2DEffect@@UEAAPEAXI@Z @ 0x18027FF80 (--_GCAffineTransform2DEffect@@UEAAPEAXI@Z.c)
 *     ??_ECShadowEffect@@UEAAPEAXI@Z @ 0x18027FFD0 (--_ECShadowEffect@@UEAAPEAXI@Z.c)
 *     ??_GCCompositeEffect@@UEAAPEAXI@Z @ 0x180280070 (--_GCCompositeEffect@@UEAAPEAXI@Z.c)
 *     ??_GCBrightnessEffect@@UEAAPEAXI@Z @ 0x1802800C0 (--_GCBrightnessEffect@@UEAAPEAXI@Z.c)
 *     ??_GCColorMatrixEffect@@UEAAPEAXI@Z @ 0x180280110 (--_GCColorMatrixEffect@@UEAAPEAXI@Z.c)
 *     ??_GCFilterEffect@@MEAAPEAXI@Z @ 0x1802802A0 (--_GCFilterEffect@@MEAAPEAXI@Z.c)
 *     ??_GCLinearTransferEffect@@UEAAPEAXI@Z @ 0x1802A8D90 (--_GCLinearTransferEffect@@UEAAPEAXI@Z.c)
 *     ??1CTableTransferEffect@@UEAA@XZ @ 0x1802B10DC (--1CTableTransferEffect@@UEAA@XZ.c)
 *     ??_ECTurbulenceEffect@@UEAAPEAXI@Z @ 0x1802B1A40 (--_ECTurbulenceEffect@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$CDeviceResourceTable@VCD2DEffect@@VCFilterEffect@@@@QEAA@XZ @ 0x18027F6BC (--1-$CDeviceResourceTable@VCD2DEffect@@VCFilterEffect@@@@QEAA@XZ.c)
 *     ?RemoveAll@?$CMap@IPEAVInternalFilterInput@@V?$CMapEqualHelper@IPEAVInternalFilterInput@@@@@@QEAAXXZ @ 0x180282DA8 (-RemoveAll@-$CMap@IPEAVInternalFilterInput@@V-$CMapEqualHelper@IPEAVInternalFilterInput@@@@@@QEA.c)
 *     ?EmptyFilterInputMap@CFilterEffect@@AEAAXXZ @ 0x18029D3A4 (-EmptyFilterInputMap@CFilterEffect@@AEAAXXZ.c)
 */

void __fastcall CFilterEffect::~CFilterEffect(CFilterEffect *this)
{
  *(_QWORD *)this = &CFilterEffect::`vftable';
  CFilterEffect::EmptyFilterInputMap(this);
  CMap<unsigned int,InternalFilterInput *,CMapEqualHelper<unsigned int,InternalFilterInput *>>::RemoveAll((char *)this + 136);
  CDeviceResourceTable<CD2DEffect,CFilterEffect>::~CDeviceResourceTable<CD2DEffect,CFilterEffect>((_QWORD *)this + 10);
  CResource::~CResource(this);
}
