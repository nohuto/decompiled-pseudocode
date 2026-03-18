/*
 * XREFs of NtRIMQueryDevicePath @ 0x1401D4C70
 * Callers:
 *     <none>
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x1400185D0 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     ?W32ReleasePushLockShared@@YAXPEAVW32_PUSH_LOCK@@@Z @ 0x140041080 (-W32ReleasePushLockShared@@YAXPEAVW32_PUSH_LOCK@@@Z.c)
 *     RIMLockShared @ 0x1400410B0 (RIMLockShared.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall NtRIMQueryDevicePath(ULONG64 a1, _QWORD *a2)
{
  ULONG64 v3; // rdx
  int v4; // eax
  WCHAR *v5; // rcx
  ULONG64 v6; // r8
  NTSTATUS v7; // ebx
  PWSTR Buffer; // rcx
  __int64 UserSessionState; // rax
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 **v12; // r15
  __int64 *i; // rsi
  int v14; // eax
  __int64 v15; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-50h] BYREF
  UNICODE_STRING SourceString; // [rsp+58h] [rbp-40h] BYREF
  int v19; // [rsp+B0h] [rbp+18h]
  void *Handle; // [rsp+B8h] [rbp+20h] BYREF

  v3 = a1;
  Handle = 0LL;
  DestinationString = 0LL;
  SourceString = 0LL;
  if ( a1 >= MmUserProbeAddress )
    v3 = MmUserProbeAddress;
  v4 = *(_DWORD *)v3;
  v19 = *(_DWORD *)v3;
  *(_DWORD *)&SourceString.Length = *(_DWORD *)v3;
  v5 = *(WCHAR **)(v3 + 8);
  SourceString.Buffer = v5;
  if ( ((unsigned __int8)v5 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v6 = (ULONG64)v5 + (unsigned __int16)v4 + 2;
  if ( v6 <= (unsigned __int64)v5 || v6 >= MmUserProbeAddress )
    ExRaiseAccessViolation();
  if ( (unsigned __int16)v4 > HIWORD(v19) )
  {
    if ( (v4 & 1) == 0 )
      goto LABEL_17;
    goto LABEL_16;
  }
  if ( (v4 & 1) != 0 )
  {
LABEL_16:
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 5872);
LABEL_17:
    ExRaiseAccessViolation();
  }
  if ( (unsigned __int16)v4 >= 6u )
  {
    DestinationString.MaximumLength = v4;
    DestinationString.Length = v4;
    DestinationString.Buffer = (PWSTR)Win32AllocPoolZInitImpl(256LL, (unsigned __int16)v4, 0x706D7452u);
    if ( DestinationString.Buffer )
    {
      RtlCopyUnicodeString(&DestinationString, &SourceString);
      v7 = 0;
    }
    else
    {
      v7 = -1073741670;
    }
  }
  else
  {
    v7 = -1073741811;
  }
  if ( v7 >= 0 )
  {
    Buffer = DestinationString.Buffer;
    if ( *DestinationString.Buffer == 92 && DestinationString.Buffer[1] == 92 && DestinationString.Buffer[2] == 63 )
      DestinationString.Buffer[1] = 63;
    else
      v7 = -1073741811;
    if ( v7 >= 0 )
    {
      UserSessionState = W32GetUserSessionState(Buffer);
      RIMLockShared(UserSessionState + 56);
      v7 = -1073741275;
      v12 = (__int64 **)(W32GetUserSessionState(v10) + 136);
      for ( i = *v12; i != (__int64 *)v12; i = (__int64 *)*i )
      {
        if ( !*((_BYTE *)i - 5) )
        {
          v14 = *((_DWORD *)i + 56);
          if ( (v14 & 0x400) == 0 && ((v14 & 0x2000) == 0 || (i[30] & 4) == 0) )
          {
            if ( RtlEqualUnicodeString(&DestinationString, (PCUNICODE_STRING)(i + 31), 0) )
            {
              v7 = ObOpenObjectByPointer(i - 2, 0, 0LL, 1u, ExRawInputManagerObjectType, 0, &Handle);
              break;
            }
          }
        }
      }
      v15 = W32GetUserSessionState(v11);
      W32ReleasePushLockShared((struct W32_PUSH_LOCK *)(v15 + 56));
      if ( v7 >= 0 )
      {
        if ( (unsigned __int64)a2 >= MmUserProbeAddress )
          a2 = (_QWORD *)MmUserProbeAddress;
        *a2 = Handle;
      }
    }
  }
  if ( DestinationString.Buffer )
    GreDeleteFastMutex((char *)DestinationString.Buffer);
  return (unsigned int)v7;
}
