/*
 * XREFs of RtlRestoreBootStatusDefaults @ 0x140782E08
 * Callers:
 *     PopBootStatRestoreDefaults @ 0x140AA6BD8 (PopBootStatRestoreDefaults.c)
 * Callees:
 *     RtlGetNtProductType @ 0x1404213A0 (RtlGetNtProductType.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwWriteFile @ 0x1406A74B0 (ZwWriteFile.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     RtlpRecordBootStatusData @ 0x140A717C4 (RtlpRecordBootStatusData.c)
 */

NTSTATUS __cdecl RtlRestoreBootStatusDefaults(HANDLE FileHandle)
{
  _BYTE *v2; // rax
  char v3; // cl
  __int64 v4; // rdx
  int v5; // edx
  _OWORD *v6; // rcx
  _OWORD *v7; // rcx
  LARGE_INTEGER ByteOffset; // [rsp+50h] [rbp-B0h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+58h] [rbp-A8h] BYREF
  _OWORD Buffer[3]; // [rsp+70h] [rbp-90h] BYREF
  __int128 v12; // [rsp+A0h] [rbp-60h]
  __int128 v13; // [rsp+B0h] [rbp-50h]
  __int128 v14; // [rsp+C0h] [rbp-40h]
  __int128 v15; // [rsp+D0h] [rbp-30h]
  __int128 v16; // [rsp+E0h] [rbp-20h]
  __int128 v17; // [rsp+F0h] [rbp-10h]
  __int128 v18; // [rsp+100h] [rbp+0h]
  __int128 v19; // [rsp+110h] [rbp+10h]
  __int128 v20; // [rsp+120h] [rbp+20h]
  __int64 v21; // [rsp+130h] [rbp+30h]

  IoStatusBlock = 0LL;
  memset_0((char *)Buffer + 4, 0, 0xC4uLL);
  LODWORD(Buffer[0]) = 200;
  RtlGetNtProductType((PNT_PRODUCT_TYPE)Buffer + 1);
  DWORD2(v20) = 0;
  v2 = Buffer;
  v3 = 0;
  *(_WORD *)((char *)Buffer + 9) = 286;
  BYTE1(v12) = 1;
  v4 = 200LL;
  BYTE11(Buffer[0]) = 0;
  do
  {
    v3 -= *v2++;
    --v4;
  }
  while ( v4 );
  ByteOffset.QuadPart = 0LL;
  BYTE2(v12) = v3;
  RtlpRecordBootStatusData(0LL, Buffer, 0LL, 200LL);
  v5 = ZwWriteFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, Buffer, 0xC8u, &ByteOffset, 0LL);
  if ( v5 >= 0 )
  {
    if ( BootStatFileHandleAcquired )
    {
      if ( BootStatFileHandle == FileHandle )
      {
        v6 = BootStatDataCache;
        if ( BootStatDataCache )
        {
          *(_OWORD *)BootStatDataCache = Buffer[0];
          v6[1] = Buffer[1];
          v6[2] = Buffer[2];
          v6[3] = v12;
          v6[4] = v13;
          v6[5] = v14;
          v6[6] = v15;
          v7 = v6 + 8;
          *(v7 - 1) = v16;
          *v7 = v17;
          v7[1] = v18;
          v7[2] = v19;
          v7[3] = v20;
          *((_QWORD *)v7 + 8) = v21;
        }
      }
    }
  }
  return v5;
}
