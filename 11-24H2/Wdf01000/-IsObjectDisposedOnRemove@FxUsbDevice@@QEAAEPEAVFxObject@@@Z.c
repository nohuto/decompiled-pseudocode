/*
 * XREFs of ?IsObjectDisposedOnRemove@FxUsbDevice@@QEAAEPEAVFxObject@@@Z @ 0x14001EC64
 * Callers:
 *     ?FormatTransferRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@PEAUFxRequestBuffer@@K@Z @ 0x14001DA9C (-FormatTransferRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@PEAUFxRequestBuffer@@K@Z.c)
 *     ?GetFxUrbTypeForRequest@FxUsbDevice@@QEAA?AW4_FX_URB_TYPE@@PEAVFxRequestBase@@@Z @ 0x14001EC30 (-GetFxUrbTypeForRequest@FxUsbDevice@@QEAA-AW4_FX_URB_TYPE@@PEAVFxRequestBase@@@Z.c)
 *     ?CreateUrb@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFMEMORY__@@PEAPEAU_URB@@@Z @ 0x14001F7DC (-CreateUrb@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFMEMORY__@@PEAPEAU_URB@@@Z.c)
 *     ?CreateIsochUrb@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@KPEAPEAUWDFMEMORY__@@PEAPEAU_URB@@@Z @ 0x14007252C (-CreateIsochUrb@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@KPEAPEAUWDFMEMORY__@@PEAPEAU_URB@@.c)
 * Callees:
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x140049FC8 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 *     ?GetParentObjectReferenced@FxObject@@QEAAPEAV1@PEAX@Z @ 0x140069B30 (-GetParentObjectReferenced@FxObject@@QEAAPEAV1@PEAX@Z.c)
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

char __fastcall FxUsbDevice::IsObjectDisposedOnRemove(FxUsbDevice *this, FxObject *Object)
{
  char v2; // di
  char *v4; // rsi
  unsigned int RefCount; // edx
  FxTagTracker *v7; // rcx
  FxObject *ParentObjectReferenced; // rbx
  _QWORD v10[5]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v11; // [rsp+68h] [rbp+10h] BYREF

  v2 = 0;
  v4 = (char *)Object;
  RefCount = _InterlockedIncrement(&Object->m_Refcnt);
  if ( v4[24] < 0 )
  {
    v7 = (FxTagTracker *)*((_QWORD *)v4 - 6);
    if ( v7 )
      FxTagTracker::UpdateTagHistory(
        v7,
        Object,
        2376,
        "minkernel\\wdf\\framework\\shared\\targets\\usb\\fxusbdevice.cpp",
        TagAddRef,
        RefCount);
  }
  while ( v4 )
  {
    if ( v4 == (char *)this->m_DeviceBase
      || ((v11 = 0LL, v10[0] = &v11, v10[1] = 4104LL, *((_WORD *)v4 + 4) == 4104)
       || (*(int (__fastcall **)(char *, _QWORD *))(*(_QWORD *)v4 + 40LL))(v4, v10) >= 0)
      && !v4[213] )
    {
      v2 = 1;
      (*(void (__fastcall **)(char *, FxObject *, __int64, const char *))(*(_QWORD *)v4 + 16LL))(
        v4,
        Object,
        2412LL,
        "minkernel\\wdf\\framework\\shared\\targets\\usb\\fxusbdevice.cpp");
      return v2;
    }
    ParentObjectReferenced = FxObject::GetParentObjectReferenced((FxObject *)v4, Object);
    (*(void (__fastcall **)(char *, FxObject *, __int64, const char *))(*(_QWORD *)v4 + 16LL))(
      v4,
      Object,
      2402LL,
      "minkernel\\wdf\\framework\\shared\\targets\\usb\\fxusbdevice.cpp");
    v4 = (char *)ParentObjectReferenced;
  }
  return v2;
}
