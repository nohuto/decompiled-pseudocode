/*
 * XREFs of PopBootStatSet @ 0x140A3F42C
 * Callers:
 *     PopPowerInformationInternal @ 0x140AC4A30 (PopPowerInformationInternal.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     RtlInitUnicodeString @ 0x1404241A0 (RtlInitUnicodeString.c)
 *     RtlpAcquireBootStatusLock @ 0x1404A8B8C (RtlpAcquireBootStatusLock.c)
 *     RtlpReleaseBootStatusLock @ 0x1404B6794 (RtlpReleaseBootStatusLock.c)
 *     RtlInitializeBootStatDataCache @ 0x1405E9650 (RtlInitializeBootStatDataCache.c)
 *     RtlpGetBootStatusPath @ 0x1405E976C (RtlpGetBootStatusPath.c)
 *     ZwOpenFile @ 0x1406A6A70 (ZwOpenFile.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     ExRaiseDatatypeMisalignment @ 0x14089B1F0 (ExRaiseDatatypeMisalignment.c)
 *     RtlUnlockBootStatusData @ 0x140A3F7A0 (RtlUnlockBootStatusData.c)
 *     RtlGetSetBootStatusData @ 0x140A3F890 (RtlGetSetBootStatusData.c)
 *     PopBootStatAccessCheck @ 0x140AA80F4 (PopBootStatAccessCheck.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopBootStatSet(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  char *Pool2; // r14
  char PreviousMode; // r13
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v6; // rax
  _QWORD *v7; // rsi
  WCHAR *v8; // r15
  NTSTATUS SetBootStatusData; // esi
  HANDLE v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r15
  const void **v13; // r12
  unsigned __int64 v14; // rax
  unsigned int v15; // ecx
  unsigned int v16; // eax
  unsigned __int64 v17; // rcx
  size_t v18; // r15
  __int64 i; // rdx
  char v21; // [rsp+30h] [rbp-D8h]
  int v22; // [rsp+38h] [rbp-D0h]
  HANDLE Handle; // [rsp+40h] [rbp-C8h]
  unsigned int v24; // [rsp+48h] [rbp-C0h]
  _DWORD v25[3]; // [rsp+4Ch] [rbp-BCh] BYREF
  char *v26; // [rsp+58h] [rbp-B0h]
  PCWSTR SourceString[2]; // [rsp+60h] [rbp-A8h] BYREF
  const void **v28; // [rsp+70h] [rbp-98h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp-90h] BYREF
  UNICODE_STRING DestinationString; // [rsp+A8h] [rbp-60h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+B8h] [rbp-50h] BYREF
  char v34; // [rsp+120h] [rbp+18h] BYREF
  char v35; // [rsp+128h] [rbp+20h]

  v2 = a1;
  v25[0] = 0;
  v24 = 0;
  v22 = 0;
  Pool2 = 0LL;
  Handle = 0LL;
  v21 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v35 = PreviousMode;
  if ( PreviousMode )
  {
    v17 = *(unsigned int *)(a1 + 8);
    SourceString[1] = (PCWSTR)((v17 * (unsigned __int128)0x18uLL) >> 64);
    v18 = 24 * v17;
    if ( is_mul_ok(v17, 0x18uLL) )
    {
      SetBootStatusData = 0;
    }
    else
    {
      v18 = -1LL;
      SetBootStatusData = -1073741675;
    }
    if ( SetBootStatusData < 0 )
      goto LABEL_27;
    Pool2 = (char *)ExAllocatePool2(0x100uLL);
    v26 = Pool2;
    if ( !Pool2 )
    {
      SetBootStatusData = -1073741670;
      goto LABEL_27;
    }
    if ( v18 && (*(_QWORD *)(v2 + 16) & 7) != 0 )
      ExRaiseDatatypeMisalignment();
    memmove(Pool2, *(const void **)(v2 + 16), v18);
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)(v2 + 8); i = (unsigned int)(i + 1) )
      v28 = (const void **)&Pool2[24 * i];
  }
  else
  {
    Pool2 = *(char **)(a1 + 16);
    v26 = Pool2;
  }
  v21 = 1;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v6 = KeAbPreAcquire((__int64)&PopBootStatLock, 0LL);
  v7 = v6;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&PopBootStatLock, 0LL) )
    ExfAcquirePushLockExclusiveEx(&PopBootStatLock, (__int64)v6, (__int64)&PopBootStatLock);
  if ( v7 )
    *((_BYTE *)v7 + 10) = 1;
  memset(&ObjectAttributes, 0, 44);
  DestinationString = 0LL;
  *(_QWORD *)&v25[1] = 0LL;
  IoStatusBlock = 0LL;
  v8 = 0LL;
  SourceString[0] = 0LL;
  v34 = 0;
  SetBootStatusData = 0;
  RtlpAcquireBootStatusLock();
  ++BootStatReferenceCount;
  if ( BootStatFileHandleAcquired )
  {
    v10 = BootStatFileHandle;
LABEL_9:
    Handle = v10;
    goto LABEL_10;
  }
  RtlpGetBootStatusPath(SourceString, &v34);
  v8 = (WCHAR *)SourceString[0];
  RtlInitUnicodeString(&DestinationString, SourceString[0]);
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 704;
  ObjectAttributes.ObjectName = &DestinationString;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  SetBootStatusData = ZwOpenFile((PHANDLE)&v25[1], 0x12019Fu, &ObjectAttributes, &IoStatusBlock, 1u, 0x20u);
  if ( SetBootStatusData >= 0 )
  {
    BootStatFileHandle = *(HANDLE *)&v25[1];
    BootStatFileHandleAcquired = 1;
    RtlInitializeBootStatDataCache();
    v10 = *(HANDLE *)&v25[1];
    goto LABEL_9;
  }
  BootStatFileHandle = 0LL;
  BootStatFileHandleAcquired = 0;
  BootStatReferenceCount = 0;
  Handle = 0LL;
LABEL_10:
  RtlpReleaseBootStatusLock();
  if ( v34 )
    ExFreePoolWithTag(v8, 0);
  if ( SetBootStatusData >= 0 )
  {
    if ( !PreviousMode
      || (LOBYTE(v11) = PreviousMode,
          SetBootStatusData = PopBootStatAccessCheck(Handle, v11, 2LL),
          SetBootStatusData >= 0) )
    {
      v12 = 0LL;
      while ( (unsigned int)v12 < *(_DWORD *)(v2 + 8) )
      {
        v13 = (const void **)&Pool2[24 * v12];
        v28 = v13;
        v14 = *(int *)v13;
        if ( (v14 & 0x80000000) != 0LL || v14 >= 0x13 )
        {
          SetBootStatusData = -1073741811;
          v16 = v22;
          v15 = v24;
        }
        else
        {
          v15 = RtlpBootStatusFields[v14];
          v24 = v15;
          v16 = HIDWORD(RtlpBootStatusFields[v14]);
          v22 = v16;
          SetBootStatusData = 0;
        }
        if ( SetBootStatusData < 0 )
          break;
        if ( *((_DWORD *)v13 + 4) < v16 )
        {
          SetBootStatusData = -1073741811;
          break;
        }
        memmove((char *)&PopBootStat + v15, v13[1], v16);
        SetBootStatusData = RtlGetSetBootStatusData(Handle, v22, (__int64)v25);
        if ( a2 )
          *(_DWORD *)(a2 + 4 * v12) = v25[0];
        v12 = (unsigned int)(v12 + 1);
        v2 = a1;
      }
    }
  }
LABEL_27:
  if ( Handle )
    RtlUnlockBootStatusData(Handle);
  if ( v21 )
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
