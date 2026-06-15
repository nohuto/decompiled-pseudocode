/*
 * XREFs of ??1CSid@ATL@@UEAA@XZ @ 0x1800A02A4
 * Callers:
 *     ?GetADGProcessSD@CAudioDGProcess@@CAJPEAPEAX@Z @ 0x18001EAB8 (-GetADGProcessSD@CAudioDGProcess@@CAJPEAPEAX@Z.c)
 *     ??1CAce@CAcl@ATL@@UEAA@XZ @ 0x1800A2EC8 (--1CAce@CAcl@ATL@@UEAA@XZ.c)
 *     ??_GCSid@ATL@@UEAAPEAXI@Z @ 0x1800AAE30 (--_GCSid@ATL@@UEAAPEAXI@Z.c)
 *     _CAudioDGProcess::GetADGProcessSD_::_1_::dtor$3 @ 0x180169CDD (_CAudioDGProcess--GetADGProcessSD_--_1_--dtor$3.c)
 * Callees:
 *     ??1?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@XZ @ 0x1800286C0 (--1-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@XZ.c)
 */

void __fastcall ATL::CSid::~CSid(ATL::CSid *this)
{
  *(_QWORD *)this = &ATL::CSid::`vftable';
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::~CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>((_QWORD *)this + 14);
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::~CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>((_QWORD *)this + 13);
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::~CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>((_QWORD *)this + 12);
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::~CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>((_QWORD *)this + 11);
}
