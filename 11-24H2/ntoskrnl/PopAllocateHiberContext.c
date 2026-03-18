/*
 * XREFs of PopAllocateHiberContext @ 0x140AC688C
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140B667DC (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     MmBuildMdlForNonPagedPool @ 0x140263DD0 (MmBuildMdlForNonPagedPool.c)
 *     PoSetHiberRange @ 0x1402649E0 (PoSetHiberRange.c)
 *     RtlSetAllBits @ 0x1402E5D90 (RtlSetAllBits.c)
 *     RtlClearAllBits @ 0x140448960 (RtlClearAllBits.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     Feature_VpciVscBootDiskHibernation__private_IsEnabledDeviceUsageNoInline @ 0x1405CCCC8 (Feature_VpciVscBootDiskHibernation__private_IsEnabledDeviceUsageNoInline.c)
 *     PopInternalAddToDumpFile @ 0x1405CCEA0 (PopInternalAddToDumpFile.c)
 *     Feature_CrashDumpOneMBTransferSize__private_IsEnabledDeviceUsageNoInline @ 0x1405D3348 (Feature_CrashDumpOneMBTransferSize__private_IsEnabledDeviceUsageNoInline.c)
 *     ZwQuerySystemInformation @ 0x1406A6AD0 (ZwQuerySystemInformation.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     PopFreeHiberContext @ 0x1406FB788 (PopFreeHiberContext.c)
 *     HvlAllocateHibernateResources @ 0x14070F454 (HvlAllocateHibernateResources.c)
 *     VslAllocateSecureHibernateResources @ 0x14070F508 (VslAllocateSecureHibernateResources.c)
 *     PopHiberInitializeResources @ 0x1407524BC (PopHiberInitializeResources.c)
 *     PopBcdEstablishResumeObject @ 0x1407633AC (PopBcdEstablishResumeObject.c)
 *     PopBcdSetPendingResume @ 0x1407639CC (PopBcdSetPendingResume.c)
 *     MmMarkHiberRange @ 0x1407ED740 (MmMarkHiberRange.c)
 *     BcdForciblyUnloadStore @ 0x140811C84 (BcdForciblyUnloadStore.c)
 *     BcdCloseStore @ 0x14085EED8 (BcdCloseStore.c)
 *     BcdCloseObject @ 0x1409BF5DC (BcdCloseObject.c)
 *     BcdOpenStore @ 0x1409C2038 (BcdOpenStore.c)
 *     PopLoadResumeContext @ 0x140AB8C88 (PopLoadResumeContext.c)
 *     MmLockPreChargedPagedPool @ 0x140ABD5D0 (MmLockPreChargedPagedPool.c)
 *     IoGetDumpStack @ 0x140AC06BC (IoGetDumpStack.c)
 *     BgkResumePrepare @ 0x140B5368C (BgkResumePrepare.c)
 *     PopGetBitlockerKeyLocation @ 0x140B5B7BC (PopGetBitlockerKeyLocation.c)
 *     PopGetHwConfigurationSignature @ 0x140B5CE34 (PopGetHwConfigurationSignature.c)
 *     PopCheckpointSystemSleep @ 0x140B6675C (PopCheckpointSystemSleep.c)
 *     PopDiscardRange @ 0x140B6A2D8 (PopDiscardRange.c)
 *     PopAllocatePages @ 0x140B6E34C (PopAllocatePages.c)
 */

__int64 __fastcall PopAllocateHiberContext(_DWORD *a1)
{
  int DumpStack; // edi
  char *v3; // rbx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rcx
  ULONG_PTR *v7; // r12
  ULONG_PTR v8; // r15
  char v9; // cl
  char v10; // r8
  __int16 v11; // dx
  char v12; // cl
  __int64 v13; // r8
  __int16 v14; // dx
  unsigned __int64 v15; // rcx
  __int16 v16; // ax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int16 v19; // ax
  __int64 v20; // rcx
  __int64 v21; // r14
  __int64 v22; // rdx
  __int64 v23; // r8
  unsigned __int64 v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  unsigned int v28; // eax
  bool v29; // zf
  unsigned int v30; // edx
  unsigned int v31; // ecx
  __int64 Pages; // rax
  __int64 **v33; // r13
  __int64 *i; // rdi
  int v35; // eax
  __int64 v36; // rax
  PVOID *v37; // r12
  __int64 v38; // rax
  __int64 v39; // rcx
  PVOID *v40; // rdi
  __int64 v41; // r14
  int IsEnabledDeviceUsageNoInline; // eax
  unsigned __int64 v44; // [rsp+30h] [rbp-10h] BYREF
  __int16 v45; // [rsp+88h] [rbp+48h] BYREF
  __int64 v46; // [rsp+90h] [rbp+50h] BYREF
  __int64 v47; // [rsp+98h] [rbp+58h] BYREF

  v47 = 0LL;
  v44 = 0LL;
  v45 = 0;
  if ( dword_140F0B134 != 5 )
    return 0;
  v3 = (char *)MemoryMap;
  v46 = 0LL;
  BugCheckParameter4 = (ULONG_PTR)MemoryMap;
  memset_0(MemoryMap, 0, 0x1F0uLL);
  if ( (unsigned int)Feature_VpciVscBootDiskHibernation__private_IsEnabledDeviceUsageNoInline() )
    v3[489] = 1;
  MmLockPreChargedPagedPool((unsigned __int64)qword_140F0AD90);
  PopNumberOfPagesForHibernateProcess = 0;
  *((_OWORD *)v3 + 2) = xmmword_140F0ADB0;
  *((_OWORD *)v3 + 4) = xmmword_140F0ADC0;
  *((_QWORD *)v3 + 27) = qword_140F0ADA0;
  *((_QWORD *)v3 + 44) = qword_140F0AE00;
  *((_QWORD *)v3 + 29) = qword_140F0ADE0;
  *((_QWORD *)v3 + 30) = qword_140F0AE10;
  *((_QWORD *)v3 + 31) = qword_140F0AE08;
  *((_OWORD *)v3 + 3) = xmmword_140F0ADD0;
  *((_QWORD *)v3 + 11) = v3 + 80;
  *((_QWORD *)v3 + 10) = v3 + 80;
  if ( !FileObject )
  {
    DumpStack = -1073741809;
    *a1 = 10;
    v6 = 42LL;
LABEL_56:
    PopCheckpointSystemSleep(v6);
    goto LABEL_57;
  }
  v7 = (ULONG_PTR *)(v3 + 184);
  DumpStack = IoGetDumpStack(v4, (__int64)(v3 + 184), v5, PopSimulate & 0x10);
  if ( DumpStack < 0 )
  {
    *a1 = 10;
    v6 = 43LL;
    goto LABEL_56;
  }
  v8 = *v7;
  v9 = 0;
  if ( dword_140F0B10C < 0 && dword_140F0B114 == 2 )
    v9 = 2;
  v10 = v9 | 1;
  v11 = __readcr4();
  v12 = v9 | 9;
  if ( (v11 & 0x1000) == 0 )
    v12 = v10;
  v13 = *((_QWORD *)v3 + 29);
  *v3 = v12;
  v14 = qword_140F0ADA8;
  v15 = qword_140F0ADA8 & 0xFFFFFFFFFFFFF000uLL;
  v16 = qword_140F0ADA8;
  *(_QWORD *)v13 = 0LL;
  *(_WORD *)(v13 + 10) = 0;
  *(_QWORD *)(v13 + 32) = v15;
  *(_DWORD *)(v13 + 44) = v14 & 0xFFF;
  *(_WORD *)(v13 + 8) = 8 * ((((unsigned __int64)(v16 & 0xFFF) + 102399) >> 12) + 6);
  *(_DWORD *)(v13 + 40) = 98304;
  MmBuildMdlForNonPagedPool(*((PMDL *)v3 + 29));
  v17 = *((_QWORD *)v3 + 30);
  if ( v17 )
  {
    v18 = qword_140F0AE08;
    v19 = qword_140F0AE08;
    *(_QWORD *)v17 = 0LL;
    *(_WORD *)(v17 + 10) = 0;
    *(_DWORD *)(v17 + 40) = 4096;
    *(_WORD *)(v17 + 8) = 8 * (((unsigned __int16)((v19 & 0xFFF) + 0x1FFF) >> 12) + 6);
    *(_QWORD *)(v17 + 32) = v18 & 0xFFFFFFFFFFFFF000uLL;
    *(_DWORD *)(v17 + 44) = v18 & 0xFFF;
    MmBuildMdlForNonPagedPool(*((PMDL *)v3 + 30));
  }
  DumpStack = PopLoadResumeContext((__int64)v3);
  if ( DumpStack < 0 )
  {
    *a1 = 12;
    v6 = 44LL;
    goto LABEL_56;
  }
  DumpStack = BcdOpenStore(v20, 2, &v47);
  if ( DumpStack < 0 )
  {
    *a1 = 13;
    v6 = 45LL;
    goto LABEL_56;
  }
  v21 = v47;
  DumpStack = PopBcdEstablishResumeObject(v47, &v46);
  if ( DumpStack < 0 )
  {
    *a1 = 14;
    BcdCloseStore(v21);
    v6 = 46LL;
    goto LABEL_56;
  }
  DumpStack = PopBcdSetPendingResume(v21, v22, v23, v46);
  BcdCloseObject((void *)v46);
  if ( DumpStack < 0 )
  {
    *a1 = 15;
    BcdCloseStore(v21);
    v6 = 47LL;
    goto LABEL_56;
  }
  BcdForciblyUnloadStore(v21);
  RtlClearAllBits((PRTL_BITMAP)v3 + 3);
  RtlSetAllBits((PRTL_BITMAP)v3 + 4);
  RtlSetAllBits((PRTL_BITMAP)v3 + 2);
  *((_DWORD *)v3 + 120) = PopGetHwConfigurationSignature();
  PopHiberInitializeResources(v3);
  if ( (int)PopGetBitlockerKeyLocation(&v44) >= 0 )
  {
    v24 = v44 >> 12;
    *((_QWORD *)v3 + 43) = v44 >> 12;
    PopDiscardRange(v3, v24, 4LL);
  }
  if ( !KdPitchDebugger || KdEventLoggingEnabled )
  {
    PoSetHiberRange(v3, 2u, &KdTimerDifference, 0LL, 0x20676244u);
    PoSetHiberRange(v3, 2u, &KdDebuggerLock, 0LL, 0x20676244u);
  }
  MmMarkHiberRange((__int64)v3, xmmword_140F0AD68);
  guard_dispatch_icall_no_overrides(v3, v25, v26, v27);
  v28 = (unsigned int)((*((_DWORD *)v3 + 8) >> 3) + 4095) >> 12;
  v29 = *((_QWORD *)v3 + 34) == 0LL;
  v30 = v28;
  *((_DWORD *)v3 + 42) = v28;
  if ( !v29 )
  {
    v31 = *((_DWORD *)v3 + 70);
    if ( v31 > v28 )
    {
      *((_DWORD *)v3 + 42) = v31;
      v30 = v31;
    }
  }
  Pages = PopAllocatePages(v30);
  DumpStack = *((_DWORD *)v3 + 51);
  *((_QWORD *)v3 + 20) = Pages;
  if ( DumpStack < 0 )
  {
    *a1 = 16;
    v6 = 48LL;
    goto LABEL_56;
  }
  if ( *(_BYTE *)(*v7 + 280) )
  {
    v33 = (__int64 **)(*(_QWORD *)(*v7 + 272) + 40LL);
    for ( i = *v33; i != (__int64 *)v33; i = (__int64 *)*i )
    {
      v35 = *((_DWORD *)i + 16);
      if ( v35 )
      {
        if ( (v35 & 0xFFF) != 0 )
        {
          PopInternalAddToDumpFile((__int64)(i - 1), 0x70u, 0LL);
          PopInternalAddToDumpFile((__int64)v3, 0x1F0u, 0LL);
          PopCheckpointSystemSleep(49LL);
          KeBugCheckEx(0xA0u, 0x102uLL, 0xAuLL, v8, (ULONG_PTR)v3);
        }
        v36 = 2LL;
        v37 = (PVOID *)(i + 9);
        v46 = 2LL;
        do
        {
          if ( *v37 )
          {
            PoSetHiberRange(v3, 0x8000u, *v37, *((unsigned int *)i + 16), 0x66756263u);
            v36 = v46;
          }
          ++v37;
          v46 = --v36;
        }
        while ( v36 );
      }
    }
  }
  else
  {
    v38 = PopAllocatePages(16LL);
    *(_QWORD *)(v8 + 8) = v38;
    if ( !v38 )
    {
      DumpStack = *((_DWORD *)v3 + 51);
      *a1 = 17;
      PopCheckpointSystemSleep(50LL);
      if ( DumpStack >= 0 )
        return (unsigned int)DumpStack;
LABEL_57:
      PopFreeHiberContext(v39);
      return (unsigned int)DumpStack;
    }
    PoSetHiberRange(v3, 0x8000u, (PVOID)(v38 + 0x2000), 0xE000uLL, 0x6D656D44u);
    if ( (*(_DWORD *)(v8 + 112) & 0xFFF) != 0 )
    {
      PopInternalAddToDumpFile(v8, 0x108u, 0LL);
      PopInternalAddToDumpFile((__int64)v3, 0x1F0u, 0LL);
      PopCheckpointSystemSleep(51LL);
      KeBugCheckEx(0xA0u, 0x102uLL, 0xAuLL, v8, (ULONG_PTR)v3);
    }
    v40 = (PVOID *)(v8 + 16);
    v41 = 2LL;
    do
    {
      if ( *v40 )
        PoSetHiberRange(v3, 0x8000u, *v40, *(unsigned int *)(v8 + 112), 0x66756263u);
      ++v40;
      --v41;
    }
    while ( v41 );
  }
  if ( VslVsmEnabled )
  {
    v3[484] = 1;
    DumpStack = VslAllocateSecureHibernateResources(v3, (PVOID *)v3 + 33, (ULONG_PTR *)v3 + 32);
    if ( DumpStack < 0 )
    {
      *a1 = 19;
      v6 = 53LL;
      goto LABEL_56;
    }
  }
  else
  {
    v3[484] = 0;
  }
  if ( (int)ZwQuerySystemInformation(145LL, (__int64)&v45) >= 0 )
    v3[485] = v45;
  if ( (int)BgkResumePrepare(v3) >= 0 )
    PopBgkResumePrepared = 1;
  *((_DWORD *)v3 + 52) = *((_DWORD *)v3 + 72) - 1;
  IsEnabledDeviceUsageNoInline = Feature_CrashDumpOneMBTransferSize__private_IsEnabledDeviceUsageNoInline();
  HvlAllocateHibernateResources(0, IsEnabledDeviceUsageNoInline != 0 ? 256 : 16);
  return 0;
}
