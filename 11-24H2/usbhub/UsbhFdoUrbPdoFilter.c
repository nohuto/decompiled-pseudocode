/*
 * XREFs of UsbhFdoUrbPdoFilter @ 0x14000AF60
 * Callers:
 *     <none>
 * Callees:
 *     FdoExt @ 0x14000BE50 (FdoExt.c)
 *     UsbhFdoSelectConfigurationPdo @ 0x14000BE94 (UsbhFdoSelectConfigurationPdo.c)
 *     UsbhDecPdoIoCount @ 0x140015600 (UsbhDecPdoIoCount.c)
 *     UsbhFdoGetMsDescriptorPdo @ 0x140016FD8 (UsbhFdoGetMsDescriptorPdo.c)
 *     UsbhFdoValidateConnectionPdo @ 0x1400296B0 (UsbhFdoValidateConnectionPdo.c)
 *     UsbhFdoSelectInterfacePdo @ 0x1400367AC (UsbhFdoSelectInterfacePdo.c)
 *     UsbhTrapFatal_Dbg @ 0x14003964C (UsbhTrapFatal_Dbg.c)
 *     WPP_RECORDER_SF_q @ 0x14003DEE0 (WPP_RECORDER_SF_q.c)
 *     USBHUB_TriggerCallBacks @ 0x14004E8F4 (USBHUB_TriggerCallBacks.c)
 */

__int64 __fastcall UsbhFdoUrbPdoFilter(
        PDEVICE_OBJECT DeviceObject,
        _QWORD *BugCheckParameter3,
        IRP *BugCheckParameter4,
        __int64 a4)
{
  __int64 v7; // r8
  __int64 v8; // rdx
  _IO_SECURITY_CONTEXT *SecurityContext; // rcx
  __int64 v10; // rbp
  _QWORD *v11; // rbx
  KIRQL v12; // r15
  _QWORD *v13; // rcx
  _QWORD *v14; // rdx
  _QWORD *v15; // r8
  __int64 result; // rax
  unsigned int v17; // ebx
  int v18; // eax

  v7 = FdoExt(DeviceObject, BugCheckParameter3, BugCheckParameter4, a4);
  if ( !BugCheckParameter3 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v8 = BugCheckParameter3[8];
  if ( !v8 )
    goto LABEL_30;
  if ( *(_DWORD *)v8 != 1329877064 )
    UsbhTrapFatal_Dbg(BugCheckParameter3, v8);
  SecurityContext = BugCheckParameter4->Tail.Overlay.CurrentStackLocation->Parameters.Create.SecurityContext;
  SecurityContext->AccessState = *(_ACCESS_STATE **)(v8 + 1160);
  if ( WORD1(SecurityContext->SecurityQos) != 19 )
  {
    switch ( WORD1(SecurityContext->SecurityQos) )
    {
      case 0:
        result = UsbhFdoSelectConfigurationPdo(DeviceObject, BugCheckParameter3, BugCheckParameter4);
        break;
      case 1:
        result = UsbhFdoSelectInterfacePdo(DeviceObject, BugCheckParameter3, BugCheckParameter4);
        break;
      case 0x1E:
      case 0x30:
      case 0x31:
        result = UsbhFdoValidateConnectionPdo(DeviceObject, BugCheckParameter3, BugCheckParameter4);
        break;
      case 0x2A:
        result = UsbhFdoGetMsDescriptorPdo(DeviceObject, BugCheckParameter3, BugCheckParameter4);
        break;
      default:
        goto LABEL_28;
    }
    return result;
  }
  if ( (*(_DWORD *)(v8 + 1432) & 0x80000) == 0 )
  {
LABEL_28:
    ++BugCheckParameter4->CurrentLocation;
    ++BugCheckParameter4->Tail.Overlay.CurrentStackLocation;
    v17 = IofCallDriver(*(PDEVICE_OBJECT *)(v7 + 1216), BugCheckParameter4);
    UsbhDecPdoIoCount((ULONG_PTR)BugCheckParameter3, (ULONG_PTR)BugCheckParameter4);
    return v17;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_q(
      WPP_GLOBAL_Control->DeviceExtension,
      v8,
      1,
      19,
      (__int64)&WPP_17d2bee9f04934815023b5c023c5576c_Traceguids,
      *(_QWORD *)(v8 + 840));
  BugCheckParameter4->IoStatus.Status = -1073741637;
  IofCompleteRequest(BugCheckParameter4, 0);
  v10 = BugCheckParameter3[8];
  if ( !v10 )
LABEL_30:
    UsbhTrapFatal_Dbg(BugCheckParameter3, 0LL);
  if ( *(_DWORD *)v10 != 1329877064 )
    UsbhTrapFatal_Dbg(BugCheckParameter3, BugCheckParameter3[8]);
  v11 = (_QWORD *)(v10 + 1224);
  v12 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v10 + 1216));
  v13 = *(_QWORD **)(v10 + 1224);
  if ( v13 != (_QWORD *)(v10 + 1224) && v13 )
  {
    while ( v13 != v11 )
    {
      v14 = (_QWORD *)*v13;
      if ( (IRP *)v13[2] == BugCheckParameter4 )
      {
        if ( (_QWORD *)v14[1] != v13 || (v15 = (_QWORD *)v13[1], (_QWORD *)*v15 != v13) )
          __fastfail(3u);
        *v15 = v14;
        v14[1] = v15;
        ExFreePoolWithTag(v13 - 1, 0);
        goto LABEL_17;
      }
      v13 = (_QWORD *)*v13;
    }
  }
  v18 = *(_DWORD *)(v10 + 1264);
  if ( !v18 )
  {
    USBHUB_TriggerCallBacks(BugCheckParameter3);
    KeBugCheckEx(0xFEu, 8uLL, 4uLL, (ULONG_PTR)BugCheckParameter3, (ULONG_PTR)BugCheckParameter4);
  }
  *(_DWORD *)(v10 + 1264) = v18 - 1;
LABEL_17:
  if ( (_QWORD *)*v11 != v11 || *(_DWORD *)(v10 + 1264) )
  {
    KeReleaseSpinLock((PKSPIN_LOCK)(v10 + 1216), v12);
  }
  else
  {
    KeReleaseSpinLock((PKSPIN_LOCK)(v10 + 1216), v12);
    KeSetEvent((PRKEVENT)(v10 + 1240), 0, 0);
  }
  return 3221225659LL;
}
