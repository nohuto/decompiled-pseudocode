/*
 * XREFs of PopBootStatRestoreDefaults @ 0x140AA6BD8
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
 *     RtlRestoreBootStatusDefaults @ 0x140782E08 (RtlRestoreBootStatusDefaults.c)
 *     RtlUnlockBootStatusData @ 0x140A35050 (RtlUnlockBootStatusData.c)
 *     PopBootStatAccessCheck @ 0x140AA31F4 (PopBootStatAccessCheck.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopBootStatRestoreDefaults(__int64 a1)
{
  KPROCESSOR_MODE PreviousMode; // r15
  struct _KTHREAD *CurrentThread; // rax
  char *v3; // rax
  signed __int8 v4; // cf
  char *v5; // rdi
  WCHAR *v6; // r14
  int v7; // esi
  HANDLE v8; // rdi
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-50h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+40h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  __int64 v13; // [rsp+C0h] [rbp+40h] BYREF
  HANDLE FileHandle; // [rsp+C8h] [rbp+48h] BYREF
  PCWSTR SourceString; // [rsp+D0h] [rbp+50h] BYREF

  v13 = a1;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v3 = (char *)KeAbPreAcquire((__int64)&PopBootStatLock, 0LL);
  v4 = _interlockedbittestandset64((volatile signed __int32 *)&PopBootStatLock, 0LL);
  v5 = v3;
  if ( v4 )
    ExfAcquirePushLockExclusiveEx(&PopBootStatLock, v3, (__int64)&PopBootStatLock);
  if ( v5 )
    v5[10] = 1;
  FileHandle = 0LL;
  v6 = 0LL;
  memset(&ObjectAttributes, 0, 44);
  v7 = 0;
  SourceString = 0LL;
  DestinationString = 0LL;
  LOBYTE(v13) = 0;
  IoStatusBlock = 0LL;
  RtlpAcquireBootStatusLock();
  ++BootStatReferenceCount;
  if ( BootStatFileHandleAcquired )
  {
    v8 = BootStatFileHandle;
  }
  else
  {
    RtlpGetBootStatusPath(&SourceString, (char *)&v13);
    v6 = (WCHAR *)SourceString;
    RtlInitUnicodeString(&DestinationString, SourceString);
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 704;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v7 = ZwOpenFile(&FileHandle, 0x12019Fu, &ObjectAttributes, &IoStatusBlock, 1u, 0x20u);
    if ( v7 < 0 )
    {
      BootStatFileHandle = 0LL;
      BootStatReferenceCount = 0;
      v8 = 0LL;
      BootStatFileHandleAcquired = 0;
    }
    else
    {
      BootStatFileHandle = FileHandle;
      BootStatFileHandleAcquired = 1;
      RtlInitializeBootStatDataCache();
      v8 = FileHandle;
    }
  }
  RtlpReleaseBootStatusLock();
  if ( (_BYTE)v13 )
    ExFreePoolWithTag(v6, 0);
  if ( v7 >= 0 )
  {
    if ( !PreviousMode || (v7 = PopBootStatAccessCheck(v8, PreviousMode, 1u), v7 >= 0) )
      v7 = RtlRestoreBootStatusDefaults(v8);
  }
  if ( v8 )
    RtlUnlockBootStatusData(v8);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopBootStatLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PopBootStatLock);
  KeAbPostRelease((ULONG_PTR)&PopBootStatLock);
  KeLeaveCriticalRegion();
  return (unsigned int)v7;
}
