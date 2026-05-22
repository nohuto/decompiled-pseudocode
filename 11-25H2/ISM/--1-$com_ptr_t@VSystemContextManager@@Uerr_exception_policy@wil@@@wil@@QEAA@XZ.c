/*
 * XREFs of ??1?$com_ptr_t@VSystemContextManager@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18008322C
 * Callers:
 *     ??0SystemContextEndpoint@@AEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z @ 0x18008D698 (--0SystemContextEndpoint@@AEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z.c)
 *     _lambda_41eee22a06de91399d417ae04e8a558f_::__lambda_41eee22a06de91399d417ae04e8a558f_ @ 0x1800ABCA8 (_lambda_41eee22a06de91399d417ae04e8a558f_--__lambda_41eee22a06de91399d417ae04e8a558f_.c)
 *     std::_Func_impl_no_alloc__lambda_41eee22a06de91399d417ae04e8a558f__void_Microsoft::WRL::ComPtr_BamoInputSystemInternalProxy__&_::_Delete_this @ 0x1800ACFF0 (std--_Func_impl_no_alloc__lambda_41eee22a06de91399d417ae04e8a558f__void_Microsoft--_ea_1800ACFF0.c)
 *     ?OnDeviceRemoval@DockableDeviceCollection@@MEAAJK@Z @ 0x1800DB730 (-OnDeviceRemoval@DockableDeviceCollection@@MEAAJK@Z.c)
 *     ?ProcessFeatureReport@DockableDeviceCollection@@AEAAJAEBUGetFeatureReportResult@1@@Z @ 0x1800DBC04 (-ProcessFeatureReport@DockableDeviceCollection@@AEAAJAEBUGetFeatureReportResult@1@@Z.c)
 *     ??1DeviceDockClientProxy@@UEAA@XZ @ 0x180180CCC (--1DeviceDockClientProxy@@UEAA@XZ.c)
 *     ?OnTouchpadAdded@VirtualTouchpadContextProvider@@QEAAJAEBUVirtualTouchpadRect@@@Z @ 0x180199D8C (-OnTouchpadAdded@VirtualTouchpadContextProvider@@QEAAJAEBUVirtualTouchpadRect@@@Z.c)
 *     ?OnTouchpadRemoved@VirtualTouchpadContextProvider@@QEAAJ_K@Z @ 0x180199ED4 (-OnTouchpadRemoved@VirtualTouchpadContextProvider@@QEAAJ_K@Z.c)
 *     ?OnTouchpadUpdated@VirtualTouchpadContextProvider@@QEAAJAEBUVirtualTouchpadRect@@@Z @ 0x18019A004 (-OnTouchpadUpdated@VirtualTouchpadContextProvider@@QEAAJAEBUVirtualTouchpadRect@@@Z.c)
 *     ?OnOcclusionRectAdded@DisplayOcclusionContextProvider@@QEAAJAEBUDockInputIdentity@@AEBUDisplayOcclusionRect@@@Z @ 0x18019A864 (-OnOcclusionRectAdded@DisplayOcclusionContextProvider@@QEAAJAEBUDockInputIdentity@@AEBUDisplayOc.c)
 *     ?OnOcclusionRectRemoved@DisplayOcclusionContextProvider@@QEAAJAEBUDockInputIdentity@@@Z @ 0x18019AA08 (-OnOcclusionRectRemoved@DisplayOcclusionContextProvider@@QEAAJAEBUDockInputIdentity@@@Z.c)
 *     ?OnOcclusionRectUpdated@DisplayOcclusionContextProvider@@QEAAJAEBUDockInputIdentity@@AEBUtagRECT@@@Z @ 0x18019AB18 (-OnOcclusionRectUpdated@DisplayOcclusionContextProvider@@QEAAJAEBUDockInputIdentity@@AEBUtagRECT.c)
 *     ??1DockProcessor@@UEAA@XZ @ 0x1801B05E0 (--1DockProcessor@@UEAA@XZ.c)
 *     _InputConfigContextProvider::Broadcast_::_1_::dtor$1 @ 0x1801C7E34 (_InputConfigContextProvider--Broadcast_--_1_--dtor$1.c)
 *     _DeviceInputHost::DeviceInputHost_::_1_::dtor$7 @ 0x1801CC054 (_DeviceInputHost--DeviceInputHost_--_1_--dtor$7.c)
 *     _SystemContextEndpoint::SystemContextEndpoint_::_1_::dtor$1 @ 0x1801CC0C0 (_SystemContextEndpoint--SystemContextEndpoint_--_1_--dtor$1.c)
 *     _DockableDeviceCollection::OnDeviceRemoval_::_1_::dtor$0 @ 0x1801CE4EE (_DockableDeviceCollection--OnDeviceRemoval_--_1_--dtor$0.c)
 *     _DockableDeviceCollection::ProcessFeatureReport_::_1_::dtor$0 @ 0x1801CE524 (_DockableDeviceCollection--ProcessFeatureReport_--_1_--dtor$0.c)
 *     _DisplayOcclusionContextProvider::OnOcclusionRectUpdated_::_1_::dtor$0 @ 0x1801D152C (_DisplayOcclusionContextProvider--OnOcclusionRectUpdated_--_1_--dtor$0.c)
 *     _DisplayOcclusionContextProvider::OnOcclusionRectAdded_::_1_::dtor$0 @ 0x1801D1562 (_DisplayOcclusionContextProvider--OnOcclusionRectAdded_--_1_--dtor$0.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall wil::com_ptr_t<SystemContextManager,wil::err_exception_policy>::~com_ptr_t<SystemContextManager,wil::err_exception_policy>(
        __int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v1 + 16) + 8LL))(v1 + 16);
  return result;
}
