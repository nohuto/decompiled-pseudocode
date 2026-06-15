/*
 * XREFs of ??_ECOnDeviceStateChangedWorkItem@@UEAAPEAXI@Z @ 0x18001E360
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@XZ @ 0x18001E7A0 (--1-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800A7F7C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

COnDeviceStateChangedWorkItem *__fastcall COnDeviceStateChangedWorkItem::`vector deleting destructor'(
        COnDeviceStateChangedWorkItem *this,
        char a2)
{
  *(_QWORD *)this = &COnDeviceWorkItem::`vftable';
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::~CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>((char *)this + 8);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x28);
  return this;
}
