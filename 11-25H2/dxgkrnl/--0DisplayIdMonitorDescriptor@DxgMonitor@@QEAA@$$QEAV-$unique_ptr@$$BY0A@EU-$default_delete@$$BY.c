/*
 * XREFs of ??0DisplayIdMonitorDescriptor@DxgMonitor@@QEAA@$$QEAV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@wistd@@@wistd@@K@Z @ 0x140278F98
 * Callers:
 *     ?CopyInstance@DisplayIdMonitorDescriptor@DxgMonitor@@UEBA?AV?$unique_ptr@UIMonitorDescriptor@DxgMonitor@@U?$default_delete@UIMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@XZ @ 0x140279350 (-CopyInstance@DisplayIdMonitorDescriptor@DxgMonitor@@UEBA-AV-$unique_ptr@UIMonitorDescriptor@Dxg.c)
 *     ?ExtractFromEdid@DisplayIdMonitorDescriptor@DxgMonitor@@SAJ$$QEAV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@wistd@@@wistd@@KAEAV?$unique_ptr@UIMonitorDescriptor@DxgMonitor@@U?$default_delete@UIMonitorDescriptor@DxgMonitor@@@wistd@@@4@@Z @ 0x1404078C0 (-ExtractFromEdid@DisplayIdMonitorDescriptor@DxgMonitor@@SAJ$$QEAV-$unique_ptr@$$BY0A@EU-$default.c)
 *     ?OnInitializePhysicalMonitor@MonitorDescriptorState@DxgMonitor@@QEAAJXZ @ 0x14042CE30 (-OnInitializePhysicalMonitor@MonitorDescriptorState@DxgMonitor@@QEAAJXZ.c)
 * Callees:
 *     ??4?$unique_ptr@$$BY0A@IU?$default_delete@$$BY0A@I@wistd@@@wistd@@QEAAAEAV01@$$QEAV01@@Z @ 0x140012998 (--4-$unique_ptr@$$BY0A@IU-$default_delete@$$BY0A@I@wistd@@@wistd@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?DisplayID_Initialize@@YAXPEAUDisplayIDObj@@PEBXI@Z @ 0x1400951AC (-DisplayID_Initialize@@YAXPEAUDisplayIDObj@@PEBXI@Z.c)
 */

__int64 __fastcall DxgMonitor::DisplayIdMonitorDescriptor::DisplayIdMonitorDescriptor(__int64 a1, void **a2, int a3)
{
  unsigned __int8 **v3; // rbx
  unsigned __int8 *v6; // rdx

  v3 = (unsigned __int8 **)(a1 + 16);
  *(_QWORD *)a1 = &DxgMonitor::DisplayIdMonitorDescriptor::`vftable';
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  wistd::unique_ptr<unsigned int [0],wistd::default_delete<unsigned int [0]>>::operator=((void **)(a1 + 16), a2);
  v6 = *v3;
  *(_DWORD *)(a1 + 12) = a3;
  DisplayID_Initialize((struct DisplayIDObj *)(a1 + 24), v6, a3);
  return a1;
}
