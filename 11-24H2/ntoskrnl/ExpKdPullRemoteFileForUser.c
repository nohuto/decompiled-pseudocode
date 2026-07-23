/*
 * XREFs of ExpKdPullRemoteFileForUser @ 0x1407C4C90
 * Callers:
 *     NtSystemDebugControl @ 0x140A4F080 (NtSystemDebugControl.c)
 * Callees:
 *     DbgPrintEx @ 0x140275B40 (DbgPrintEx.c)
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLockShared @ 0x14028E410 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     KeComputeSha256 @ 0x140497580 (KeComputeSha256.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memcmp @ 0x1406C0E10 (memcmp.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 *     RtlDowncaseUnicodeString @ 0x14099A860 (RtlDowncaseUnicodeString.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 *     KdPullRemoteFile @ 0x140B78618 (KdPullRemoteFile.c)
 */

__int64 __fastcall ExpKdPullRemoteFileForUser(_OWORD *a1)
{
  int v1; // r15d
  char PreviousMode; // dl
  wchar_t *Pool2; // rax
  int v5; // r14d
  struct _KTHREAD *CurrentThread; // rax
  char *v7; // rdi
  int v8; // r13d
  char *v9; // r14
  int v10; // edi
  int v11; // esi
  int v12; // eax
  struct _KTHREAD *v13; // rax
  char *v14; // rax
  char *v15; // rdi
  __int64 v17; // rsi
  ULONG_PTR v18; // rdx
  __int64 v19; // rdx
  _DWORD *v20; // rdi
  int v21; // r13d
  int v22; // edi
  int v23; // r14d
  int v24; // eax
  int v25; // r15d
  int v26; // edi
  __int64 v27; // rdi
  UNICODE_STRING SourceString; // [rsp+38h] [rbp-A0h] BYREF
  void *Src[2]; // [rsp+48h] [rbp-90h]
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-80h] BYREF
  _QWORD Buf1[4]; // [rsp+80h] [rbp-58h] BYREF

  v1 = 0;
  *(_DWORD *)(&SourceString.MaximumLength + 1) = 0;
  *(_DWORD *)(&DestinationString.MaximumLength + 1) = 0;
  *(_OWORD *)Src = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  *(_OWORD *)Src = *a1;
  if ( PreviousMode == 1 && ((__int64)Src[1] & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  if ( LOWORD(Src[0]) && ((__int64)Src[0] & 1) == 0 && (BYTE2(Src[0]) & 1) == 0 && WORD1(Src[0]) >= LOWORD(Src[0]) )
  {
    Pool2 = (wchar_t *)ExAllocatePool2(0x40uLL, LOWORD(Src[0]), 0x46644B55u);
    SourceString.Buffer = Pool2;
    if ( !Pool2 )
      return 3221225626LL;
    SourceString.Length = (unsigned __int16)Src[0];
    SourceString.MaximumLength = (unsigned __int16)Src[0];
    memmove(Pool2, Src[1], LOWORD(Src[0]));
    DestinationString.Buffer = (wchar_t *)ExAllocatePool2(0x40uLL, LOWORD(Src[0]), 0x46644B55u);
    if ( !DestinationString.Buffer )
    {
      v5 = -1073741670;
LABEL_31:
      ExFreePoolWithTag(SourceString.Buffer, 0);
      return (unsigned int)v5;
    }
    DestinationString.Length = SourceString.Length;
    DestinationString.MaximumLength = SourceString.MaximumLength;
    RtlDowncaseUnicodeString(&DestinationString, &SourceString, 0);
    KeComputeSha256((__int64)DestinationString.Buffer, DestinationString.Length, (__int64)Buf1);
    ExFreePoolWithTag(DestinationString.Buffer, 0);
    if ( ExpSysDbgPulledFileTable )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v7 = (char *)KeAbPreAcquire((__int64)&ExpSysDbgLock, 0LL);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&ExpSysDbgLock, 17LL, 0LL) )
        ExfAcquirePushLockSharedEx((signed __int64 *)&ExpSysDbgLock, 0, v7, (__int64)&ExpSysDbgLock);
      if ( v7 )
        v7[10] = 1;
      v8 = 0;
      v9 = (char *)ExpSysDbgPulledFileTable;
      if ( ExpSysDbgPulledFileTable )
      {
        v10 = *(_DWORD *)ExpSysDbgPulledFileTable - 1;
        while ( v10 >= v1 )
        {
          v11 = (v1 + v10) >> 1;
          v12 = memcmp(Buf1, &v9[8 * v11 + 8], 8uLL);
          if ( v12 >= 0 )
          {
            v1 = 0;
            if ( v12 <= 0 )
            {
              v8 = 1;
              goto LABEL_27;
            }
            v1 = v11 + 1;
          }
          else
          {
            if ( !v11 )
              break;
            v10 = v11 - 1;
          }
        }
        v1 = 0;
      }
LABEL_27:
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&ExpSysDbgLock, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)&ExpSysDbgLock);
      KeAbPostRelease((ULONG_PTR)&ExpSysDbgLock);
      KeLeaveCriticalRegion();
      if ( v8 )
      {
        v5 = 255;
        goto LABEL_31;
      }
    }
    v13 = KeGetCurrentThread();
    --v13->KernelApcDisable;
    v14 = (char *)KeAbPreAcquire((__int64)&ExpSysDbgLock, 0LL);
    v15 = v14;
    if ( _interlockedbittestandset64((volatile signed __int32 *)&ExpSysDbgLock, 0LL) )
      ExfAcquirePushLockExclusiveEx(&ExpSysDbgLock, v14, (__int64)&ExpSysDbgLock);
    if ( v15 )
      v15[10] = 1;
    v17 = -1LL;
    if ( ExpSysDbgPulledFileTable )
    {
      if ( *(int *)ExpSysDbgPulledFileTable >= 0x1FFFFFFF )
        goto LABEL_71;
      v19 = *((int *)ExpSysDbgPulledFileTable + 1);
      if ( *(_DWORD *)ExpSysDbgPulledFileTable != (_DWORD)v19 )
      {
LABEL_42:
        if ( v17 )
        {
          if ( v17 == -1 )
          {
            v17 = (__int64)ExpSysDbgPulledFileTable;
          }
          else
          {
            *(_DWORD *)v17 = 0;
            *(_DWORD *)(v17 + 4) = 2048;
            v20 = ExpSysDbgPulledFileTable;
            if ( ExpSysDbgPulledFileTable )
            {
              memmove((void *)v17, ExpSysDbgPulledFileTable, 8LL * *(int *)ExpSysDbgPulledFileTable + 16);
              *(_DWORD *)(v17 + 4) = 2 * v20[1];
              ExFreePoolWithTag(v20, 0);
            }
            ExpSysDbgPulledFileTable = (PVOID)v17;
          }
          v21 = 0;
          v22 = *(_DWORD *)v17 - 1;
          while ( v22 >= v21 )
          {
            v23 = (v22 + v21) >> 1;
            v24 = memcmp(Buf1, (const void *)(v17 + 8 * (v23 + 1LL)), 8uLL);
            if ( v24 >= 0 )
            {
              if ( v24 <= 0 )
              {
                v1 = 1;
                break;
              }
              v21 = v23 + 1;
            }
            else
            {
              if ( !v23 )
                break;
              v22 = v23 - 1;
            }
          }
          if ( v1 )
          {
            v5 = 255;
          }
          else
          {
            v5 = KdPullRemoteFile(&SourceString, &SourceString);
            if ( v5 < 0
              || (DbgPrintEx(0x66u, 2u, "ExpKdPullRemoteFileForUser: Pulled %wZ from kd\n", &SourceString),
                  ExpSysDbgPullOnce) )
            {
              if ( v22 < v21 )
              {
                v21 = 0;
                v22 = *(_DWORD *)v17 - 1;
                if ( !*(_DWORD *)v17 )
                {
                  *(_QWORD *)(v17 + 8) = Buf1[0];
                  *(_DWORD *)v17 = 1;
                  v17 = 0LL;
                }
              }
              if ( v17 )
              {
                v25 = 0;
                if ( v21 >= 0 )
                  v25 = v21;
                v26 = v22 + 1;
                while ( v25 < v26 && memcmp(Buf1, (const void *)(v17 + 8 * (v25 + 1LL)), 8uLL) >= 0 )
                  ++v25;
                v27 = v17 + 8LL * v25;
                memmove((void *)(v17 + 8 * (v25 + 1 + 1LL)), (const void *)(v27 + 8), 8LL * (*(_DWORD *)v17 - v25));
                ++*(_DWORD *)v17;
                *(_QWORD *)(v27 + 8) = Buf1[0];
              }
            }
          }
          goto LABEL_72;
        }
LABEL_71:
        v5 = -1073741670;
LABEL_72:
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpSysDbgLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)&ExpSysDbgLock);
        KeAbPostRelease((ULONG_PTR)&ExpSysDbgLock);
        KeLeaveCriticalRegion();
        goto LABEL_31;
      }
      v18 = 16 * (v19 + 1);
    }
    else
    {
      v18 = 16400LL;
    }
    v17 = ExAllocatePool2(0x100uLL, v18, 0x66644B55u);
    goto LABEL_42;
  }
  return 3221225485LL;
}
