/*
 * XREFs of ??1?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@XZ @ 0x18001D8FC
 * Callers:
 *     ?OpenSessionKey@@YAJPEAUIAudioSessionInfo@@PEAUHKEY__@@PEAPEAU2@@Z @ 0x18000F540 (-OpenSessionKey@@YAJPEAUIAudioSessionInfo@@PEAUHKEY__@@PEAPEAU2@@Z.c)
 *     ?DoesStringRepresentAPositiveNumber@ApplicationSpecificEndpointInfo@@CA_NPEBG@Z @ 0x180045688 (-DoesStringRepresentAPositiveNumber@ApplicationSpecificEndpointInfo@@CA_NPEBG@Z.c)
 *     ?ReadEndpointDataFromKey@ApplicationSpecificEndpointInfo@@CAJPEBGPEAW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEAW4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@@Z @ 0x180045BBC (-ReadEndpointDataFromKey@ApplicationSpecificEndpointInfo@@CAJPEBGPEAW4__MIDL___MIDL_itf_mmdevice.c)
 *     _OpenSessionKey_::_1_::dtor$2 @ 0x180049860 (_OpenSessionKey_--_1_--dtor$2.c)
 *     _OpenSessionKey_::_1_::dtor$5 @ 0x180049880 (_OpenSessionKey_--_1_--dtor$5.c)
 *     _ATL::CSid::CSid_::_1_::dtor$0 @ 0x180049CB2 (_ATL--CSid--CSid_--_1_--dtor$0.c)
 *     _ATL::CSid::CSid_::_1_::dtor$1 @ 0x180049CC8 (_ATL--CSid--CSid_--_1_--dtor$1.c)
 *     _ATL::CSid::CSid_::_1_::dtor$2 @ 0x180049CDE (_ATL--CSid--CSid_--_1_--dtor$2.c)
 *     _ATL::CSid::CSid_::_1_::dtor$3 @ 0x180049CF4 (_ATL--CSid--CSid_--_1_--dtor$3.c)
 *     _ATL::CDacl::CAccessAce::CAccessAce_::_1_::dtor$2 @ 0x180049D0A (_ATL--CDacl--CAccessAce--CAccessAce_--_1_--dtor$2.c)
 *     _ATL::CDacl::CAccessAce::CAccessAce_::_1_::dtor$3 @ 0x180049D20 (_ATL--CDacl--CAccessAce--CAccessAce_--_1_--dtor$3.c)
 *     _ATL::CDacl::CAccessAce::CAccessAce_::_1_::dtor$4 @ 0x180049D36 (_ATL--CDacl--CAccessAce--CAccessAce_--_1_--dtor$4.c)
 *     _ATL::CDacl::CAccessAce::CAccessAce_::_1_::dtor$5 @ 0x180049D4C (_ATL--CDacl--CAccessAce--CAccessAce_--_1_--dtor$5.c)
 *     _ATL::CStringT_unsigned_short_ATL::StrTraitATL_unsigned_short_ATL::ChTraitsCRT_unsigned_short_____::FormatV_::_1_::dtor$0 @ 0x180049D62 (_ATL--CStringT_unsigned_short_ATL--StrTraitATL_unsigned_short_ATL--ChTraitsCRT_unsigned_short___.c)
 *     _ATL::CStringT_unsigned_short_ATL::StrTraitATL_unsigned_short_ATL::ChTraitsCRT_unsigned_short_____::CStringT_unsigned_short_ATL::StrTraitATL_unsigned_short_ATL::ChTraitsCRT_unsigned_short______::_1_::dtor$0 @ 0x18004B710 (_ATL--CStringT_unsigned_short_ATL--StrTraitATL_unsigned_short_ATL--ChTraitsCRT_unsi_ea_18004B710.c)
 *     _ApplicationSpecificEndpointInfo::DoesStringRepresentAPositiveNumber_::_1_::dtor$0 @ 0x18004B7B8 (_ApplicationSpecificEndpointInfo--DoesStringRepresentAPositiveNumber_--_1_--dtor$0.c)
 *     _ApplicationSpecificEndpointInfo::ReadEndpointDataFromKey_::_1_::dtor$0 @ 0x18004B83C (_ApplicationSpecificEndpointInfo--ReadEndpointDataFromKey_--_1_--dtor$0.c)
 *     _ApplicationSpecificEndpointInfo::ReadEndpointDataFromKey_::_1_::dtor$1 @ 0x18004B84E (_ApplicationSpecificEndpointInfo--ReadEndpointDataFromKey_--_1_--dtor$1.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004C010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::~CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(
        _QWORD *a1)
{
  volatile signed __int32 *v1; // rdx
  signed __int32 v2; // eax
  bool v3; // cc
  __int64 result; // rax

  v1 = (volatile signed __int32 *)(*a1 - 24LL);
  v2 = _InterlockedExchangeAdd(v1 + 4, 0xFFFFFFFF);
  v3 = v2 <= 1;
  result = (unsigned int)(v2 - 1);
  if ( v3 )
    return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)v1 + 8LL))(*(_QWORD *)v1);
  return result;
}
