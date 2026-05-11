/*
 * XREFs of IncrementActivePinCount @ 0x14003DF60
 * Callers:
 *     PinSetDeviceState @ 0x14003DE30 (PinSetDeviceState.c)
 * Callees:
 *     Feature_Servicing_UACPerfIdle__private_IsEnabledDeviceUsageNoInline @ 0x14000BE30 (Feature_Servicing_UACPerfIdle__private_IsEnabledDeviceUsageNoInline.c)
 *     DeviceRequestPowerUp @ 0x14004083C (DeviceRequestPowerUp.c)
 */

__int64 __fastcall IncrementActivePinCount(PKSPIN Pin, __int64 a2)
{
  _QWORD *Context; // rax
  __int64 v4; // rsi
  __int64 v5; // rdi
  int v6; // edx
  PKSFILTER ParentFilter; // rbx
  void *v8; // rcx

  Context = Pin->Context;
  v4 = Context[2];
  v5 = *(_QWORD *)(v4 + 16);
  if ( *(_DWORD *)(v5 + 536) != 1 )
  {
    v6 = DeviceRequestPowerUp(Context[2], a2);
    if ( v6 < 0 )
      return (unsigned int)v6;
    ParentFilter = KsPinGetParentFilter(Pin);
    KsReleaseControl(ParentFilter);
    KeWaitForSingleObject((PVOID)(v5 + 560), Executive, 0, 0, 0LL);
    KsAcquireControl(ParentFilter);
  }
  v6 = 0;
  if ( _InterlockedIncrement((volatile signed __int32 *)(v5 + 716)) == 1 )
  {
    v8 = *(void **)(v5 + 520);
    if ( v8 )
      PoSetPowerRequest(v8, PowerRequestSystemRequired);
    if ( (unsigned int)Feature_Servicing_UACPerfIdle__private_IsEnabledDeviceUsageNoInline() )
    {
      KeWaitForSingleObject((PVOID)(v5 + 1016), Executive, 0, 0, 0LL);
      *(_QWORD *)(v5 + 528) = PoRegisterDeviceForIdleDetection(
                                *(PDEVICE_OBJECT *)(v4 + 32),
                                0,
                                0,
                                (DEVICE_POWER_STATE)*(_DWORD *)(v5 + 540));
      KeReleaseMutex((PRKMUTEX)(v5 + 1016), 0);
    }
    else
    {
      *(_QWORD *)(v5 + 528) = PoRegisterDeviceForIdleDetection(
                                *(PDEVICE_OBJECT *)(v4 + 32),
                                0,
                                0,
                                (DEVICE_POWER_STATE)*(_DWORD *)(v5 + 540));
    }
    return 0;
  }
  return (unsigned int)v6;
}
