/*
 * XREFs of ?_Create@FxSystemWorkItem@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEAPEAV1@@Z @ 0x140043DA8
 * Callers:
 *     ?Initialize@FxTimer@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_TIMER_CONFIG@@PEAVFxObject@@PEAPEAUWDFTIMER__@@@Z @ 0x14003A14C (-Initialize@FxTimer@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_TIMER_CONFIG@@PEAVFxObject@@PEAPE.c)
 *     ?Initialize@FxIoQueue@@QEAAJPEAU_WDF_IO_QUEUE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDriver@@E@Z @ 0x14003B104 (-Initialize@FxIoQueue@@QEAAJPEAU_WDF_IO_QUEUE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDriver@@.c)
 *     ?Initialize@FxDisposeList@@QEAAJPEAX@Z @ 0x140043ACC (-Initialize@FxDisposeList@@QEAAJPEAX@Z.c)
 *     ?AllocateWorkItemForSetDeviceFailed@FxPkgPnp@@IEAAJXZ @ 0x1400798A8 (-AllocateWorkItemForSetDeviceFailed@FxPkgPnp@@IEAAJXZ.c)
 *     ?Config@FxUsbPipeContinuousReader@@QEAAJPEAU_WDF_USB_CONTINUOUS_READER_CONFIG@@_K@Z @ 0x14007B68C (-Config@FxUsbPipeContinuousReader@@QEAAJPEAU_WDF_USB_CONTINUOUS_READER_CONFIG@@_K@Z.c)
 *     ?InitializeWorker@FxInterrupt@@QEAAJPEAVFxObject@@PEAU_WDF_INTERRUPT_CONFIG@@@Z @ 0x1400A9770 (-InitializeWorker@FxInterrupt@@QEAAJPEAVFxObject@@PEAU_WDF_INTERRUPT_CONFIG@@@Z.c)
 * Callees:
 *     ?FxObjectHandleAlloc2@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@_K1KPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x14001189C (-FxObjectHandleAlloc2@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@_K1KPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObject.c)
 *     ??0FxSystemWorkItem@@AEAA@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x140043E4C (--0FxSystemWorkItem@@AEAA@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Initialize@FxSystemWorkItem@@AEAAJPEAX@Z @ 0x140043F00 (-Initialize@FxSystemWorkItem@@AEAAJPEAX@Z.c)
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

int __fastcall FxSystemWorkItem::_Create(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        void *WdmObject,
        FxSystemWorkItem **pObject,
        __int64 a4)
{
  FX_POOL **v7; // rax
  FxSystemWorkItem *v8; // rax
  FxSystemWorkItem *v9; // rbx
  int result; // eax
  int v11; // edi

  v7 = FxObjectHandleAlloc2(FxDriverGlobals, (unsigned __int64)WdmObject, 0xE0uLL, a4, 0LL, 0, FxObjectTypeInternal);
  if ( !v7 )
    return -1073741670;
  FxSystemWorkItem::FxSystemWorkItem((FxSystemWorkItem *)v7, FxDriverGlobals);
  v9 = v8;
  if ( !v8 )
    return -1073741670;
  result = FxSystemWorkItem::Initialize(v8, WdmObject);
  v11 = result;
  if ( result < 0 )
  {
    v9->Release(v9, 0LL, 0, 0LL);
    return v11;
  }
  else
  {
    *pObject = v9;
  }
  return result;
}
