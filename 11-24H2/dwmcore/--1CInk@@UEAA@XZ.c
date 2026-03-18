/*
 * XREFs of ??1CInk@@UEAA@XZ @ 0x18027524C
 * Callers:
 *     ??_ECInk@@UEAAPEAXI@Z @ 0x180275A00 (--_ECInk@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800BEF90 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ??1?$CDeviceResourceTable@VCD2DInk@@VCInk@@@@QEAA@XZ @ 0x18024F660 (--1-$CDeviceResourceTable@VCD2DInk@@VCInk@@@@QEAA@XZ.c)
 */

void __fastcall CInk::~CInk(CInk *this)
{
  *(_QWORD *)this = &CInk::`vftable';
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 144);
  CDeviceResourceTable<CD2DInk,CInk>::~CDeviceResourceTable<CD2DInk,CInk>((__int64)this + 72);
  CResource::~CResource(this);
}
