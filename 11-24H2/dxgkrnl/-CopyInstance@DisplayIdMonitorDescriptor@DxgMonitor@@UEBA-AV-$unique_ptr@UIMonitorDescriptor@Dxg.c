/*
 * XREFs of ?CopyInstance@DisplayIdMonitorDescriptor@DxgMonitor@@UEBA?AV?$unique_ptr@UIMonitorDescriptor@DxgMonitor@@U?$default_delete@UIMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@XZ @ 0x140280840
 * Callers:
 *     ?CopyWithoutOverrides@DisplayIdMonitorDescriptor@DxgMonitor@@UEBA?AV?$unique_ptr@UIMonitorDescriptor@DxgMonitor@@U?$default_delete@UIMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@XZ @ 0x140280960 (-CopyWithoutOverrides@DisplayIdMonitorDescriptor@DxgMonitor@@UEBA-AV-$unique_ptr@UIMonitorDescri.c)
 * Callees:
 *     ??4?$unique_ptr@$$BY0A@IU?$default_delete@$$BY0A@I@wistd@@@wistd@@QEAAAEAV01@$$QEAV01@@Z @ 0x140021E28 (--4-$unique_ptr@$$BY0A@IU-$default_delete@$$BY0A@I@wistd@@@wistd@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400224A0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?reset@?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@wistd@@@wistd@@QEAAX$$T@Z @ 0x140023358 (-reset@-$unique_ptr@$$BY0A@EU-$default_delete@$$BY0A@E@wistd@@@wistd@@QEAAX$$T@Z.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002D590 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     Feature_SetMonitorDescriptorOverride__private_IsEnabledDeviceUsageNoInline @ 0x14007DD5C (Feature_SetMonitorDescriptorOverride__private_IsEnabledDeviceUsageNoInline.c)
 *     ??_GDisplayIdMonitorDescriptor@DxgMonitor@@UEAAPEAXI@Z @ 0x1400922E0 (--_GDisplayIdMonitorDescriptor@DxgMonitor@@UEAAPEAXI@Z.c)
 *     memmove @ 0x1400A1D00 (memmove.c)
 *     ??0DisplayIdMonitorDescriptor@DxgMonitor@@QEAA@$$QEAV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@wistd@@@wistd@@K@Z @ 0x140280488 (--0DisplayIdMonitorDescriptor@DxgMonitor@@QEAA@$$QEAV-$unique_ptr@$$BY0A@EU-$default_delete@$$BY.c)
 */

__int64 *__fastcall DxgMonitor::DisplayIdMonitorDescriptor::CopyInstance(__int64 a1, __int64 *a2)
{
  void *v4; // rax
  __int64 v5; // rax
  __int64 v6; // rdi
  int v7; // eax
  void *v8; // rax
  void *v10; // [rsp+40h] [rbp+8h] BYREF
  void *v11; // [rsp+50h] [rbp+18h] BYREF

  v4 = (void *)operator new[](*(unsigned int *)(a1 + 12), 0x4D677844u, 256LL);
  v10 = v4;
  if ( !v4
    || (memmove(v4, *(const void **)(a1 + 24), *(unsigned int *)(a1 + 12)),
        (v5 = operator new(0x48uLL, 0x4D677844u, 256LL)) == 0)
    || (v6 = DxgMonitor::DisplayIdMonitorDescriptor::DisplayIdMonitorDescriptor(v5, &v10, *(_DWORD *)(a1 + 12))) == 0 )
  {
    *a2 = 0LL;
    goto LABEL_11;
  }
  if ( !(unsigned int)Feature_SetMonitorDescriptorOverride__private_IsEnabledDeviceUsageNoInline() )
    goto LABEL_9;
  v7 = *(_DWORD *)(a1 + 8);
  *(_DWORD *)(v6 + 8) = v7;
  if ( v7 != 1 )
    goto LABEL_9;
  v8 = (void *)operator new[](*(unsigned int *)(a1 + 56), 0x4D677844u, 256LL);
  v11 = v8;
  if ( v8 )
  {
    memmove(v8, *(const void **)(a1 + 64), *(unsigned int *)(a1 + 56));
    wistd::unique_ptr<unsigned int [0],wistd::default_delete<unsigned int [0]>>::operator=((void **)(v6 + 64), &v11);
    *(_DWORD *)(v6 + 56) = *(_DWORD *)(a1 + 56);
    wistd::unique_ptr<unsigned char [0],wistd::default_delete<unsigned char [0]>>::reset(&v11);
LABEL_9:
    *a2 = v6;
    goto LABEL_11;
  }
  *a2 = 0LL;
  wistd::unique_ptr<unsigned char [0],wistd::default_delete<unsigned char [0]>>::reset(&v11);
  DxgMonitor::DisplayIdMonitorDescriptor::`scalar deleting destructor'((DxgMonitor::DisplayIdMonitorDescriptor *)v6, 1);
LABEL_11:
  wistd::unique_ptr<unsigned char [0],wistd::default_delete<unsigned char [0]>>::reset(&v10);
  return a2;
}
