/*
 * XREFs of NtUserRegisterWindowMessage @ 0x14029B900
 * Callers:
 *     <none>
 * Callees:
 *     SetLastNtError @ 0x1401067E0 (SetLastNtError.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x14012C7E0 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     UserSetLastStatus @ 0x14015E5E8 (UserSetLastStatus.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026C310 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserRegisterWindowMessage(ULONG64 a1)
{
  ULONG64 v1; // r8
  int v2; // ecx
  char *v3; // r8
  ULONG64 v4; // rdx
  NTSTATUS v5; // eax
  unsigned int v6; // ebx
  int v8; // [rsp+20h] [rbp-248h]
  char v9[512]; // [rsp+50h] [rbp-218h] BYREF

  v1 = a1;
  if ( a1 >= MmUserProbeAddress )
    v1 = MmUserProbeAddress;
  v2 = *(_DWORD *)v1;
  v8 = *(_DWORD *)v1;
  v3 = *(char **)(v1 + 8);
  if ( ((unsigned __int8)v3 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v4 = (ULONG64)&v3[(unsigned __int16)v2 + 2];
  if ( v4 <= (unsigned __int64)v3 || v4 >= MmUserProbeAddress )
    ExRaiseAccessViolation();
  if ( (unsigned __int16)v2 > HIWORD(v8) )
  {
    if ( (v2 & 1) == 0 )
      goto LABEL_12;
    goto LABEL_11;
  }
  if ( (v2 & 1) != 0 )
  {
LABEL_11:
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 10583);
LABEL_12:
    ExRaiseAccessViolation();
  }
  v5 = RtlStringCchCopyW(v9, 256LL, v3);
  v6 = 0;
  if ( v5 >= 0 )
    return (unsigned __int16)UserAddAtomEx(v9, 0LL, 2LL);
  else
    UserSetLastStatus(v5, 1);
  return v6;
}
