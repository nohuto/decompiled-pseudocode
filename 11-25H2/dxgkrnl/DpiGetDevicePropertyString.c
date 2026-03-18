/*
 * XREFs of DpiGetDevicePropertyString @ 0x1403F11AC
 * Callers:
 *     DpiMiracastInterfaceChange @ 0x14007E760 (DpiMiracastInterfaceChange.c)
 *     DpiSetDriverVersion @ 0x1402310B0 (DpiSetDriverVersion.c)
 *     DpiAddDevice @ 0x1402329D0 (DpiAddDevice.c)
 *     DpiFdoInitializeFdo @ 0x14023C19C (DpiFdoInitializeFdo.c)
 *     DpiFdoStartAdapter @ 0x14023E8A8 (DpiFdoStartAdapter.c)
 *     DpiFdoInitializeAdapterUniqueString @ 0x1403ED95C (DpiFdoInitializeAdapterUniqueString.c)
 * Callees:
 *     memset @ 0x14009FCC0 (memset.c)
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
  __int64 v11; // r9
  unsigned int v12; // ebx
  void *v13; // rdi
  int v14; // eax
  void *Pool2; // rax
  NTSTATUS v17; // eax
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
        v12 = v10;
        if ( v10 == -1073741789 )
        {
          LODWORD(Size) = Size + 2;
          Pool2 = (void *)ExAllocatePool2(a3, (unsigned int)Size, 1953656900LL, v11);
          v13 = Pool2;
          if ( !Pool2 )
          {
            v12 = -1073741670;
            WdLogSingleEntry1(6LL, -1073741670LL);
            WdLogGlobalForLineNumber = 1289;
            return v12;
          }
          memset(Pool2, 0, (unsigned int)Size);
          v17 = IoGetDeviceProperty(DeviceObject, DeviceProperty, Size, v13, (PULONG)&Size);
          v12 = v17;
          if ( v17 < 0 )
          {
            WdLogSingleEntry1(2LL, v17);
            WdLogGlobalForLineNumber = 1310;
            ExFreePoolWithTag(v13, 0);
            return v12;
          }
        }
        else
        {
          WdLogSingleEntry1(2LL, v10);
          WdLogGlobalForLineNumber = 1262;
          v13 = 0LL;
          if ( (v12 & 0x80000000) != 0 )
            return v12;
        }
        v14 = Size;
        *a4 = v13;
        *v9 = v14;
        return v12;
      }
    }
  }
  return 3221225485LL;
}
