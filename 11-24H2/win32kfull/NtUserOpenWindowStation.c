/*
 * XREFs of NtUserOpenWindowStation @ 0x1401DD2E0
 * Callers:
 *     <none>
 * Callees:
 *     SetLastNtError @ 0x1401067E0 (SetLastNtError.c)
 *     UserSetLastStatus @ 0x14015E5E8 (UserSetLastStatus.c)
 *     _OpenWindowStation @ 0x1401C4338 (_OpenWindowStation.c)
 *     RtlCopyFromUser @ 0x14026E428 (RtlCopyFromUser.c)
 *     ?RtlStringCbPrintfW@@YAJPEAG_KPEBGZZ @ 0x140291A74 (-RtlStringCbPrintfW@@YAJPEAG_KPEBGZZ.c)
 */

__int64 __fastcall NtUserOpenWindowStation(void *Src, int a2)
{
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r8
  __int64 v9; // rax
  PUNICODE_STRING v10; // rdx
  ULONG64 v11; // rcx
  struct _UNICODE_STRING *v12; // r15
  NTSTATUS ProcessLuid; // eax
  bool v15; // [rsp+30h] [rbp-A8h]
  volatile void *Address[2]; // [rsp+38h] [rbp-A0h]
  __int128 v17; // [rsp+58h] [rbp-80h] BYREF
  PUNICODE_STRING DestinationString[2]; // [rsp+68h] [rbp-70h]
  __int128 v19; // [rsp+78h] [rbp-60h]
  __int128 v20; // [rsp+90h] [rbp-48h]
  __int128 v21; // [rsp+A0h] [rbp-38h]
  __int128 v22; // [rsp+B0h] [rbp-28h]
  __int64 v23; // [rsp+F0h] [rbp+18h] BYREF
  __int64 v24; // [rsp+F8h] [rbp+20h]

  v4 = 0LL;
  v23 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  v15 = 1;
  EnterCrit(0LL, 0LL);
  v17 = 0LL;
  *(_OWORD *)DestinationString = 0LL;
  v19 = 0LL;
  RtlCopyFromUser(&v17, Src, 0x30uLL);
  v20 = v17;
  v21 = *(_OWORD *)DestinationString;
  v22 = v19;
  if ( PsGetCurrentProcessWow64Process(v6, v5, v7) )
  {
    v24 = 1LL;
    v9 = 0LL;
  }
  else
  {
    v24 = 4LL;
    v9 = 3LL;
  }
  v10 = DestinationString[0];
  if ( ((unsigned __int64)DestinationString[0] & v9) != 0 )
    ExRaiseDatatypeMisalignment();
  v11 = MmUserProbeAddress;
  if ( DestinationString[0] >= (PUNICODE_STRING)MmUserProbeAddress )
    v10 = (PUNICODE_STRING)MmUserProbeAddress;
  LOBYTE(v10->Length) = v10->Length;
  HIBYTE(v10->Buffer) = HIBYTE(v10->Buffer);
  v12 = DestinationString[0];
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
          ProcessLuid = GetProcessLuid(0LL, &v23);
          v15 = ProcessLuid >= 0;
          if ( ProcessLuid < 0 )
          {
            UserSetLastStatus(ProcessLuid, 1);
          }
          else
          {
            RtlStringCbPrintfW((unsigned __int16 *)Address[1], 0x3AuLL, L"Service-0x%x-%x$", HIDWORD(v23), v23);
            RtlInitUnicodeString(v12, (PCWSTR)Address[1]);
          }
        }
      }
    }
  }
  if ( v15 )
    v4 = OpenWindowStation((__int64)Src, a2, v8);
  UserSessionSwitchLeaveCrit(v11);
  return v4;
}
