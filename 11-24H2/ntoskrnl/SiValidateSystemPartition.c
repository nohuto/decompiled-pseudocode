/*
 * XREFs of SiValidateSystemPartition @ 0x14048BC80
 * Callers:
 *     SiGetBootDeviceName @ 0x140A2240C (SiGetBootDeviceName.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     SiIssueSynchronousIoctl @ 0x140816854 (SiIssueSynchronousIoctl.c)
 *     SiGetDiskPartitionInformation @ 0x140A48AD8 (SiGetDiskPartitionInformation.c)
 */

__int64 __fastcall SiValidateSystemPartition(__int64 a1, _DWORD *a2, __int64 a3, __int64 a4, char a5)
{
  unsigned int DiskPartitionInformation; // edx
  __int64 v8; // rax
  _DWORD v10[8]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v11; // [rsp+60h] [rbp-A0h]
  __int64 v12; // [rsp+68h] [rbp-98h]
  _DWORD v13[2]; // [rsp+D0h] [rbp-30h] BYREF
  int v14; // [rsp+D8h] [rbp-28h]
  _OWORD v15[2]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v16; // [rsp+100h] [rbp+0h]

  v10[1] = 0;
  memset_0(v10, 0, 0x8CuLL);
  v14 = 0;
  DiskPartitionInformation = SiGetDiskPartitionInformation(a1, v10);
  if ( (DiskPartitionInformation & 0x80000000) != 0 )
    return DiskPartitionInformation;
  if ( a2 && v10[0] != *a2 )
    return (unsigned int)-1073741823;
  DiskPartitionInformation = -1073741823;
  if ( v10[0] != 1 )
  {
    if ( v10[0] )
      return DiskPartitionInformation;
    DiskPartitionInformation = BYTE1(v11) == 0 ? 0xC0000001 : 0;
    if ( !BYTE1(v11) )
      return DiskPartitionInformation;
    goto LABEL_8;
  }
  v8 = v11 - *(_QWORD *)&PARTITION_SYSTEM_GUID.Data1;
  if ( v11 == *(_QWORD *)&PARTITION_SYSTEM_GUID.Data1 )
    v8 = v12 - *(_QWORD *)PARTITION_SYSTEM_GUID.Data4;
  if ( !v8 )
  {
    DiskPartitionInformation = 0;
LABEL_8:
    if ( a5 )
    {
      v14 = 0;
      v13[0] = 0;
      v13[1] = 0;
      v16 = 0LL;
      memset(v15, 0, sizeof(v15));
      DiskPartitionInformation = SiIssueSynchronousIoctl(a1, 2954240LL, v13, 12LL, v15, 40);
      if ( (DiskPartitionInformation & 0x80000000) == 0 )
      {
        if ( BYTE10(v15[0]) )
          return (unsigned int)-1073741436;
      }
    }
  }
  return DiskPartitionInformation;
}
