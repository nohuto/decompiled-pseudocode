/*
 * XREFs of memmove_s @ 0x14000C4D0
 * Callers:
 *     ?RemoveAPOInputConnection@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@0@Z @ 0x1400094D0 (-RemoveAPOInputConnection@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@0@Z.c)
 *     ?RemoveAPOOutputConnection@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@0@Z @ 0x14000A7D0 (-RemoveAPOOutputConnection@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@0@Z.c)
 *     ?RemoveAt@?$CAtlArray@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATL@@QEAAX_K0@Z @ 0x14000B2A8 (-RemoveAt@-$CAtlArray@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATL@@QEAAX_K0@Z.c)
 *     ?CommitConnections@CAPONode@@QEAAJXZ @ 0x14000BAC0 (-CommitConnections@CAPONode@@QEAAJXZ.c)
 *     ?Copy@?$CAtlArray@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATL@@QEAAXAEBV12@@Z @ 0x14000C0B0 (-Copy@-$CAtlArray@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATL@@QEAAXAEBV12@@Z.c)
 *     ?GrowBuffer@?$CAtlArray@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATL@@AEAA_N_K@Z @ 0x14000C220 (-GrowBuffer@-$CAtlArray@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATL@@AEAA_N_K@Z.c)
 *     ?Copy@?$CAtlArray@PEAUAPO_CONNECTION_PROPERTY_V_INTERNAL@@V?$CElementTraits@PEAUAPO_CONNECTION_PROPERTY_V_INTERNAL@@@ATL@@@ATL@@QEAAXAEBV12@@Z @ 0x14000C310 (-Copy@-$CAtlArray@PEAUAPO_CONNECTION_PROPERTY_V_INTERNAL@@V-$CElementTraits@PEAUAPO_CONNECTION_P.c)
 *     ?RemoveAt@?$CAtlArray@PEAUAPO_CONNECTION_PROPERTY_V_INTERNAL@@V?$CElementTraits@PEAUAPO_CONNECTION_PROPERTY_V_INTERNAL@@@ATL@@@ATL@@QEAAX_K0@Z @ 0x14000C538 (-RemoveAt@-$CAtlArray@PEAUAPO_CONNECTION_PROPERTY_V_INTERNAL@@V-$CElementTraits@PEAUAPO_CONNECTI.c)
 *     ?RemoveAt@?$CSimpleMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCSystemAudioDeviceBase@@V?$CSimpleMapEqualHelper@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCSystemAudioDeviceBase@@@2@@ATL@@QEAAHH@Z @ 0x140029EE0 (-RemoveAt@-$CSimpleMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCSyste.c)
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z @ 0x14002A0CC (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z.c)
 *     ?InsertAt@?$CAtlArray@PEAUAPO_CONNECTION_DESCRIPTOR@@V?$CElementTraits@PEAUAPO_CONNECTION_DESCRIPTOR@@@ATL@@@ATL@@QEAAX_KAEBQEAUAPO_CONNECTION_DESCRIPTOR@@0@Z @ 0x140030CD8 (-InsertAt@-$CAtlArray@PEAUAPO_CONNECTION_DESCRIPTOR@@V-$CElementTraits@PEAUAPO_CONNECTION_DESCRI.c)
 *     ?SetCount@?$CAtlArray@PEAUAPO_CONNECTION_DESCRIPTOR@@V?$CElementTraits@PEAUAPO_CONNECTION_DESCRIPTOR@@@ATL@@@ATL@@QEAA_N_KH@Z @ 0x140030DE8 (-SetCount@-$CAtlArray@PEAUAPO_CONNECTION_DESCRIPTOR@@V-$CElementTraits@PEAUAPO_CONNECTION_DESCRI.c)
 *     ?InsertAtInternal@?$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Devices@Media@Windows@@UPodLifetimeTraits@XWinRT@@U?$DefaultVectorOptions@UEventRegistrationToken@@@3Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@AEAAJIUEventRegistrationToken@@_N@Z @ 0x140041B48 (-InsertAtInternal@-$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Device.c)
 *     ?RemoveAt@?$CSimpleMap@KPEAVCVpoContext@@V?$CSimpleMapEqualHelper@KPEAVCVpoContext@@@ATL@@@ATL@@QEAAHH@Z @ 0x140073F90 (-RemoveAt@-$CSimpleMap@KPEAVCVpoContext@@V-$CSimpleMapEqualHelper@KPEAVCVpoContext@@@ATL@@@ATL@@.c)
 *     ?RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z @ 0x14007BE04 (-RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z.c)
 *     ?RemoveAtInternal@?$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Devices@Media@Windows@@UPodLifetimeTraits@XWinRT@@U?$DefaultVectorOptions@UEventRegistrationToken@@@3Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@AEAAJI_N@Z @ 0x14007C970 (-RemoveAtInternal@-$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Device.c)
 *     ?SetAt@?$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Devices@Media@Windows@@UPodLifetimeTraits@XWinRT@@U?$DefaultVectorOptions@UEventRegistrationToken@@@3Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@UEAAJIUEventRegistrationToken@@@Z @ 0x14007D410 (-SetAt@-$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Devices@Media@Win.c)
 *     _ATL::CAtlArray_APO_CONNECTION_DESCRIPTOR___ATL::CElementTraits_APO_CONNECTION_DESCRIPTOR_____::InsertAt_::_1_::catch$0 @ 0x140093759 (_ATL--CAtlArray_APO_CONNECTION_DESCRIPTOR___ATL--CElementTraits_APO_CONNECTION_DESC_ea_140093759.c)
 * Callees:
 *     _invalid_parameter_noinfo @ 0x140059FEE (_invalid_parameter_noinfo.c)
 *     memmove_0 @ 0x140091464 (memmove_0.c)
 */

errno_t __cdecl memmove_s(
        void *const Destination,
        const rsize_t DestinationSize,
        const void *const Source,
        const rsize_t SourceSize)
{
  errno_t *v4; // rax
  errno_t v5; // ebx

  if ( SourceSize )
  {
    if ( !Destination || !Source )
    {
      v4 = (errno_t *)_o__errno(Destination, DestinationSize);
      v5 = 22;
LABEL_5:
      *v4 = v5;
      invalid_parameter_noinfo();
      return v5;
    }
    if ( DestinationSize < SourceSize )
    {
      v4 = (errno_t *)((__int64 (*)(void))_o__errno)();
      v5 = 34;
      goto LABEL_5;
    }
    memmove_0(Destination, Source, SourceSize);
  }
  return 0;
}
