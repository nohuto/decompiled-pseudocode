/*
 * XREFs of DecrementActivePinCount @ 0x14003D930
 * Callers:
 *     PinSetDeviceState @ 0x14003D6D0 (PinSetDeviceState.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DecrementActivePinCount(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v2; // rbx
  void *v3; // rcx
  ULONG v4; // r8d
  ULONG v5; // edx

  v1 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL);
  v2 = *(_QWORD *)(v1 + 16);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v2 + 716), 0xFFFFFFFF) == 1 )
  {
    v3 = *(void **)(v2 + 520);
    if ( v3 )
      PoClearPowerRequest(v3, PowerRequestSystemRequired);
    KeWaitForSingleObject((PVOID)(v2 + 1016), Executive, 0, 0, 0LL);
    if ( *(_DWORD *)(v2 + 1080) )
    {
      v4 = *(_DWORD *)(v2 + 556);
      v5 = *(_DWORD *)(v2 + 548);
    }
    else
    {
      v4 = *(_DWORD *)(v2 + 552);
      v5 = *(_DWORD *)(v2 + 544);
    }
    *(_QWORD *)(v2 + 528) = PoRegisterDeviceForIdleDetection(
                              *(PDEVICE_OBJECT *)(v1 + 32),
                              v5,
                              v4,
                              (DEVICE_POWER_STATE)*(_DWORD *)(v2 + 540));
    KeReleaseMutex((PRKMUTEX)(v2 + 1016), 0);
  }
  return 0LL;
}
