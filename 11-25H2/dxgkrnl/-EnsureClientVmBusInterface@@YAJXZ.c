/*
 * XREFs of ?EnsureClientVmBusInterface@@YAJXZ @ 0x14021762C
 * Callers:
 *     ?Initialize@DXGVMBUSCHANNEL@@IEAAJPEAXAEBU_GUID@@1PEBU_UNICODE_STRING@@E@Z @ 0x140204E14 (-Initialize@DXGVMBUSCHANNEL@@IEAAJPEAXAEBU_GUID@@1PEBU_UNICODE_STRING@@E@Z.c)
 *     ?CreateClientVmBusChannel@@YAJPEAXPEAU_DEVICE_OBJECT@@U_GUID@@2PEBU_UNICODE_STRING@@PEAU_VMB_CHANNEL_STATE_CHANGE_CALLBACKS@@P6AXPEAUVMBCHANNEL__@@PEAUVMBPACKETCOMPLETION__@@0II@ZP6AX5I@ZPEAPEAU5@@Z @ 0x140214B24 (-CreateClientVmBusChannel@@YAJPEAXPEAU_DEVICE_OBJECT@@U_GUID@@2PEBU_UNICODE_STRING@@PEAU_VMB_CHA.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140013A20 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14006681C (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     memset @ 0x14009FCC0 (memset.c)
 */

__int64 EnsureClientVmBusInterface(void)
{
  struct DXGGLOBAL *Global; // rax
  unsigned int v1; // edi
  struct DXGGLOBAL *v2; // rbx
  NTSTATUS DeviceObjectPointer; // eax
  __int64 v4; // rsi
  PIRP v5; // rax
  IRP *v6; // rdx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  NTSTATUS Status; // eax
  __int64 v9; // rbx
  struct DXGGLOBAL *v10; // rbx
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp+7h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+60h] [rbp+17h] BYREF
  struct _KEVENT Event; // [rsp+70h] [rbp+27h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+B0h] [rbp+67h] BYREF
  PFILE_OBJECT FileObject; // [rsp+B8h] [rbp+6Fh] BYREF

  Global = DXGGLOBAL::GetGlobal();
  DXGPUSHLOCK::AcquireExclusive((struct DXGGLOBAL *)((char *)Global + 896));
  v1 = 0;
  if ( g_VgpuVmBusInterfaceRefCount )
  {
    ((void (__fastcall *)(__int64))qword_14015D320)(qword_14015D318);
    ++g_VgpuVmBusInterfaceRefCount;
    v2 = DXGGLOBAL::GetGlobal();
    Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
    *((_QWORD *)v2 + 113) = 0LL;
    ExReleasePushLockExclusiveEx((char *)v2 + 896, 0LL);
  }
  else
  {
    memset(&g_VgpuVmBusInterface, 0, 0x318uLL);
    DeviceObject = 0LL;
    FileObject = 0LL;
    DestinationString = 0LL;
    RtlInitUnicodeString(&DestinationString, L"\\Device\\VMBus\\kmcl_interface");
    DeviceObjectPointer = IoGetDeviceObjectPointer(&DestinationString, 0x1F01FFu, &FileObject, &DeviceObject);
    v4 = DeviceObjectPointer;
    if ( DeviceObjectPointer >= 0 )
    {
      memset(&Event, 0, sizeof(Event));
      IoStatusBlock = 0LL;
      KeInitializeEvent(&Event, SynchronizationEvent, 0);
      v5 = IoBuildSynchronousFsdRequest(0x1Bu, DeviceObject, 0LL, 0, 0LL, &Event, &IoStatusBlock);
      v6 = v5;
      if ( v5 )
      {
        CurrentStackLocation = v5->Tail.Overlay.CurrentStackLocation;
        CurrentStackLocation[-1].MinorFunction = 8;
        CurrentStackLocation[-1].Parameters.WMI.ProviderId = (ULONG_PTR)&KMCL_CLIENT_INTERFACE_TYPE;
        CurrentStackLocation[-1].Parameters.Create.Options = 65896;
        CurrentStackLocation[-1].Parameters.Read.ByteOffset.QuadPart = (LONGLONG)&g_VgpuVmBusInterface;
        CurrentStackLocation[-1].Parameters.CreatePipe.Parameters = 0LL;
        v6->IoStatus.Status = -1073741637;
        Status = IofCallDriver(DeviceObject, v6);
        if ( Status == 259 )
        {
          Status = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
          if ( !Status )
            Status = IoStatusBlock.Status;
        }
        if ( Status >= 0 )
        {
          g_VgpuVmBusInterfaceRefCount = 1;
        }
        else
        {
          v9 = Status;
          WdLogSingleEntry1(2LL, Status);
          WdLogGlobalForLineNumber = 16807;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            0xFFFFFFFFLL,
            L"IoCallDriver failed: 0x%I64x",
            v9,
            0LL,
            0LL,
            0LL,
            0LL);
        }
      }
      else
      {
        WdLogSingleEntry1(2LL, -1073741670LL);
        WdLogGlobalForLineNumber = 16779;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"IoBuildSynchronousFsdRequest failed: 0x%I64x",
          -1073741670LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
    }
    else
    {
      WdLogSingleEntry1(2LL, DeviceObjectPointer);
      WdLogGlobalForLineNumber = 16756;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"IoGetDeviceObjectPointer failed: 0x%I64x",
        v4,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v10 = DXGGLOBAL::GetGlobal();
    Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
    *((_QWORD *)v10 + 113) = 0LL;
    ExReleasePushLockExclusiveEx((char *)v10 + 896, 0LL);
    v1 = v4;
  }
  KeLeaveCriticalRegion();
  return v1;
}
