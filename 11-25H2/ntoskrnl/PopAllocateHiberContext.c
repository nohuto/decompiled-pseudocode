/*
 * XREFs of PopAllocateHiberContext @ 0x140ABEFAC
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140B569AC (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     MmBuildMdlForNonPagedPool @ 0x1402AB660 (MmBuildMdlForNonPagedPool.c)
 *     RtlSetAllBits @ 0x1403397C0 (RtlSetAllBits.c)
 *     RtlClearAllBits @ 0x14044A700 (RtlClearAllBits.c)
 *     PoSetHiberRange @ 0x140472260 (PoSetHiberRange.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     PopInternalAddToDumpFile @ 0x1405C8990 (PopInternalAddToDumpFile.c)
 *     ZwQuerySystemInformation @ 0x14069B800 (ZwQuerySystemInformation.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     PopFreeHiberContext @ 0x1406EF918 (PopFreeHiberContext.c)
 *     HvlAllocateHibernateResources @ 0x140703574 (HvlAllocateHibernateResources.c)
 *     VslAllocateSecureHibernateResources @ 0x140703628 (VslAllocateSecureHibernateResources.c)
 *     PopHiberInitializeResources @ 0x140746400 (PopHiberInitializeResources.c)
 *     PopBcdEstablishResumeObject @ 0x1407538EC (PopBcdEstablishResumeObject.c)
 *     PopBcdSetPendingResume @ 0x140753F0C (PopBcdSetPendingResume.c)
 *     MmMarkHiberRange @ 0x1407DD8A0 (MmMarkHiberRange.c)
 *     BcdForciblyUnloadStore @ 0x14080210C (BcdForciblyUnloadStore.c)
 *     BcdOpenStore @ 0x140A24A98 (BcdOpenStore.c)
 *     BcdCloseStore @ 0x140A24B8C (BcdCloseStore.c)
 *     BcdCloseObject @ 0x140A27BE8 (BcdCloseObject.c)
 *     PopLoadResumeContext @ 0x140AB48C0 (PopLoadResumeContext.c)
 *     MmLockPreChargedPagedPool @ 0x140AB94D0 (MmLockPreChargedPagedPool.c)
 *     IoGetDumpStack @ 0x140ABC340 (IoGetDumpStack.c)
 *     BgkResumePrepare @ 0x140B4368C (BgkResumePrepare.c)
 *     PopGetBitlockerKeyLocation @ 0x140B4B84C (PopGetBitlockerKeyLocation.c)
 *     PopGetHwConfigurationSignature @ 0x140B4CE34 (PopGetHwConfigurationSignature.c)
 *     PopCheckpointSystemSleep @ 0x140B5692C (PopCheckpointSystemSleep.c)
 *     PopDiscardRange @ 0x140B5A7E4 (PopDiscardRange.c)
 *     PopAllocatePages @ 0x140B5F2A0 (PopAllocatePages.c)
 */

__int64 __fastcall PopAllocateHiberContext(_DWORD *a1)
{
  char *v2; // rbx
  int DumpStack; // edi
  __int64 v4; // rcx
  ULONG_PTR *v5; // r12
  ULONG_PTR v6; // r15
  char v7; // cl
  char v8; // r8
  __int16 v9; // dx
  char v10; // cl
  __int64 v11; // r8
  __int16 v12; // dx
  unsigned __int64 v13; // rcx
  __int16 v14; // ax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int16 v17; // ax
  UNICODE_STRING *v18; // rcx
  HANDLE v19; // r14
  __int64 v20; // rdx
  __int64 v21; // r8
  unsigned __int64 v22; // rdx
  unsigned int v23; // eax
  unsigned int v24; // edx
  unsigned int v25; // ecx
  __int64 Pages; // rax
  __int64 **v27; // rax
  __int64 **v28; // rdi
  int v29; // eax
  PVOID *v30; // r12
  __int64 v31; // r13
  __int64 v32; // rax
  UNICODE_STRING *v33; // rcx
  PVOID *v34; // rdi
  __int64 v35; // r14
  unsigned __int64 v37; // [rsp+30h] [rbp-10h] BYREF
  __int16 SystemInformation; // [rsp+88h] [rbp+48h] BYREF
  HANDLE BcdObjectHandle; // [rsp+90h] [rbp+50h] BYREF
  HANDLE BcdStoreHandle; // [rsp+98h] [rbp+58h] BYREF

  BcdStoreHandle = 0LL;
  v37 = 0LL;
  SystemInformation = 0;
  if ( dword_140F0AE94 != 5 )
    return 0;
  v2 = (char *)MemoryMap;
  BcdObjectHandle = 0LL;
  BugCheckParameter4 = (ULONG_PTR)MemoryMap;
  memset_0(MemoryMap, 0, 0x1F0uLL);
  MmLockPreChargedPagedPool((unsigned __int64)qword_140F0ADB0);
  PopNumberOfPagesForHibernateProcess = 0;
  *((_OWORD *)v2 + 2) = xmmword_140F0ADD0;
  *((_OWORD *)v2 + 4) = xmmword_140F0ADE0;
  *((_QWORD *)v2 + 27) = qword_140F0ADC0;
  *((_QWORD *)v2 + 44) = qword_140F0AE20;
  *((_QWORD *)v2 + 29) = qword_140F0AE00;
  *((_QWORD *)v2 + 30) = qword_140F0AE30;
  *((_QWORD *)v2 + 31) = qword_140F0AE28;
  *((_OWORD *)v2 + 3) = xmmword_140F0ADF0;
  *((_QWORD *)v2 + 11) = v2 + 80;
  *((_QWORD *)v2 + 10) = v2 + 80;
  if ( FileObject )
  {
    v5 = (ULONG_PTR *)(v2 + 184);
    DumpStack = IoGetDumpStack();
    if ( DumpStack < 0 )
    {
      *a1 = 10;
      v4 = 43LL;
      goto LABEL_54;
    }
    v6 = *v5;
    v7 = 0;
    if ( dword_140F0AE6C < 0 && dword_140F0AE74 == 2 )
      v7 = 2;
    v8 = v7 | 1;
    v9 = __readcr4();
    v10 = v7 | 9;
    if ( (v9 & 0x1000) == 0 )
      v10 = v8;
    v11 = *((_QWORD *)v2 + 29);
    *v2 = v10;
    v12 = qword_140F0ADC8;
    v13 = qword_140F0ADC8 & 0xFFFFFFFFFFFFF000uLL;
    v14 = qword_140F0ADC8;
    *(_QWORD *)v11 = 0LL;
    *(_WORD *)(v11 + 10) = 0;
    *(_QWORD *)(v11 + 32) = v13;
    *(_DWORD *)(v11 + 44) = v12 & 0xFFF;
    *(_WORD *)(v11 + 8) = 8 * ((((unsigned __int64)(v14 & 0xFFF) + 102399) >> 12) + 6);
    *(_DWORD *)(v11 + 40) = 98304;
    MmBuildMdlForNonPagedPool(*((PMDL *)v2 + 29));
    v15 = *((_QWORD *)v2 + 30);
    if ( v15 )
    {
      v16 = qword_140F0AE28;
      v17 = qword_140F0AE28;
      *(_QWORD *)v15 = 0LL;
      *(_WORD *)(v15 + 10) = 0;
      *(_DWORD *)(v15 + 40) = 4096;
      *(_WORD *)(v15 + 8) = 8 * (((unsigned __int16)((v17 & 0xFFF) + 0x1FFF) >> 12) + 6);
      *(_QWORD *)(v15 + 32) = v16 & 0xFFFFFFFFFFFFF000uLL;
      *(_DWORD *)(v15 + 44) = v16 & 0xFFF;
      MmBuildMdlForNonPagedPool(*((PMDL *)v2 + 30));
    }
    DumpStack = PopLoadResumeContext((__int64)v2);
    if ( DumpStack < 0 )
    {
      *a1 = 12;
      v4 = 44LL;
      goto LABEL_54;
    }
    DumpStack = BcdOpenStore(v18, BCD_OPEN_SYNC_FIRMWARE_ENTRIES, &BcdStoreHandle);
    if ( DumpStack < 0 )
    {
      *a1 = 13;
      v4 = 45LL;
      goto LABEL_54;
    }
    v19 = BcdStoreHandle;
    DumpStack = PopBcdEstablishResumeObject(BcdStoreHandle, &BcdObjectHandle);
    if ( DumpStack < 0 )
    {
      *a1 = 14;
      BcdCloseStore(v19);
      v4 = 46LL;
      goto LABEL_54;
    }
    DumpStack = PopBcdSetPendingResume(v19, v20, v21, BcdObjectHandle);
    BcdCloseObject(BcdObjectHandle);
    if ( DumpStack < 0 )
    {
      *a1 = 15;
      BcdCloseStore(v19);
      v4 = 47LL;
      goto LABEL_54;
    }
    BcdForciblyUnloadStore(v19);
    RtlClearAllBits((PRTL_BITMAP)v2 + 3);
    RtlSetAllBits((PRTL_BITMAP)v2 + 4);
    RtlSetAllBits((PRTL_BITMAP)v2 + 2);
    *((_DWORD *)v2 + 120) = PopGetHwConfigurationSignature();
    PopHiberInitializeResources(v2);
    if ( (int)PopGetBitlockerKeyLocation(&v37) >= 0 )
    {
      v22 = v37 >> 12;
      *((_QWORD *)v2 + 43) = v37 >> 12;
      PopDiscardRange(v2, v22, 4LL);
    }
    if ( !KdPitchDebugger || KdEventLoggingEnabled )
    {
      PoSetHiberRange(v2, 2u, &KdTimerDifference, 0LL, 0x20676244u);
      PoSetHiberRange(v2, 2u, &KdDebuggerLock, 0LL, 0x20676244u);
    }
    MmMarkHiberRange((__int64)v2, xmmword_140F0AD88);
    guard_dispatch_icall_no_overrides(v2);
    v23 = (unsigned int)((*((_DWORD *)v2 + 8) >> 3) + 4095) >> 12;
    v24 = v23;
    *((_DWORD *)v2 + 42) = v23;
    if ( *((_QWORD *)v2 + 34) )
    {
      v25 = *((_DWORD *)v2 + 70);
      if ( v25 > v23 )
      {
        *((_DWORD *)v2 + 42) = v25;
        v24 = v25;
      }
    }
    Pages = PopAllocatePages(v24);
    DumpStack = *((_DWORD *)v2 + 51);
    *((_QWORD *)v2 + 20) = Pages;
    if ( DumpStack < 0 )
    {
      *a1 = 16;
      v4 = 48LL;
      goto LABEL_54;
    }
    if ( *(_BYTE *)(*v5 + 280) )
    {
      v27 = (__int64 **)(*(_QWORD *)(*v5 + 272) + 40LL);
      BcdObjectHandle = v27;
      v28 = (__int64 **)*v27;
      while ( v28 != v27 )
      {
        v29 = *((_DWORD *)v28 + 16);
        if ( v29 )
        {
          if ( (v29 & 0xFFF) != 0 )
          {
            PopInternalAddToDumpFile((__int64)(v28 - 1), 0x70u, 0LL);
            PopInternalAddToDumpFile((__int64)v2, 0x1F0u, 0LL);
            PopCheckpointSystemSleep(49LL);
            KeBugCheckEx(0xA0u, 0x102uLL, 0xAuLL, v6, (ULONG_PTR)v2);
          }
          v30 = (PVOID *)(v28 + 9);
          v31 = 2LL;
          do
          {
            if ( *v30 )
              PoSetHiberRange(v2, 0x8000u, *v30, *((unsigned int *)v28 + 16), 0x66756263u);
            ++v30;
            --v31;
          }
          while ( v31 );
        }
        v28 = (__int64 **)*v28;
        v27 = (__int64 **)BcdObjectHandle;
      }
    }
    else
    {
      v32 = PopAllocatePages(16LL);
      *(_QWORD *)(v6 + 8) = v32;
      if ( !v32 )
      {
        DumpStack = *((_DWORD *)v2 + 51);
        *a1 = 17;
        PopCheckpointSystemSleep(50LL);
        if ( DumpStack >= 0 )
          return (unsigned int)DumpStack;
        goto LABEL_55;
      }
      PoSetHiberRange(v2, 0x8000u, (PVOID)(v32 + 0x2000), 0xE000uLL, 0x6D656D44u);
      if ( (*(_DWORD *)(v6 + 112) & 0xFFF) != 0 )
      {
        PopInternalAddToDumpFile(v6, 0x108u, 0LL);
        PopInternalAddToDumpFile((__int64)v2, 0x1F0u, 0LL);
        PopCheckpointSystemSleep(51LL);
        KeBugCheckEx(0xA0u, 0x102uLL, 0xAuLL, v6, (ULONG_PTR)v2);
      }
      v34 = (PVOID *)(v6 + 16);
      v35 = 2LL;
      do
      {
        if ( *v34 )
          PoSetHiberRange(v2, 0x8000u, *v34, *(unsigned int *)(v6 + 112), 0x66756263u);
        ++v34;
        --v35;
      }
      while ( v35 );
    }
    if ( VslVsmEnabled )
    {
      v2[484] = 1;
      DumpStack = VslAllocateSecureHibernateResources(v2, (PVOID *)v2 + 33, (ULONG_PTR *)v2 + 32);
      if ( DumpStack < 0 )
      {
        *a1 = 19;
        v4 = 53LL;
        goto LABEL_54;
      }
    }
    else
    {
      v2[484] = 0;
    }
    if ( ZwQuerySystemInformation(SystemSecureBootInformation, &SystemInformation, 2u, 0LL) >= 0 )
      v2[485] = SystemInformation;
    if ( (int)BgkResumePrepare(v2) >= 0 )
      PopBgkResumePrepared = 1;
    *((_DWORD *)v2 + 52) = *((_DWORD *)v2 + 72) - 1;
    HvlAllocateHibernateResources(0, 16);
    return 0;
  }
  DumpStack = -1073741809;
  *a1 = 10;
  v4 = 42LL;
LABEL_54:
  PopCheckpointSystemSleep(v4);
LABEL_55:
  PopFreeHiberContext(v33);
  return (unsigned int)DumpStack;
}
