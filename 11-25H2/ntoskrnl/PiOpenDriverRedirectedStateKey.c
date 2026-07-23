/*
 * XREFs of PiOpenDriverRedirectedStateKey @ 0x14088F1D8
 * Callers:
 *     PipHardwareConfigActivateService @ 0x14088F0D0 (PipHardwareConfigActivateService.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     RtlUnicodeStringPrintfEx @ 0x14049FEC0 (RtlUnicodeStringPrintfEx.c)
 *     ZwClose @ 0x14069B320 (ZwClose.c)
 *     ZwOpenKey @ 0x14069B380 (ZwOpenKey.c)
 *     IopAllocateUnicodeString @ 0x14096AEDC (IopAllocateUnicodeString.c)
 *     PiGetStateRootPath @ 0x1409B2F90 (PiGetStateRootPath.c)
 *     ExFreePool @ 0x140B62CB0 (ExFreePool.c)
 */

__int64 __fastcall PiOpenDriverRedirectedStateKey(unsigned __int16 *a1, __int64 a2, _QWORD *a3)
{
  NTSTATUS StateRootPath; // ebx
  unsigned int v6; // ecx
  unsigned int v7; // edx
  NTSTATUS v8; // eax
  HANDLE v9; // rax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-50h] BYREF
  UNICODE_STRING v12; // [rsp+40h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  HANDLE KeyHandle; // [rsp+A0h] [rbp+20h] BYREF

  KeyHandle = 0LL;
  memset(&ObjectAttributes, 0, 44);
  v12 = 0LL;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  RtlInitUnicodeString(&v12, 0LL);
  if ( a1 && *((_QWORD *)a1 + 1) && *a1 >= 2u && a3 )
  {
    StateRootPath = PiGetStateRootPath(L"DriverStatePath", 0LL, LocationTypeRegistry, &DestinationString);
    if ( StateRootPath >= 0 )
    {
      v6 = *a1 + 2;
      v7 = v6 + DestinationString.Length;
      if ( v7 < v6 )
      {
        StateRootPath = -1073741675;
      }
      else if ( v7 <= 0xFFFE )
      {
        StateRootPath = IopAllocateUnicodeString(&v12);
        if ( StateRootPath >= 0 )
        {
          StateRootPath = RtlUnicodeStringPrintfEx(&v12, 0LL, 0x800u, L"%wZ\\%wZ", &DestinationString, a1);
          if ( StateRootPath >= 0 )
          {
            ObjectAttributes.RootDirectory = 0LL;
            ObjectAttributes.ObjectName = &v12;
            ObjectAttributes.Length = 48;
            ObjectAttributes.Attributes = 576;
            *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
            v8 = ZwOpenKey(&KeyHandle, 0x30006u, &ObjectAttributes);
            StateRootPath = v8;
            if ( v8 == -1073741772 )
            {
              StateRootPath = -1073741275;
            }
            else if ( v8 >= 0 )
            {
              v9 = KeyHandle;
              KeyHandle = 0LL;
              *a3 = v9;
            }
          }
        }
      }
      else
      {
        StateRootPath = -2147483643;
      }
    }
  }
  else
  {
    StateRootPath = -1073741811;
  }
  if ( DestinationString.Buffer )
  {
    ExFreePool(DestinationString.Buffer);
    DestinationString = 0LL;
  }
  if ( v12.Buffer )
  {
    ExFreePool(v12.Buffer);
    v12 = 0LL;
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)StateRootPath;
}
