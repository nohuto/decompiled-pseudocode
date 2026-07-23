/*
 * XREFs of IopOpenSystemVariableDevice @ 0x14094FBB0
 * Callers:
 *     IoQueryEnvironmentVariableInfoEx @ 0x140716468 (IoQueryEnvironmentVariableInfoEx.c)
 *     IoSetEnvironmentVariableEx @ 0x14094EF80 (IoSetEnvironmentVariableEx.c)
 *     IoEnumerateEnvironmentVariablesEx @ 0x14094F088 (IoEnumerateEnvironmentVariablesEx.c)
 *     IoGetEnvironmentVariableEx @ 0x14094FA00 (IoGetEnvironmentVariableEx.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     IoGetDeviceInterfaces @ 0x14094F7D0 (IoGetDeviceInterfaces.c)
 *     IoGetDeviceObjectPointer @ 0x1409504C0 (IoGetDeviceObjectPointer.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopOpenSystemVariableDevice(
        PFILE_OBJECT *FileObject,
        PDEVICE_OBJECT *DeviceObject,
        __int64 (__fastcall ***a3)(int, int, int, int, __int64, __int64, __int64))
{
  PZZWSTR v3; // rbx
  NTSTATUS DeviceInterfaces; // eax
  NTSTATUS v8; // eax
  NTSTATUS DeviceObjectPointer; // edi
  __int64 (__fastcall **v10)(int, int, int, int, __int64, __int64, __int64); // rax
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-28h] BYREF
  PZZWSTR SymbolicLinkList; // [rsp+68h] [rbp+20h] BYREF

  v3 = 0LL;
  SymbolicLinkList = 0LL;
  DestinationString = 0LL;
  if ( (IopSysEnvOverrideFlags & 1) != 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"\\Device\\WindowsTrustedRT\\{699AA2F1-A42E-40DF-BABE-3AAAD2BB6A47}");
    DeviceObjectPointer = IoGetDeviceObjectPointer(&DestinationString, 0x10000000u, FileObject, DeviceObject);
    if ( DeviceObjectPointer >= 0 )
    {
      *a3 = (__int64 (__fastcall **)(int, int, int, int, __int64, __int64, __int64))&IopSysEnvFunctionTableTrEE;
      return (unsigned int)DeviceObjectPointer;
    }
LABEL_4:
    RtlInitUnicodeString(&DestinationString, L"\\Device\\SysEnv");
    v8 = IoGetDeviceObjectPointer(&DestinationString, 0x10000000u, FileObject, DeviceObject);
    DeviceObjectPointer = v8;
    if ( v8 >= 0 )
    {
      v10 = (__int64 (__fastcall **)(int, int, int, int, __int64, __int64, __int64))&IopSysEnvFunctionTableSysEnv;
      goto LABEL_7;
    }
    if ( (unsigned int)(v8 + 1073741773) <= 1 || v8 == -1073741766 )
    {
      *FileObject = 0LL;
      v10 = &IopSysEnvFunctionTableHal;
      *DeviceObject = 0LL;
      DeviceObjectPointer = 0;
LABEL_7:
      *a3 = v10;
      goto LABEL_8;
    }
    goto LABEL_8;
  }
  DeviceInterfaces = IoGetDeviceInterfaces(&GUID_EFI_VARIABLE_SERVICE, 0LL, 0, &SymbolicLinkList);
  v3 = SymbolicLinkList;
  if ( DeviceInterfaces < 0 || !*SymbolicLinkList )
    goto LABEL_4;
  RtlInitUnicodeString(&DestinationString, SymbolicLinkList);
  DeviceObjectPointer = IoGetDeviceObjectPointer(&DestinationString, 0x10000000u, FileObject, DeviceObject);
  if ( DeviceObjectPointer >= 0 )
  {
    v10 = (__int64 (__fastcall **)(int, int, int, int, __int64, __int64, __int64))&IopSysEnvFunctionTableTrEE;
    goto LABEL_7;
  }
LABEL_8:
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  return (unsigned int)DeviceObjectPointer;
}
