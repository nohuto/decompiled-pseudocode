/*
 * XREFs of ?NotifyMonitorStateChange@DXGGLOBAL@@QEAAX_N@Z @ 0x1403EE380
 * Callers:
 *     ?SetVidPnSourceActive@ADAPTER_DISPLAY@@QEAAJI_NPEBU_DXGK_DISPLAYMODE_INFO@@00@Z @ 0x140312F00 (-SetVidPnSourceActive@ADAPTER_DISPLAY@@QEAAJI_NPEBU_DXGK_DISPLAYMODE_INFO@@00@Z.c)
 * Callees:
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14006681C (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 */

void __fastcall DXGGLOBAL::NotifyMonitorStateChange(DXGGLOBAL *this, char a2)
{
  char *v3; // rbx
  __int64 v5; // r9
  int v6; // ecx
  int v7; // eax
  bool v8; // zf
  __int64 Pool2; // rax

  v3 = (char *)this + 305824;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v3, 0LL);
  Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
  *((_QWORD *)v3 + 1) = KeGetCurrentThread();
  v6 = *((_DWORD *)this + 76463);
  if ( a2 )
  {
    v7 = v6 + 1;
    v8 = v6 == 0;
  }
  else
  {
    if ( v6 <= 0 )
      goto LABEL_8;
    v7 = v6 - 1;
    v8 = v6 == 1;
  }
  *((_DWORD *)this + 76463) = v7;
  if ( v8 )
  {
    Pool2 = ExAllocatePool2(64LL, 48LL, 1265072196LL, v5);
    if ( Pool2 )
    {
      *(_QWORD *)Pool2 = 0LL;
      *(_QWORD *)(Pool2 + 16) = MonitorStateChangeThread;
      *(_QWORD *)(Pool2 + 24) = Pool2;
      *(_QWORD *)(Pool2 + 32) = this;
      *(_BYTE *)(Pool2 + 40) = a2;
      ExQueueWorkItem((PWORK_QUEUE_ITEM)Pool2, NormalWorkQueue);
    }
  }
LABEL_8:
  Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
  *((_QWORD *)v3 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v3, 0LL);
  KeLeaveCriticalRegion();
}
