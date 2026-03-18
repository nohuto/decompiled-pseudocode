/*
 * XREFs of ?GetProcessID@DXGPROCESS@@QEBAQEAXXZ @ 0x14005DA58
 * Callers:
 *     ?TraceCloseParavirtualizedAllocation@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@@Z @ 0x14018894C (-TraceCloseParavirtualizedAllocation@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@@Z.c)
 *     ?DestroyVmProcess@DXGPROCESSVM@@QEAAXXZ @ 0x1401EBDCC (-DestroyVmProcess@DXGPROCESSVM@@QEAAXXZ.c)
 *     ?SendWnfNotification@DXGPROCESS@@QEAAJPEBU_WNF_STATE_NAME@@PEAXK@Z @ 0x1401ED894 (-SendWnfNotification@DXGPROCESS@@QEAAJPEBU_WNF_STATE_NAME@@PEAXK@Z.c)
 *     ?VmBusCreateProcess@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1402212C0 (-VmBusCreateProcess@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?DestroyDevice@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1402CE23C (-DestroyDevice@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DestroyAdapterAllocation@DXGDEVICE@@QEAAXPEAVDXGADAPTERALLOCATION@@@Z @ 0x140325B54 (-DestroyAdapterAllocation@DXGDEVICE@@QEAAXPEAVDXGADAPTERALLOCATION@@@Z.c)
 *     ?CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1EPEAU_EPROCESS@@@Z @ 0x14034CE14 (-CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1EPEAU_EPROCESS@@@Z.c)
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x14034D4E0 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 *     ?ReportAllocationState@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@H@Z @ 0x140392ADC (-ReportAllocationState@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@H@Z.c)
 *     ?Initialize@DXGDEVICE@@QEAAJEE@Z @ 0x1403973B4 (-Initialize@DXGDEVICE@@QEAAJEE@Z.c)
 *     NtDxgkEnumProcesses @ 0x1403A2500 (NtDxgkEnumProcesses.c)
 *     ?ReportProcess@DXGPROCESS@@QEAAXXZ @ 0x1403A3C34 (-ReportProcess@DXGPROCESS@@QEAAXXZ.c)
 *     ?Initialize@DXGPROCESS_RENDER_ADAPTER_INFO@@QEAAJPEAVDXGPROCESS@@PEAVADAPTER_RENDER@@@Z @ 0x1403ACC00 (-Initialize@DXGPROCESS_RENDER_ADAPTER_INFO@@QEAAJPEAVDXGPROCESS@@PEAVADAPTER_RENDER@@@Z.c)
 *     ?ReportState@DXGDEVICE@@QEAAXXZ @ 0x1403B580C (-ReportState@DXGDEVICE@@QEAAXXZ.c)
 * Callees:
 *     Feature_Servicing_GraphicsKernel_StabilityImprovements__private_IsEnabledDeviceUsageNoInline @ 0x14006B850 (Feature_Servicing_GraphicsKernel_StabilityImprovements__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall DXGPROCESS::GetProcessID(DXGPROCESS *this)
{
  int IsEnabledDeviceUsageNoInline; // eax
  __int64 v3; // rdx
  bool v4; // zf
  __int64 v5; // rax

  IsEnabledDeviceUsageNoInline = Feature_Servicing_GraphicsKernel_StabilityImprovements__private_IsEnabledDeviceUsageNoInline();
  v3 = 0LL;
  v4 = IsEnabledDeviceUsageNoInline == 0;
  v5 = *((_QWORD *)this + 8);
  if ( v4 )
    return *(_QWORD *)(v5 + 80);
  if ( v5 )
    return *(_QWORD *)(v5 + 80);
  return v3;
}
