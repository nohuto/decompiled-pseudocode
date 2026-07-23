/*
 * XREFs of GetProcessIptTrace @ 0x18015B3D4
 * Callers:
 *     PsspCaptureIptTrace @ 0x18015B010 (PsspCaptureIptTrace.c)
 * Callees:
 *     RtlReleasePrivilege @ 0x1800F2570 (RtlReleasePrivilege.c)
 *     OpenIptDevice @ 0x180114034 (OpenIptDevice.c)
 *     AcquireDebugPrivilege @ 0x18015B3A0 (AcquireDebugPrivilege.c)
 *     NtDeviceIoControlFile @ 0x180160130 (NtDeviceIoControlFile.c)
 *     NtClose @ 0x180160230 (NtClose.c)
 */

NTSTATUS __fastcall GetProcessIptTrace(__int64 a1, void *a2, ULONG a3)
{
  NTSTATUS result; // eax
  bool v7; // bl
  NTSTATUS v8; // edi
  PVOID StatePointer; // [rsp+50h] [rbp-9h] BYREF
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+58h] [rbp-1h] BYREF
  __int128 InputBuffer; // [rsp+68h] [rbp+Fh] BYREF
  __int128 v12; // [rsp+78h] [rbp+1Fh]
  __int128 v13; // [rsp+88h] [rbp+2Fh]
  HANDLE FileHandle; // [rsp+D8h] [rbp+7Fh] BYREF

  FileHandle = 0LL;
  StatePointer = 0LL;
  InputBuffer = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  IoStatusBlock = 0LL;
  if ( a3 < 8 )
    return -1073741811;
  result = OpenIptDevice(&FileHandle);
  if ( result >= 0 )
  {
    v7 = AcquireDebugPrivilege(&StatePointer);
    *(_QWORD *)&InputBuffer = 1LL;
    LOWORD(v12) = 1;
    DWORD2(InputBuffer) = 2;
    *((_QWORD *)&v12 + 1) = a1;
    v8 = NtDeviceIoControlFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, 0x220006u, &InputBuffer, 0x30u, a2, a3);
    NtClose(FileHandle);
    if ( v7 )
      RtlReleasePrivilege(StatePointer);
    return v8;
  }
  return result;
}
