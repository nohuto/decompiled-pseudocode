/*
 * XREFs of RawInputManagerDeviceObjectCreateKernelHandle @ 0x1401E3450
 * Callers:
 *     rimCreateDev @ 0x140053478 (rimCreateDev.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall RawInputManagerDeviceObjectCreateKernelHandle(
        _DWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        void **a5)
{
  NTSTATUS v5; // ebx

  *a5 = (void *)-1LL;
  if ( a1[1] == 2 )
  {
    v5 = ObOpenObjectByPointer(a1, 0x200u, 0LL, 3u, ExRawInputManagerObjectType, 0, a5);
    if ( v5 < 0 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 649);
  }
  else
  {
    return (unsigned int)-1073741788;
  }
  return (unsigned int)v5;
}
