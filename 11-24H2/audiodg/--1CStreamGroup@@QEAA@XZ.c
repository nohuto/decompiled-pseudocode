/*
 * XREFs of ??1CStreamGroup@@QEAA@XZ @ 0x14002B1F4
 * Callers:
 *     ??1?$CComObject@VCStreamGroup@@@ATL@@UEAA@XZ @ 0x1400453AC (--1-$CComObject@VCStreamGroup@@@ATL@@UEAA@XZ.c)
 *     ??1?$CComAggObject@VCStreamGroup@@@ATL@@UEAA@XZ @ 0x1400650C0 (--1-$CComAggObject@VCStreamGroup@@@ATL@@UEAA@XZ.c)
 * Callees:
 *     ??1CSubmixImpl@@QEAA@XZ @ 0x14002A48C (--1CSubmixImpl@@QEAA@XZ.c)
 */

void __fastcall CStreamGroup::~CStreamGroup(CStreamGroup *this)
{
  CSubmixImpl::~CSubmixImpl((CStreamGroup *)((char *)this + 24));
  ATL::CComSafeDeleteCriticalSection::~CComSafeDeleteCriticalSection((CStreamGroup *)((char *)this + 352));
}
