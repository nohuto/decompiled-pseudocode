/*
 * XREFs of PopBootStatSet @ 0x140A34CDC
 * Callers:
 *     PopPowerInformationInternal @ 0x140AC2410 (PopPowerInformationInternal.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     RtlpAcquireBootStatusLock @ 0x1404A2FAC (RtlpAcquireBootStatusLock.c)
 *     RtlpReleaseBootStatusLock @ 0x1404B0F74 (RtlpReleaseBootStatusLock.c)
 *     RtlInitializeBootStatDataCache @ 0x1405E6BA0 (RtlInitializeBootStatDataCache.c)
 *     RtlpGetBootStatusPath @ 0x1405E6CBC (RtlpGetBootStatusPath.c)
 *     ZwOpenFile @ 0x1406A7A10 (ZwOpenFile.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 *     RtlUnlockBootStatusData @ 0x140A35050 (RtlUnlockBootStatusData.c)
 *     RtlGetSetBootStatusData @ 0x140A35140 (RtlGetSetBootStatusData.c)
 *     PopBootStatAccessCheck @ 0x140AA31F4 (PopBootStatAccessCheck.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopBootStatSet(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  char *Pool2; // r14
  char PreviousMode; // r13
  struct _KTHREAD *CurrentThread; // rax
  char *v6; // rax
  char *v7; // rsi
  WCHAR *v8; // r15
  NTSTATUS SetBootStatusData; // esi
  HANDLE v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r15
  const void **v13; // r12
  unsigned __int64 v14; // rax
  unsigned int v15; // ecx
  unsigned int v16; // eax
  char *v17; // rsi
  unsigned __int64 v18; // rcx
  ULONG_PTR v19; // r15
  __int64 i; // rdx
  char v22; // [rsp+30h] [rbp-D8h]
  ULONG BufferSize; // [rsp+38h] [rbp-D0h]
  HANDLE FileHandle; // [rsp+40h] [rbp-C8h]
  unsigned int v25; // [rsp+48h] [rbp-C0h]
  ULONG ReturnLength; // [rsp+4Ch] [rbp-BCh] BYREF
  HANDLE v27; // [rsp+50h] [rbp-B8h] BYREF
  char *v28; // [rsp+58h] [rbp-B0h]
  PCWSTR SourceString[2]; // [rsp+60h] [rbp-A8h] BYREF
  const void **v30; // [rsp+70h] [rbp-98h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp-90h] BYREF
  UNICODE_STRING DestinationString; // [rsp+A8h] [rbp-60h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+B8h] [rbp-50h] BYREF
  char v36; // [rsp+120h] [rbp+18h] BYREF
  char v37; // [rsp+128h] [rbp+20h]

  v2 = a1;
  ReturnLength = 0;
  v25 = 0;
  BufferSize = 0;
  Pool2 = 0LL;
  FileHandle = 0LL;
  v22 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v37 = PreviousMode;
  if ( PreviousMode )
  {
    v18 = *(unsigned int *)(a1 + 8);
    SourceString[1] = (PCWSTR)((v18 * (unsigned __int128)0x18uLL) >> 64);
    v19 = 24 * v18;
    if ( is_mul_ok(v18, 0x18uLL) )
    {
      SetBootStatusData = 0;
    }
    else
    {
      v19 = -1LL;
      SetBootStatusData = -1073741675;
    }
    if ( SetBootStatusData < 0 )
      goto LABEL_27;
    Pool2 = (char *)ExAllocatePool2(0x100uLL, v19, 0x206D654Du);
    v28 = Pool2;
    if ( !Pool2 )
    {
      SetBootStatusData = -1073741670;
      goto LABEL_27;
    }
    if ( v19 && (*(_QWORD *)(v2 + 16) & 7) != 0 )
      ExRaiseDatatypeMisalignment();
    memmove(Pool2, *(const void **)(v2 + 16), v19);
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)(v2 + 8); i = (unsigned int)(i + 1) )
      v30 = (const void **)&Pool2[24 * i];
  }
  else
  {
    Pool2 = *(char **)(a1 + 16);
    v28 = Pool2;
  }
  v22 = 1;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v6 = (char *)KeAbPreAcquire((__int64)&PopBootStatLock, 0LL);
  v7 = v6;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&PopBootStatLock, 0LL) )
    ExfAcquirePushLockExclusiveEx(&PopBootStatLock, v6, (__int64)&PopBootStatLock);
  if ( v7 )
    v7[10] = 1;
  memset(&ObjectAttributes, 0, 44);
  DestinationString = 0LL;
  v27 = 0LL;
  IoStatusBlock = 0LL;
  v8 = 0LL;
  SourceString[0] = 0LL;
  v36 = 0;
  SetBootStatusData = 0;
  RtlpAcquireBootStatusLock();
  ++BootStatReferenceCount;
  if ( BootStatFileHandleAcquired )
  {
    v10 = BootStatFileHandle;
LABEL_9:
    FileHandle = v10;
    goto LABEL_10;
  }
  RtlpGetBootStatusPath(SourceString, &v36);
  v8 = (WCHAR *)SourceString[0];
  RtlInitUnicodeString(&DestinationString, SourceString[0]);
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 704;
  ObjectAttributes.ObjectName = &DestinationString;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  SetBootStatusData = ZwOpenFile(&v27, 0x12019Fu, &ObjectAttributes, &IoStatusBlock, 1u, 0x20u);
  if ( SetBootStatusData >= 0 )
  {
    BootStatFileHandle = v27;
    BootStatFileHandleAcquired = 1;
    RtlInitializeBootStatDataCache();
    v10 = v27;
    goto LABEL_9;
  }
  BootStatFileHandle = 0LL;
  BootStatFileHandleAcquired = 0;
  BootStatReferenceCount = 0;
  FileHandle = 0LL;
LABEL_10:
  RtlpReleaseBootStatusLock();
  if ( v36 )
    ExFreePoolWithTag(v8, 0);
  if ( SetBootStatusData >= 0 )
  {
    if ( !PreviousMode
      || (LOBYTE(v11) = PreviousMode,
          SetBootStatusData = PopBootStatAccessCheck(FileHandle, v11, 2LL),
          SetBootStatusData >= 0) )
    {
      v12 = 0LL;
      while ( (unsigned int)v12 < *(_DWORD *)(v2 + 8) )
      {
        v13 = (const void **)&Pool2[24 * v12];
        v30 = v13;
        v14 = *(int *)v13;
        if ( (v14 & 0x80000000) != 0LL || v14 >= 0x13 )
        {
          SetBootStatusData = -1073741811;
          v16 = BufferSize;
          v15 = v25;
        }
        else
        {
          v15 = RtlpBootStatusFields[v14];
          v25 = v15;
          v16 = HIDWORD(RtlpBootStatusFields[v14]);
          BufferSize = v16;
          SetBootStatusData = 0;
        }
        if ( SetBootStatusData < 0 )
          break;
        if ( *((_DWORD *)v13 + 4) < v16 )
        {
          SetBootStatusData = -1073741811;
          break;
        }
        v17 = (char *)&PopBootStat + v15;
        memmove(v17, v13[1], v16);
        SetBootStatusData = RtlGetSetBootStatusData(
                              FileHandle,
                              0,
                              *(RTL_BSD_ITEM_TYPE *)v13,
                              v17,
                              BufferSize,
                              &ReturnLength);
        if ( a2 )
          *(_DWORD *)(a2 + 4 * v12) = ReturnLength;
        v12 = (unsigned int)(v12 + 1);
        v2 = a1;
      }
    }
  }
LABEL_27:
  if ( FileHandle )
    RtlUnlockBootStatusData(FileHandle);
  if ( v22 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopBootStatLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&PopBootStatLock);
    KeAbPostRelease((ULONG_PTR)&PopBootStatLock);
    KeLeaveCriticalRegion();
  }
  if ( PreviousMode && Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  return (unsigned int)SetBootStatusData;
}
