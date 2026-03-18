/*
 * XREFs of NtUserOpenWindowStation @ 0x1C009B310
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastStatus @ 0x1C0013298 (UserSetLastStatus.c)
 *     _OpenWindowStation @ 0x1C0029364 (_OpenWindowStation.c)
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 *     ?RtlStringCbPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C01CBDE0 (-RtlStringCbPrintfW@@YAJPEAG_KPEBGZZ.c)
 */

__int64 __fastcall NtUserOpenWindowStation(unsigned __int64 a1, int a2)
{
  __int64 v4; // rbx
  __int64 v5; // r8
  __int128 *v6; // rdx
  ULONG64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  _BYTE *v11; // rdx
  ULONG64 v12; // rcx
  NTSTATUS ProcessLuid; // eax
  bool v15; // [rsp+30h] [rbp-A8h]
  volatile void *Address[2]; // [rsp+38h] [rbp-A0h]
  __int128 v17; // [rsp+90h] [rbp-48h]
  PUNICODE_STRING DestinationString[2]; // [rsp+A0h] [rbp-38h]
  __int64 v19; // [rsp+F0h] [rbp+18h] BYREF
  __int64 v20; // [rsp+F8h] [rbp+20h]

  v4 = 0LL;
  v19 = 0LL;
  v15 = 1;
  EnterCrit(0LL, 0LL);
  v6 = (__int128 *)a1;
  v7 = a1 + 48;
  if ( a1 + 48 < a1 || v7 > MmUserProbeAddress )
    v6 = (__int128 *)MmUserProbeAddress;
  v17 = *v6;
  *(_OWORD *)DestinationString = v6[1];
  if ( PsGetCurrentProcessWow64Process(v7, v6, v5) )
  {
    v20 = 1LL;
    v10 = 0LL;
  }
  else
  {
    v20 = 4LL;
    v10 = 3LL;
  }
  v11 = DestinationString[0];
  if ( ((unsigned __int64)DestinationString[0] & v10) != 0 )
    ExRaiseDatatypeMisalignment();
  v12 = MmUserProbeAddress;
  if ( DestinationString[0] >= (PUNICODE_STRING)MmUserProbeAddress )
    v11 = (_BYTE *)MmUserProbeAddress;
  *v11 = *v11;
  v11[15] = v11[15];
  *(struct _UNICODE_STRING *)Address = *DestinationString[0];
  if ( *((_QWORD *)&v17 + 1) )
  {
    if ( Address[1] )
    {
      if ( LODWORD(Address[0]) == 3801144 )
      {
        ProbeForWrite(Address[1], 0x3AuLL, 2u);
        if ( !_wcsicmp((const wchar_t *)Address[1], L"Service-0x00000000-00000000$") )
        {
          ProcessLuid = GetProcessLuid(0LL, &v19);
          v15 = ProcessLuid >= 0;
          if ( ProcessLuid < 0 )
          {
            UserSetLastStatus(ProcessLuid, 1);
          }
          else
          {
            RtlStringCbPrintfW((unsigned __int16 *)Address[1], 0x3AuLL, L"Service-0x%x-%x$", HIDWORD(v19), v19);
            RtlInitUnicodeString(DestinationString[0], (PCWSTR)Address[1]);
          }
        }
      }
    }
  }
  if ( v15 )
    v4 = OpenWindowStation(a1, a2, v8);
  UserSessionSwitchLeaveCrit(v12, v11, v8, v9);
  return v4;
}
