/*
 * XREFs of EtwpCoverageEnsureContext @ 0x140ADAD8C
 * Callers:
 *     EtwTelemetryCoverageReport @ 0x14044D270 (EtwTelemetryCoverageReport.c)
 *     EtwSetProcessTelemetryCoverage @ 0x1408DCC48 (EtwSetProcessTelemetryCoverage.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     MiRemoveFromSystemSpace @ 0x140290E7C (MiRemoveFromSystemSpace.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     KeInitializeTimer2 @ 0x1403ADE80 (KeInitializeTimer2.c)
 *     KeSetTimer2 @ 0x1403B0C60 (KeSetTimer2.c)
 *     EtwTelemetryCoverageReport @ 0x14044D270 (EtwTelemetryCoverageReport.c)
 *     TelemetryCoverageStringHashInternal @ 0x1404C3E84 (TelemetryCoverageStringHashInternal.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     EtwpCoverageEnsureStringBuffer @ 0x1407AB074 (EtwpCoverageEnsureStringBuffer.c)
 *     EtwpCoverageFreeStringBuffers @ 0x1407AB240 (EtwpCoverageFreeStringBuffers.c)
 *     MmMapViewInSessionSpace @ 0x1408EB520 (MmMapViewInSessionSpace.c)
 *     MmCreateSection @ 0x14098ADB0 (MmCreateSection.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 EtwpCoverageEnsureContext()
{
  int v0; // esi
  unsigned int v1; // edx
  char v2; // cl
  _QWORD *Pool2; // rax
  __int64 v4; // rdi
  _QWORD *v5; // rbp
  void *v6; // rax
  _QWORD *v7; // rcx
  unsigned __int64 v8; // r12
  PVOID v9; // r8
  _QWORD *v10; // rax
  _QWORD *v11; // rax
  int v12; // ebx
  void *v13; // rcx
  __int64 v14; // r14
  unsigned int v15; // ebx
  __int64 v16; // rcx
  __int64 v17; // rcx
  struct _KTHREAD *CurrentThread; // rax
  char *v19; // rax
  signed __int8 v20; // cf
  char *v21; // rsi
  PVOID v22; // rax
  __int64 v23; // rdx
  ULONG_PTR v24; // rcx
  void *v25; // rcx
  _QWORD v27[9]; // [rsp+40h] [rbp-48h] BYREF
  int v28; // [rsp+90h] [rbp+8h] BYREF
  __int64 v29; // [rsp+98h] [rbp+10h] BYREF
  ULONG_PTR ViewSize; // [rsp+A0h] [rbp+18h] BYREF

  if ( (unsigned __int8)EtwpBootPhase <= 1u || (v1 = EtwpCoverageEntryCount) == 0 )
    return (unsigned int)-1073741637;
  if ( (unsigned int)EtwpCoverageEntryCount >= 0x80000 )
    v1 = 0x80000;
  if ( v1 <= 0x40 )
    v1 = 64;
  if ( ((v1 - 1) & v1) != 0 )
  {
    v2 = -1;
    do
    {
      ++v2;
      v1 >>= 1;
    }
    while ( v1 );
    v1 = 1 << v2;
  }
  EtwpCoverageEntryCount = v1;
  if ( (unsigned int)EtwpCoverageFlushPeriod <= 0x3E8 )
    EtwpCoverageFlushPeriod = 1000;
  if ( (unsigned int)EtwpCoverageResetPeriod <= 0x36EE80 )
    EtwpCoverageResetPeriod = 3600000;
  Pool2 = (_QWORD *)ExAllocatePool2(0x100uLL, 0x48uLL, 0x56777445u);
  v4 = (__int64)Pool2;
  v5 = Pool2;
  if ( !Pool2 )
    return (unsigned int)-1073741670;
  memset_0(Pool2, 0, 0x48uLL);
  *(_QWORD *)(v4 + 56) = v4 + 48;
  *(_QWORD *)(v4 + 48) = v4 + 48;
  v6 = (void *)ExAllocatePool2(0x40uLL, 0x1B8uLL, 0x56777445u);
  *(_QWORD *)v4 = v6;
  if ( !v6 )
  {
    v0 = -1073741670;
LABEL_45:
    v24 = *(_QWORD *)(v4 + 16);
    if ( v24 )
    {
      MiRemoveFromSystemSpace(v24, 1);
      *(_QWORD *)(v4 + 16) = 0LL;
    }
    v25 = *(void **)(v4 + 8);
    if ( v25 )
    {
      ObfDereferenceObject(v25);
      *(_QWORD *)(v4 + 8) = 0LL;
    }
    if ( *(_QWORD *)v4 )
      ExFreePoolWithTag(*(PVOID *)v4, 0x56777445u);
    EtwpCoverageFreeStringBuffers(v4, 0);
    ExFreePoolWithTag((PVOID)v4, 0x56777445u);
    return (unsigned int)v0;
  }
  memset_0(v6, 0, 0x1B8uLL);
  v7 = *(_QWORD **)v4;
  v7[3] = 0LL;
  v7[6] = v7 + 5;
  v7[5] = v7 + 5;
  v7[9] = EtwpCoverageHighIrqlCPWorkItemCallback;
  v7[10] = v4;
  v7[7] = 0LL;
  *(_DWORD *)(v4 + 28) = EtwpCoverageFlushPeriod;
  v8 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  *(_DWORD *)(*(_QWORD *)v4 + 16LL) = v8;
  v9 = *(PVOID *)v4;
  *(_DWORD *)(v4 + 24) = v8;
  KeInitializeTimer2((__int64)v9 + 104);
  KeInitializeTimer2(*(_QWORD *)v4 + 240LL);
  v10 = *(_QWORD **)v4;
  v10[53] = EtwpCoverageResetWorkItemCallback;
  v10[54] = v4;
  v10[51] = 0LL;
  v11 = *(_QWORD **)v4;
  v11[49] = EtwpCoverageFlushWorkItemCallback;
  v11[50] = v4;
  v11[47] = 0LL;
  v0 = EtwpCoverageEnsureStringBuffer(v4);
  if ( v0 < 0 )
    goto LABEL_45;
  v12 = 4 * EtwpCoverageEntryCount;
  v29 = 4LL * (unsigned int)EtwpCoverageEntryCount;
  v0 = MmCreateSection((int)v4 + 8, 983071LL, 0, &v29, 4, 0x8000000, 0LL, 0LL);
  if ( v0 < 0 )
    goto LABEL_45;
  v13 = *(void **)(v4 + 8);
  v14 = v4 + 16;
  ViewSize = 0LL;
  v0 = MmMapViewInSessionSpace(v13, (PVOID *)(v4 + 16), &ViewSize);
  if ( v0 < 0 )
    goto LABEL_45;
  **(_BYTE **)v14 = 2;
  *(_BYTE *)(*(_QWORD *)v14 + 1LL) = 1;
  *(_DWORD *)(*(_QWORD *)v14 + 24LL) = 1;
  **(_DWORD **)v4 = *(_DWORD *)(*(_QWORD *)v14 + 24LL);
  *(_DWORD *)(MmWriteableSharedUserData + 892) = *(_DWORD *)(*(_QWORD *)v14 + 24LL);
  *(_DWORD *)(*(_QWORD *)v14 + 20LL) = v8;
  *(_DWORD *)(*(_QWORD *)v4 + 20LL) = *(_DWORD *)(*(_QWORD *)v14 + 20LL);
  v15 = (unsigned int)(v12 - 52) >> 2;
  *(_DWORD *)(*(_QWORD *)v14 + 8LL) = EtwpCoverageEntryCount - 1;
  v16 = 2LL;
  do
  {
    *(_DWORD *)(*(_QWORD *)v14 + 4LL) = v15;
    --v16;
  }
  while ( v16 );
  v17 = *(_QWORD *)v14;
  *(_DWORD *)(v4 + 32) = 3 * (v15 >> 2);
  *(_DWORD *)(v17 + 16) = 4 * *(_DWORD *)(v17 + 4) + 52;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v19 = (char *)KeAbPreAcquire((__int64)&EtwpCoverageLock, 0LL);
  v20 = _interlockedbittestandset64((volatile signed __int32 *)&EtwpCoverageLock, 0LL);
  v21 = v19;
  if ( v20 )
    ExfAcquirePushLockExclusiveEx(&EtwpCoverageLock, v19, (__int64)&EtwpCoverageLock);
  if ( v21 )
    v21[10] = 1;
  EtwpCoverageLockOwner = (__int64)KeGetCurrentThread();
  if ( !EtwpCoverageContext )
  {
    v22 = *(PVOID *)v4;
    EtwpCoverageContext = v4;
    v4 = 0LL;
    EtwpCoverageNonPagedContext = (__int64)v22;
    if ( EtwpCoverageCoreTracingEnabled )
    {
      *(_WORD *)(v5[2] + 2LL) |= 1u;
      *(_DWORD *)(MmWriteableSharedUserData + 892) = -256;
    }
    v27[0] = 0LL;
    v27[1] = -1LL;
    KeSetTimer2(
      *(_QWORD *)EtwpCoverageContext + 104LL,
      (LARGE_INTEGER)(-10000LL * (unsigned int)EtwpCoverageResetPeriod),
      10000LL * (unsigned int)EtwpCoverageResetPeriod,
      (__int64)v27);
  }
  EtwpCoverageLockOwner = 0LL;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EtwpCoverageLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&EtwpCoverageLock);
  KeAbPostRelease((ULONG_PTR)&EtwpCoverageLock);
  KeLeaveCriticalRegion();
  if ( (unsigned int)dword_140E09274 < MEMORY[0xFFFFF7800000037C] )
  {
    if ( !dword_140E09270 )
    {
      v28 = 0;
      dword_140E09270 = TelemetryCoverageStringHashInternal(off_140E09268, &v28);
    }
    EtwTelemetryCoverageReport((__int64)&off_140E09268, v23);
  }
  if ( EtwpCoverageCoreTracingEnabled && (unsigned int)dword_140E0925C < MEMORY[0xFFFFF7800000037C] )
  {
    if ( !dword_140E09258 )
    {
      v28 = 0;
      dword_140E09258 = TelemetryCoverageStringHashInternal(off_140E09250, &v28);
    }
    EtwTelemetryCoverageReport((__int64)&off_140E09250, v23);
  }
  v0 = 0;
  if ( v4 )
    goto LABEL_45;
  return (unsigned int)v0;
}
