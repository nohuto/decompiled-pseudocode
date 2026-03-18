/*
 * XREFs of ??1?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAA@XZ @ 0x180206B24
 * Callers:
 *     ??1DataSourcePropertySet@@QEAA@XZ @ 0x18027C22C (--1DataSourcePropertySet@@QEAA@XZ.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800E54D0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 */

void __fastcall PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::~PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>(
        __int64 a1)
{
  DynArrayImpl<0>::~DynArrayImpl<0>(a1 + 32);
  DynArrayImpl<0>::~DynArrayImpl<0>(a1);
}
