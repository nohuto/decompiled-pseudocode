/*
 * XREFs of ?AtlCrtErrorCheck@ATL@@YAHH@Z @ 0x14000C484
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
 *     ?InsertAt@?$CAtlArray@PEAUAPO_CONNECTION_DESCRIPTOR@@V?$CElementTraits@PEAUAPO_CONNECTION_DESCRIPTOR@@@ATL@@@ATL@@QEAAX_KAEBQEAUAPO_CONNECTION_DESCRIPTOR@@0@Z @ 0x140030CD8 (-InsertAt@-$CAtlArray@PEAUAPO_CONNECTION_DESCRIPTOR@@V-$CElementTraits@PEAUAPO_CONNECTION_DESCRI.c)
 *     ?SetCount@?$CAtlArray@PEAUAPO_CONNECTION_DESCRIPTOR@@V?$CElementTraits@PEAUAPO_CONNECTION_DESCRIPTOR@@@ATL@@@ATL@@QEAA_N_KH@Z @ 0x140030DE8 (-SetCount@-$CAtlArray@PEAUAPO_CONNECTION_DESCRIPTOR@@V-$CElementTraits@PEAUAPO_CONNECTION_DESCRI.c)
 *     ?LoadStringW@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHPEAUHINSTANCE__@@I@Z @ 0x14006B6C0 (-LoadStringW@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHPEAUHINSTANCE__@.c)
 *     ?RemoveAt@?$CSimpleMap@KPEAVCVpoContext@@V?$CSimpleMapEqualHelper@KPEAVCVpoContext@@@ATL@@@ATL@@QEAAHH@Z @ 0x140073F90 (-RemoveAt@-$CSimpleMap@KPEAVCVpoContext@@V-$CSimpleMapEqualHelper@KPEAVCVpoContext@@@ATL@@@ATL@@.c)
 *     ?Add@CExpansionVector@ATL@@QEAAHPEBG0@Z @ 0x1400894F0 (-Add@CExpansionVector@ATL@@QEAAHPEBG0@Z.c)
 *     ?Append@CParseBuffer@CRegParser@ATL@@QEAAHPEBGH@Z @ 0x140089F7C (-Append@CParseBuffer@CRegParser@ATL@@QEAAHPEBGH@Z.c)
 *     ?PreProcessBuffer@CRegParser@ATL@@QEAAJPEAGPEAPEAG@Z @ 0x14008AAF0 (-PreProcessBuffer@CRegParser@ATL@@QEAAJPEAGPEAPEAG@Z.c)
 *     ?RegisterSubkeys@CRegParser@ATL@@IEAAJPEAGPEAUHKEY__@@HH@Z @ 0x14008B5A0 (-RegisterSubkeys@CRegParser@ATL@@IEAAJPEAGPEAUHKEY__@@HH@Z.c)
 *     _ATL::CAtlArray_APO_CONNECTION_DESCRIPTOR___ATL::CElementTraits_APO_CONNECTION_DESCRIPTOR_____::InsertAt_::_1_::catch$0 @ 0x140093759 (_ATL--CAtlArray_APO_CONNECTION_DESCRIPTOR___ATL--CElementTraits_APO_CONNECTION_DESC_ea_140093759.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x14005619C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 __fastcall ATL::AtlCrtErrorCheck(unsigned int a1)
{
  if ( a1 && a1 != 80 )
  {
    if ( a1 != 12 )
    {
      if ( a1 != 22 && a1 != 34 )
        ATL::AtlThrowImpl(-2147467259);
      ATL::AtlThrowImpl(-2147024809);
    }
    ATL::AtlThrowImpl(-2147024882);
  }
  return a1;
}
