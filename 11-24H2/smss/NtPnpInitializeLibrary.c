/*
 * XREFs of NtPnpInitializeLibrary @ 0x14001EB38
 * Callers:
 *     SmpRunSecureKernelTrustlets @ 0x140017E00 (SmpRunSecureKernelTrustlets.c)
 * Callees:
 *     <none>
 */

NTSTATUS NtPnpInitializeLibrary()
{
  struct _UNICODE_STRING DestinationString; // [rsp+60h] [rbp+7h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+70h] [rbp+17h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp+27h] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  DestinationString = 0LL;
  IoStatusBlock = 0LL;
  if ( NtPnpDeviceApiDriverHandle )
    return -1073740528;
  RtlInitUnicodeString(&DestinationString, L"\\Device\\DeviceApi\\CMApi");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 0;
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  return NtCreateFile(
           &NtPnpDeviceApiDriverHandle,
           0x80000000,
           &ObjectAttributes,
           &IoStatusBlock,
           0LL,
           0,
           0,
           1u,
           0,
           0LL,
           0);
}
