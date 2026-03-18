/*
 * XREFs of ?ProbeAndDeepCaptureWinStaDesktopObjectAttributes@@YAJHPEAU_OBJECT_ATTRIBUTES@@AEAY0BAA@GAEAU1@AEAU_SECURITY_QUALITY_OF_SERVICE@@AEAPEAXAEAU_UNICODE_STRING@@AEAPEAG@Z @ 0x14028A568
 * Callers:
 *     _OpenDesktop @ 0x1401CE108 (_OpenDesktop.c)
 *     EditionCreateWindowStationEntryPointEx @ 0x140291DE0 (EditionCreateWindowStationEntryPointEx.c)
 * Callees:
 *     ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1401CA8E8 (-RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026C310 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RtlCopyFromUser @ 0x14026E428 (RtlCopyFromUser.c)
 *     memmove @ 0x140340480 (memmove.c)
 */

__int64 __fastcall ProbeAndDeepCaptureWinStaDesktopObjectAttributes(
        int a1,
        struct _OBJECT_ATTRIBUTES *a2,
        unsigned __int16 (*a3)[256],
        struct _OBJECT_ATTRIBUTES *a4,
        struct _SECURITY_QUALITY_OF_SERVICE *a5,
        void **a6,
        struct _UNICODE_STRING *DestinationString,
        unsigned __int16 **a8)
{
  __int64 v11; // rdx
  __int64 v12; // rcx
  int ProcessLuid; // ebx
  __int64 UserSessionState; // rax
  ULONG64 ObjectName; // rdx
  WCHAR *v16; // rax
  __int64 Length; // rcx
  ULONG64 v18; // rdx
  unsigned int MaximumLength; // edx
  USHORT v20; // ax
  unsigned __int16 *v21; // rax
  PVOID SecurityQualityOfService; // rdx
  PVOID SecurityDescriptor; // rcx
  __int64 v24; // rdx
  __int64 v26; // [rsp+40h] [rbp-98h] BYREF
  struct _SECURITY_QUALITY_OF_SERVICE v27; // [rsp+48h] [rbp-90h] BYREF
  unsigned __int16 **v28; // [rsp+58h] [rbp-80h]
  struct _OBJECT_ATTRIBUTES v29[2]; // [rsp+60h] [rbp-78h] BYREF

  v28 = a8;
  v26 = 0LL;
  memset(v29, 0, 48);
  RtlCopyFromUser(v29, a2, 0x30uLL);
  *a4 = v29[0];
  a4->Attributes &= ~0x200u;
  if ( a1 && !a4->ObjectName && !a4->RootDirectory )
  {
    ProcessLuid = GetProcessLuid(0LL, &v26);
    if ( ProcessLuid >= 0 )
    {
      UserSessionState = W32GetUserSessionState(v12, v11);
      RtlStringCchPrintfW(
        (unsigned __int16 *)a3,
        256LL,
        L"%ws\\Service-0x%x-%x$",
        UserSessionState + 63648,
        HIDWORD(v26),
        v26,
        ProcessLuid);
      RtlInitUnicodeString(DestinationString, (PCWSTR)a3);
      a4->ObjectName = DestinationString;
    }
    goto LABEL_27;
  }
  ObjectName = (ULONG64)a4->ObjectName;
  if ( !ObjectName )
  {
LABEL_26:
    ProcessLuid = -1073741811;
    goto LABEL_27;
  }
  if ( ObjectName >= MmUserProbeAddress )
    ObjectName = MmUserProbeAddress;
  *(_DWORD *)&DestinationString->Length = *(_DWORD *)ObjectName;
  v16 = *(WCHAR **)(ObjectName + 8);
  DestinationString->Buffer = v16;
  if ( ((unsigned __int8)v16 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  Length = DestinationString->Length;
  v18 = (ULONG64)v16 + Length + 2;
  if ( v18 <= (unsigned __int64)v16 || v18 >= MmUserProbeAddress )
    ExRaiseAccessViolation();
  MaximumLength = DestinationString->MaximumLength;
  if ( (unsigned __int16)Length > (unsigned __int16)MaximumLength )
  {
    if ( (Length & 1) == 0 )
      goto LABEL_24;
    goto LABEL_23;
  }
  if ( (Length & 1) != 0 )
  {
LABEL_23:
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1804);
LABEL_24:
    ExRaiseAccessViolation();
  }
  if ( !(_WORD)Length || (Length & 1) != 0 )
    goto LABEL_26;
  v20 = 522;
  if ( (unsigned __int16)Length < 0x20Au )
    v20 = DestinationString->Length;
  DestinationString->Length = v20;
  v21 = (unsigned __int16 *)Win32AllocPoolWithQuotaZInit(MaximumLength, 2037674837LL);
  *a8 = v21;
  if ( v21 )
  {
    memmove(v21, DestinationString->Buffer, DestinationString->Length);
    DestinationString->Buffer = *a8;
    a4->ObjectName = DestinationString;
    ProcessLuid = 0;
  }
  else
  {
    ProcessLuid = -1073741801;
  }
LABEL_27:
  if ( ProcessLuid >= 0 )
  {
    SecurityQualityOfService = a4->SecurityQualityOfService;
    if ( SecurityQualityOfService )
    {
      *(_QWORD *)&v27.Length = 0LL;
      *(_DWORD *)&v27.ContextTrackingMode = 0;
      RtlCopyFromUser(&v27, SecurityQualityOfService, 0xCuLL);
      *a5 = v27;
      a4->SecurityQualityOfService = a5;
    }
    SecurityDescriptor = a4->SecurityDescriptor;
    if ( SecurityDescriptor )
    {
      LOBYTE(SecurityQualityOfService) = 1;
      ProcessLuid = SeCaptureSecurityDescriptor(SecurityDescriptor, SecurityQualityOfService);
      if ( ProcessLuid < 0 )
      {
        ProcessLuid = 0;
        if ( *a6 )
        {
          LOBYTE(v24) = 1;
          SeReleaseSecurityDescriptor(*a6, v24, 0LL);
          *a6 = 0LL;
        }
      }
      a4->SecurityDescriptor = *a6;
    }
  }
  if ( ProcessLuid < 0 && *a8 )
  {
    Win32FreePool(*a8);
    *a8 = 0LL;
  }
  return (unsigned int)ProcessLuid;
}
