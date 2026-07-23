/*
 * XREFs of SendMessageToWERService @ 0x1800ADEC8
 * Callers:
 *     RtlReportSilentProcessExit @ 0x1800AB9C0 (RtlReportSilentProcessExit.c)
 *     ReportExceptionInternal @ 0x1800AC57C (ReportExceptionInternal.c)
 * Callees:
 *     SignalStartWerSvc @ 0x1800AE124 (SignalStartWerSvc.c)
 *     WerpAllocateAndInitializeSid @ 0x1800DF2A0 (WerpAllocateAndInitializeSid.c)
 *     WaitForWerSvc @ 0x18010FEEC (WaitForWerSvc.c)
 *     WerpFreeSid @ 0x18011D6C4 (WerpFreeSid.c)
 *     wcslen @ 0x180125A00 (wcslen.c)
 *     NtClose @ 0x180160230 (NtClose.c)
 *     NtQuerySystemInformation @ 0x180160710 (NtQuerySystemInformation.c)
 *     NtAlpcConnectPort @ 0x180160FA0 (NtAlpcConnectPort.c)
 *     ZwAlpcSendWaitReceivePort @ 0x180161200 (ZwAlpcSendWaitReceivePort.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180171030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall SendMessageToWERService(PPORT_MESSAGE SendMessageA, PPORT_MESSAGE ReceiveMessage)
{
  int started; // ebx
  int v6; // eax
  size_t v7; // rax
  int v8; // eax
  PSID v9; // rdi
  char v10; // dl
  LARGE_INTEGER *Timeout; // rsi
  NTSTATUS v12; // eax
  NTSTATUS v13; // eax
  int Flags; // [rsp+20h] [rbp-E0h]
  int RequiredServerSid; // [rsp+28h] [rbp-D8h]
  int ConnectionMessage; // [rsp+30h] [rbp-D0h]
  int BufferLength; // [rsp+38h] [rbp-C8h]
  int OutMessageAttributes; // [rsp+40h] [rbp-C0h]
  int InMessageAttributes; // [rsp+48h] [rbp-B8h]
  _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+60h] [rbp-A0h] BYREF
  __int64 SystemInformation; // [rsp+68h] [rbp-98h] BYREF
  HANDLE PortHandle; // [rsp+70h] [rbp-90h] BYREF
  PSID v23; // [rsp+78h] [rbp-88h] BYREF
  __int64 v24; // [rsp+80h] [rbp-80h] BYREF
  ULONG_PTR v25; // [rsp+88h] [rbp-78h] BYREF
  _UNICODE_STRING PortName; // [rsp+90h] [rbp-70h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A0h] [rbp-60h] BYREF
  _ALPC_PORT_ATTRIBUTES PortAttributes; // [rsp+D0h] [rbp-30h] BYREF

  PortHandle = 0LL;
  v25 = 0LL;
  PortName = 0LL;
  memset(&ObjectAttributes, 0, 44);
  memset_thunk_772440563353939046(&PortAttributes, 0, 0x48uLL);
  v23 = 0LL;
  *(_DWORD *)IdentifierAuthority.Value = 0;
  *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
  v24 = 0LL;
  SystemInformation = 0LL;
  started = SignalStartWerSvc();
  if ( started >= 0 )
  {
    started = NtQuerySystemInformation(SystemErrorPortTimeouts, &SystemInformation, 8u, 0LL);
    if ( started >= 0 )
    {
      v6 = WaitForWerSvc((unsigned int)SystemInformation);
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
        v8 = WerpAllocateAndInitializeSid(
               &IdentifierAuthority,
               Flags,
               RequiredServerSid,
               ConnectionMessage,
               BufferLength,
               OutMessageAttributes,
               InMessageAttributes,
               (__int64)&v23);
        v9 = v23;
        started = v8;
        if ( v8 >= 0 )
        {
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
          ObjectAttributes.Length = 48;
          memset(&ObjectAttributes.RootDirectory, 0, 20);
          if ( HIDWORD(SystemInformation) == -1 )
          {
            v10 = 1;
          }
          else
          {
            v10 = 0;
            v24 = -10000LL * SHIDWORD(SystemInformation);
          }
          Timeout = (LARGE_INTEGER *)&v24;
          if ( v10 )
            Timeout = 0LL;
          v12 = NtAlpcConnectPort(
                  &PortHandle,
                  &PortName,
                  &ObjectAttributes,
                  &PortAttributes,
                  0x20000u,
                  v23,
                  0LL,
                  0LL,
                  0LL,
                  0LL,
                  Timeout);
          started = v12;
          if ( v12 >= 0 && v12 != 258 )
          {
            v25 = 1400LL;
            v13 = ZwAlpcSendWaitReceivePort(PortHandle, 0x20000u, SendMessageA, 0LL, ReceiveMessage, &v25, 0LL, Timeout);
            started = v13;
            if ( v13 >= 0 && v13 != 258 )
            {
              started = 0;
              if ( (ReceiveMessage[1].u2.ZeroInit & 0x80000000) != 0 )
                started = ReceiveMessage[1].u2.ZeroInit;
            }
          }
        }
        if ( v9 )
          WerpFreeSid(v9);
      }
    }
  }
  if ( PortHandle )
    NtClose(PortHandle);
  return (unsigned int)started;
}
