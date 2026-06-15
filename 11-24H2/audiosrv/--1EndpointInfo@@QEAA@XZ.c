/*
 * XREFs of ??1EndpointInfo@@QEAA@XZ @ 0x1800EAB54
 * Callers:
 *     ??1ResourceHandleInfo@@QEAA@XZ @ 0x18007AC70 (--1ResourceHandleInfo@@QEAA@XZ.c)
 *     ?GetStreamResourceConsumption@CConstraintModel@@QEAAJPEAUIMMDevice@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAKPEAPEAU_ResourceInfo@@@Z @ 0x18008EB10 (-GetStreamResourceConsumption@CConstraintModel@@QEAAJPEAUIMMDevice@@U_GUID@@W4__MIDL___MIDL_itf_.c)
 *     ??1ResourceGroupInstance@@UEAA@XZ @ 0x1800EABB8 (--1ResourceGroupInstance@@UEAA@XZ.c)
 *     ?AssignResourceGroup@CConstraintModelResourceManager@@AEAAJPEAUIMMDevice@@AEAVEndpointInfo@@PEAU_ResourceInfo@@KKHPEAUResourceHandleInfo@@@Z @ 0x1800EBC28 (-AssignResourceGroup@CConstraintModelResourceManager@@AEAAJPEAUIMMDevice@@AEAVEndpointInfo@@PEAU.c)
 *     ?DoReacquireResourceGroup@CConstraintModelResourceManager@@AEAAJKPEAUReacquireResourceHandleInfo@@@Z @ 0x1800EC56C (-DoReacquireResourceGroup@CConstraintModelResourceManager@@AEAAJKPEAUReacquireResourceHandleInfo.c)
 *     ?InternalEnforceEndpointExclusivity@CConstraintModelResourceManager@@AEAAJAEAVEndpointInfo@@KW4AUDIO_DIRECTION@@HK@Z @ 0x1800EDCA8 (-InternalEnforceEndpointExclusivity@CConstraintModelResourceManager@@AEAAJAEAVEndpointInfo@@KW4A.c)
 *     ??1StreamResourceConsumer@@UEAA@XZ @ 0x1801600CC (--1StreamResourceConsumer@@UEAA@XZ.c)
 *     ?CleanResourceExclusiveEndpoint@CConstraintModel@@AEAAXPEAV?$CAtlArray@PEAV?$CAtlArray@PEAVEndpointInfo@@V?$CElementTraits@PEAVEndpointInfo@@@ATL@@@ATL@@V?$CElementTraits@PEAV?$CAtlArray@PEAVEndpointInfo@@V?$CElementTraits@PEAVEndpointInfo@@@ATL@@@ATL@@@2@@ATL@@@Z @ 0x180160890 (-CleanResourceExclusiveEndpoint@CConstraintModel@@AEAAXPEAV-$CAtlArray@PEAV-$CAtlArray@PEAVEndpo.c)
 *     ?ResourceConstraintsApply@CConstraintModel@@QEAA_NPEAUIMMDevice@@@Z @ 0x1801625A0 (-ResourceConstraintsApply@CConstraintModel@@QEAA_NPEAUIMMDevice@@@Z.c)
 *     ?ParseStreamIDInfo@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAPEAVResourceConsumer@@@Z @ 0x180165178 (-ParseStreamIDInfo@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAPEAVResourceConsumer@@@Z.c)
 *     _ResourceGroupInstance::ResourceGroupInstance_::_1_::dtor$1 @ 0x18016F849 (_ResourceGroupInstance--ResourceGroupInstance_--_1_--dtor$1.c)
 *     _CConstraintModelResourceManager::AssignResourceGroup_::_1_::dtor$0 @ 0x18016F898 (_CConstraintModelResourceManager--AssignResourceGroup_--_1_--dtor$0.c)
 *     _CConstraintModelResourceManager::InternalEnforceEndpointExclusivity_::_1_::dtor$0 @ 0x18016F904 (_CConstraintModelResourceManager--InternalEnforceEndpointExclusivity_--_1_--dtor$0.c)
 *     _CConstraintModel::GetStreamResourceConsumption_::_1_::dtor$0 @ 0x180172A27 (_CConstraintModel--GetStreamResourceConsumption_--_1_--dtor$0.c)
 *     _CConstraintModel::ResourceConstraintsApply_::_1_::dtor$0 @ 0x180172B6A (_CConstraintModel--ResourceConstraintsApply_--_1_--dtor$0.c)
 *     _CConstraintModelXMLParser::ParseStreamIDInfo_::_1_::dtor$0 @ 0x180172EE2 (_CConstraintModelXMLParser--ParseStreamIDInfo_--_1_--dtor$0.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180018614 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x18004DC2C (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??$_Destroy_range@V?$allocator@V?$unique_ptr@U_TopologyInfo@@U?$default_delete@U_TopologyInfo@@@std@@@std@@@std@@@std@@YAXPEAV?$unique_ptr@U_TopologyInfo@@U?$default_delete@U_TopologyInfo@@@std@@@0@QEAV10@AEAV?$allocator@V?$unique_ptr@U_TopologyInfo@@U?$default_delete@U_TopologyInfo@@@std@@@std@@@0@@Z @ 0x1800EA078 (--$_Destroy_range@V-$allocator@V-$unique_ptr@U_TopologyInfo@@U-$default_delete@U_TopologyInfo@@@.c)
 */

void __fastcall EndpointInfo::~EndpointInfo(EndpointInfo *this, __int64 a2)
{
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rdx

  v3 = *((_QWORD *)this + 13);
  if ( v3 )
  {
    std::_Destroy_range<std::allocator<std::unique_ptr<_TopologyInfo>>>(v3, *((_QWORD *)this + 14));
    std::_Deallocate<16,0>(
      *((char **)this + 13),
      (const struct std::nothrow_t *)((*((_QWORD *)this + 15) - *((_QWORD *)this + 13)) & 0xFFFFFFFFFFFFFFF8uLL));
    *((_QWORD *)this + 13) = 0LL;
    *((_QWORD *)this + 14) = 0LL;
    *((_QWORD *)this + 15) = 0LL;
  }
  std::wstring::_Tidy_deallocate((__int64)this + 64, a2);
  std::wstring::_Tidy_deallocate((__int64)this + 32, v4);
  std::wstring::_Tidy_deallocate((__int64)this, v5);
}
