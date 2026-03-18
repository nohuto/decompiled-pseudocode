/*
 * XREFs of ACPIDeviceInternalSynchronizeRequest @ 0x14003DFD8
 * Callers:
 *     ACPIDevicePowerFlushQueue @ 0x14003DF5C (ACPIDevicePowerFlushQueue.c)
 *     ACPITableLoadCallBack @ 0x140051AD0 (ACPITableLoadCallBack.c)
 *     ACPIFlushQueuesUnload @ 0x14005A918 (ACPIFlushQueuesUnload.c)
 *     AcpiDeviceResetInvokeReset @ 0x14005D938 (AcpiDeviceResetInvokeReset.c)
 * Callees:
 *     ACPIDeviceInitializePowerRequest @ 0x14001BA00 (ACPIDeviceInitializePowerRequest.c)
 *     WPP_RECORDER_SF_qss @ 0x14003E0C4 (WPP_RECORDER_SF_qss.c)
 */

__int64 __fastcall ACPIDeviceInternalSynchronizeRequest(
        _QWORD *a1,
        void (__fastcall *a2)(__int64, __int64, __int64),
        __int64 a3)
{
  char v4; // r11
  const char *v5; // rcx
  const char *v7; // r10
  void (__fastcall *v8)(__int64, __int64, __int64); // rsi
  __int64 v9; // rax
  __int64 result; // rax

  v4 = 0;
  v5 = byte_140075488;
  v7 = byte_140075488;
  v8 = a2;
  if ( a1 )
  {
    v9 = a1[1];
    v4 = (char)a1;
    if ( (v9 & 0x200000000000LL) != 0 )
    {
      v5 = (const char *)a1[76];
      if ( (v9 & 0x400000000000LL) != 0 )
        v7 = (const char *)a1[77];
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qss(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)a2,
      10,
      25,
      (__int64)&WPP_2c64a3eb75823feba16c7995e2df05b8_Traceguids,
      v4,
      (__int64)v5,
      (__int64)v7);
  }
  result = ACPIDeviceInitializePowerRequest((__int64)a1, 0, 0LL, v8, a3, 0, 4, 0x100u);
  if ( (_DWORD)result == -1073741802 )
    return 259LL;
  return result;
}
