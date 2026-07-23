/*
 * XREFs of PopBootStatGet @ 0x140A1C0B0
 * Callers:
 *     PopPowerInformationInternal @ 0x140A1B29C (PopPowerInformationInternal.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     RtlpAcquireBootStatusLock @ 0x1404A7CE0 (RtlpAcquireBootStatusLock.c)
 *     RtlpReleaseBootStatusLock @ 0x1404B6CA4 (RtlpReleaseBootStatusLock.c)
 *     RtlInitializeBootStatDataCache @ 0x1405DD500 (RtlInitializeBootStatDataCache.c)
 *     RtlpGetBootStatusPath @ 0x1405DD61C (RtlpGetBootStatusPath.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ZwOpenFile @ 0x14069B7A0 (ZwOpenFile.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     ExRaiseDatatypeMisalignment @ 0x14085AF60 (ExRaiseDatatypeMisalignment.c)
 *     ProbeForWrite @ 0x140934CF0 (ProbeForWrite.c)
 *     RtlUnlockBootStatusData @ 0x140A1CA60 (RtlUnlockBootStatusData.c)
 *     RtlpGetSetBootStatusData @ 0x140A1CCD4 (RtlpGetSetBootStatusData.c)
 *     PopBootStatAccessCheck @ 0x140AA30E4 (PopBootStatAccessCheck.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopBootStatGet(__int64 a1, __int64 a2)
{
  char *Pool2; // r15
  char PreviousMode; // r12
  unsigned __int64 v5; // rcx
  size_t v6; // rsi
  NTSTATUS SetBootStatusData; // edi
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v10; // rax
  __int64 *v11; // rdi
  WCHAR *v12; // rsi
  HANDLE v13; // rax
  __int64 v14; // rdx
  unsigned int v15; // r13d
  unsigned int v16; // eax
  unsigned int v17; // ecx
  void **v18; // r12
  unsigned __int64 v19; // rax
  __int64 v20; // rax
  int v21; // edi
  unsigned int v22; // eax
  int v23; // ecx
  int v24; // edi
  char v25[2]; // [rsp+30h] [rbp-1C8h] BYREF
  char v26; // [rsp+32h] [rbp-1C6h]
  char v27; // [rsp+33h] [rbp-1C5h]
  unsigned int Size; // [rsp+34h] [rbp-1C4h] BYREF
  unsigned int Size_4; // [rsp+38h] [rbp-1C0h]
  char v30; // [rsp+3Ch] [rbp-1BCh]
  HANDLE FileHandle; // [rsp+40h] [rbp-1B8h]
  unsigned int v32; // [rsp+48h] [rbp-1B0h]
  HANDLE v33; // [rsp+50h] [rbp-1A8h] BYREF
  char *v34; // [rsp+58h] [rbp-1A0h]
  PCWSTR SourceString; // [rsp+60h] [rbp-198h] BYREF
  volatile void **v36; // [rsp+68h] [rbp-190h]
  void *Src; // [rsp+70h] [rbp-188h]
  int v38; // [rsp+78h] [rbp-180h]
  __int64 v39; // [rsp+80h] [rbp-178h]
  __int64 v40; // [rsp+88h] [rbp-170h]
  __int64 v41; // [rsp+90h] [rbp-168h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+98h] [rbp-160h] BYREF
  UNICODE_STRING DestinationString; // [rsp+C8h] [rbp-130h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+D8h] [rbp-120h] BYREF
  char v45[208]; // [rsp+F0h] [rbp-108h] BYREF

  v41 = a2;
  v40 = a1;
  Size = 0;
  v32 = 0;
  Pool2 = 0LL;
  FileHandle = 0LL;
  v27 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v26 = PreviousMode;
  v25[1] = PreviousMode;
  if ( PreviousMode )
  {
    v5 = *(unsigned int *)(a1 + 8);
    v39 = (v5 * (unsigned __int128)0x18u) >> 64;
    v6 = 24 * v5;
    if ( is_mul_ok(v5, 0x18uLL) )
    {
      SetBootStatusData = 0;
    }
    else
    {
      v6 = -1LL;
      SetBootStatusData = -1073741675;
    }
    if ( SetBootStatusData < 0 )
      goto LABEL_5;
    Pool2 = (char *)ExAllocatePool2(0x100uLL);
    v34 = Pool2;
    if ( !Pool2 )
    {
      SetBootStatusData = -1073741670;
      goto LABEL_5;
    }
    if ( v6 && (*(_QWORD *)(a1 + 16) & 7) != 0 )
      ExRaiseDatatypeMisalignment();
    memmove(Pool2, *(const void **)(a1 + 16), v6);
    Size_4 = 0;
    v22 = 0;
    v23 = 0;
    v24 = 0;
    while ( v22 < *(_DWORD *)(a1 + 8) )
    {
      v36 = (volatile void **)&Pool2[24 * v23];
      ProbeForWrite(v36[1], *((unsigned int *)v36 + 4), 1u);
      v22 = v24 + 1;
      Size_4 = v24 + 1;
      v23 = ++v24;
    }
  }
  else
  {
    Pool2 = *(char **)(a1 + 16);
    v34 = Pool2;
  }
  v27 = 1;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v10 = KeAbPreAcquire((__int64)&PopBootStatLock, 0LL);
  v11 = v10;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&PopBootStatLock, 0LL) )
    ExfAcquirePushLockExclusiveEx(&PopBootStatLock, v10, (__int64)&PopBootStatLock);
  if ( v11 )
    *((_BYTE *)v11 + 10) = 1;
  memset(&ObjectAttributes, 0, 44);
  DestinationString = 0LL;
  v33 = 0LL;
  IoStatusBlock = 0LL;
  v12 = 0LL;
  SourceString = 0LL;
  v25[0] = 0;
  SetBootStatusData = 0;
  RtlpAcquireBootStatusLock();
  ++BootStatReferenceCount;
  if ( BootStatFileHandleAcquired )
  {
    v13 = BootStatFileHandle;
LABEL_19:
    FileHandle = v13;
    goto LABEL_20;
  }
  RtlpGetBootStatusPath(&SourceString, v25);
  v12 = (WCHAR *)SourceString;
  RtlInitUnicodeString(&DestinationString, SourceString);
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 704;
  ObjectAttributes.ObjectName = &DestinationString;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  SetBootStatusData = ZwOpenFile(&v33, 0x12019Fu, &ObjectAttributes, &IoStatusBlock, 1u, 0x20u);
  if ( SetBootStatusData >= 0 )
  {
    BootStatFileHandle = v33;
    BootStatFileHandleAcquired = 1;
    RtlInitializeBootStatDataCache();
    v13 = v33;
    goto LABEL_19;
  }
  BootStatFileHandle = 0LL;
  BootStatFileHandleAcquired = 0;
  BootStatReferenceCount = 0;
  FileHandle = 0LL;
LABEL_20:
  RtlpReleaseBootStatusLock();
  if ( v25[0] )
    ExFreePoolWithTag(v12, 0);
  if ( SetBootStatusData >= 0 )
  {
    if ( !PreviousMode
      || (LOBYTE(v14) = PreviousMode,
          SetBootStatusData = PopBootStatAccessCheck(FileHandle, v14, 1LL),
          SetBootStatusData >= 0) )
    {
      v15 = 0;
      Size_4 = 0;
      v16 = 0;
      v17 = 0;
      while ( v16 < *(_DWORD *)(v40 + 8) )
      {
        v18 = (void **)&Pool2[24 * v17];
        v36 = (volatile void **)v18;
        v19 = *(int *)v18;
        if ( (v19 & 0x80000000) != 0LL || v19 >= 0x13 )
        {
          SetBootStatusData = -1073741811;
          v20 = v32;
        }
        else
        {
          _mm_lfence();
          v20 = LODWORD(RtlpBootStatusFields[v19]);
          v32 = v20;
          SetBootStatusData = 0;
          v18 = (void **)v36;
          v15 = Size_4;
        }
        if ( SetBootStatusData < 0 )
        {
          PreviousMode = v26;
          break;
        }
        Src = (char *)&PopBootStat + v20;
        v21 = *((_DWORD *)v18 + 4);
        v30 = 0;
        v38 = 0;
        memset_0(v45, 0, 0xC8uLL);
        SetBootStatusData = RtlpGetSetBootStatusData(FileHandle, v21, (__int64)&Size);
        if ( SetBootStatusData >= 0 && Size )
          memmove(v18[1], Src, Size);
        if ( v41 )
          *(_DWORD *)(v41 + 4LL * v15) = Size;
        v16 = ++v15;
        Size_4 = v15;
        v17 = v15;
        PreviousMode = v26;
      }
    }
  }
LABEL_5:
  if ( FileHandle )
    RtlUnlockBootStatusData(FileHandle);
  if ( v27 )
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
