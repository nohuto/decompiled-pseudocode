/*
 * XREFs of RawInputManagerObjectResolveHandle @ 0x140054EF0
 * Callers:
 *     RIMResetPointerDevices @ 0x1400545C0 (RIMResetPointerDevices.c)
 *     RIMRefreshDeviceAttributes @ 0x1400548C0 (RIMRefreshDeviceAttributes.c)
 *     RIMDirectPnpRemoveDevicesOfType @ 0x140054C40 (RIMDirectPnpRemoveDevicesOfType.c)
 *     RIMOnPnpNotification @ 0x140061480 (RIMOnPnpNotification.c)
 *     RIMDirectStartStopDeviceRead @ 0x140063CD0 (RIMDirectStartStopDeviceRead.c)
 *     RIMDirectStartDeviceClassNotifications @ 0x1400643F0 (RIMDirectStartDeviceClassNotifications.c)
 *     RIMRemoveInputOfType @ 0x1400CA660 (RIMRemoveInputOfType.c)
 *     RIMGetDeviceProperties @ 0x140135310 (RIMGetDeviceProperties.c)
 *     RIMGetSourceProcessId @ 0x140142E90 (RIMGetSourceProcessId.c)
 *     RIMRegisterForInputWithCallbacks @ 0x14014F6E0 (RIMRegisterForInputWithCallbacks.c)
 *     RIMGetDevicePreparsedData @ 0x1401510F0 (RIMGetDevicePreparsedData.c)
 *     RIMInjectInput @ 0x140156010 (RIMInjectInput.c)
 *     RIMDeviceIoControl @ 0x14017AF70 (RIMDeviceIoControl.c)
 *     RIMUnregisterForInput @ 0x14017BA20 (RIMUnregisterForInput.c)
 *     RIMOnAsyncWorkItemNotification @ 0x1401972C4 (RIMOnAsyncWorkItemNotification.c)
 *     CleanupTouchExtensibility @ 0x14019F048 (CleanupTouchExtensibility.c)
 *     ?rimOnCheckPointerDeviceMonitors@@YAXPEAXPEAUtagMONITOR@@@Z @ 0x1401D4394 (-rimOnCheckPointerDeviceMonitors@@YAXPEAXPEAUtagMONITOR@@@Z.c)
 *     RIMAddInjectionDeviceOfType @ 0x1401D5450 (RIMAddInjectionDeviceOfType.c)
 *     RIMAddInputOfType @ 0x1401D5D30 (RIMAddInputOfType.c)
 *     RIMAddNonPnpDeviceOfType @ 0x1401D60A0 (RIMAddNonPnpDeviceOfType.c)
 *     RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle @ 0x1401D65E0 (RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle.c)
 *     RIMDirectStopDeviceClassNotifications @ 0x1401D6F90 (RIMDirectStopDeviceClassNotifications.c)
 *     RIMEnableMonitorMappingForDevice @ 0x1401D7170 (RIMEnableMonitorMappingForDevice.c)
 *     RIMFreeInputBuffer @ 0x1401D7840 (RIMFreeInputBuffer.c)
 *     RIMGetDownContactCount @ 0x1401D7AC0 (RIMGetDownContactCount.c)
 *     RIMGetPhysicalDeviceRect @ 0x1401D7F10 (RIMGetPhysicalDeviceRect.c)
 *     RIMIsPrimaryPointerDeviceDown @ 0x1401D8290 (RIMIsPrimaryPointerDeviceDown.c)
 *     RIMRemoveInjectionDevice @ 0x1401D87A0 (RIMRemoveInjectionDevice.c)
 *     ?CreateHandles@CRIMBase@@IEAAJQEBW4DispatcherHandleName@1@_KP6AXPEAURIMDevChangeStruct@@@ZPEAX@Z @ 0x14020BD10 (-CreateHandles@CRIMBase@@IEAAJQEBW4DispatcherHandleName@1@_KP6AXPEAURIMDevChangeStruct@@@ZPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RawInputManagerObjectResolveHandle(char *a1, ACCESS_MASK a2, KPROCESSOR_MODE a3, PVOID *a4)
{
  NTSTATUS v5; // ebx
  PVOID Object; // [rsp+40h] [rbp+8h] BYREF

  if ( (unsigned __int64)(a1 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
    return 3221225480LL;
  Object = 0LL;
  v5 = ObReferenceObjectByHandle(a1, a2, ExRawInputManagerObjectType, a3, &Object, 0LL);
  if ( v5 >= 0 )
  {
    if ( *((_DWORD *)Object + 1) == 1 )
    {
      *a4 = Object;
    }
    else
    {
      v5 = -1073741788;
      ObfDereferenceObject(Object);
    }
  }
  return (unsigned int)v5;
}
