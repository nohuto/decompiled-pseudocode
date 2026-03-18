/*
 * XREFs of ?CopyInstance@DisplayIdMonitorDescriptor@DxgMonitor@@UEBA?AV?$unique_ptr@UIMonitorDescriptor@DxgMonitor@@U?$default_delete@UIMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@XZ @ 0x140279350
 * Callers:
 *     ?CopyWithoutOverrides@DisplayIdMonitorDescriptor@DxgMonitor@@UEBA?AV?$unique_ptr@UIMonitorDescriptor@DxgMonitor@@U?$default_delete@UIMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@XZ @ 0x140279470 (-CopyWithoutOverrides@DisplayIdMonitorDescriptor@DxgMonitor@@UEBA-AV-$unique_ptr@UIMonitorDescri.c)
 * Callees:
 *     ??4?$unique_ptr@$$BY0A@IU?$default_delete@$$BY0A@I@wistd@@@wistd@@QEAAAEAV01@$$QEAV01@@Z @ 0x140012998 (--4-$unique_ptr@$$BY0A@IU-$default_delete@$$BY0A@I@wistd@@@wistd@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002CD80 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?reset@?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@wistd@@@wistd@@QEAAX$$T@Z @ 0x140058B34 (-reset@-$unique_ptr@$$BY0A@EU-$default_delete@$$BY0A@E@wistd@@@wistd@@QEAAX$$T@Z.c)
 *     Feature_SetMonitorDescriptorOverride__private_IsEnabledDeviceUsageNoInline @ 0x14007D6D4 (Feature_SetMonitorDescriptorOverride__private_IsEnabledDeviceUsageNoInline.c)
 *     ??_GDisplayIdMonitorDescriptor@DxgMonitor@@UEAAPEAXI@Z @ 0x140090F90 (--_GDisplayIdMonitorDescriptor@DxgMonitor@@UEAAPEAXI@Z.c)
 *     memmove @ 0x14009F9C0 (memmove.c)
 *     ??0DisplayIdMonitorDescriptor@DxgMonitor@@QEAA@$$QEAV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@wistd@@@wistd@@K@Z @ 0x140278F98 (--0DisplayIdMonitorDescriptor@DxgMonitor@@QEAA@$$QEAV-$unique_ptr@$$BY0A@EU-$default_delete@$$BY.c)
 */

__int64 *__fastcall DxgMonitor::DisplayIdMonitorDescriptor::CopyInstance(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4)
{
  void *v6; // rax
  __int64 v7; // r9
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v10; // r9
  int v11; // eax
  void *v12; // rax
  void *v14; // [rsp+40h] [rbp+8h] BYREF
  void *v15; // [rsp+50h] [rbp+18h] BYREF

  v6 = (void *)operator new[](*(unsigned int *)(a1 + 12), 0x4D677844u, 256LL, a4);
  v14 = v6;
  if ( !v6
    || (memmove(v6, *(const void **)(a1 + 24), *(unsigned int *)(a1 + 12)),
        (v8 = operator new(0x40uLL, 0x4D677844u, 256LL, v7)) == 0)
    || (v9 = DxgMonitor::DisplayIdMonitorDescriptor::DisplayIdMonitorDescriptor(v8, &v14, *(_DWORD *)(a1 + 12))) == 0 )
  {
    *a2 = 0LL;
    goto LABEL_11;
  }
  if ( !(unsigned int)Feature_SetMonitorDescriptorOverride__private_IsEnabledDeviceUsageNoInline() )
    goto LABEL_9;
  v11 = *(_DWORD *)(a1 + 8);
  *(_DWORD *)(v9 + 8) = v11;
  if ( v11 != 1 )
    goto LABEL_9;
  v12 = (void *)operator new[](*(unsigned int *)(a1 + 48), 0x4D677844u, 256LL, v10);
  v15 = v12;
  if ( v12 )
  {
    memmove(v12, *(const void **)(a1 + 56), *(unsigned int *)(a1 + 48));
    wistd::unique_ptr<unsigned int [0],wistd::default_delete<unsigned int [0]>>::operator=((void **)(v9 + 56), &v15);
    *(_DWORD *)(v9 + 48) = *(_DWORD *)(a1 + 48);
    wistd::unique_ptr<unsigned char [0],wistd::default_delete<unsigned char [0]>>::reset(&v15);
LABEL_9:
    *a2 = v9;
    goto LABEL_11;
  }
  *a2 = 0LL;
  wistd::unique_ptr<unsigned char [0],wistd::default_delete<unsigned char [0]>>::reset(&v15);
  DxgMonitor::DisplayIdMonitorDescriptor::`scalar deleting destructor'((DxgMonitor::DisplayIdMonitorDescriptor *)v9, 1);
LABEL_11:
  wistd::unique_ptr<unsigned char [0],wistd::default_delete<unsigned char [0]>>::reset(&v14);
  return a2;
}
