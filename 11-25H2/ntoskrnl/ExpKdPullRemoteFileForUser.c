/*
 * XREFs of ExpKdPullRemoteFileForUser @ 0x1407B2BE4
 * Callers:
 *     NtSystemDebugControl @ 0x140A53910 (NtSystemDebugControl.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x14029B450 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029B5A0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     DbgPrintEx @ 0x1403A9690 (DbgPrintEx.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     KeComputeSha256 @ 0x14049D8F0 (KeComputeSha256.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     memcmp @ 0x1406B4C10 (memcmp.c)
 *     ExRaiseDatatypeMisalignment @ 0x14085AF60 (ExRaiseDatatypeMisalignment.c)
 *     RtlDowncaseUnicodeString @ 0x1409C2E30 (RtlDowncaseUnicodeString.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 *     KdPullRemoteFile @ 0x140B66618 (KdPullRemoteFile.c)
 */

__int64 __fastcall ExpKdPullRemoteFileForUser(_OWORD *a1)
{
  int v1; // r15d
  char PreviousMode; // dl
  wchar_t *Pool2; // rax
  int v5; // r14d
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v7; // rdi
  int v8; // r13d
  char *v9; // r14
  int v10; // edi
  int v11; // esi
  int v12; // eax
  struct _KTHREAD *v13; // rax
  __int64 *v14; // rax
  __int64 *v15; // rdi
  __int64 v17; // rsi
  _DWORD *v18; // rdi
  int v19; // r13d
  int v20; // edi
  int v21; // r14d
  int v22; // eax
  int v23; // r15d
  int v24; // edi
  __int64 v25; // rdi
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
    Pool2 = (wchar_t *)ExAllocatePool2(0x40uLL);
    SourceString.Buffer = Pool2;
    if ( !Pool2 )
      return 3221225626LL;
    SourceString.Length = (unsigned __int16)Src[0];
    SourceString.MaximumLength = (unsigned __int16)Src[0];
    memmove(Pool2, Src[1], LOWORD(Src[0]));
    DestinationString.Buffer = (wchar_t *)ExAllocatePool2(0x40uLL);
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
      v7 = KeAbPreAcquire((__int64)&ExpSysDbgLock, 0LL);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&ExpSysDbgLock, 17LL, 0LL) )
        ExfAcquirePushLockSharedEx((signed __int64 *)&ExpSysDbgLock, 0, v7, (unsigned __int64)&ExpSysDbgLock);
      if ( v7 )
        *((_BYTE *)v7 + 10) = 1;
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
    v14 = KeAbPreAcquire((__int64)&ExpSysDbgLock, 0LL);
    v15 = v14;
    if ( _interlockedbittestandset64((volatile signed __int32 *)&ExpSysDbgLock, 0LL) )
      ExfAcquirePushLockExclusiveEx(&ExpSysDbgLock, v14, (__int64)&ExpSysDbgLock);
    if ( v15 )
      *((_BYTE *)v15 + 10) = 1;
    v17 = -1LL;
    if ( !ExpSysDbgPulledFileTable )
      goto LABEL_39;
    if ( *(int *)ExpSysDbgPulledFileTable >= 0x1FFFFFFF )
      goto LABEL_69;
    if ( *(_DWORD *)ExpSysDbgPulledFileTable == *((_DWORD *)ExpSysDbgPulledFileTable + 1) )
LABEL_39:
      v17 = ExAllocatePool2(0x100uLL);
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
        v18 = ExpSysDbgPulledFileTable;
        if ( ExpSysDbgPulledFileTable )
        {
          memmove((void *)v17, ExpSysDbgPulledFileTable, 8LL * *(int *)ExpSysDbgPulledFileTable + 16);
          *(_DWORD *)(v17 + 4) = 2 * v18[1];
          ExFreePoolWithTag(v18, 0);
        }
        ExpSysDbgPulledFileTable = (PVOID)v17;
      }
      v19 = 0;
      v20 = *(_DWORD *)v17 - 1;
      while ( v20 >= v19 )
      {
        v21 = (v20 + v19) >> 1;
        v22 = memcmp(Buf1, (const void *)(v17 + 8 * (v21 + 1LL)), 8uLL);
        if ( v22 >= 0 )
        {
          if ( v22 <= 0 )
          {
            v1 = 1;
            break;
          }
          v19 = v21 + 1;
        }
        else
        {
          if ( !v21 )
            break;
          v20 = v21 - 1;
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
          || (DbgPrintEx(0x66u, 2u, "ExpKdPullRemoteFileForUser: Pulled %wZ from kd\n", &SourceString), ExpSysDbgPullOnce) )
        {
          if ( v20 < v19 )
          {
            v19 = 0;
            v20 = *(_DWORD *)v17 - 1;
            if ( !*(_DWORD *)v17 )
            {
              *(_QWORD *)(v17 + 8) = Buf1[0];
              *(_DWORD *)v17 = 1;
              v17 = 0LL;
            }
          }
          if ( v17 )
          {
            v23 = 0;
            if ( v19 >= 0 )
              v23 = v19;
            v24 = v20 + 1;
            while ( v23 < v24 && memcmp(Buf1, (const void *)(v17 + 8 * (v23 + 1LL)), 8uLL) >= 0 )
              ++v23;
            v25 = v17 + 8LL * v23;
            memmove((void *)(v17 + 8 * (v23 + 1 + 1LL)), (const void *)(v25 + 8), 8LL * (*(_DWORD *)v17 - v23));
            ++*(_DWORD *)v17;
            *(_QWORD *)(v25 + 8) = Buf1[0];
          }
        }
      }
      goto LABEL_70;
    }
LABEL_69:
    v5 = -1073741670;
LABEL_70:
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpSysDbgLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&ExpSysDbgLock);
    KeAbPostRelease((ULONG_PTR)&ExpSysDbgLock);
    KeLeaveCriticalRegion();
    goto LABEL_31;
  }
  return 3221225485LL;
}
