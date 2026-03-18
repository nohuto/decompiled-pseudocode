/*
 * XREFs of FxUsbTargetDeviceCreate @ 0x140059F74
 * Callers:
 *     imp_WdfUsbTargetDeviceCreate @ 0x14009CEB0 (imp_WdfUsbTargetDeviceCreate.c)
 *     imp_WdfUsbTargetDeviceCreateWithParameters @ 0x14009CF20 (imp_WdfUsbTargetDeviceCreateWithParameters.c)
 * Callees:
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x140007A40 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x140024C90 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x140036790 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x14003754C (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     ?FxObjectHandleAlloc2@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@_K1KPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x140037570 (-FxObjectHandleAlloc2@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@_K1KPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObject.c)
 *     ?Init@FxIoTarget@@QEAAJPEAVFxDeviceBase@@@Z @ 0x14004F158 (-Init@FxIoTarget@@QEAAJPEAVFxDeviceBase@@@Z.c)
 *     ?InitDevice@FxUsbDevice@@QEAAJK@Z @ 0x14005A0DC (-InitDevice@FxUsbDevice@@QEAAJK@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x14008306C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ??0FxUsbDevice@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x14009E610 (--0FxUsbDevice@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?CreateInterfaces@FxUsbDevice@@QEAAJXZ @ 0x14009EAA0 (-CreateInterfaces@FxUsbDevice@@QEAAJXZ.c)
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FxUsbTargetDeviceCreate(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        FxDeviceBase *Device,
        unsigned int USBDClientContractVersion,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        WDFUSBDEVICE__ **UsbDevice)
{
  WDFUSBDEVICE__ **v5; // rsi
  __int64 result; // rax
  unsigned __int64 v11; // rdx
  __int64 v12; // r9
  FX_POOL **v13; // rax
  FxIoTarget *v14; // rax
  FxUsbDevice *v15; // rdi
  int inited; // ebx
  void *retaddr; // [rsp+58h] [rbp+0h]

  v5 = UsbDevice;
  if ( !UsbDevice )
    FxVerifierNullBugCheck(FxDriverGlobals, retaddr);
  *UsbDevice = 0LL;
  result = FxVerifierCheckIrqlLevel(FxDriverGlobals, 0);
  if ( (int)result >= 0 )
  {
    result = FxValidateObjectAttributes(FxDriverGlobals, Attributes, 1);
    if ( (int)result >= 0 )
    {
      v13 = FxObjectHandleAlloc2(FxDriverGlobals, v11, 0x1F0uLL, v12, Attributes, 0, FxObjectTypeExternal);
      if ( v13 && (FxUsbDevice::FxUsbDevice((FxUsbDevice *)v13, FxDriverGlobals), (v15 = (FxUsbDevice *)v14) != 0LL) )
      {
        inited = FxIoTarget::Init(v14, Device);
        if ( inited < 0
          || (UsbDevice = 0LL, inited = FxUsbDevice::InitDevice(v15, USBDClientContractVersion), inited < 0)
          || (inited = FxUsbDevice::CreateInterfaces(v15), inited < 0)
          || (inited = Device->AddIoTarget(Device, v15), inited < 0)
          || (inited = FxObject::Commit(v15, Attributes, (void **)&UsbDevice, Device, 1u), inited < 0) )
        {
          FxObject::DeleteFromFailedCreate(v15);
        }
        else
        {
          *v5 = (WDFUSBDEVICE__ *)UsbDevice;
        }
        return (unsigned int)inited;
      }
      else
      {
        return 3221225626LL;
      }
    }
  }
  return result;
}
