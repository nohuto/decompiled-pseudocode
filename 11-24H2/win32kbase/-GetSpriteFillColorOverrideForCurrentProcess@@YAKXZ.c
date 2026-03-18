/*
 * XREFs of ?GetSpriteFillColorOverrideForCurrentProcess@@YAKXZ @ 0x14015CD90
 * Callers:
 *     xxxInitProcessInfo @ 0x140161084 (xxxInitProcessInfo.c)
 * Callees:
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1400A0750 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?RtlStringCchCatW@@YAJPEAG_KPEBG@Z @ 0x1400EEC98 (-RtlStringCchCatW@@YAJPEAG_KPEBG@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 */

__int64 GetSpriteFillColorOverrideForCurrentProcess(void)
{
  unsigned int v0; // edi
  char v1; // si
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 CurrentProcess; // rax
  ULONG64 v7; // rdx
  int v8; // ecx
  WCHAR *v9; // r9
  ULONG64 v10; // rdx
  int v11; // eax
  char *v12; // r8
  char *v13; // rcx
  int v14; // eax
  void *KeyHandle; // [rsp+38h] [rbp-2A0h] BYREF
  ULONG ResultLength[2]; // [rsp+40h] [rbp-298h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-290h] BYREF
  char *v19; // [rsp+58h] [rbp-280h]
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-278h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+98h] [rbp-240h] BYREF
  int v22; // [rsp+9Ch] [rbp-23Ch]
  int v23; // [rsp+A0h] [rbp-238h]
  unsigned int v24; // [rsp+A4h] [rbp-234h]
  WCHAR SourceString[264]; // [rsp+B0h] [rbp-228h] BYREF

  v0 = 0;
  v1 = 0;
  RtlStringCchCopyW(
    (char *)SourceString,
    260LL,
    (char *)L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Image File Execution Options\\");
  DestinationString = 0LL;
  v19 = 0LL;
  CurrentProcess = PsGetCurrentProcess(v3, v2, v4, v5);
  KeyHandle = (void *)PsGetProcessPeb(CurrentProcess);
  v7 = *((_QWORD *)KeyHandle + 4) + 96LL;
  if ( v7 >= MmUserProbeAddress )
    v7 = MmUserProbeAddress;
  v8 = *(_DWORD *)v7;
  LODWORD(KeyHandle) = v8;
  *(_DWORD *)&DestinationString.Length = v8;
  v9 = *(WCHAR **)(v7 + 8);
  DestinationString.Buffer = v9;
  if ( ((unsigned __int8)v9 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v10 = (ULONG64)v9 + (unsigned __int16)v8 + 2;
  if ( v10 <= (unsigned __int64)v9 || v10 >= MmUserProbeAddress )
    ExRaiseAccessViolation();
  if ( (unsigned __int16)v8 > WORD1(KeyHandle) )
  {
    if ( (v8 & 1) == 0 )
      goto LABEL_16;
    goto LABEL_15;
  }
  if ( (v8 & 1) != 0 )
  {
LABEL_15:
    LODWORD(KeyHandle) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 388LL);
LABEL_16:
    ExRaiseAccessViolation();
  }
  v11 = (unsigned __int16)v8;
  v12 = (char *)v9 + (unsigned __int16)v8;
  v19 = v12;
  while ( v11 )
  {
    v13 = v12 - 2;
    if ( *((_WORD *)v12 - 1) == 92 )
      break;
    v12 -= 2;
    v19 = v13;
    v11 -= 2;
  }
  v14 = RtlStringCchCatW(SourceString, 260LL, v12);
  ResultLength[1] = v14;
  if ( v14 >= 0 )
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
        && v22 == 4
        && v23 == 4 )
      {
        v0 = v24;
        v1 = 1;
      }
      ZwClose(KeyHandle);
    }
  }
  if ( v1 && v0 )
  {
    if ( (v0 & 0xFF000000) != 0 )
      return 0;
  }
  else
  {
    return (unsigned int)-1;
  }
  return v0;
}
