/*
 * XREFs of ??0MultiMonitorDescriptor@DxgMonitor@@QEAA@$$QEAV?$unique_ptr@UIMonitorDescriptor@DxgMonitor@@U?$default_delete@UIMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@0@Z @ 0x140091B0C
 * Callers:
 *     ?CopyInstance@MultiMonitorDescriptor@DxgMonitor@@UEBA?AV?$unique_ptr@UIMonitorDescriptor@DxgMonitor@@U?$default_delete@UIMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@XZ @ 0x140091C70 (-CopyInstance@MultiMonitorDescriptor@DxgMonitor@@UEBA-AV-$unique_ptr@UIMonitorDescriptor@DxgMoni.c)
 *     ?CopyWithoutOverrides@MultiMonitorDescriptor@DxgMonitor@@UEBA?AV?$unique_ptr@UIMonitorDescriptor@DxgMonitor@@U?$default_delete@UIMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@XZ @ 0x140091D30 (-CopyWithoutOverrides@MultiMonitorDescriptor@DxgMonitor@@UEBA-AV-$unique_ptr@UIMonitorDescriptor.c)
 * Callees:
 *     ??$?0VEdidMonitorDescriptor@DxgMonitor@@U?$default_delete@VEdidMonitorDescriptor@DxgMonitor@@@wistd@@XX@?$unique_ptr@UIMonitorDescriptor@DxgMonitor@@U?$default_delete@UIMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@QEAA@$$QEAV?$unique_ptr@VEdidMonitorDescriptor@DxgMonitor@@U?$default_delete@VEdidMonitorDescriptor@DxgMonitor@@@wistd@@@1@@Z @ 0x14005983C (--$-0VEdidMonitorDescriptor@DxgMonitor@@U-$default_delete@VEdidMonitorDescriptor@DxgMonitor@@@wi.c)
 */

__int64 __fastcall DxgMonitor::MultiMonitorDescriptor::MultiMonitorDescriptor(_QWORD *a1, __int64 *a2, _QWORD *a3)
{
  __int64 v3; // r9
  __int64 *v4; // r8
  __int64 v5; // r9

  *a1 = &DxgMonitor::MultiMonitorDescriptor::`vftable';
  a1[1] = *a2;
  a1[2] = *a3;
  wistd::unique_ptr<DxgMonitor::IMonitorDescriptor,wistd::default_delete<DxgMonitor::IMonitorDescriptor>>::unique_ptr<DxgMonitor::IMonitorDescriptor,wistd::default_delete<DxgMonitor::IMonitorDescriptor>>(
    (__int64)(a1 + 3),
    a2);
  wistd::unique_ptr<DxgMonitor::IMonitorDescriptor,wistd::default_delete<DxgMonitor::IMonitorDescriptor>>::unique_ptr<DxgMonitor::IMonitorDescriptor,wistd::default_delete<DxgMonitor::IMonitorDescriptor>>(
    v3 + 32,
    v4);
  return v5;
}
