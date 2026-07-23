/*
 * XREFs of SendMessageToWERService @ 0x1800CFEA0
 * Callers:
 *     RtlReportSilentProcessExit @ 0x1800CF190 (RtlReportSilentProcessExit.c)
 *     ReportExceptionInternal @ 0x1800CF998 (ReportExceptionInternal.c)
 * Callees:
 *     WaitForWerSvc @ 0x1800CEE9C (WaitForWerSvc.c)
 *     WerpAllocateAndInitializeSid @ 0x1800CEF58 (WerpAllocateAndInitializeSid.c)
 *     SignalStartWerSvc @ 0x1800D00FC (SignalStartWerSvc.c)
 *     WerpFreeSid @ 0x180120D64 (WerpFreeSid.c)
 *     wcslen @ 0x1801292B0 (wcslen.c)
 *     NtClose @ 0x180163400 (NtClose.c)
 *     NtQuerySystemInformation @ 0x1801638E0 (NtQuerySystemInformation.c)
 *     NtAlpcConnectPort @ 0x180164170 (NtAlpcConnectPort.c)
 *     ZwAlpcSendWaitReceivePort @ 0x1801643D0 (ZwAlpcSendWaitReceivePort.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall SendMessageToWERService(PPORT_MESSAGE SendMessageA, PPORT_MESSAGE ReceiveMessage)
{
  int started; // ebx
  NTSTATUS v6; // eax
  size_t v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // eax
  PSID v12; // rdi
  char v13; // dl
  LARGE_INTEGER *Timeout; // rsi
  NTSTATUS v15; // eax
  NTSTATUS v16; // eax
  int Flags; // [rsp+20h] [rbp-E0h]
  int RequiredServerSid; // [rsp+28h] [rbp-D8h]
  int ConnectionMessage; // [rsp+30h] [rbp-D0h]
  int BufferLength; // [rsp+38h] [rbp-C8h]
  int OutMessageAttributes; // [rsp+40h] [rbp-C0h]
  int InMessageAttributes; // [rsp+48h] [rbp-B8h]
  _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+60h] [rbp-A0h] BYREF
  __int64 SystemInformation; // [rsp+68h] [rbp-98h] BYREF
  HANDLE PortHandle; // [rsp+70h] [rbp-90h] BYREF
  PSID v26; // [rsp+78h] [rbp-88h] BYREF
  __int64 v27; // [rsp+80h] [rbp-80h] BYREF
  ULONG_PTR v28; // [rsp+88h] [rbp-78h] BYREF
  _UNICODE_STRING PortName; // [rsp+90h] [rbp-70h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A0h] [rbp-60h] BYREF
  _ALPC_PORT_ATTRIBUTES PortAttributes; // [rsp+D0h] [rbp-30h] BYREF

  PortHandle = 0LL;
  v28 = 0LL;
  PortName = 0LL;
  memset(&ObjectAttributes, 0, 44);
  memset_thunk_772440563353939046(&PortAttributes, 0, 0x48uLL);
  v26 = 0LL;
  *(_DWORD *)IdentifierAuthority.Value = 0;
  *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
  v27 = 0LL;
  SystemInformation = 0LL;
  started = SignalStartWerSvc();
  if ( started >= 0 )
  {
    started = NtQuerySystemInformation(SystemErrorPortTimeouts, &SystemInformation, 8u, 0LL);
    if ( started >= 0 )
    {
      v6 = WaitForWerSvc(SystemInformation);
      started = v6;
      if ( v6 >= 0 && v6 != 258 )
      {
        *(_DWORD *)(&PortName.MaximumLength + 1) = 0;
        PortName.Buffer = (wchar_t *)L"\\WindowsErrorReportingServicePort";
        v7 = 2 * wcslen(L"\\WindowsErrorReportingServicePort");
        PortAttributes.MaxMessageLength = 1400LL;
        if ( v7 >= 0xFFFE )
          LOWORD(v7) = -4;
        PortName.Length = v7;
        PortName.MaximumLength = v7 + 2;
        v11 = WerpAllocateAndInitializeSid(
                &IdentifierAuthority,
                v8,
                v9,
                v10,
                Flags,
                RequiredServerSid,
                ConnectionMessage,
                BufferLength,
                OutMessageAttributes,
                InMessageAttributes,
                &v26);
        v12 = v26;
        started = v11;
        if ( v11 >= 0 )
        {
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
          ObjectAttributes.Length = 48;
          memset(&ObjectAttributes.RootDirectory, 0, 20);
          if ( HIDWORD(SystemInformation) == -1 )
          {
            v13 = 1;
          }
          else
          {
            v13 = 0;
            v27 = -10000LL * SHIDWORD(SystemInformation);
          }
          Timeout = (LARGE_INTEGER *)&v27;
          if ( v13 )
            Timeout = 0LL;
          v15 = NtAlpcConnectPort(
                  &PortHandle,
                  &PortName,
                  &ObjectAttributes,
                  &PortAttributes,
                  0x20000u,
                  v26,
                  0LL,
                  0LL,
                  0LL,
                  0LL,
                  Timeout);
          started = v15;
          if ( v15 >= 0 && v15 != 258 )
          {
            v28 = 1400LL;
            v16 = ZwAlpcSendWaitReceivePort(PortHandle, 0x20000u, SendMessageA, 0LL, ReceiveMessage, &v28, 0LL, Timeout);
            started = v16;
            if ( v16 >= 0 && v16 != 258 )
            {
              started = 0;
              if ( (ReceiveMessage[1].u2.ZeroInit & 0x80000000) != 0 )
                started = ReceiveMessage[1].u2.ZeroInit;
            }
          }
        }
        if ( v12 )
          WerpFreeSid(v12);
      }
    }
  }
  if ( PortHandle )
    NtClose(PortHandle);
  return (unsigned int)started;
}
