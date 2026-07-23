/*
 * XREFs of PopAllocateHiberContext @ 0x140AC4284
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140B6891C (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     MmBuildMdlForNonPagedPool @ 0x140293640 (MmBuildMdlForNonPagedPool.c)
 *     RtlSetAllBits @ 0x140347620 (RtlSetAllBits.c)
 *     RtlClearAllBits @ 0x140441080 (RtlClearAllBits.c)
 *     PoSetHiberRange @ 0x14046AD10 (PoSetHiberRange.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     Feature_VpciVscBootDiskHibernation__private_IsEnabledDeviceUsageNoInline @ 0x1405CA438 (Feature_VpciVscBootDiskHibernation__private_IsEnabledDeviceUsageNoInline.c)
 *     PopInternalAddToDumpFile @ 0x1405CA610 (PopInternalAddToDumpFile.c)
 *     Feature_CrashDumpOneMBTransferSize__private_IsEnabledDeviceUsageNoInline @ 0x1405D0A68 (Feature_CrashDumpOneMBTransferSize__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_Servicing_ARM64_LLVMHibernate__private_IsEnabledDeviceUsageNoInline @ 0x1405D0B10 (Feature_Servicing_ARM64_LLVMHibernate__private_IsEnabledDeviceUsageNoInline.c)
 *     ZwQuerySystemInformation @ 0x1406A7A70 (ZwQuerySystemInformation.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     PopFreeHiberContext @ 0x1406F93C8 (PopFreeHiberContext.c)
 *     HvlAllocateHibernateResources @ 0x14070CFE4 (HvlAllocateHibernateResources.c)
 *     VslAllocateSecureHibernateResources @ 0x14070D098 (VslAllocateSecureHibernateResources.c)
 *     PopHiberInitializeResources @ 0x1407507DC (PopHiberInitializeResources.c)
 *     PopBcdEstablishResumeObject @ 0x140762D7C (PopBcdEstablishResumeObject.c)
 *     PopBcdSetPendingResume @ 0x140763390 (PopBcdSetPendingResume.c)
 *     MmMarkHiberRange @ 0x1407EDD10 (MmMarkHiberRange.c)
 *     BcdForciblyUnloadStore @ 0x1408123C4 (BcdForciblyUnloadStore.c)
 *     BcdCloseObject @ 0x1409A5C2C (BcdCloseObject.c)
 *     BcdOpenStore @ 0x1409A8688 (BcdOpenStore.c)
 *     BcdCloseStore @ 0x140A81A08 (BcdCloseStore.c)
 *     PopLoadResumeContext @ 0x140AB314C (PopLoadResumeContext.c)
 *     MmLockPreChargedPagedPool @ 0x140AB8640 (MmLockPreChargedPagedPool.c)
 *     IoGetDumpStack @ 0x140ABB79C (IoGetDumpStack.c)
 *     BgkResumePrepare @ 0x140B556DC (BgkResumePrepare.c)
 *     PopGetBitlockerKeyLocation @ 0x140B5D82C (PopGetBitlockerKeyLocation.c)
 *     PopGetHwConfigurationSignature @ 0x140B5EEA4 (PopGetHwConfigurationSignature.c)
 *     PopCheckpointSystemSleep @ 0x140B6889C (PopCheckpointSystemSleep.c)
 *     PopDiscardRange @ 0x140B6B9E8 (PopDiscardRange.c)
 *     PopAllocatePages @ 0x140B6FDEC (PopAllocatePages.c)
 */

__int64 __fastcall PopAllocateHiberContext(_DWORD *a1)
{
  int DumpStack; // edi
  char *v3; // rbx
  __int64 v4; // rcx
  __int64 v5; // rcx
  ULONG_PTR *v6; // r12
  ULONG_PTR v7; // r15
  char v8; // cl
  char v9; // r8
  __int16 v10; // dx
  char v11; // cl
  __int64 v12; // r8
  __int16 v13; // dx
  unsigned __int64 v14; // rcx
  __int16 v15; // ax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int16 v18; // ax
  UNICODE_STRING *v19; // rcx
  HANDLE v20; // r14
  __int64 v21; // rdx
  __int64 v22; // r8
  unsigned __int64 v23; // rdx
  __int64 v24; // rdx
  unsigned int v25; // eax
  bool v26; // zf
  unsigned int v27; // edx
  unsigned int v28; // ecx
  __int64 Pages; // rax
  __int64 **v30; // r13
  __int64 *i; // rdi
  int v32; // eax
  __int64 v33; // rax
  PVOID *v34; // r12
  __int64 v35; // rax
  UNICODE_STRING *v36; // rcx
  PVOID *v37; // rdi
  __int64 v38; // r14
  int IsEnabledDeviceUsageNoInline; // eax
  unsigned __int64 v41; // [rsp+30h] [rbp-10h] BYREF
  __int16 SystemInformation; // [rsp+88h] [rbp+48h] BYREF
  HANDLE BcdObjectHandle; // [rsp+90h] [rbp+50h] BYREF
  HANDLE BcdStoreHandle; // [rsp+98h] [rbp+58h] BYREF

  BcdStoreHandle = 0LL;
  v41 = 0LL;
  SystemInformation = 0;
  if ( dword_140F0B9B4 != 5 )
    return 0;
  v3 = (char *)MemoryMap;
  BcdObjectHandle = 0LL;
  BugCheckParameter4 = (ULONG_PTR)MemoryMap;
  memset_0(MemoryMap, 0, 0x1F0uLL);
  if ( (unsigned int)Feature_VpciVscBootDiskHibernation__private_IsEnabledDeviceUsageNoInline() )
    v3[493] = 1;
  if ( (unsigned int)Feature_Servicing_ARM64_LLVMHibernate__private_IsEnabledDeviceUsageNoInline() )
    v3[494] = 1;
  MmLockPreChargedPagedPool((unsigned __int64)qword_140F0BBD0);
  PopNumberOfPagesForHibernateProcess = 0;
  *((_OWORD *)v3 + 2) = xmmword_140F0BBF0;
  *((_OWORD *)v3 + 4) = xmmword_140F0BC00;
  *((_QWORD *)v3 + 27) = qword_140F0BBE0;
  *((_QWORD *)v3 + 44) = qword_140F0BC40;
  *((_QWORD *)v3 + 29) = qword_140F0BC20;
  *((_QWORD *)v3 + 30) = qword_140F0BC50;
  *((_QWORD *)v3 + 31) = qword_140F0BC48;
  *((_OWORD *)v3 + 3) = xmmword_140F0BC10;
  *((_QWORD *)v3 + 11) = v3 + 80;
  *((_QWORD *)v3 + 10) = v3 + 80;
  if ( !FileObject )
  {
    DumpStack = -1073741809;
    *a1 = 10;
    v5 = 42LL;
LABEL_58:
    PopCheckpointSystemSleep(v5);
    goto LABEL_59;
  }
  v6 = (ULONG_PTR *)(v3 + 184);
  DumpStack = IoGetDumpStack(v4, (__int64)(v3 + 184));
  if ( DumpStack < 0 )
  {
    *a1 = 10;
    v5 = 43LL;
    goto LABEL_58;
  }
  v7 = *v6;
  v8 = 0;
  if ( dword_140F0B98C < 0 && dword_140F0B994 == 2 )
    v8 = 2;
  v9 = v8 | 1;
  v10 = __readcr4();
  v11 = v8 | 9;
  if ( (v10 & 0x1000) == 0 )
    v11 = v9;
  v12 = *((_QWORD *)v3 + 29);
  *v3 = v11;
  v13 = qword_140F0BBE8;
  v14 = qword_140F0BBE8 & 0xFFFFFFFFFFFFF000uLL;
  v15 = qword_140F0BBE8;
  *(_QWORD *)v12 = 0LL;
  *(_WORD *)(v12 + 10) = 0;
  *(_QWORD *)(v12 + 32) = v14;
  *(_DWORD *)(v12 + 44) = v13 & 0xFFF;
  *(_WORD *)(v12 + 8) = 8 * ((((unsigned __int64)(v15 & 0xFFF) + 102399) >> 12) + 6);
  *(_DWORD *)(v12 + 40) = 98304;
  MmBuildMdlForNonPagedPool(*((PMDL *)v3 + 29));
  v16 = *((_QWORD *)v3 + 30);
  if ( v16 )
  {
    v17 = qword_140F0BC48;
    v18 = qword_140F0BC48;
    *(_QWORD *)v16 = 0LL;
    *(_WORD *)(v16 + 10) = 0;
    *(_DWORD *)(v16 + 40) = 4096;
    *(_WORD *)(v16 + 8) = 8 * (((unsigned __int16)((v18 & 0xFFF) + 0x1FFF) >> 12) + 6);
    *(_QWORD *)(v16 + 32) = v17 & 0xFFFFFFFFFFFFF000uLL;
    *(_DWORD *)(v16 + 44) = v17 & 0xFFF;
    MmBuildMdlForNonPagedPool(*((PMDL *)v3 + 30));
  }
  DumpStack = PopLoadResumeContext((__int64)v3);
  if ( DumpStack < 0 )
  {
    *a1 = 12;
    v5 = 44LL;
    goto LABEL_58;
  }
  DumpStack = BcdOpenStore(v19, BCD_OPEN_SYNC_FIRMWARE_ENTRIES, &BcdStoreHandle);
  if ( DumpStack < 0 )
  {
    *a1 = 13;
    v5 = 45LL;
    goto LABEL_58;
  }
  v20 = BcdStoreHandle;
  DumpStack = PopBcdEstablishResumeObject(BcdStoreHandle, &BcdObjectHandle);
  if ( DumpStack < 0 )
  {
    *a1 = 14;
    BcdCloseStore(v20);
    v5 = 46LL;
    goto LABEL_58;
  }
  DumpStack = PopBcdSetPendingResume(v20, v21, v22, BcdObjectHandle);
  BcdCloseObject(BcdObjectHandle);
  if ( DumpStack < 0 )
  {
    *a1 = 15;
    BcdCloseStore(v20);
    v5 = 47LL;
    goto LABEL_58;
  }
  BcdForciblyUnloadStore(v20);
  RtlClearAllBits((PRTL_BITMAP)v3 + 3);
  RtlSetAllBits((PRTL_BITMAP)v3 + 4);
  RtlSetAllBits((PRTL_BITMAP)v3 + 2);
  *((_DWORD *)v3 + 121) = PopGetHwConfigurationSignature(v3 + 480);
  PopHiberInitializeResources(v3);
  if ( (int)PopGetBitlockerKeyLocation(&v41) >= 0 )
  {
    v23 = v41 >> 12;
    *((_QWORD *)v3 + 43) = v41 >> 12;
    PopDiscardRange(v3, v23, 4LL);
  }
  if ( !KdPitchDebugger || KdEventLoggingEnabled )
  {
    PoSetHiberRange(v3, 2u, &KdTimerDifference, 0LL, 0x20676244u);
    PoSetHiberRange(v3, 2u, &KdDebuggerLock, 0LL, 0x20676244u);
  }
  MmMarkHiberRange((__int64)v3, xmmword_140F0BBA8);
  guard_dispatch_icall_no_overrides(v3, v24);
  v25 = (unsigned int)((*((_DWORD *)v3 + 8) >> 3) + 4095) >> 12;
  v26 = *((_QWORD *)v3 + 34) == 0LL;
  v27 = v25;
  *((_DWORD *)v3 + 42) = v25;
  if ( !v26 )
  {
    v28 = *((_DWORD *)v3 + 70);
    if ( v28 > v25 )
    {
      *((_DWORD *)v3 + 42) = v28;
      v27 = v28;
    }
  }
  Pages = PopAllocatePages(v27);
  DumpStack = *((_DWORD *)v3 + 51);
  *((_QWORD *)v3 + 20) = Pages;
  if ( DumpStack < 0 )
  {
    *a1 = 16;
    v5 = 48LL;
    goto LABEL_58;
  }
  if ( *(_BYTE *)(*v6 + 280) )
  {
    v30 = (__int64 **)(*(_QWORD *)(*v6 + 272) + 40LL);
    for ( i = *v30; i != (__int64 *)v30; i = (__int64 *)*i )
    {
      v32 = *((_DWORD *)i + 16);
      if ( v32 )
      {
        if ( (v32 & 0xFFF) != 0 )
        {
          PopInternalAddToDumpFile((__int64)(i - 1), 0x70u, 0LL);
          PopInternalAddToDumpFile((__int64)v3, 0x1F0u, 0LL);
          PopCheckpointSystemSleep(49LL);
          KeBugCheckEx(0xA0u, 0x102uLL, 0xAuLL, v7, (ULONG_PTR)v3);
        }
        v33 = 2LL;
        v34 = (PVOID *)(i + 9);
        BcdObjectHandle = (HANDLE)2;
        do
        {
          if ( *v34 )
          {
            PoSetHiberRange(v3, 0x8000u, *v34, *((unsigned int *)i + 16), 0x66756263u);
            v33 = (__int64)BcdObjectHandle;
          }
          ++v34;
          BcdObjectHandle = (HANDLE)--v33;
        }
        while ( v33 );
      }
    }
  }
  else
  {
    v35 = PopAllocatePages(16LL);
    *(_QWORD *)(v7 + 8) = v35;
    if ( !v35 )
    {
      DumpStack = *((_DWORD *)v3 + 51);
      *a1 = 17;
      PopCheckpointSystemSleep(50LL);
      if ( DumpStack >= 0 )
        return (unsigned int)DumpStack;
LABEL_59:
      PopFreeHiberContext(v36);
      return (unsigned int)DumpStack;
    }
    PoSetHiberRange(v3, 0x8000u, (PVOID)(v35 + 0x2000), 0xE000uLL, 0x6D656D44u);
    if ( (*(_DWORD *)(v7 + 112) & 0xFFF) != 0 )
    {
      PopInternalAddToDumpFile(v7, 0x108u, 0LL);
      PopInternalAddToDumpFile((__int64)v3, 0x1F0u, 0LL);
      PopCheckpointSystemSleep(51LL);
      KeBugCheckEx(0xA0u, 0x102uLL, 0xAuLL, v7, (ULONG_PTR)v3);
    }
    v37 = (PVOID *)(v7 + 16);
    v38 = 2LL;
    do
    {
      if ( *v37 )
        PoSetHiberRange(v3, 0x8000u, *v37, *(unsigned int *)(v7 + 112), 0x66756263u);
      ++v37;
      --v38;
    }
    while ( v38 );
  }
  if ( VslVsmEnabled )
  {
    v3[488] = 1;
    DumpStack = VslAllocateSecureHibernateResources(v3, (PVOID *)v3 + 33, (ULONG_PTR *)v3 + 32);
    if ( DumpStack < 0 )
    {
      *a1 = 19;
      v5 = 53LL;
      goto LABEL_58;
    }
  }
  else
  {
    v3[488] = 0;
  }
  if ( ZwQuerySystemInformation(SystemSecureBootInformation, &SystemInformation, 2u, 0LL) >= 0 )
    v3[489] = SystemInformation;
  if ( (int)BgkResumePrepare(v3) >= 0 )
    PopBgkResumePrepared = 1;
  *((_DWORD *)v3 + 52) = *((_DWORD *)v3 + 72) - 1;
  IsEnabledDeviceUsageNoInline = Feature_CrashDumpOneMBTransferSize__private_IsEnabledDeviceUsageNoInline();
  HvlAllocateHibernateResources(0, IsEnabledDeviceUsageNoInline != 0 ? 256 : 16);
  return 0;
}
