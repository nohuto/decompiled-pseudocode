/*
 * XREFs of GetProcessIptTraceSize @ 0x18015B4E0
 * Callers:
 *     PsspCaptureIptTrace @ 0x18015B010 (PsspCaptureIptTrace.c)
 * Callees:
 *     RtlReleasePrivilege @ 0x1800F2570 (RtlReleasePrivilege.c)
 *     OpenIptDevice @ 0x180114034 (OpenIptDevice.c)
 *     AcquireDebugPrivilege @ 0x18015B3A0 (AcquireDebugPrivilege.c)
 *     NtDeviceIoControlFile @ 0x180160130 (NtDeviceIoControlFile.c)
 *     NtClose @ 0x180160230 (NtClose.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 */

NTSTATUS __fastcall GetProcessIptTraceSize(__int64 a1, _DWORD *a2)
{
  NTSTATUS result; // eax
  bool v5; // bl
  NTSTATUS v6; // edi
  HANDLE FileHandle; // [rsp+50h] [rbp-29h] BYREF
  PVOID StatePointer; // [rsp+58h] [rbp-21h] BYREF
  __int128 InputBuffer; // [rsp+60h] [rbp-19h] BYREF
  __int128 v10; // [rsp+70h] [rbp-9h]
  __int128 v11; // [rsp+80h] [rbp+7h]
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+90h] [rbp+17h] BYREF
  __int128 OutputBuffer; // [rsp+A0h] [rbp+27h] BYREF
  __int64 v14; // [rsp+B0h] [rbp+37h]

  FileHandle = 0LL;
  StatePointer = 0LL;
  *a2 = 0;
  InputBuffer = 0LL;
  v14 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  OutputBuffer = 0LL;
  IoStatusBlock = 0LL;
  result = OpenIptDevice(&FileHandle);
  if ( result >= 0 )
  {
    v5 = AcquireDebugPrivilege(&StatePointer);
    *(_QWORD *)&InputBuffer = 1LL;
    DWORD2(InputBuffer) = 1;
    LOWORD(v10) = 1;
    *((_QWORD *)&v10 + 1) = a1;
    v6 = NtDeviceIoControlFile(
           FileHandle,
           0LL,
           0LL,
           0LL,
           &IoStatusBlock,
           0x220004u,
           &InputBuffer,
           0x30u,
           &OutputBuffer,
           0x18u);
    NtClose(FileHandle);
    if ( v5 )
      RtlReleasePrivilege(StatePointer);
    if ( v6 >= 0 )
    {
      if ( *((_QWORD *)&OutputBuffer + 1) <= 0xFFFFFFFFuLL )
      {
        *a2 = DWORD2(OutputBuffer);
        return 0;
      }
      else
      {
        return -1073740757;
      }
    }
    else
    {
      return v6;
    }
  }
  return result;
}
