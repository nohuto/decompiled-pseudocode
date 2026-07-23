/*
 * XREFs of RtlInitializeBootStatDataCache @ 0x1405E6BA0
 * Callers:
 *     PopBootStatGet @ 0x140A348F8 (PopBootStatGet.c)
 *     PopBootStatSet @ 0x140A34CDC (PopBootStatSet.c)
 *     RtlLockBootStatusData @ 0x140A76500 (RtlLockBootStatusData.c)
 *     PopBootStatRestoreDefaults @ 0x140AA6BD8 (PopBootStatRestoreDefaults.c)
 * Callees:
 *     ZwReadFile @ 0x1406A7470 (ZwReadFile.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 RtlInitializeBootStatDataCache()
{
  NTSTATUS v0; // edx
  ULONG v1; // eax
  void *Pool2; // rax
  unsigned int v3; // ecx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-10h] BYREF
  ULONG Buffer; // [rsp+70h] [rbp+10h] BYREF
  LARGE_INTEGER ByteOffset; // [rsp+78h] [rbp+18h] BYREF

  Buffer = 0;
  IoStatusBlock = 0LL;
  if ( BootStatDataCache )
  {
    return 0;
  }
  else
  {
    ByteOffset.QuadPart = 0LL;
    v0 = ZwReadFile(BootStatFileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, &Buffer, 4u, &ByteOffset, 0LL);
    if ( v0 >= 0 )
    {
      if ( Buffer && Buffer <= 0x800 )
      {
        v1 = 200;
        if ( Buffer > 0xC8 )
          v1 = Buffer;
        Pool2 = (void *)ExAllocatePool2(0x100uLL, v1, 0x66647362u);
        BootStatDataCache = Pool2;
        if ( Pool2 )
        {
          v0 = ZwReadFile(BootStatFileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, Pool2, Buffer, &ByteOffset, 0LL);
          if ( v0 >= 0 )
          {
            v3 = v0;
            if ( IoStatusBlock.Information != Buffer )
              return (unsigned int)-1073741823;
            return v3;
          }
        }
        else
        {
          return (unsigned int)-1073741801;
        }
      }
      else
      {
        return (unsigned int)-1073741823;
      }
    }
  }
  return (unsigned int)v0;
}
