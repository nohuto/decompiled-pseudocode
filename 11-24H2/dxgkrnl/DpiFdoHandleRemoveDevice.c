/*
 * XREFs of DpiFdoHandleRemoveDevice @ 0x140241460
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x140041998 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     ?ReleaseMiniportListMutex@@YAXXZ @ 0x1400419DC (-ReleaseMiniportListMutex@@YAXXZ.c)
 *     DpiFdoIsPostDevice @ 0x14004D4F0 (DpiFdoIsPostDevice.c)
 *     DpiFdoIsMsBddAnchoredDevice @ 0x140058E78 (DpiFdoIsMsBddAnchoredDevice.c)
 *     DpiCheckSpbResourceLeakage @ 0x14008BE74 (DpiCheckSpbResourceLeakage.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     DpiFdoHandleStopDevice @ 0x1402421F0 (DpiFdoHandleStopDevice.c)
 *     DpiFdoRemoveChildDescriptors @ 0x1402451C0 (DpiFdoRemoveChildDescriptors.c)
 *     DpiFdoResetFdo @ 0x1402453A8 (DpiFdoResetFdo.c)
 *     DpiAcpiUnregisterAcpiCallbacks @ 0x140252810 (DpiAcpiUnregisterAcpiCallbacks.c)
 *     DpiLdaUnLinkDeviceFromChain @ 0x140253CB4 (DpiLdaUnLinkDeviceFromChain.c)
 *     DpiPdoDestroyPendingPdoObjects @ 0x140254E40 (DpiPdoDestroyPendingPdoObjects.c)
 *     ?SysMmDestroyAdapter@@YAXPEAUSYSMM_ADAPTER@@@Z @ 0x140286170 (-SysMmDestroyAdapter@@YAXPEAUSYSMM_ADAPTER@@@Z.c)
 *     DpiDxgkDdiRemoveDevice @ 0x1403F5410 (DpiDxgkDdiRemoveDevice.c)
 */

__int64 __fastcall DpiFdoHandleRemoveDevice(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  char *DeviceExtension; // rbx
  __int64 v5; // r14
  int v6; // eax
  __int64 v7; // rcx
  _QWORD *v8; // rcx
  PVOID *v9; // rax
  __int64 v10; // rcx
  void *v11; // rcx
  _DWORD *v12; // rcx
  _DWORD *v13; // rcx
  void *v14; // rcx
  int v15; // eax
  struct _IO_WORKITEM *v16; // rcx
  void (__fastcall *v17)(_QWORD); // rax
  void (__fastcall *v18)(_QWORD); // rax
  void (__fastcall *v19)(_QWORD); // rax
  void (__fastcall *v20)(_QWORD); // rax
  unsigned int v21; // ebp
  PVOID v22; // rsi
  struct SYSMM_ADAPTER *v23; // rcx

  DeviceExtension = (char *)DeviceObject->DeviceExtension;
  v5 = *((_QWORD *)DeviceExtension + 5);
  AcquireMiniportListMutex();
  if ( (PDEVICE_OBJECT)qword_140160FB8 == DeviceObject )
  {
    WdLogSingleEntry1(2LL, -1073741637LL);
    WdLogGlobalForLineNumber = 6991;
    qword_140160FB8 = 0LL;
  }
  ReleaseMiniportListMutex();
  if ( *((_DWORD *)DeviceExtension + 4) == 1953656900 )
  {
    if ( (unsigned int)(*((_DWORD *)DeviceExtension + 5) - 2) <= 1
      && (unsigned int)(*((_DWORD *)DeviceExtension + 60) - 1) <= 1 )
    {
      DpiFdoHandleStopDevice(DeviceObject, Irp);
    }
    if ( *((_DWORD *)DeviceExtension + 4) == 1953656900 && *((_DWORD *)DeviceExtension + 5) == 2 )
      DpiPdoDestroyPendingPdoObjects(DeviceObject);
  }
  IoReleaseRemoveLockAndWaitEx((PIO_REMOVE_LOCK)DeviceExtension + 2, Irp, 0x20u);
  if ( *((_DWORD *)DeviceExtension + 4) == 1953656900 && *((_DWORD *)DeviceExtension + 5) == 2 )
    DpiFdoRemoveChildDescriptors(DeviceObject);
  *(_DWORD *)&DeviceExtension[4 * (*((_DWORD *)DeviceExtension + 69) & 7) + 244] = *((_DWORD *)DeviceExtension + 60);
  v6 = *((_DWORD *)DeviceExtension + 59);
  ++*((_DWORD *)DeviceExtension + 69);
  *((_DWORD *)DeviceExtension + 60) = v6;
  *((_DWORD *)DeviceExtension + 59) = 7;
  AcquireMiniportListMutex();
  if ( DpiFdoIsPostDevice((__int64)DeviceObject) )
    qword_140160FC0 = 0LL;
  if ( DpiFdoIsMsBddAnchoredDevice(v7) )
    qword_140161068 = 0LL;
  ReleaseMiniportListMutex();
  KeWaitForSingleObject((PVOID)(v5 + 72), Executive, 0, 0, 0LL);
  v8 = *(_QWORD **)DeviceExtension;
  if ( *(char **)(*(_QWORD *)DeviceExtension + 8LL) != DeviceExtension
    || (v9 = (PVOID *)*((_QWORD *)DeviceExtension + 1), *v9 != DeviceExtension) )
  {
    __fastfail(3u);
  }
  *v9 = v8;
  v8[1] = v9;
  --*(_DWORD *)(v5 + 128);
  v10 = *((_QWORD *)DeviceExtension + 21);
  if ( *(_DWORD *)(v10 + 104) == 1 )
  {
    ExDeleteResourceLite((PERESOURCE)v10);
    v11 = (void *)*((_QWORD *)DeviceExtension + 21);
    if ( v11 )
    {
      ExFreePoolWithTag(v11, 0);
      *((_QWORD *)DeviceExtension + 21) = 0LL;
    }
  }
  if ( *((_DWORD *)DeviceExtension + 4) == 1953656900 && (unsigned int)(*((_DWORD *)DeviceExtension + 5) - 2) <= 1 )
  {
    v12 = (_DWORD *)*((_QWORD *)DeviceExtension + 185);
    if ( v12[2] == 1 && v12 )
    {
      ExFreePoolWithTag(v12, 0);
      *((_QWORD *)DeviceExtension + 185) = 0LL;
    }
    v13 = (_DWORD *)*((_QWORD *)DeviceExtension + 186);
    if ( v13[2] == 1 && v13 )
    {
      ExFreePoolWithTag(v13, 0);
      *((_QWORD *)DeviceExtension + 186) = 0LL;
    }
    if ( *((_DWORD *)DeviceExtension + 126) )
      DpiLdaUnLinkDeviceFromChain(DeviceObject);
    v14 = (void *)*((_QWORD *)DeviceExtension + 139);
    if ( v14 )
    {
      ExFreePoolWithTag(v14, 0);
      *((_QWORD *)DeviceExtension + 139) = 0LL;
    }
    DpiCheckSpbResourceLeakage((__int64)DeviceExtension);
  }
  KeReleaseMutex((PRKMUTEX)(v5 + 72), 0);
  if ( *((_DWORD *)DeviceExtension + 4) == 1953656900 )
  {
    v15 = *((_DWORD *)DeviceExtension + 5);
    if ( v15 == 2 )
    {
      DpiFdoResetFdo(DeviceObject);
    }
    else if ( v15 != 3 )
    {
      goto LABEL_53;
    }
    v16 = (struct _IO_WORKITEM *)*((_QWORD *)DeviceExtension + 346);
    if ( v16 )
    {
      IoFreeWorkItem(v16);
      *((_QWORD *)DeviceExtension + 346) = 0LL;
    }
    if ( DeviceExtension[1157] == 1 )
      DpiAcpiUnregisterAcpiCallbacks(DeviceObject);
    v17 = (void (__fastcall *)(_QWORD))*((_QWORD *)DeviceExtension + 73);
    if ( v17 )
    {
      v17(*((_QWORD *)DeviceExtension + 71));
      memset(DeviceExtension + 560, 0, 0x40uLL);
    }
    v18 = (void (__fastcall *)(_QWORD))*((_QWORD *)DeviceExtension + 81);
    if ( v18 )
    {
      v18(*((_QWORD *)DeviceExtension + 79));
      *((_OWORD *)DeviceExtension + 39) = 0LL;
      *((_OWORD *)DeviceExtension + 40) = 0LL;
      *((_OWORD *)DeviceExtension + 41) = 0LL;
    }
    v19 = (void (__fastcall *)(_QWORD))*((_QWORD *)DeviceExtension + 87);
    if ( v19 )
    {
      v19(*((_QWORD *)DeviceExtension + 85));
      memset(DeviceExtension + 672, 0, 0xB8uLL);
    }
    v20 = (void (__fastcall *)(_QWORD))*((_QWORD *)DeviceExtension + 110);
    if ( v20 )
    {
      v20(*((_QWORD *)DeviceExtension + 108));
      memset(DeviceExtension + 856, 0, 0x58uLL);
    }
    RtlFreeUnicodeString((PUNICODE_STRING)DeviceExtension + 32);
    RtlFreeUnicodeString((PUNICODE_STRING)DeviceExtension + 33);
    KeSetEvent((PRKEVENT)(DeviceExtension + 1288), 0, 0);
  }
LABEL_53:
  ++Irp->CurrentLocation;
  ++Irp->Tail.Overlay.CurrentStackLocation;
  Irp->IoStatus.Status = 0;
  v21 = IofCallDriver(*((PDEVICE_OBJECT *)DeviceExtension + 20), Irp);
  DpiDxgkDdiRemoveDevice(v5, *((_QWORD *)DeviceExtension + 6));
  if ( *((_DWORD *)DeviceExtension + 4) == 1953656900 && *((_DWORD *)DeviceExtension + 5) == 2 )
  {
    v22 = DeviceObject->DeviceExtension;
    v23 = (struct SYSMM_ADAPTER *)*((_QWORD *)v22 + 728);
    if ( v23 )
    {
      SysMmDestroyAdapter(v23);
      *((_QWORD *)v22 + 728) = 0LL;
    }
  }
  IoDetachDevice(*((PDEVICE_OBJECT *)DeviceExtension + 20));
  IoDeleteDevice(DeviceObject);
  return v21;
}
