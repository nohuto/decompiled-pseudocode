/*
 * XREFs of _ATL::CAtlArray_CVolumeUnit_ATL::CElementTraits_CVolumeUnit___::SetAtGrow_::_1_::catch$0 @ 0x18016C545
 * Callers:
 *     <none>
 * Callees:
 *     ?SetCount@?$CAtlArray@VCVolumeUnit@@V?$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAA_N_KH@Z @ 0x18011547C (-SetCount@-$CAtlArray@VCVolumeUnit@@V-$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAA_N_KH@Z.c)
 *     _CxxThrowException_0 @ 0x180167F30 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn ATL::CAtlArray_CVolumeUnit_ATL::CElementTraits_CVolumeUnit___::SetAtGrow_::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  size_t v3; // rdx
  __int64 v4; // rcx

  v3 = *(_QWORD *)(a2 + 56);
  v4 = *(_QWORD *)(a2 + 48);
  if ( *(_QWORD *)(v4 + 8) != v3 )
    ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::SetCount(v4, v3);
  throw;
}
