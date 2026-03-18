/*
 * XREFs of DpiGetDevicePropertyString @ 0x1403EB254
 * Callers:
 *     DpiMiracastInterfaceChange @ 0x14007EDE0 (DpiMiracastInterfaceChange.c)
 *     DpiSetDriverVersion @ 0x140237A8C (DpiSetDriverVersion.c)
 *     DpiAddDevice @ 0x1402393B0 (DpiAddDevice.c)
 *     DpiFdoInitializeFdo @ 0x140242CBC (DpiFdoInitializeFdo.c)
 *     DpiFdoStartAdapter @ 0x140245688 (DpiFdoStartAdapter.c)
 *     DpiFdoInitializeAdapterUniqueString @ 0x1403E7328 (DpiFdoInitializeAdapterUniqueString.c)
 * Callees:
 *     memset @ 0x1400A2000 (memset.c)
 */

__int64 __fastcall DpiGetDevicePropertyString(
        PDEVICE_OBJECT DeviceObject,
        DEVICE_REGISTRY_PROPERTY DeviceProperty,
        __int64 a3,
        _QWORD *a4,
        _DWORD *a5)
{
  _DWORD *v9; // rsi
  NTSTATUS v10; // eax
  unsigned int v11; // ebx
  void *v12; // rdi
  int v13; // eax
  void *Pool2; // rax
  NTSTATUS v16; // eax
  size_t Size; // [rsp+60h] [rbp+8h] BYREF

  LODWORD(Size) = 0;
  if ( DeviceObject )
  {
    if ( a4 )
    {
      v9 = a5;
      if ( a5 )
      {
        v10 = IoGetDeviceProperty(DeviceObject, DeviceProperty, 0, 0LL, (PULONG)&Size);
        v11 = v10;
        if ( v10 == -1073741789 )
        {
          LODWORD(Size) = Size + 2;
          Pool2 = (void *)ExAllocatePool2(a3, (unsigned int)Size, 1953656900LL);
          v12 = Pool2;
          if ( !Pool2 )
          {
            v11 = -1073741670;
            WdLogSingleEntry1(6LL, -1073741670LL);
            WdLogGlobalForLineNumber = 1289;
            return v11;
          }
          memset(Pool2, 0, (unsigned int)Size);
          v16 = IoGetDeviceProperty(DeviceObject, DeviceProperty, Size, v12, (PULONG)&Size);
          v11 = v16;
          if ( v16 < 0 )
          {
            WdLogSingleEntry1(2LL, v16);
            WdLogGlobalForLineNumber = 1310;
            ExFreePoolWithTag(v12, 0);
            return v11;
          }
        }
        else
        {
          WdLogSingleEntry1(2LL, v10);
          WdLogGlobalForLineNumber = 1262;
          v12 = 0LL;
          if ( (v11 & 0x80000000) != 0 )
            return v11;
        }
        v13 = Size;
        *a4 = v12;
        *v9 = v13;
        return v11;
      }
    }
  }
  return 3221225485LL;
}
