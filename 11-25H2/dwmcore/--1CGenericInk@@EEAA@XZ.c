/*
 * XREFs of ??1CGenericInk@@EEAA@XZ @ 0x180239A6C
 * Callers:
 *     ??_GCGenericInk@@EEAAPEAXI@Z @ 0x1802802F0 (--_GCGenericInk@@EEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800E54D0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ??1?$CDeviceResourceTable@VCD2DGenericInk@@VCGenericInk@@@@QEAA@XZ @ 0x180256440 (--1-$CDeviceResourceTable@VCD2DGenericInk@@VCGenericInk@@@@QEAA@XZ.c)
 *     ?RemoveSource@CSuperWetInkManager@@QEAAXPEAVCSuperWetSource@@@Z @ 0x180257148 (-RemoveSource@CSuperWetInkManager@@QEAAXPEAVCSuperWetSource@@@Z.c)
 */

void __fastcall CGenericInk::~CGenericInk(CGenericInk *this)
{
  *(_QWORD *)this = &CGenericInk::`vftable'{for `CSuperWetSource'};
  *((_QWORD *)this + 18) = &CGenericInk::`vftable'{for `IDirtyRectSource'};
  CSuperWetInkManager::RemoveSource(*(CSuperWetInkManager **)(*((_QWORD *)this + 3) + 656LL), this);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 240);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 208);
  CDeviceResourceTable<CD2DGenericInk,CGenericInk>::~CDeviceResourceTable<CD2DGenericInk,CGenericInk>((char *)this + 152);
  CSuperWetSource::~CSuperWetSource(this);
}
