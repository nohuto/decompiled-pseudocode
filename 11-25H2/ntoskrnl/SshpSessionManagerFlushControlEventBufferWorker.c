/*
 * XREFs of SshpSessionManagerFlushControlEventBufferWorker @ 0x140A5D6D0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1404265C0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14042F500 (_tlgKeywordOn.c)
 *     SSHSupportReleasePushLockExclusive @ 0x140489C20 (SSHSupportReleasePushLockExclusive.c)
 *     SshpWorkItemTryAllowNextWorker @ 0x1404B0D74 (SshpWorkItemTryAllowNextWorker.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ZwWriteFile @ 0x14069B240 (ZwWriteFile.c)
 *     ZwFlushBuffersFile @ 0x14069BAA0 (ZwFlushBuffersFile.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     SshpSessionManagerWriteBytes @ 0x140A5DABC (SshpSessionManagerWriteBytes.c)
 *     SshpSessionManagerNormalizeLogHeader @ 0x140AA0A28 (SshpSessionManagerNormalizeLogHeader.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

char SshpSessionManagerFlushControlEventBufferWorker()
{
  char *Pool2; // r12
  __int64 *v1; // rax
  signed __int8 v2; // cf
  __int64 *v3; // rbx
  int v4; // r14d
  int v5; // r15d
  __int64 v6; // rdi
  int v7; // r13d
  int v8; // r8d
  size_t v9; // rbx
  int v10; // esi
  int v11; // r9d
  unsigned int v12; // r8d
  unsigned int v13; // r10d
  unsigned int v14; // r14d
  unsigned int v15; // ebx
  __int64 *v16; // rax
  __int64 *v17; // rbx
  char result; // al
  int v19; // esi
  int v20; // edx
  NTSTATUS v21; // eax
  int v22; // eax
  int v23; // [rsp+50h] [rbp-B0h]
  int v24; // [rsp+54h] [rbp-ACh]
  char *v25; // [rsp+58h] [rbp-A8h]
  int v26; // [rsp+60h] [rbp-A0h] BYREF
  int v27; // [rsp+64h] [rbp-9Ch] BYREF
  int v28; // [rsp+68h] [rbp-98h] BYREF
  int v29; // [rsp+6Ch] [rbp-94h] BYREF
  LARGE_INTEGER ByteOffset; // [rsp+78h] [rbp-88h] BYREF
  __int64 v31; // [rsp+80h] [rbp-80h] BYREF
  __int64 v32; // [rsp+88h] [rbp-78h] BYREF
  struct _IO_STATUS_BLOCK v33; // [rsp+90h] [rbp-70h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+A0h] [rbp-60h] BYREF
  __int128 Buffer; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v36; // [rsp+C0h] [rbp-40h]
  struct _EVENT_DATA_DESCRIPTOR v37; // [rsp+D0h] [rbp-30h] BYREF
  __int64 *v38; // [rsp+F0h] [rbp-10h]
  __int64 v39; // [rsp+F8h] [rbp-8h]
  int *v40; // [rsp+100h] [rbp+0h]
  __int64 v41; // [rsp+108h] [rbp+8h]
  int *v42; // [rsp+110h] [rbp+10h]
  __int64 v43; // [rsp+118h] [rbp+18h]
  int *v44; // [rsp+120h] [rbp+20h]
  __int64 v45; // [rsp+128h] [rbp+28h]
  int *v46; // [rsp+130h] [rbp+30h]
  __int64 v47; // [rsp+138h] [rbp+38h]
  __int64 *v48; // [rsp+140h] [rbp+40h]
  __int64 v49; // [rsp+148h] [rbp+48h]

  v36 = 0LL;
  Buffer = 0LL;
  IoStatusBlock = 0LL;
  Pool2 = (char *)ExAllocatePool2(0x100uLL);
  v1 = KeAbPreAcquire((__int64)&SshpSessionManagerLock, 0LL);
  v2 = _interlockedbittestandset64((volatile signed __int32 *)&SshpSessionManagerLock, 0LL);
  v3 = v1;
  if ( v2 )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&SshpSessionManagerLock, v1, (__int64)&SshpSessionManagerLock);
  if ( v3 )
    *((_BYTE *)v3 + 10) = 1;
  v4 = 0;
  v24 = 0;
  v23 = 0;
  v5 = 0;
  v6 = 0LL;
  v7 = 0;
  if ( !SshpWorkItemTryAllowNextWorker((__int64)&qword_140F05970) )
  {
    while ( 1 )
    {
      v9 = (unsigned int)dword_140F059C8;
      v10 = 0;
      LODWORD(dword_140F059C8) = 0;
      if ( (_DWORD)v9 )
        break;
LABEL_20:
      if ( SshpWorkItemTryAllowNextWorker((__int64)&qword_140F05970) )
        goto LABEL_21;
    }
    v24 = v8 + 1;
    v36 = qword_140F059A8;
    Buffer = xmmword_140F05998;
    if ( Pool2 )
    {
      memmove(Pool2, &unk_140F059CC, v9);
      v25 = Pool2;
      SSHSupportReleasePushLockExclusive((volatile signed __int64 *)&SshpSessionManagerLock);
    }
    else
    {
      v25 = (char *)&unk_140F059CC;
    }
    v11 = HIDWORD(Buffer);
    v12 = v36;
    v13 = HIDWORD(v36);
    if ( (unsigned int)v9 > HIDWORD(v36) + HIDWORD(Buffer) - (int)v36 )
    {
      HIDWORD(Buffer) = v9 - (HIDWORD(v36) - v36);
      if ( HIDWORD(Buffer) > (unsigned int)v36 )
      {
        HIDWORD(Buffer) = 0;
        LODWORD(v36) = 0;
      }
      SshpSessionManagerNormalizeLogHeader(&Buffer);
      v22 = SshpSessionManagerWriteBytes(FileHandle, 0LL, &Buffer, 24LL);
      v13 = HIDWORD(v36);
      v10 = v22;
      v12 = v36;
      v11 = HIDWORD(Buffer);
      if ( v22 < 0 )
      {
        v5 = v22;
        v23 = v4 + 1;
      }
      else
      {
        v6 += 24LL;
      }
    }
    v14 = v9;
    if ( v13 - v12 % v13 < (unsigned int)v9 )
      v14 = v13 - v12 % v13;
    v15 = v9 - v14;
    if ( v10 < 0 )
      goto LABEL_13;
    if ( v14 )
    {
      v19 = SshpSessionManagerWriteBytes(FileHandle, v12 % v13 + 4096, v25, v14);
      if ( v19 < 0 )
        v5 = v19;
      else
        v6 += v14;
      v13 = HIDWORD(v36);
      v12 = v14 + v36;
      v11 = HIDWORD(Buffer);
      LODWORD(v36) = v14 + v36;
      if ( v19 < 0 )
      {
        ++v7;
LABEL_13:
        v4 = v23;
LABEL_14:
        ZwFlushBuffersFile(FileHandle, &IoStatusBlock);
        if ( v25 == Pool2 )
        {
          v16 = KeAbPreAcquire((__int64)&SshpSessionManagerLock, 0LL);
          v2 = _interlockedbittestandset64((volatile signed __int32 *)&SshpSessionManagerLock, 0LL);
          v17 = v16;
          if ( v2 )
            ExfAcquirePushLockExclusiveEx(
              (unsigned __int64 *)&SshpSessionManagerLock,
              v16,
              (__int64)&SshpSessionManagerLock);
          if ( v17 )
            *((_BYTE *)v17 + 10) = 1;
        }
        xmmword_140F05998 = Buffer;
        qword_140F059A8 = v36;
        goto LABEL_20;
      }
    }
    if ( v15 )
    {
      v20 = SshpSessionManagerWriteBytes(FileHandle, v12 % v13 + 4096, &v25[v14], v15);
      if ( v20 < 0 )
        v5 = v20;
      else
        v6 += v15;
      v12 = v15 + v36;
      LODWORD(v36) = v15 + v36;
      if ( v20 < 0 )
      {
        ++v7;
        goto LABEL_13;
      }
      v13 = HIDWORD(v36);
      v11 = HIDWORD(Buffer);
    }
    if ( v12 >= 2 * v13 )
    {
      do
      {
        v12 -= v13;
        v11 -= v13;
      }
      while ( v12 >= 2 * v13 );
      LODWORD(v36) = v12;
      HIDWORD(Buffer) = v11;
    }
    ByteOffset.QuadPart = 0LL;
    DWORD2(Buffer) = ~(v13 + v12 + v11 + Buffer + DWORD1(Buffer));
    v33 = 0LL;
    v21 = ZwWriteFile(FileHandle, 0LL, 0LL, 0LL, &v33, &Buffer, 0x18u, &ByteOffset, 0LL);
    if ( v21 >= 0 )
    {
      if ( v33.Information == 24 )
      {
        v6 += 24LL;
        goto LABEL_13;
      }
      v5 = -1073741807;
    }
    else
    {
      v5 = v21;
    }
    v4 = ++v23;
    goto LABEL_14;
  }
LABEL_21:
  KeSetEvent(&stru_140F059B0, 0, 0);
  SSHSupportReleasePushLockExclusive((volatile signed __int64 *)&SshpSessionManagerLock);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0x5250535Fu);
  result = SshpTelemetryHandleRegistered;
  if ( SshpTelemetryHandleRegistered && (unsigned int)dword_140E08410 > 5 )
  {
    result = tlgKeywordOn((__int64)&dword_140E08410, 0x400000000000LL);
    if ( result )
    {
      v31 = v6;
      v39 = 8LL;
      v38 = &v31;
      v49 = 8LL;
      v40 = &v26;
      v26 = v4;
      v42 = &v27;
      v41 = 4LL;
      v44 = &v28;
      v29 = v24;
      v46 = &v29;
      v48 = &v32;
      v27 = v7;
      v43 = 4LL;
      v28 = v5;
      v45 = 4LL;
      v47 = 4LL;
      v32 = 0x1000000LL;
      return tlgWriteTransfer_EtwWriteTransfer(
               (__int64)&dword_140E08410,
               (unsigned __int8 *)byte_14004E361,
               0LL,
               0LL,
               8u,
               &v37);
    }
  }
  return result;
}
