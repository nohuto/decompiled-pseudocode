/*
 * XREFs of LdrGetKnownDllSectionHandle @ 0x180105090
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x1800044C0 (RtlInitUnicodeStringEx.c)
 *     LdrpLogInternal @ 0x180040780 (LdrpLogInternal.c)
 *     NtOpenSection @ 0x180160730 (NtOpenSection.c)
 */

NTSTATUS __cdecl LdrGetKnownDllSectionHandle(PCWSTR DllName, BOOLEAN KnownDlls32, PHANDLE Section)
{
  HANDLE v6; // rdi
  int inited; // ebx
  _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-40h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF

  LODWORD(ObjectAttributes.SecurityQualityOfService) = 0;
  LdrpLogInternal(
    "minkernel\\ldr\\ldrapi.c",
    5578,
    (__int64)"LdrGetKnownDllSectionHandle",
    3,
    "DLL name: %ws\n",
    DllName,
    0LL,
    0LL,
    0LL,
    0LL,
    0LL,
    0LL,
    0LL,
    ObjectAttributes.SecurityQualityOfService);
  LdrpLogInternal("minkernel\\ldr\\ldrapi.c", 5579, (__int64)"LdrGetKnownDllSectionHandle", 5, "%ws\n", DllName);
  if ( KnownDlls32 )
    return -1073741811;
  v6 = LdrpKnownDllDirectoryHandle;
  if ( LdrpKnownDllDirectoryHandle )
  {
    inited = RtlInitUnicodeStringEx(&DestinationString, DllName);
    if ( inited >= 0 )
    {
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.RootDirectory = v6;
      ObjectAttributes.Attributes = 64;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      inited = NtOpenSection(Section, 0xDu, &ObjectAttributes);
    }
  }
  else
  {
    inited = -1073741816;
  }
  LdrpLogInternal(
    "minkernel\\ldr\\ldrapi.c",
    5608,
    (__int64)"LdrGetKnownDllSectionHandle",
    4,
    "Status: 0x%08lx\n",
    inited);
  LdrpLogInternal("minkernel\\ldr\\ldrapi.c", 5609, (__int64)"LdrGetKnownDllSectionHandle", 6, "%x\n", inited);
  return inited;
}
