/*
 * XREFs of ??1EndpointInfo@@QEAA@XZ @ 0x1800E6708
 * Callers:
 *     ??1ResourceHandleInfo@@QEAA@XZ @ 0x180089580 (--1ResourceHandleInfo@@QEAA@XZ.c)
 *     ?GetStreamResourceConsumption@CConstraintModel@@QEAAJPEAUIMMDevice@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAKPEAPEAU_ResourceInfo@@@Z @ 0x18009190C (-GetStreamResourceConsumption@CConstraintModel@@QEAAJPEAUIMMDevice@@U_GUID@@W4__MIDL___MIDL_itf_.c)
 *     ??1ResourceGroupInstance@@UEAA@XZ @ 0x1800E676C (--1ResourceGroupInstance@@UEAA@XZ.c)
 *     ?AssignResourceGroup@CConstraintModelResourceManager@@AEAAJPEAUIMMDevice@@AEAVEndpointInfo@@PEAU_ResourceInfo@@KKHPEAUResourceHandleInfo@@@Z @ 0x1800E77D8 (-AssignResourceGroup@CConstraintModelResourceManager@@AEAAJPEAUIMMDevice@@AEAVEndpointInfo@@PEAU.c)
 *     ?DoReacquireResourceGroup@CConstraintModelResourceManager@@AEAAJKPEAUReacquireResourceHandleInfo@@@Z @ 0x1800E811C (-DoReacquireResourceGroup@CConstraintModelResourceManager@@AEAAJKPEAUReacquireResourceHandleInfo.c)
 *     ?InternalEnforceEndpointExclusivity@CConstraintModelResourceManager@@AEAAJAEAVEndpointInfo@@KW4AUDIO_DIRECTION@@HK@Z @ 0x1800E8FD0 (-InternalEnforceEndpointExclusivity@CConstraintModelResourceManager@@AEAAJAEAVEndpointInfo@@KW4A.c)
 *     ??1StreamResourceConsumer@@UEAA@XZ @ 0x18015731C (--1StreamResourceConsumer@@UEAA@XZ.c)
 *     ?CleanResourceExclusiveEndpoint@CConstraintModel@@AEAAXPEAV?$CAtlArray@PEAV?$CAtlArray@PEAVEndpointInfo@@V?$CElementTraits@PEAVEndpointInfo@@@ATL@@@ATL@@V?$CElementTraits@PEAV?$CAtlArray@PEAVEndpointInfo@@V?$CElementTraits@PEAVEndpointInfo@@@ATL@@@ATL@@@2@@ATL@@@Z @ 0x180157AE0 (-CleanResourceExclusiveEndpoint@CConstraintModel@@AEAAXPEAV-$CAtlArray@PEAV-$CAtlArray@PEAVEndpo.c)
 *     ?ResourceConstraintsApply@CConstraintModel@@QEAA_NPEAUIMMDevice@@@Z @ 0x1801597F0 (-ResourceConstraintsApply@CConstraintModel@@QEAA_NPEAUIMMDevice@@@Z.c)
 *     ?ParseStreamIDInfo@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAPEAVResourceConsumer@@@Z @ 0x18015C3C8 (-ParseStreamIDInfo@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAPEAVResourceConsumer@@@Z.c)
 *     _ResourceGroupInstance::ResourceGroupInstance_::_1_::dtor$1 @ 0x1801661BF (_ResourceGroupInstance--ResourceGroupInstance_--_1_--dtor$1.c)
 *     _CConstraintModelResourceManager::AssignResourceGroup_::_1_::dtor$0 @ 0x18016620E (_CConstraintModelResourceManager--AssignResourceGroup_--_1_--dtor$0.c)
 *     _CConstraintModelResourceManager::InternalEnforceEndpointExclusivity_::_1_::dtor$0 @ 0x18016627A (_CConstraintModelResourceManager--InternalEnforceEndpointExclusivity_--_1_--dtor$0.c)
 *     _CConstraintModel::GetStreamResourceConsumption_::_1_::dtor$0 @ 0x180169161 (_CConstraintModel--GetStreamResourceConsumption_--_1_--dtor$0.c)
 *     _CConstraintModel::ResourceConstraintsApply_::_1_::dtor$0 @ 0x1801692A4 (_CConstraintModel--ResourceConstraintsApply_--_1_--dtor$0.c)
 *     _CConstraintModelXMLParser::ParseStreamIDInfo_::_1_::dtor$0 @ 0x18016961C (_CConstraintModelXMLParser--ParseStreamIDInfo_--_1_--dtor$0.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180025844 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180054280 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??$_Destroy_range@V?$allocator@V?$unique_ptr@U_TopologyInfo@@U?$default_delete@U_TopologyInfo@@@std@@@std@@@std@@@std@@YAXPEAV?$unique_ptr@U_TopologyInfo@@U?$default_delete@U_TopologyInfo@@@std@@@0@QEAV10@AEAV?$allocator@V?$unique_ptr@U_TopologyInfo@@U?$default_delete@U_TopologyInfo@@@std@@@std@@@0@@Z @ 0x1800E5C2C (--$_Destroy_range@V-$allocator@V-$unique_ptr@U_TopologyInfo@@U-$default_delete@U_TopologyInfo@@@.c)
 */

void __fastcall EndpointInfo::~EndpointInfo(EndpointInfo *this)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 13);
  if ( v2 )
  {
    std::_Destroy_range<std::allocator<std::unique_ptr<_TopologyInfo>>>(v2, *((_QWORD *)this + 14));
    std::_Deallocate<16,0>(
      *((char **)this + 13),
      (const struct std::nothrow_t *)((*((_QWORD *)this + 15) - *((_QWORD *)this + 13)) & 0xFFFFFFFFFFFFFFF8uLL));
    *((_QWORD *)this + 13) = 0LL;
    *((_QWORD *)this + 14) = 0LL;
    *((_QWORD *)this + 15) = 0LL;
  }
  std::wstring::_Tidy_deallocate((__int64)this + 64);
  std::wstring::_Tidy_deallocate((__int64)this + 32);
  std::wstring::_Tidy_deallocate((__int64)this);
}
