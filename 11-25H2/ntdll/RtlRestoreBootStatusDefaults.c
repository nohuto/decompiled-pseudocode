/*
 * XREFs of RtlRestoreBootStatusDefaults @ 0x18013FD20
 * Callers:
 *     RtlCreateBootStatusDataFile @ 0x18013F990 (RtlCreateBootStatusDataFile.c)
 * Callees:
 *     RtlGetNtProductType @ 0x1800397D0 (RtlGetNtProductType.c)
 *     RtlpRecordBootStatusData @ 0x180140178 (RtlpRecordBootStatusData.c)
 *     NtWriteFile @ 0x180163320 (NtWriteFile.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
 */

NTSTATUS __cdecl RtlRestoreBootStatusDefaults(HANDLE FileHandle)
{
  int *p_Buffer; // rax
  char v3; // cl
  __int64 v4; // rdx
  LARGE_INTEGER ByteOffset; // [rsp+50h] [rbp-B0h] BYREF
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+58h] [rbp-A8h] BYREF
  int Buffer; // [rsp+70h] [rbp-90h] BYREF
  _NT_PRODUCT_TYPE NtProductType; // [rsp+74h] [rbp-8Ch] BYREF
  __int16 v10; // [rsp+79h] [rbp-87h]
  char v11; // [rsp+7Bh] [rbp-85h]
  char v12; // [rsp+A1h] [rbp-5Fh]
  char v13; // [rsp+A2h] [rbp-5Eh]
  int v14; // [rsp+128h] [rbp+28h]

  IoStatusBlock = 0LL;
  memset_thunk_772440563353939046(&NtProductType, 0, 0xC4uLL);
  Buffer = 200;
  RtlGetNtProductType(&NtProductType);
  v14 = 0;
  p_Buffer = &Buffer;
  v3 = 0;
  v10 = 286;
  v12 = 1;
  v4 = 200LL;
  v11 = 0;
  do
  {
    v3 -= *(_BYTE *)p_Buffer;
    p_Buffer = (int *)((char *)p_Buffer + 1);
    --v4;
  }
  while ( v4 );
  ByteOffset.QuadPart = 0LL;
  v13 = v3;
  RtlpRecordBootStatusData(0LL, &Buffer, 0LL, 200LL);
  return NtWriteFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, &Buffer, 0xC8u, &ByteOffset, 0LL);
}
