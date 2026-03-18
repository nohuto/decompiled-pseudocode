/*
 * XREFs of ?GetSpriteFillColor@@YAKXZ @ 0x1C003668C
 * Callers:
 *     xxxInitProcessInfo @ 0x1C0036A38 (xxxInitProcessInfo.c)
 * Callees:
 *     ?RtlStringCchCatW@@YAJPEAG_KPEBG@Z @ 0x1C0036928 (-RtlStringCchCatW@@YAJPEAG_KPEBG@Z.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C00369B4 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     __security_check_cookie @ 0x1C00CDBD0 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D6660 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 GetSpriteFillColor(void)
{
  unsigned int v0; // edi
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 CurrentProcess; // rax
  ULONG64 v5; // r8
  int v6; // ecx
  WCHAR *v7; // rdx
  ULONG64 v8; // r8
  int v9; // eax
  const unsigned __int16 *v10; // r8
  const unsigned __int16 *v11; // rcx
  int v12; // eax
  void *KeyHandle; // [rsp+30h] [rbp-2A8h] BYREF
  ULONG ResultLength[2]; // [rsp+38h] [rbp-2A0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-298h] BYREF
  const unsigned __int16 *v17; // [rsp+50h] [rbp-288h]
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-280h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+90h] [rbp-248h] BYREF
  int v20; // [rsp+94h] [rbp-244h]
  int v21; // [rsp+98h] [rbp-240h]
  unsigned int v22; // [rsp+9Ch] [rbp-23Ch]
  WCHAR SourceString[264]; // [rsp+B0h] [rbp-228h] BYREF

  v0 = 0;
  RtlStringCchCopyW(
    SourceString,
    0x104uLL,
    L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Image File Execution Options\\");
  v17 = 0LL;
  CurrentProcess = PsGetCurrentProcess(v2, v1, v3);
  v5 = *(_QWORD *)(PsGetProcessPeb(CurrentProcess) + 32) + 96LL;
  if ( v5 >= MmUserProbeAddress )
    v5 = MmUserProbeAddress;
  v6 = *(_DWORD *)v5;
  LODWORD(KeyHandle) = v6;
  *(_DWORD *)&DestinationString.Length = v6;
  v7 = *(WCHAR **)(v5 + 8);
  DestinationString.Buffer = v7;
  if ( ((unsigned __int8)v7 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v8 = (ULONG64)v7 + (unsigned __int16)v6 + 2;
  if ( v8 <= (unsigned __int64)v7 || v8 >= MmUserProbeAddress )
    ExRaiseAccessViolation();
  if ( (unsigned __int16)v6 > WORD1(KeyHandle) )
  {
    if ( (v6 & 1) == 0 )
      goto LABEL_16;
    goto LABEL_15;
  }
  if ( (v6 & 1) != 0 )
  {
LABEL_15:
    LODWORD(KeyHandle) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 378LL);
LABEL_16:
    ExRaiseAccessViolation();
  }
  v9 = (unsigned __int16)v6;
  v10 = (WCHAR *)((char *)v7 + (unsigned __int16)v6);
  v17 = v10;
  while ( v9 )
  {
    v11 = v10 - 1;
    if ( *(v10 - 1) == 92 )
      break;
    --v10;
    v17 = v11;
    v9 -= 2;
  }
  v12 = RtlStringCchCatW(SourceString, 0x104uLL, v10);
  ResultLength[1] = v12;
  if ( v12 >= 0 )
  {
    DestinationString = 0LL;
    *(&ObjectAttributes.Length + 1) = 0;
    *(&ObjectAttributes.Attributes + 1) = 0;
    KeyHandle = 0LL;
    RtlInitUnicodeString(&DestinationString, SourceString);
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    ObjectAttributes.ObjectName = &DestinationString;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
    {
      ResultLength[0] = 0;
      RtlInitUnicodeString(&DestinationString, L"SpriteFillColor");
      if ( ZwQueryValueKey(
             KeyHandle,
             &DestinationString,
             KeyValuePartialInformation,
             KeyValueInformation,
             0x14u,
             ResultLength) >= 0
        && v20 == 4
        && v21 == 4 )
      {
        v0 = v22;
      }
      ZwClose(KeyHandle);
    }
  }
  return v0;
}
