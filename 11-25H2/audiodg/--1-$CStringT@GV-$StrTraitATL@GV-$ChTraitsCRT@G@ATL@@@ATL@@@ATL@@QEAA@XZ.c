/*
 * XREFs of ??1?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@XZ @ 0x14004B6A8
 * Callers:
 *     _ATL::CStringT_unsigned_short_ATL::StrTraitATL_unsigned_short_ATL::ChTraitsCRT_unsigned_short_____::CStringT_unsigned_short_ATL::StrTraitATL_unsigned_short_ATL::ChTraitsCRT_unsigned_short______::_1_::dtor$0 @ 0x14009381E (_ATL--CStringT_unsigned_short_ATL--StrTraitATL_unsigned_short_ATL--ChTraitsCRT_unsigned_short___.c)
 *     _CSystemAudioDeviceCollection::Add_::_1_::dtor$1 @ 0x140093842 (_CSystemAudioDeviceCollection--Add_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

void __fastcall ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::~CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(
        _QWORD *a1)
{
  ATL::CStringData::Release((ATL::CStringData *)(*a1 - 24LL));
}
