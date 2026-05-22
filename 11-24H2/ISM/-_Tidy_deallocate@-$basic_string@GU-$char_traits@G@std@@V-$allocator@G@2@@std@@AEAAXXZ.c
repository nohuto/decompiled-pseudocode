/*
 * XREFs of ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x18007F9D0
 * Callers:
 *     ??$get_runtime_activation_factory_impl@$0A@@impl@winrt@@YA?AUhresult@1@AEBUhstring@param@1@AEBUguid@1@PEAPEAX@Z @ 0x180080D3C (--$get_runtime_activation_factory_impl@$0A@@impl@winrt@@YA-AUhresult@1@AEBUhstring@param@1@AEBUg.c)
 *     ??$_Freenode@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@PEAX@std@@@std@@@?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1800945E0 (--$_Freenode@V-$allocator@U-$_Tree_node@U-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$al.c)
 *     ??1?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18009B99C (--1-$_Tree_temp_node@V-$allocator@U-$_Tree_node@U-$pair@$$CBV-$basic_string@GU-$char_traits@G@st.c)
 *     ??1?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@QEAA@XZ @ 0x18009C170 (--1-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$variant@K_NM@2@@s.c)
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800B3404 (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?ChangeConstant@MPCConstantManager@@QEAAJW4InputType@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@V?$variant@K_NM@4@@Z @ 0x1800B3788 (-ChangeConstant@MPCConstantManager@@QEAAJW4InputType@@V-$basic_string_view@GU-$char_traits@G@std.c)
 *     ?GetActiveInputTypeList@MPCConstantManager@@UEAAJPEAVBamoMPCConstantManagerClientStub@@PEAVBamoAsyncResult_string_Proxy@@@Z @ 0x1800B3BA0 (-GetActiveInputTypeList@MPCConstantManager@@UEAAJPEAVBamoMPCConstantManagerClientStub@@PEAVBamoA.c)
 *     ?GetConstantNamesString@MPCConstantManager@@AEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4InputType@@@Z @ 0x1800B3E20 (-GetConstantNamesString@MPCConstantManager@@AEAA-AV-$basic_string@GU-$char_traits@G@std@@V-$allo.c)
 *     ?GetConstantsForInputType@MPCConstantManager@@UEAAJPEAVBamoMPCConstantManagerClientStub@@W4InputType@@PEAVBamoAsyncResult_string_Proxy@@@Z @ 0x1800B40A0 (-GetConstantsForInputType@MPCConstantManager@@UEAAJPEAVBamoMPCConstantManagerClientStub@@W4Input.c)
 *     ?GetCurrentInputTypesString@MPCConstantManager@@AEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@XZ @ 0x1800B4144 (-GetCurrentInputTypesString@MPCConstantManager@@AEAA-AV-$basic_string@GU-$char_traits@G@std@@V-$.c)
 *     ??$_Freenode@V?$allocator@U?$_Tree_node@U?$pair@$$CBKUHapticInterfaceInfo@HapticProcessor@@@std@@PEAX@std@@@std@@@?$_Tree_node@U?$pair@$$CBKUHapticInterfaceInfo@HapticProcessor@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBKUHapticInterfaceInfo@HapticProcessor@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1800C7DD0 (--$_Freenode@V-$allocator@U-$_Tree_node@U-$pair@$$CBKUHapticInterfaceInfo@HapticProcessor@@@std@.c)
 *     ??1?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBKUHapticInterfaceInfo@HapticProcessor@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1800C8164 (--1-$_Tree_temp_node@V-$allocator@U-$_Tree_node@U-$pair@$$CBKUHapticInterfaceInfo@HapticProcesso.c)
 *     ?GetDeviceNodeParent@HapticProcessor@@AEAAJPEBGAEAK@Z @ 0x1800C94C0 (-GetDeviceNodeParent@HapticProcessor@@AEAAJPEBGAEAK@Z.c)
 *     ?OnHapticInterfaceArrival@HapticProcessor@@QEAAJKPEBG@Z @ 0x1800C9700 (-OnHapticInterfaceArrival@HapticProcessor@@QEAAJKPEBG@Z.c)
 *     ?OnMouseArrival@HapticProcessor@@QEAAJPEBUDeviceInfo@@@Z @ 0x1800C9904 (-OnMouseArrival@HapticProcessor@@QEAAJPEBUDeviceInfo@@@Z.c)
 *     ?OnMouseRemoval@HapticProcessor@@QEAAJPEBUDeviceInfo@@@Z @ 0x1800C9A24 (-OnMouseRemoval@HapticProcessor@@QEAAJPEBUDeviceInfo@@@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@YAXPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@QEAV10@AEAV?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@0@@Z @ 0x1800CB544 (--$_Destroy_range@V-$allocator@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@st.c)
 *     ??0SpatialInputTelemetryProperties@RawInputProvidersTracing@@QEAA@QEBG@Z @ 0x1800D4EDC (--0SpatialInputTelemetryProperties@RawInputProvidersTracing@@QEAA@QEBG@Z.c)
 *     ??1DevicePropertyHelper@DevicePropertyHelpers@@QEAA@XZ @ 0x1800D5448 (--1DevicePropertyHelper@DevicePropertyHelpers@@QEAA@XZ.c)
 *     ??1TraceSessionConfig@@QEAA@XZ @ 0x1800D56C0 (--1TraceSessionConfig@@QEAA@XZ.c)
 *     ?StartOrStop@TracingSessionHelper@@SAJAEBUTraceSessionConfig@@_N@Z @ 0x1800D8B64 (-StartOrStop@TracingSessionHelper@@SAJAEBUTraceSessionConfig@@_N@Z.c)
 *     ??1?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@UIAmbientDeviceMappingChangedEventArgs@Internal@Lights@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@@std@@QEAA@XZ @ 0x1800E2F1C (--1-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$com_ptr_t@UIAmbie.c)
 *     ?OnLampArrayAdded@LampArrayRawInputProvider@@QEAAJPEAVPnpDevice@@@Z @ 0x1800E398C (-OnLampArrayAdded@LampArrayRawInputProvider@@QEAAJPEAVPnpDevice@@@Z.c)
 *     ?UpdateDeviceAmbientProcess@LampArrayRawInputProvider@@AEAAXXZ @ 0x1800E41A0 (-UpdateDeviceAmbientProcess@LampArrayRawInputProvider@@AEAAXXZ.c)
 *     ??1EdgyControllerClientProxy@@UEAA@XZ @ 0x180156290 (--1EdgyControllerClientProxy@@UEAA@XZ.c)
 *     ??1PenHapticInterface@@UEAA@XZ @ 0x18018E91C (--1PenHapticInterface@@UEAA@XZ.c)
 *     ??0PenInterface@@QEAA@PEAX0@Z @ 0x18018FC80 (--0PenInterface@@QEAA@PEAX0@Z.c)
 *     ??1PenInterface@@UEAA@XZ @ 0x18018FE6C (--1PenInterface@@UEAA@XZ.c)
 *     ?IsHIDMouse@MouseProcessor@@AEAA_NPEBULegacyDeviceInfo@@@Z @ 0x180197F44 (-IsHIDMouse@MouseProcessor@@AEAA_NPEBULegacyDeviceInfo@@@Z.c)
 *     ??1Edge@@QEAA@XZ @ 0x1801A7C64 (--1Edge@@QEAA@XZ.c)
 *     ??_GCandidateIdentity@@QEAAPEAXI@Z @ 0x1801A9644 (--_GCandidateIdentity@@QEAAPEAXI@Z.c)
 *     ?HitTest@Edges@@QEAA_NKKPEBUD2D_VECTOR_2F@@PEAPEAV?$vector@UCandidateIdentity@@V?$allocator@UCandidateIdentity@@@std@@@std@@@Z @ 0x1801A9E4C (-HitTest@Edges@@QEAA_NKKPEBUD2D_VECTOR_2F@@PEAPEAV-$vector@UCandidateIdentity@@V-$allocator@UCan.c)
 *     ?Remove@Edges@@QEAAJPEBGPEAVEdgyControllerClientProxy@@@Z @ 0x1801AA40C (-Remove@Edges@@QEAAJPEBGPEAVEdgyControllerClientProxy@@@Z.c)
 *     ?Remove@Edges@@QEAAJPEBUEdgyCompositionConfigurationUpdateEx@@@Z @ 0x1801AA5E0 (-Remove@Edges@@QEAAJPEBUEdgyCompositionConfigurationUpdateEx@@@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001B0D0 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::wstring::_Tidy_deallocate(__int64 a1)
{
  unsigned __int64 v1; // rdx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 24);
  if ( v1 > 7 )
    std::_Deallocate<16,0>(*(char **)a1, (const struct std::nothrow_t *)(2 * v1 + 2));
  result = 0LL;
  *(_QWORD *)(a1 + 24) = 7LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_WORD *)a1 = 0;
  return result;
}
