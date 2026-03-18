/*
 * XREFs of RtlInitializeBootStatusDataBlackBox @ 0x140773B64
 * Callers:
 *     PoClearTransitionMarker @ 0x14073CF8C (PoClearTransitionMarker.c)
 * Callees:
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ZwReadFile @ 0x14069B200 (ZwReadFile.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     RtlpRecordBootStatusData @ 0x140A75220 (RtlpRecordBootStatusData.c)
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
