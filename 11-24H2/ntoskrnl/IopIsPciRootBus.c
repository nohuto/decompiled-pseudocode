/*
 * XREFs of IopIsPciRootBus @ 0x140725AE0
 * Callers:
 *     IopMemQueryConflict @ 0x140725D00 (IopMemQueryConflict.c)
 * Callees:
 *     _wcsicmp @ 0x1404FE3B0 (_wcsicmp.c)
 *     IoGetDeviceProperty @ 0x1408BCAC0 (IoGetDeviceProperty.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

NTSTATUS __fastcall IopIsPciRootBus(PDEVICE_OBJECT DeviceObject, _BYTE *a2)
{
  NTSTATUS result; // eax
  void *Pool2; // rdi
  NTSTATUS DeviceProperty; // ebx
  const wchar_t *i; // rbx
  ULONG BufferLength; // [rsp+48h] [rbp+10h] BYREF

  BufferLength = 0;
  *a2 = 0;
  result = IoGetDeviceProperty(DeviceObject, DevicePropertyHardwareID, 0, 0LL, &BufferLength);
  if ( result == -1073741789 )
  {
    Pool2 = (void *)ExAllocatePool2(0x100uLL);
    if ( Pool2 )
    {
      DeviceProperty = IoGetDeviceProperty(DeviceObject, DevicePropertyHardwareID, BufferLength, Pool2, &BufferLength);
      if ( DeviceProperty < 0 )
      {
        ExFreePoolWithTag(Pool2, 0);
        return DeviceProperty;
      }
      else
      {
        for ( i = (const wchar_t *)Pool2; *i; ++i )
        {
          if ( !wcsicmp(i, L"ACPI\\PNP0A03") || !wcsicmp(i, L"ACPI\\PNP0A08") )
          {
            *a2 = 1;
            break;
          }
          while ( *i )
            ++i;
        }
        ExFreePoolWithTag(Pool2, 0);
        return 0;
      }
    }
    else
    {
      return -1073741670;
    }
  }
  return result;
}
