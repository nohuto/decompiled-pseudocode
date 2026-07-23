/*
 * XREFs of FsRtlOpenFileSystemRegistryKeyFromFsGuid @ 0x14070A290
 * Callers:
 *     <none>
 * Callees:
 *     RtlUnicodeStringPrintf @ 0x14047B368 (RtlUnicodeStringPrintf.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ZwOpenKey @ 0x1406A75F0 (ZwOpenKey.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     RtlpQueryRegistryValues @ 0x1409B4DD0 (RtlpQueryRegistryValues.c)
 */

__int64 __fastcall FsRtlOpenFileSystemRegistryKeyFromFsGuid(
        unsigned int *a1,
        _QWORD *a2,
        ACCESS_MASK a3,
        __int64 a4,
        HANDLE *a5)
{
  bool v7; // zf
  __int64 v8; // rax
  NTSTATUS RegistryValues; // ebx
  __int64 v10; // rax
  HANDLE v11; // rcx
  ULONG v13; // [rsp+20h] [rbp-E0h]
  HANDLE KeyHandle; // [rsp+70h] [rbp-90h] BYREF
  ACCESS_MASK DesiredAccess; // [rsp+78h] [rbp-88h]
  UNICODE_STRING DestinationString; // [rsp+80h] [rbp-80h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+90h] [rbp-70h] BYREF
  int v18[4]; // [rsp+C0h] [rbp-40h] BYREF
  const wchar_t *v19; // [rsp+D0h] [rbp-30h]
  __int128 *v20; // [rsp+D8h] [rbp-28h]
  int v21; // [rsp+E0h] [rbp-20h]
  __int128 v22; // [rsp+130h] [rbp+30h] BYREF
  char v23; // [rsp+140h] [rbp+40h] BYREF

  DesiredAccess = a3;
  KeyHandle = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  *(_QWORD *)&DestinationString.Length = 14155776LL;
  DestinationString.Buffer = (wchar_t *)&v23;
  memset_0(v18, 0, 0x70uLL);
  *a5 = 0LL;
  v8 = *(_QWORD *)a1 - *(_QWORD *)&CPER_EMPTY_GUID.Data1;
  v7 = *(_QWORD *)a1 == *(_QWORD *)&CPER_EMPTY_GUID.Data1;
  v22 = 0LL;
  if ( v7 )
    v8 = *((_QWORD *)a1 + 1) - *(_QWORD *)CPER_EMPTY_GUID.Data4;
  if ( !v8 )
    return (unsigned int)-1073740602;
  v13 = *((unsigned __int16 *)a1 + 3);
  RtlUnicodeStringPrintf(
    &DestinationString,
    L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\FileSystemVolumes\\{%08x-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}",
    *a1,
    *((unsigned __int16 *)a1 + 2));
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  ObjectAttributes.Attributes = 1600;
  RegistryValues = ZwOpenKey(&KeyHandle, DesiredAccess, &ObjectAttributes);
  if ( RegistryValues < 0 )
    goto LABEL_11;
  v19 = L"FsGuid";
  v18[2] = 308;
  v20 = &v22;
  v21 = 50331648;
  LODWORD(v22) = -16;
  RegistryValues = RtlpQueryRegistryValues(0x40000000, (int)KeyHandle, (int)v18, 0, v13, 1);
  if ( RegistryValues < 0 )
    goto LABEL_11;
  v10 = *a2 - v22;
  if ( *a2 == (_QWORD)v22 )
    v10 = a2[1] - *((_QWORD *)&v22 + 1);
  if ( v10 )
  {
    RegistryValues = -1073740578;
LABEL_11:
    v11 = KeyHandle;
    goto LABEL_12;
  }
  v11 = 0LL;
  *a5 = KeyHandle;
  KeyHandle = 0LL;
LABEL_12:
  if ( v11 )
    ZwClose(v11);
  return (unsigned int)RegistryValues;
}
