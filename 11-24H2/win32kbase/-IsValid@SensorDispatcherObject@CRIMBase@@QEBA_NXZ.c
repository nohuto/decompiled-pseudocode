/*
 * XREFs of ?IsValid@SensorDispatcherObject@CRIMBase@@QEBA_NXZ @ 0x1400DACE0
 * Callers:
 *     ?GetHandleNameFromDispatcherObject@CRIMBase@@IEAA?AW4DispatcherHandleName@1@PEAX@Z @ 0x140187270 (-GetHandleNameFromDispatcherObject@CRIMBase@@IEAA-AW4DispatcherHandleName@1@PEAX@Z.c)
 *     ?GetDispatcherHandleByIndex@CRIMBase@@IEBAPEAXIW4HandleAccessMode@1@@Z @ 0x14020C324 (-GetDispatcherHandleByIndex@CRIMBase@@IEBAPEAXIW4HandleAccessMode@1@@Z.c)
 *     ?GetDispatcherObjectByIndex@CRIMBase@@IEBAPEAXI@Z @ 0x14020C3BC (-GetDispatcherObjectByIndex@CRIMBase@@IEBAPEAXI@Z.c)
 *     ?GetDispatcherObjectByName@CRIMBase@@IEBAPEAXW4DispatcherHandleName@1@@Z @ 0x14020C454 (-GetDispatcherObjectByName@CRIMBase@@IEBAPEAXW4DispatcherHandleName@1@@Z.c)
 *     ?IsDispatcherObjectValid@CRIMBase@@IEBA_NI@Z @ 0x14020CCC0 (-IsDispatcherObjectValid@CRIMBase@@IEBA_NI@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CRIMBase::SensorDispatcherObject::IsValid(CRIMBase::SensorDispatcherObject *this)
{
  bool v2; // bl

  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(this, 0LL);
  v2 = *((_DWORD *)this + 3) != 0;
  ExReleasePushLockSharedEx(this, 0LL);
  KeLeaveCriticalRegion();
  return v2;
}
