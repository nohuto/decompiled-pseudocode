/*
 * XREFs of RtlInitializeBootStatusDataBlackBox @ 0x140782E14
 * Callers:
 *     PoClearTransitionMarker @ 0x140748F9C (PoClearTransitionMarker.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     ZwReadFile @ 0x1406A64D0 (ZwReadFile.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     RtlpRecordBootStatusData @ 0x140A776A4 (RtlpRecordBootStatusData.c)
 */

NTSTATUS __fastcall RtlInitializeBootStatusDataBlackBox(HANDLE FileHandle)
{
  NTSTATUS result; // eax
  LARGE_INTEGER ByteOffset; // [rsp+50h] [rbp-108h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+58h] [rbp-100h] BYREF
  _BYTE Buffer[208]; // [rsp+70h] [rbp-E8h] BYREF

  IoStatusBlock = 0LL;
  memset_0(Buffer, 0, 0xC8uLL);
  ByteOffset.QuadPart = 0LL;
  result = ZwReadFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, Buffer, 0xC8u, &ByteOffset, 0LL);
  if ( result >= 0 )
  {
    result = RtlpRecordBootStatusData(0LL, Buffer, 0LL, 200LL);
    if ( result >= 0 )
      return 0;
  }
  return result;
}
