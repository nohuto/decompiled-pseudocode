/*
 * XREFs of ??1CStreamGroup@@QEAA@XZ @ 0x14002B4F4
 * Callers:
 *     ??1?$CComObject@VCStreamGroup@@@ATL@@UEAA@XZ @ 0x1400456AC (--1-$CComObject@VCStreamGroup@@@ATL@@UEAA@XZ.c)
 *     ??1?$CComAggObject@VCStreamGroup@@@ATL@@UEAA@XZ @ 0x140065130 (--1-$CComAggObject@VCStreamGroup@@@ATL@@UEAA@XZ.c)
 * Callees:
 *     ??1CSubmixImpl@@QEAA@XZ @ 0x14002A78C (--1CSubmixImpl@@QEAA@XZ.c)
 */

void __fastcall CStreamGroup::~CStreamGroup(CStreamGroup *this)
{
  CSubmixImpl::~CSubmixImpl((CStreamGroup *)((char *)this + 24));
  ATL::CComSafeDeleteCriticalSection::~CComSafeDeleteCriticalSection((CStreamGroup *)((char *)this + 352));
}
