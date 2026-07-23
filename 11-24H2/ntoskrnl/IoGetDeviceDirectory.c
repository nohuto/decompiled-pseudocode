/*
 * XREFs of IoGetDeviceDirectory @ 0x14071CA80
 * Callers:
 *     DifIoGetDeviceDirectoryWrapper @ 0x140626E30 (DifIoGetDeviceDirectoryWrapper.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     RtlInitUnicodeStringEx @ 0x14044FE60 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     PiBuildAndOpenDeviceDirectoryPath @ 0x14071CE34 (PiBuildAndOpenDeviceDirectoryPath.c)
 *     ExUuidCreate @ 0x14085C0B0 (ExUuidCreate.c)
 *     _PnpSetObjectProperty @ 0x1408B6258 (_PnpSetObjectProperty.c)
 *     RtlFreeAnsiString @ 0x1408B69C0 (RtlFreeAnsiString.c)
 *     PnpGetObjectProperty @ 0x1408CA950 (PnpGetObjectProperty.c)
 *     RtlStringFromGUIDEx @ 0x1409A3470 (RtlStringFromGUIDEx.c)
 *     PiGetStateRootPath @ 0x1409B55E8 (PiGetStateRootPath.c)
 *     PnpConcatenateUnicodeStrings @ 0x1409BB878 (PnpConcatenateUnicodeStrings.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IoGetDeviceDirectory(__int64 a1, int a2, int a3, __int64 a4, _QWORD *a5)
{
  void *v7; // rsi
  WCHAR *v8; // r15
  __int64 v11; // r14
  NTSTATUS StateRootPath; // ebx
  int ObjectProperty; // eax
  __int64 v14; // r12
  unsigned __int64 v15; // rcx
  unsigned int j; // edx
  __int64 v17; // rax
  int v18; // r9d
  int v19; // eax
  wchar_t *Buffer; // rdi
  unsigned int i; // ecx
  __int64 v22; // rax
  int v23; // eax
  int v24; // r9d
  __int64 v26; // [rsp+68h] [rbp-41h] BYREF
  void *v27; // [rsp+70h] [rbp-39h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+78h] [rbp-31h] BYREF
  UNICODE_STRING DestinationString; // [rsp+88h] [rbp-21h] BYREF
  PCWSTR SourceString; // [rsp+98h] [rbp-11h] BYREF
  UNICODE_STRING GuidString; // [rsp+A0h] [rbp-9h] BYREF
  UNICODE_STRING v32; // [rsp+B0h] [rbp+7h] BYREF
  UUID Uuid; // [rsp+C0h] [rbp+17h] BYREF

  v26 = 0LL;
  v27 = 0LL;
  SourceString = 0LL;
  DestinationString = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  GuidString = 0LL;
  Uuid = 0LL;
  UnicodeString = 0LL;
  v32 = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  RtlInitUnicodeString(&GuidString, 0LL);
  RtlInitUnicodeString(&UnicodeString, 0LL);
  RtlInitUnicodeString(&v32, 0LL);
  if ( !a1
    || a3
    || a4
    || !a5
    || (v11 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 40LL)) == 0
    || !*(_WORD *)(v11 + 40)
    || !*(_QWORD *)(v11 + 48)
    || a2 )
  {
LABEL_40:
    StateRootPath = -1073741811;
    goto LABEL_41;
  }
  StateRootPath = PiGetStateRootPath(
                    L"DriverState",
                    L"\\SystemRoot\\System32\\DriverState",
                    LocationTypeFileSystem,
                    &DestinationString);
  if ( StateRootPath < 0 )
    goto LABEL_41;
  ObjectProperty = PnpGetObjectProperty(
                     0x6F697050u,
                     0LL,
                     0LL,
                     (__int64)&DEVPKEY_Device_StateDirectoryId,
                     (__int64)&v26,
                     (__int64)&SourceString,
                     (__int64)&v26 + 4,
                     0);
  v8 = (WCHAR *)SourceString;
  v14 = -1LL;
  StateRootPath = ObjectProperty;
  if ( ObjectProperty < 0 )
  {
    if ( ObjectProperty != -1073741275 )
      goto LABEL_41;
LABEL_23:
    StateRootPath = PnpConcatenateUnicodeStrings(&UnicodeString, (PCUNICODE_STRING)(v11 + 40));
    if ( StateRootPath < 0 )
      goto LABEL_41;
    Buffer = UnicodeString.Buffer;
    for ( i = 0; i < UnicodeString.Length >> 1; ++i )
    {
      v22 = Buffer[i];
      if ( (unsigned int)v22 > 0x7F )
        goto LABEL_40;
      if ( (*((_BYTE *)qword_140013670 + v22) & 1) == 0 )
      {
        Buffer[i] = 35;
        Buffer = UnicodeString.Buffer;
      }
    }
    v23 = PiBuildAndOpenDeviceDirectoryPath(
            (unsigned int)&DestinationString,
            (unsigned int)&UnicodeString,
            (unsigned int)L"Data",
            0,
            (__int64)&v27);
    StateRootPath = v23;
    if ( v23 == -1073741766 )
    {
      StateRootPath = ExUuidCreate(&Uuid);
      if ( StateRootPath < 0 )
        goto LABEL_39;
      StateRootPath = RtlStringFromGUIDEx(&Uuid, &GuidString, 1u);
      if ( StateRootPath < 0 )
        goto LABEL_39;
      Buffer = GuidString.Buffer;
      LOBYTE(v24) = 1;
      v23 = PiBuildAndOpenDeviceDirectoryPath(
              (unsigned int)&DestinationString,
              (unsigned int)&GuidString,
              (unsigned int)L"Data",
              v24,
              (__int64)&v27);
      StateRootPath = v23;
    }
    if ( v23 >= 0 )
    {
      do
        ++v14;
      while ( Buffer[v14] );
      v19 = PnpSetObjectProperty(
              PiPnpRtlCtx,
              *(_QWORD *)(v11 + 48),
              1,
              0LL,
              (__int64)&DEVPKEY_Device_StateDirectoryId,
              18,
              (__int64)Buffer,
              2 * (int)v14 + 2,
              0);
LABEL_37:
      StateRootPath = v19;
      if ( v19 >= 0 )
      {
        *a5 = v27;
        goto LABEL_41;
      }
    }
LABEL_39:
    v7 = v27;
    goto LABEL_41;
  }
  if ( (_DWORD)v26 != 18 || HIDWORD(v26) < 2 )
    goto LABEL_23;
  v15 = -1LL;
  do
    ++v15;
  while ( SourceString[v15] );
  for ( j = 0; j < v15; ++j )
  {
    v17 = SourceString[j];
    if ( (unsigned int)v17 > 0x7F || (*((_BYTE *)qword_140013670 + v17) & 1) == 0 )
      goto LABEL_23;
  }
  StateRootPath = RtlInitUnicodeStringEx(&v32, SourceString);
  if ( StateRootPath >= 0 )
  {
    LOBYTE(v18) = 1;
    v19 = PiBuildAndOpenDeviceDirectoryPath(
            (unsigned int)&DestinationString,
            (unsigned int)&v32,
            (unsigned int)L"Data",
            v18,
            (__int64)&v27);
    goto LABEL_37;
  }
LABEL_41:
  RtlFreeAnsiString(&DestinationString);
  RtlFreeAnsiString(&GuidString);
  RtlFreeAnsiString(&UnicodeString);
  if ( v8 )
    ExFreePoolWithTag(v8, 0x6F697050u);
  if ( v7 )
    ZwClose(v7);
  return (unsigned int)StateRootPath;
}
