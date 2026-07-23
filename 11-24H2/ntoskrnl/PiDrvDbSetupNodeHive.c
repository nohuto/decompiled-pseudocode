/*
 * XREFs of PiDrvDbSetupNodeHive @ 0x140737564
 * Callers:
 *     PiDrvDbSetupNodes @ 0x1407379EC (PiDrvDbSetupNodes.c)
 *     PiDrvDbLoadNodeWorkerCallback @ 0x140A73830 (PiDrvDbLoadNodeWorkerCallback.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x140403FC0 (RtlAppendUnicodeToString.c)
 *     RtlAppendUnicodeStringToString @ 0x140404080 (RtlAppendUnicodeStringToString.c)
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     CmIsStateSeparationEnabled @ 0x1404941EC (CmIsStateSeparationEnabled.c)
 *     _wcsicmp @ 0x1404FBC70 (_wcsicmp.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ZwOpenKey @ 0x1406A75F0 (ZwOpenKey.c)
 *     PiDrvDbOverlayNodeHive @ 0x140735670 (PiDrvDbOverlayNodeHive.c)
 *     PiDrvDbResolveNodeFilePaths @ 0x140737084 (PiDrvDbResolveNodeFilePaths.c)
 *     RtlSuffixUnicodeString @ 0x14077D020 (RtlSuffixUnicodeString.c)
 *     _PnpSetObjectProperty @ 0x1408B6258 (_PnpSetObjectProperty.c)
 *     RtlFreeAnsiString @ 0x1408B69C0 (RtlFreeAnsiString.c)
 *     PiDrvDbLoadHive @ 0x140A739D4 (PiDrvDbLoadHive.c)
 *     PiDrvDbUnloadHive @ 0x140A73AB0 (PiDrvDbUnloadHive.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall PiDrvDbSetupNodeHive(__int64 a1, const WCHAR *a2)
{
  char v3; // r13
  int appended; // ebx
  _DWORD *v6; // rsi
  NTSTATUS v7; // eax
  unsigned __int16 Length; // r15
  unsigned __int16 i; // cx
  __int64 v10; // rbx
  unsigned __int16 v11; // dx
  int v12; // eax
  UNICODE_STRING Destination; // [rsp+58h] [rbp-39h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+68h] [rbp-29h] BYREF
  UNICODE_STRING String1; // [rsp+78h] [rbp-19h] BYREF
  UNICODE_STRING DestinationString; // [rsp+88h] [rbp-9h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+98h] [rbp+7h] BYREF
  HANDLE KeyHandle; // [rsp+108h] [rbp+77h] BYREF

  memset(&ObjectAttributes, 0, 44);
  KeyHandle = 0LL;
  v3 = 0;
  DestinationString = 0LL;
  UnicodeString = 0LL;
  Destination = 0LL;
  String1 = 0LL;
  RtlInitUnicodeString(&DestinationString, a2);
  RtlInitUnicodeString(&UnicodeString, 0LL);
  RtlInitUnicodeString(&Destination, 0LL);
  if ( !wcsicmp(a2, L"SYSTEM") )
  {
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)(a1 + 32);
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    appended = ZwOpenKey(&KeyHandle, 0xF003Fu, &ObjectAttributes);
    if ( appended < 0 )
      goto LABEL_41;
    v6 = (_DWORD *)(a1 + 64);
LABEL_34:
    if ( (*(_DWORD *)(a1 + 492) & 2) != 0 && !wcsicmp(a2, L"SOFTWARE") )
      PnpSetObjectProperty(
        PiPnpRtlCtx,
        *(_QWORD *)(a1 + 24),
        7,
        0LL,
        (__int64)DEVPKEY_DriverDatabase_SoftwareRegistryPath,
        18,
        (__int64)Destination.Buffer,
        Destination.Length + 2,
        0);
    appended = PiDrvDbResolveNodeFilePaths(a1, (int)KeyHandle);
    if ( appended >= 0 && (*v6 & 8) != 0 )
      appended = PiDrvDbOverlayNodeHive(a1, a2, (int)KeyHandle);
    goto LABEL_41;
  }
  v6 = (_DWORD *)(a1 + 64);
  if ( (*(_DWORD *)(a1 + 64) & 8) == 0 )
  {
    Destination.Length = 0;
    Destination.MaximumLength = DestinationString.Length + 38;
    Destination.Buffer = (wchar_t *)ExAllocatePool2(
                                      0x100uLL,
                                      (unsigned __int16)(DestinationString.Length + 38),
                                      0x67727453u);
    if ( !Destination.Buffer )
    {
LABEL_6:
      appended = -1073741670;
      goto LABEL_41;
    }
    appended = RtlAppendUnicodeToString(&Destination, L"\\REGISTRY\\MACHINE\\");
    if ( appended < 0 )
      goto LABEL_41;
    appended = RtlAppendUnicodeStringToString(&Destination, &DestinationString);
    if ( appended < 0 )
      goto LABEL_41;
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &Destination;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v7 = ZwOpenKey(&KeyHandle, 0xF003Fu, &ObjectAttributes);
    appended = v7;
    if ( v7 != -1073741772 )
    {
      if ( v7 < 0 )
        goto LABEL_41;
      goto LABEL_34;
    }
LABEL_40:
    appended = 0;
    goto LABEL_41;
  }
  if ( !CmIsStateSeparationEnabled() )
    goto LABEL_40;
  UnicodeString.Length = 0;
  Length = DestinationString.Length;
  UnicodeString.MaximumLength = *(_WORD *)(a1 + 50) + DestinationString.Length;
  UnicodeString.Buffer = (wchar_t *)ExAllocatePool2(0x100uLL, UnicodeString.MaximumLength, 0x67727453u);
  if ( !UnicodeString.Buffer )
    goto LABEL_6;
  appended = RtlAppendUnicodeStringToString(&UnicodeString, (PCUNICODE_STRING)(a1 + 48));
  if ( appended >= 0 )
  {
    for ( i = UnicodeString.Length; i > 2u; UnicodeString.Length = i )
    {
      if ( UnicodeString.Buffer[((unsigned __int64)i >> 1) - 1] == 92 )
        break;
      i -= 2;
    }
    appended = RtlAppendUnicodeStringToString(&UnicodeString, &DestinationString);
    if ( appended >= 0 )
    {
      Destination.MaximumLength = *(_WORD *)(a1 + 34) + Length;
      Destination.Length = 0;
      Destination.Buffer = (wchar_t *)ExAllocatePool2(0x100uLL, Destination.MaximumLength, 0x67727453u);
      if ( !Destination.Buffer )
        goto LABEL_6;
      appended = RtlAppendUnicodeStringToString(&Destination, (PCUNICODE_STRING)(a1 + 32));
      if ( appended >= 0 )
      {
        RtlInitUnicodeString(&String1, L"DRIVERS");
        v10 = String1.Length;
        if ( Destination.Length > (unsigned __int64)String1.Length + 2
          && RtlSuffixUnicodeString(&String1, &Destination, 1u)
          && (v11 = Destination.Length, Destination.Buffer[(((unsigned __int64)Destination.Length - v10) >> 1) - 1] != 92)
          || (RtlInitUnicodeString(&String1, L"SYSTEM"),
              v10 = String1.Length,
              Destination.Length > (unsigned __int64)String1.Length + 2)
          && RtlSuffixUnicodeString(&String1, &Destination, 1u)
          && (v11 = Destination.Length, Destination.Buffer[(((unsigned __int64)Destination.Length - v10) >> 1) - 1] != 92) )
        {
          Destination.Length = v11 - v10;
        }
        appended = RtlAppendUnicodeStringToString(&Destination, &DestinationString);
        if ( appended >= 0 )
        {
          v12 = PiDrvDbLoadHive(&Destination, &UnicodeString, 0x2000LL, &KeyHandle);
          appended = v12;
          if ( v12 != -1073741772 )
          {
            if ( v12 < 0 )
              goto LABEL_41;
            if ( (*(_DWORD *)(a1 + 492) & 2) == 0 || wcsicmp(a2, L"SOFTWARE") )
              v3 = 1;
            goto LABEL_34;
          }
          goto LABEL_40;
        }
      }
    }
  }
LABEL_41:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( v3 )
    PiDrvDbUnloadHive(&Destination, 0LL);
  RtlFreeAnsiString(&UnicodeString);
  RtlFreeAnsiString(&Destination);
  return (unsigned int)appended;
}
