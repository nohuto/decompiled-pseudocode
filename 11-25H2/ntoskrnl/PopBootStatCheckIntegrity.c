/*
 * XREFs of PopBootStatCheckIntegrity @ 0x140AB0F30
 * Callers:
 *     PopPowerInformationInternal @ 0x140A1B29C (PopPowerInformationInternal.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     RtlCheckBootStatusIntegrity @ 0x140773934 (RtlCheckBootStatusIntegrity.c)
 *     ExRaiseDatatypeMisalignment @ 0x14085AF60 (ExRaiseDatatypeMisalignment.c)
 *     ProbeForWrite @ 0x140934CF0 (ProbeForWrite.c)
 *     RtlUnlockBootStatusData @ 0x140A1CA60 (RtlUnlockBootStatusData.c)
 *     RtlLockBootStatusData @ 0x140A7A490 (RtlLockBootStatusData.c)
 *     PopBootStatAccessCheck @ 0x140AA30E4 (PopBootStatAccessCheck.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopBootStatCheckIntegrity(__int64 a1)
{
  __int64 Pool2; // rsi
  KPROCESSOR_MODE PreviousMode; // r14
  unsigned __int64 v4; // rcx
  size_t v5; // r12
  int v6; // edi
  __int64 i; // rdi
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v9; // rax
  __int64 *v10; // rdi
  HANDLE FileHandle; // [rsp+28h] [rbp-50h] BYREF
  __int64 v13; // [rsp+30h] [rbp-48h]
  __int64 v14; // [rsp+38h] [rbp-40h]
  __int64 v15; // [rsp+40h] [rbp-38h]
  BOOLEAN Verified; // [rsp+88h] [rbp+10h] BYREF
  KPROCESSOR_MODE v17; // [rsp+90h] [rbp+18h]
  char v18; // [rsp+98h] [rbp+20h]

  Verified = 0;
  Pool2 = 0LL;
  FileHandle = 0LL;
  v18 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v17 = PreviousMode;
  if ( PreviousMode )
  {
    v4 = *(unsigned int *)(a1 + 8);
    v14 = (v4 * (unsigned __int128)0x18u) >> 64;
    v5 = 24 * v4;
    if ( is_mul_ok(v4, 0x18uLL) )
    {
      v6 = 0;
    }
    else
    {
      v5 = -1LL;
      v6 = -1073741675;
    }
    if ( v6 < 0 )
      goto LABEL_27;
    Pool2 = ExAllocatePool2(0x100uLL);
    v13 = Pool2;
    if ( !Pool2 )
    {
      v6 = -1073741670;
      goto LABEL_27;
    }
    if ( v5 && (*(_QWORD *)(a1 + 16) & 7) != 0 )
      ExRaiseDatatypeMisalignment();
    memmove((void *)Pool2, *(const void **)(a1 + 16), v5);
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 8); i = (unsigned int)(i + 1) )
    {
      v15 = Pool2 + 24 * i;
      ProbeForWrite(*(volatile void **)(v15 + 8), *(unsigned int *)(v15 + 16), 1u);
    }
  }
  else
  {
    Pool2 = *(_QWORD *)(a1 + 16);
    v13 = Pool2;
  }
  v18 = 1;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v9 = KeAbPreAcquire((__int64)&PopBootStatLock, 0LL);
  v10 = v9;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&PopBootStatLock, 0LL) )
    ExfAcquirePushLockExclusiveEx(&PopBootStatLock, v9, (__int64)&PopBootStatLock);
  if ( v10 )
    *((_BYTE *)v10 + 10) = 1;
  v6 = RtlLockBootStatusData(&FileHandle);
  if ( v6 >= 0 )
  {
    if ( !PreviousMode || (v6 = PopBootStatAccessCheck(FileHandle, PreviousMode, 1u), v6 >= 0) )
    {
      v6 = RtlCheckBootStatusIntegrity(FileHandle, &Verified);
      if ( v6 >= 0 )
      {
        if ( *(_DWORD *)(Pool2 + 16) )
          **(_BYTE **)(Pool2 + 8) = Verified;
        else
          v6 = -1073741811;
      }
    }
  }
LABEL_27:
  if ( FileHandle )
    RtlUnlockBootStatusData(FileHandle);
  if ( v18 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopBootStatLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&PopBootStatLock);
    KeAbPostRelease((ULONG_PTR)&PopBootStatLock);
    KeLeaveCriticalRegion();
  }
  if ( PreviousMode && Pool2 )
    ExFreePoolWithTag((PVOID)Pool2, 0);
  return (unsigned int)v6;
}
