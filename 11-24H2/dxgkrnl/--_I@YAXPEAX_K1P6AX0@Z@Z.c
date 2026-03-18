/*
 * XREFs of ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x140023380
 * Callers:
 *     ??_EDXGADAPTER_REFERENCE@@QEAAPEAXI@Z @ 0x14006A86C (--_EDXGADAPTER_REFERENCE@@QEAAPEAXI@Z.c)
 *     ??1DISPLAYDIAGNOSTICADAPTERDATA@@QEAA@XZ @ 0x14006D0E0 (--1DISPLAYDIAGNOSTICADAPTERDATA@@QEAA@XZ.c)
 *     ?reset@?$unique_ptr@VDISPLAYSTATECHECKER@@U?$default_delete@VDISPLAYSTATECHECKER@@@wistd@@@wistd@@QEAAXPEAVDISPLAYSTATECHECKER@@@Z @ 0x14006D378 (-reset@-$unique_ptr@VDISPLAYSTATECHECKER@@U-$default_delete@VDISPLAYSTATECHECKER@@@wistd@@@wistd.c)
 *     ??$?RV?$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U?$default_delete@UWmiMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@@?$default_delete@$$BY0A@V?$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U?$default_delete@UWmiMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@@wistd@@QEBAXPEAV?$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U?$default_delete@UWmiMonitorDescriptor@DxgMonitor@@@wistd@@@1@@Z @ 0x140091AA8 (--$-RV-$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U-$default_delete@UWmiMonitorDescriptor@Dxg.c)
 *     ??1?$CCachedData@VBLTENTRY@@$02@@QEAA@XZ @ 0x1400930D8 (--1-$CCachedData@VBLTENTRY@@$02@@QEAA@XZ.c)
 *     ??_EBLTENTRY@@QEAAPEAXI@Z @ 0x140093238 (--_EBLTENTRY@@QEAAPEAXI@Z.c)
 *     ??1ADAPTER_DISPLAY@@QEAA@XZ @ 0x140196A94 (--1ADAPTER_DISPLAY@@QEAA@XZ.c)
 *     ?DestroySourceContextLists@OUTPUTDUPL_MGR@@AEAAXXZ @ 0x1401E4DD4 (-DestroySourceContextLists@OUTPUTDUPL_MGR@@AEAAXXZ.c)
 *     ?DestroyTrackedWorkload@DXGTRACKEDWORKLOAD@@QEAAXXZ @ 0x140202EE4 (-DestroyTrackedWorkload@DXGTRACKEDWORKLOAD@@QEAAXXZ.c)
 *     ?DestroyVirtualGpuCoreState@DXGK_VIRTUAL_GPU_GPUP@@UEAAXXZ @ 0x140218B10 (-DestroyVirtualGpuCoreState@DXGK_VIRTUAL_GPU_GPUP@@UEAAXXZ.c)
 *     ?Cleanup@BLTQUEUE@@QEAAXXZ @ 0x14028170C (-Cleanup@BLTQUEUE@@QEAAXXZ.c)
 *     ??1?$PagedPoolArray@VDXGRESOURCEREFERENCE@@$03@@QEAA@XZ @ 0x14032CBE4 (--1-$PagedPoolArray@VDXGRESOURCEREFERENCE@@$03@@QEAA@XZ.c)
 *     ??1?$PagedPoolArray@VDXGSYNCOBJECTMUTEX@@$03@@QEAA@XZ @ 0x140342428 (--1-$PagedPoolArray@VDXGSYNCOBJECTMUTEX@@$03@@QEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

void __fastcall `vector destructor iterator'(char *a1, __int64 a2, __int64 a3, void (__fastcall *a4)(char *))
{
  __int64 v5; // rbx
  char *v7; // rdi

  if ( a3 )
  {
    v5 = a3;
    v7 = &a1[a3 * a2];
    do
    {
      v7 -= a2;
      a4(v7);
      --v5;
    }
    while ( v5 );
  }
}
