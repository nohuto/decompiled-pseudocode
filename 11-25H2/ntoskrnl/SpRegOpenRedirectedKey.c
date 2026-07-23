/*
 * XREFs of SpRegOpenRedirectedKey @ 0x1407ABC94
 * Callers:
 *     ExpOsProductCacheProviderHelper @ 0x1407A9BA8 (ExpOsProductCacheProviderHelper.c)
 *     sub_1407A9EAC @ 0x1407A9EAC (sub_1407A9EAC.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x14069B320 (ZwClose.c)
 *     SpRegOpenKey @ 0x1407ABBF4 (SpRegOpenKey.c)
 *     RtlGetPersistedStateLocation @ 0x1409B3D60 (RtlGetPersistedStateLocation.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SpRegOpenRedirectedKey(__int64 a1, __int64 a2, _QWORD *a3)
{
  WCHAR *TargetPath; // rdi
  NTSTATUS PersistedStateLocation; // eax
  int v6; // ebx
  ULONG BufferLengthIn; // ebx
  UNICODE_STRING *p_DestinationString; // rcx
  HANDLE v9; // rcx
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-10h] BYREF
  HANDLE v12; // [rsp+70h] [rbp+20h] BYREF
  ULONG BufferLengthOut; // [rsp+78h] [rbp+28h] BYREF
  int v14; // [rsp+7Ch] [rbp+2Ch]

  v14 = HIDWORD(a2);
  v12 = 0LL;
  TargetPath = 0LL;
  BufferLengthOut = 0;
  DestinationString = 0LL;
  PersistedStateLocation = RtlGetPersistedStateLocation(
                             off_140FD75F8,
                             L"TargetNtPath",
                             0LL,
                             LocationTypeRegistry,
                             0LL,
                             0,
                             &BufferLengthOut);
  v6 = PersistedStateLocation;
  if ( PersistedStateLocation == -2147483643 )
  {
    BufferLengthIn = BufferLengthOut;
    TargetPath = (WCHAR *)ExAllocatePool2(0x100uLL);
    if ( !TargetPath )
      return (unsigned int)-1073741801;
    v6 = RtlGetPersistedStateLocation(
           off_140FD75F8,
           L"TargetNtPath",
           0LL,
           LocationTypeRegistry,
           TargetPath,
           BufferLengthIn,
           &BufferLengthOut);
    if ( v6 < 0 )
    {
LABEL_15:
      ExFreePoolWithTag(TargetPath, 0x20534C53u);
      return (unsigned int)v6;
    }
    RtlInitUnicodeString(&DestinationString, TargetPath);
    p_DestinationString = &DestinationString;
  }
  else
  {
    if ( PersistedStateLocation != -1073741772 )
    {
      if ( PersistedStateLocation < 0 )
        return (unsigned int)v6;
      goto LABEL_11;
    }
    p_DestinationString = (UNICODE_STRING *)&unk_140FD75E0;
  }
  v6 = SpRegOpenKey(p_DestinationString, &v12);
  if ( v6 < 0 )
  {
    v9 = v12;
    goto LABEL_12;
  }
LABEL_11:
  v9 = 0LL;
  *a3 = v12;
LABEL_12:
  if ( v9 )
    ZwClose(v9);
  if ( TargetPath )
    goto LABEL_15;
  return (unsigned int)v6;
}
