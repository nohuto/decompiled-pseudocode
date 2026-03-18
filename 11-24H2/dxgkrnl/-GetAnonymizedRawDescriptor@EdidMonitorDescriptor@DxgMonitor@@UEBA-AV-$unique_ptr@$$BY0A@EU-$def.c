/*
 * XREFs of ?GetAnonymizedRawDescriptor@EdidMonitorDescriptor@DxgMonitor@@UEBA?AV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@wistd@@@wistd@@PEAI@Z @ 0x1403D6AF0
 * Callers:
 *     <none>
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ?reset@?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@wistd@@@wistd@@QEAAX$$T@Z @ 0x140023358 (-reset@-$unique_ptr@$$BY0A@EU-$default_delete@$$BY0A@E@wistd@@@wistd@@QEAAX$$T@Z.c)
 *     ?EDID_V1_RemovePII@@YAJKPEAE@Z @ 0x14003BB88 (-EDID_V1_RemovePII@@YAJKPEAE@Z.c)
 *     ??$?0VEdidMonitorDescriptor@DxgMonitor@@U?$default_delete@VEdidMonitorDescriptor@DxgMonitor@@@wistd@@XX@?$unique_ptr@UIMonitorDescriptor@DxgMonitor@@U?$default_delete@UIMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@QEAA@$$QEAV?$unique_ptr@VEdidMonitorDescriptor@DxgMonitor@@U?$default_delete@VEdidMonitorDescriptor@DxgMonitor@@@wistd@@@1@@Z @ 0x14005983C (--$-0VEdidMonitorDescriptor@DxgMonitor@@U-$default_delete@VEdidMonitorDescriptor@DxgMonitor@@@wi.c)
 *     ?GetRawDescriptor@EdidMonitorDescriptor@DxgMonitor@@UEBA?AV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@wistd@@@wistd@@PEAI@Z @ 0x1403D6B70 (-GetRawDescriptor@EdidMonitorDescriptor@DxgMonitor@@UEBA-AV-$unique_ptr@$$BY0A@EU-$default_delet.c)
 */

_QWORD *__fastcall DxgMonitor::EdidMonitorDescriptor::GetAnonymizedRawDescriptor(
        DxgMonitor::EdidMonitorDescriptor *a1,
        _QWORD *a2,
        _DWORD *a3)
{
  unsigned __int8 *v5; // rdx
  unsigned __int8 *v7; // [rsp+40h] [rbp+18h] BYREF

  DxgMonitor::EdidMonitorDescriptor::GetRawDescriptor(a1);
  if ( *a3 && (v5 = v7, *a3 = 128, (int)EDID_V1_RemovePII(0x80u, v5) < 0) )
  {
    *a3 = 0;
    *a2 = 0LL;
    wistd::unique_ptr<unsigned char [0],wistd::default_delete<unsigned char [0]>>::reset((void **)&v7);
  }
  else
  {
    wistd::unique_ptr<DxgMonitor::IMonitorDescriptor,wistd::default_delete<DxgMonitor::IMonitorDescriptor>>::unique_ptr<DxgMonitor::IMonitorDescriptor,wistd::default_delete<DxgMonitor::IMonitorDescriptor>>(
      (__int64)a2,
      (__int64 *)&v7);
    if ( v7 )
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v7);
  }
  return a2;
}
