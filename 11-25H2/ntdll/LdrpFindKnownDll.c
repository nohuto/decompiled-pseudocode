/*
 * XREFs of LdrpFindKnownDll @ 0x18006D200
 * Callers:
 *     LdrpLoadKnownDll @ 0x18006CF10 (LdrpLoadKnownDll.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x18006C570 (RtlAppendUnicodeToString.c)
 *     RtlInitUnicodeStringEx @ 0x18006CCF0 (RtlInitUnicodeStringEx.c)
 *     RtlAppendUnicodeStringToString @ 0x1800709D0 (RtlAppendUnicodeStringToString.c)
 *     LdrpAllocateUnicodeString @ 0x180071000 (LdrpAllocateUnicodeString.c)
 *     LdrpLogInternal @ 0x18007B390 (LdrpLogInternal.c)
 *     NtClose @ 0x180163400 (NtClose.c)
 *     NtOpenSection @ 0x180163900 (NtOpenSection.c)
 */

__int64 __fastcall LdrpFindKnownDll(
        UNICODE_STRING *Source,
        PUNICODE_STRING DestinationString,
        PUNICODE_STRING Destination,
        PHANDLE SectionHandle)
{
  NTSTATUS v8; // eax
  int UnicodeString; // ebx
  const WCHAR *v11; // rbx
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-38h] BYREF

  LODWORD(ObjectAttributes.SecurityQualityOfService) = 0;
  LdrpLogInternal(
    "minkernel\\ldr\\ldrmap.c",
    1805LL,
    "LdrpFindKnownDll",
    3LL,
    "DLL name: %wZ\n",
    Source,
    0LL,
    0LL,
    0LL,
    0LL,
    0LL,
    ObjectAttributes.SecurityQualityOfService);
  LdrpLogInternal("minkernel\\ldr\\ldrmap.c", 1806LL, "LdrpFindKnownDll", 5LL, "%wZ\n", Source);
  if ( !LdrpKnownDllDirectoryHandle )
    goto LABEL_4;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = LdrpKnownDllDirectoryHandle;
  ObjectAttributes.Attributes = 64;
  ObjectAttributes.ObjectName = Source;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v8 = NtOpenSection(SectionHandle, 0xDu, &ObjectAttributes);
  UnicodeString = v8;
  if ( v8 >= 0 )
  {
    UnicodeString = LdrpAllocateUnicodeString(Destination, Source->Length + (unsigned int)LdrpKnownDllPath.Length + 2);
    if ( UnicodeString < 0 )
    {
      NtClose(*SectionHandle);
    }
    else
    {
      RtlAppendUnicodeStringToString(Destination, &LdrpKnownDllPath);
      RtlAppendUnicodeToString(Destination, L"\\");
      v11 = (wchar_t *)((char *)Destination->Buffer + Destination->Length);
      RtlAppendUnicodeStringToString(Destination, Source);
      RtlInitUnicodeStringEx(DestinationString, v11);
      UnicodeString = 0;
    }
  }
  else if ( v8 == -1073741772 )
  {
LABEL_4:
    UnicodeString = -1073741515;
  }
  LdrpLogInternal("minkernel\\ldr\\ldrmap.c", 1876LL, "LdrpFindKnownDll", 4LL, "Status: 0x%08lx\n", UnicodeString);
  LdrpLogInternal("minkernel\\ldr\\ldrmap.c", 1877LL, "LdrpFindKnownDll", 6LL, "%x\n", UnicodeString);
  return (unsigned int)UnicodeString;
}
