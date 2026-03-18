/*
 * XREFs of EtwpCoverageEnsureContext @ 0x140903F90
 * Callers:
 *     EtwTelemetryCoverageReport @ 0x140457F60 (EtwTelemetryCoverageReport.c)
 *     EtwSetProcessTelemetryCoverage @ 0x1409047E8 (EtwSetProcessTelemetryCoverage.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     MiRemoveFromSystemSpace @ 0x14026086C (MiRemoveFromSystemSpace.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     KeInitializeTimer2 @ 0x1403BF2C0 (KeInitializeTimer2.c)
 *     KeSetTimer2 @ 0x1403C20A0 (KeSetTimer2.c)
 *     EtwTelemetryCoverageReport @ 0x140457F60 (EtwTelemetryCoverageReport.c)
 *     TelemetryCoverageStringHashInternal @ 0x1404CA964 (TelemetryCoverageStringHashInternal.c)
 *     Feature_Servicing_WinDiagCovNullInit__private_IsEnabledDeviceUsageNoInline @ 0x14064F8C0 (Feature_Servicing_WinDiagCovNullInit__private_IsEnabledDeviceUsageNoInline.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     EtwpCoverageEnsureStringBuffer @ 0x1407AABAC (EtwpCoverageEnsureStringBuffer.c)
 *     EtwpCoverageFreeStringBuffers @ 0x1407AAD70 (EtwpCoverageFreeStringBuffers.c)
 *     MmCreateSection @ 0x140940B50 (MmCreateSection.c)
 *     MmMapViewInSessionSpace @ 0x140946C00 (MmMapViewInSessionSpace.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 EtwpCoverageEnsureContext()
{
  int v0; // esi
  unsigned int v1; // edx
  char v2; // cl
  _QWORD *Pool2; // rax
  __int64 v4; // rdi
  _QWORD *v5; // r13
  void *v6; // rax
  _QWORD *v7; // rcx
  _QWORD *v8; // rax
  unsigned __int64 v9; // rbp
  PVOID v10; // r8
  _QWORD *v11; // rax
  _QWORD *v12; // rax
  int v13; // ebx
  void *v14; // rcx
  __int64 v15; // r14
  unsigned int v16; // ebx
  __int64 v17; // rcx
  __int64 v18; // rcx
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v20; // rax
  signed __int8 v21; // cf
  _QWORD *v22; // rsi
  PVOID v23; // rax
  ULONG_PTR v24; // rcx
  void *v25; // rcx
  __int64 v27; // [rsp+40h] [rbp-48h] BYREF
  __int64 v28; // [rsp+48h] [rbp-40h]
  __int64 v29; // [rsp+50h] [rbp-38h]
  __int64 v30; // [rsp+58h] [rbp-30h]
  __int64 v31; // [rsp+60h] [rbp-28h]
  __int64 v32; // [rsp+68h] [rbp-20h]
  int v33; // [rsp+70h] [rbp-18h]
  __int64 v34; // [rsp+78h] [rbp-10h]
  int v35; // [rsp+90h] [rbp+8h] BYREF
  __int64 v36; // [rsp+98h] [rbp+10h] BYREF
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
  Pool2 = (_QWORD *)ExAllocatePool2(0x100uLL);
  v4 = (__int64)Pool2;
  v5 = Pool2;
  if ( !Pool2 )
    return (unsigned int)-1073741670;
  memset_0(Pool2, 0, 0x48uLL);
  if ( (unsigned int)Feature_Servicing_WinDiagCovNullInit__private_IsEnabledDeviceUsageNoInline() )
  {
    *(_QWORD *)(v4 + 56) = v4 + 48;
    *(_QWORD *)(v4 + 48) = v4 + 48;
  }
  v6 = (void *)ExAllocatePool2(0x40uLL);
  *(_QWORD *)v4 = v6;
  if ( !v6 )
  {
    v0 = -1073741670;
LABEL_49:
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
  v8 = (_QWORD *)(*(_QWORD *)v4 + 40LL);
  v7[3] = 0LL;
  v8[1] = v8;
  *v8 = v8;
  v7[9] = EtwpCoverageHighIrqlCPWorkItemCallback;
  v7[10] = v4;
  v7[7] = 0LL;
  if ( !(unsigned int)Feature_Servicing_WinDiagCovNullInit__private_IsEnabledDeviceUsageNoInline() )
  {
    *(_QWORD *)(v4 + 56) = v4 + 48;
    *(_QWORD *)(v4 + 48) = v4 + 48;
  }
  *(_DWORD *)(v4 + 28) = EtwpCoverageFlushPeriod;
  v9 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  *(_DWORD *)(*(_QWORD *)v4 + 16LL) = v9;
  v10 = *(PVOID *)v4;
  *(_DWORD *)(v4 + 24) = v9;
  KeInitializeTimer2((__int64)v10 + 104, (__int64)EtwpCoverageResetTimerCallback, (__int64)v10, 8LL);
  KeInitializeTimer2(*(_QWORD *)v4 + 240LL, (__int64)EtwpCoverageFlushTimerCallback, *(_QWORD *)v4, 8LL);
  v11 = *(_QWORD **)v4;
  v11[53] = EtwpCoverageResetWorkItemCallback;
  v11[54] = v4;
  v11[51] = 0LL;
  v12 = *(_QWORD **)v4;
  v12[49] = EtwpCoverageFlushWorkItemCallback;
  v12[50] = v4;
  v12[47] = 0LL;
  v0 = EtwpCoverageEnsureStringBuffer(v4);
  if ( v0 < 0 )
    goto LABEL_49;
  v13 = 4 * EtwpCoverageEntryCount;
  v36 = 4LL * (unsigned int)EtwpCoverageEntryCount;
  v0 = MmCreateSection(v4 + 8, 983071LL, 0LL, &v36, 4, 0x8000000, 0LL, 0LL, v27, v28, v29, v30, v31, v32, v33, v34);
  if ( v0 < 0 )
    goto LABEL_49;
  v14 = *(void **)(v4 + 8);
  v15 = v4 + 16;
  ViewSize = 0LL;
  v0 = MmMapViewInSessionSpace(v14, (PVOID *)(v4 + 16), &ViewSize);
  if ( v0 < 0 )
    goto LABEL_49;
  **(_BYTE **)v15 = 2;
  *(_BYTE *)(*(_QWORD *)v15 + 1LL) = 1;
  *(_DWORD *)(*(_QWORD *)v15 + 24LL) = 1;
  **(_DWORD **)v4 = *(_DWORD *)(*(_QWORD *)v15 + 24LL);
  *(_DWORD *)(MmWriteableSharedUserData + 892) = *(_DWORD *)(*(_QWORD *)v15 + 24LL);
  *(_DWORD *)(*(_QWORD *)v15 + 20LL) = v9;
  *(_DWORD *)(*(_QWORD *)v4 + 20LL) = *(_DWORD *)(*(_QWORD *)v15 + 20LL);
  v16 = (unsigned int)(v13 - 52) >> 2;
  *(_DWORD *)(*(_QWORD *)v15 + 8LL) = EtwpCoverageEntryCount - 1;
  v17 = 2LL;
  do
  {
    *(_DWORD *)(*(_QWORD *)v15 + 4LL) = v16;
    --v17;
  }
  while ( v17 );
  v18 = *(_QWORD *)(v4 + 16);
  *(_DWORD *)(v4 + 32) = 3 * (v16 >> 2);
  *(_DWORD *)(v18 + 16) = 4 * *(_DWORD *)(v18 + 4) + 52;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v20 = KeAbPreAcquire((__int64)&EtwpCoverageLock, 0LL);
  v21 = _interlockedbittestandset64((volatile signed __int32 *)&EtwpCoverageLock, 0LL);
  v22 = v20;
  if ( v21 )
    ExfAcquirePushLockExclusiveEx(&EtwpCoverageLock, (__int64)v20, (__int64)&EtwpCoverageLock);
  if ( v22 )
    *((_BYTE *)v22 + 10) = 1;
  EtwpCoverageLockOwner = (__int64)KeGetCurrentThread();
  if ( !EtwpCoverageContext )
  {
    v23 = *(PVOID *)v4;
    EtwpCoverageContext = v4;
    v4 = 0LL;
    EtwpCoverageNonPagedContext = (__int64)v23;
    if ( EtwpCoverageCoreTracingEnabled )
    {
      *(_WORD *)(v5[2] + 2LL) |= 1u;
      *(_DWORD *)(MmWriteableSharedUserData + 892) = -256;
    }
    v27 = 0LL;
    v28 = -1LL;
    KeSetTimer2(
      *(_QWORD *)EtwpCoverageContext + 104LL,
      -10000LL * (unsigned int)EtwpCoverageResetPeriod,
      10000LL * (unsigned int)EtwpCoverageResetPeriod,
      (__int64)&v27);
  }
  EtwpCoverageLockOwner = 0LL;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EtwpCoverageLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&EtwpCoverageLock);
  KeAbPostRelease((ULONG_PTR)&EtwpCoverageLock);
  KeLeaveCriticalRegion();
  if ( (unsigned int)dword_140E09204 < MEMORY[0xFFFFF7800000037C] )
  {
    if ( !dword_140E09200 )
    {
      v35 = 0;
      dword_140E09200 = TelemetryCoverageStringHashInternal(off_140E091F8, &v35);
    }
    EtwTelemetryCoverageReport(&off_140E091F8);
  }
  if ( EtwpCoverageCoreTracingEnabled && (unsigned int)dword_140E091EC < MEMORY[0xFFFFF7800000037C] )
  {
    if ( !dword_140E091E8 )
    {
      v35 = 0;
      dword_140E091E8 = TelemetryCoverageStringHashInternal(off_140E091E0, &v35);
    }
    EtwTelemetryCoverageReport(&off_140E091E0);
  }
  v0 = 0;
  if ( v4 )
    goto LABEL_49;
  return (unsigned int)v0;
}
