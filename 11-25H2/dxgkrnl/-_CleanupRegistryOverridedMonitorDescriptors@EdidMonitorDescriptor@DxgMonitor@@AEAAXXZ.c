/*
 * XREFs of ?_CleanupRegistryOverridedMonitorDescriptors@EdidMonitorDescriptor@DxgMonitor@@AEAAXXZ @ 0x1403F9AD4
 * Callers:
 *     ?LoadDescriptorOverridesFromRegistry@EdidMonitorDescriptor@DxgMonitor@@UEAAJAEBVIMonitorRegistry@2@@Z @ 0x140276C70 (-LoadDescriptorOverridesFromRegistry@EdidMonitorDescriptor@DxgMonitor@@UEAAJAEBVIMonitorRegistry.c)
 *     ?UnloadDescriptorOverrides@EdidMonitorDescriptor@DxgMonitor@@UEAAXXZ @ 0x140278F30 (-UnloadDescriptorOverrides@EdidMonitorDescriptor@DxgMonitor@@UEAAXXZ.c)
 *     ??1EdidMonitorDescriptor@DxgMonitor@@UEAA@XZ @ 0x1403F9A78 (--1EdidMonitorDescriptor@DxgMonitor@@UEAA@XZ.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ?reset@?$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U?$default_delete@UWmiMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@QEAAXPEAUWmiMonitorDescriptor@DxgMonitor@@@Z @ 0x140056548 (-reset@-$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U-$default_delete@UWmiMonitorDescriptor@Dx.c)
 *     ??$?0VEdidMonitorDescriptor@DxgMonitor@@U?$default_delete@VEdidMonitorDescriptor@DxgMonitor@@@wistd@@XX@?$unique_ptr@UIMonitorDescriptor@DxgMonitor@@U?$default_delete@UIMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@QEAA@$$QEAV?$unique_ptr@VEdidMonitorDescriptor@DxgMonitor@@U?$default_delete@VEdidMonitorDescriptor@DxgMonitor@@@wistd@@@1@@Z @ 0x140059E3C (--$-0VEdidMonitorDescriptor@DxgMonitor@@U-$default_delete@VEdidMonitorDescriptor@DxgMonitor@@@wi.c)
 *     ?reset@?$unique_ptr@$$BY0A@V?$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U?$default_delete@UWmiMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@U?$default_delete@$$BY0A@V?$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U?$default_delete@UWmiMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@@2@@wistd@@QEAAX$$T@Z @ 0x140063330 (-reset@-$unique_ptr@$$BY0A@V-$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U-$default_delete@UWm.c)
 */

void __fastcall DxgMonitor::EdidMonitorDescriptor::_CleanupRegistryOverridedMonitorDescriptors(
        DxgMonitor::EdidMonitorDescriptor *this)
{
  __int64 v2; // rsi
  void **v3; // rdi
  __int64 *v4; // rax
  void **v5; // rbp
  unsigned int v6; // r8d
  __int64 i; // rdx
  void *v8; // [rsp+30h] [rbp+8h] BYREF

  if ( *((_DWORD *)this + 4) )
  {
    v2 = 0LL;
    do
    {
      v3 = (void **)(*((_QWORD *)this + 3) + 8 * v2);
      v4 = (__int64 *)*v3;
      if ( *v3 )
      {
        while ( v4 )
        {
          if ( *((_DWORD *)v4 + 2) == 3 )
          {
            wistd::unique_ptr<DxgMonitor::IMonitorDescriptor,wistd::default_delete<DxgMonitor::IMonitorDescriptor>>::unique_ptr<DxgMonitor::IMonitorDescriptor,wistd::default_delete<DxgMonitor::IMonitorDescriptor>>(
              (__int64)&v8,
              v4);
            wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>::reset(
              v3,
              0LL);
            v5 = (void **)*v3;
            *v3 = v8;
            if ( v5 )
            {
              wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>::reset(
                v5,
                0LL);
              DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v5);
            }
            --*((_DWORD *)this + 5);
            v8 = 0LL;
          }
          else
          {
            v3 = (void **)v4;
          }
          v4 = (__int64 *)*v3;
        }
      }
      v6 = *((_DWORD *)this + 4);
      v2 = (unsigned int)(v2 + 1);
    }
    while ( (unsigned int)v2 < v6 );
    for ( i = 0LL; (unsigned int)i < v6; i = (unsigned int)(i + 1) )
    {
      if ( !*(_QWORD *)(*((_QWORD *)this + 3) + 8 * i) )
      {
        *((_DWORD *)this + 4) = i;
        break;
      }
    }
    if ( !*((_DWORD *)this + 4) )
      wistd::unique_ptr<wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>> [0],wistd::default_delete<wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>> [0]>>::reset((__int64 *)this + 3);
  }
  else if ( *((_QWORD *)this + 3) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 886;
  }
}
