/*
 * XREFs of ??1CSpatialCrossProcessClientOutputEndpoint@@UEAA@XZ @ 0x14008912C
 * Callers:
 *     ??1?$CComAggObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@UEAA@XZ @ 0x140088EC8 (--1-$CComAggObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@UEAA@XZ.c)
 *     ??1?$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@UEAA@XZ @ 0x140088F50 (--1-$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@UEAA@XZ.c)
 *     ??_G?$CComContainedObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@UEAAPEAXI@Z @ 0x1400891E0 (--_G-$CComContainedObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1CSpatialCrossProcessClientEndpoint@@UEAA@XZ @ 0x1400890AC (--1CSpatialCrossProcessClientEndpoint@@UEAA@XZ.c)
 */

void __fastcall CSpatialCrossProcessClientOutputEndpoint::~CSpatialCrossProcessClientOutputEndpoint(
        CSpatialCrossProcessClientOutputEndpoint *this,
        __int64 a2,
        __int64 a3)
{
  CSpatialCrossProcessClientEndpoint::~CSpatialCrossProcessClientEndpoint(this, a2, a3);
  ATL::CComSafeDeleteCriticalSection::~CComSafeDeleteCriticalSection((CSpatialCrossProcessClientOutputEndpoint *)((char *)this + 1416));
}
