/*
 * XREFs of SshpSessionManagerOpenControlTrace @ 0x140766E60
 * Callers:
 *     SshpAlpcProcessMessage @ 0x140768288 (SshpAlpcProcessMessage.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     SshpWorkItemQueue @ 0x140477ADC (SshpWorkItemQueue.c)
 *     SSHSupportReleasePushLockExclusive @ 0x1404843BC (SSHSupportReleasePushLockExclusive.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwReadFile @ 0x1406A7470 (ZwReadFile.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     IoConvertFileHandleToKernelHandle @ 0x140A676F0 (IoConvertFileHandleToKernelHandle.c)
 */

__int64 __fastcall SshpSessionManagerOpenControlTrace(__int64 a1, __int64 a2)
{
  int v2; // ebx
  NTSTATUS v3; // eax
  char *v4; // rax
  char *v5; // rbx
  LARGE_INTEGER ByteOffset; // [rsp+60h] [rbp+1Fh] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+68h] [rbp+27h] BYREF
  __int128 Buffer; // [rsp+78h] [rbp+37h] BYREF
  __int64 v10; // [rsp+88h] [rbp+47h]

  ByteOffset.QuadPart = 0LL;
  v10 = 0LL;
  LOBYTE(a2) = 1;
  Buffer = 0LL;
  IoStatusBlock = 0LL;
  v2 = IoConvertFileHandleToKernelHandle(a1, a2, 3LL);
  if ( v2 >= 0 )
  {
    v3 = ZwReadFile(0LL, 0LL, 0LL, 0LL, &IoStatusBlock, &Buffer, 0x18u, &ByteOffset, 0LL);
    if ( v3 < 0 )
    {
      if ( v3 == -1073741807 )
        return (unsigned int)-1073739509;
      return (unsigned int)v3;
    }
    else if ( IoStatusBlock.Information == 24
           && DWORD2(Buffer) == ~((_DWORD)Buffer + HIDWORD(Buffer) + HIDWORD(v10) + (_DWORD)v10 + DWORD1(Buffer))
           && (_QWORD)Buffer == 0x15250535FLL
           && (unsigned int)(HIDWORD(v10) - 0x100000) <= 0x3F00000
           && HIDWORD(Buffer) <= (unsigned int)v10
           && (unsigned int)(v10 - HIDWORD(Buffer)) <= HIDWORD(v10)
           && HIDWORD(Buffer) < HIDWORD(v10) )
    {
      v4 = (char *)KeAbPreAcquire((__int64)&SshpSessionManagerLock, 0LL);
      v5 = v4;
      if ( _interlockedbittestandset64((volatile signed __int32 *)&SshpSessionManagerLock, 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&SshpSessionManagerLock, v4, (__int64)&SshpSessionManagerLock);
      if ( v5 )
        v5[10] = 1;
      if ( FileHandle )
      {
        v2 = -1073741791;
      }
      else
      {
        xmmword_140F06098 = Buffer;
        FileHandle = 0LL;
        qword_140F060A8 = v10;
        if ( (_DWORD)dword_140F060C8 )
          SshpWorkItemQueue((struct _WORK_QUEUE_ITEM *)&qword_140F06070);
        v2 = 0;
      }
      SSHSupportReleasePushLockExclusive((volatile signed __int64 *)&SshpSessionManagerLock);
    }
    else
    {
      return (unsigned int)-1073739509;
    }
  }
  return (unsigned int)v2;
}
