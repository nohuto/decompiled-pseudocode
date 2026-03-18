/*
 * XREFs of IoCaptureLiveDump @ 0x1404E6068
 * Callers:
 *     DbgkCaptureLiveKernelDump @ 0x14057EAD8 (DbgkCaptureLiveKernelDump.c)
 *     DbgkpWerCaptureLiveFullDump @ 0x140A9AEBC (DbgkpWerCaptureLiveFullDump.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140245670 (ExReleaseRundownProtection_0.c)
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14025A450 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402769C0 (ExAcquireResourceExclusiveLite.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140330CB0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     KeQueryPerformanceCounter @ 0x14034FA10 (KeQueryPerformanceCounter.c)
 *     ExGetExtensionTable @ 0x1403AA530 (ExGetExtensionTable.c)
 *     EtwActivityIdControl @ 0x14041E010 (EtwActivityIdControl.c)
 *     RtlInitUnicodeString @ 0x1404241A0 (RtlInitUnicodeString.c)
 *     _tlgKeywordOn @ 0x140426AF0 (_tlgKeywordOn.c)
 *     IopLiveDumpWriteDumpFile @ 0x14049ADE4 (IopLiveDumpWriteDumpFile.c)
 *     IopLiveDumpGetMillisecondCounter @ 0x14049B5E4 (IopLiveDumpGetMillisecondCounter.c)
 *     SecureDump_GetSecureDumpSettings @ 0x1404F70B8 (SecureDump_GetSecureDumpSettings.c)
 *     IopLiveDumpIsTracingEnabled @ 0x1404FA9A4 (IopLiveDumpIsTracingEnabled.c)
 *     IopLiveDumpAllocAndInitResources @ 0x1405982F0 (IopLiveDumpAllocAndInitResources.c)
 *     IopLiveDumpCaptureDumpStart @ 0x140599F68 (IopLiveDumpCaptureDumpStart.c)
 *     IopLiveDumpCaptureMemoryPages @ 0x140599FDC (IopLiveDumpCaptureMemoryPages.c)
 *     IopLiveDumpInitRegistrySettings @ 0x14059B7E4 (IopLiveDumpInitRegistrySettings.c)
 *     IopLiveDumpOpenVMMemoryPartition @ 0x14059C448 (IopLiveDumpOpenVMMemoryPartition.c)
 *     IopLiveDumpReleaseResources @ 0x14059CE5C (IopLiveDumpReleaseResources.c)
 *     IopLiveDumpTraceDumpFileWriteEnd @ 0x14059DA40 (IopLiveDumpTraceDumpFileWriteEnd.c)
 *     IopLiveDumpTraceInterfaceEnd @ 0x14059DB64 (IopLiveDumpTraceInterfaceEnd.c)
 *     IopLiveDumpValidateParameters @ 0x14059E5D0 (IopLiveDumpValidateParameters.c)
 *     IopLiveDumpWriteDumpFileWithExtraPages @ 0x14059E850 (IopLiveDumpWriteDumpFileWithExtraPages.c)
 *     IopLiveDumpTraceIoCaptureLiveDumpEntry @ 0x1405A3320 (IopLiveDumpTraceIoCaptureLiveDumpEntry.c)
 *     IopLiveDumpTraceNoArgs @ 0x1405A33C0 (IopLiveDumpTraceNoArgs.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A65F0 (ZwClose.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     IoCreateNotificationEvent @ 0x140A69020 (IoCreateNotificationEvent.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IoCaptureLiveDump(
        unsigned int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        void *a5,
        __int64 a6,
        __int64 *a7)
{
  PKEVENT v7; // rdi
  PKEVENT v8; // rsi
  unsigned __int64 v9; // r13
  __int64 v10; // rbx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  HANDLE v15; // rcx
  int SecureDumpSettings; // edi
  HANDLE v17; // rsi
  int *v18; // r15
  HANDLE v19; // r14
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 Pool2; // rax
  int v32; // ecx
  unsigned int v33; // ecx
  HANDLE v34; // rax
  __int64 v35; // rax
  _BYTE *v36; // rcx
  int v37; // eax
  __int64 MillisecondCounter; // r14
  int v39; // eax
  __int64 v40; // rsi
  __int64 v41; // rax
  void *v42; // rcx
  void *v43; // rsi
  int v44; // ecx
  const GUID *v45; // r9
  const GUID *v46; // r8
  char v48; // [rsp+30h] [rbp-D0h] BYREF
  bool v49; // [rsp+31h] [rbp-CFh] BYREF
  bool v50; // [rsp+32h] [rbp-CEh] BYREF
  char v51; // [rsp+33h] [rbp-CDh] BYREF
  HANDLE EventHandle; // [rsp+38h] [rbp-C8h] BYREF
  HANDLE v53; // [rsp+40h] [rbp-C0h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v55; // [rsp+50h] [rbp-B0h] BYREF
  void *v56; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v57; // [rsp+60h] [rbp-A0h]
  __int64 v58; // [rsp+68h] [rbp-98h] BYREF
  __int64 v59; // [rsp+70h] [rbp-90h] BYREF
  __int64 v60; // [rsp+78h] [rbp-88h] BYREF
  UNICODE_STRING DestinationString; // [rsp+80h] [rbp-80h] BYREF
  __int128 v62; // [rsp+90h] [rbp-70h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v63[2]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 *v64; // [rsp+C0h] [rbp-40h]
  __int64 v65; // [rsp+C8h] [rbp-38h]
  HANDLE *v66; // [rsp+D0h] [rbp-30h]
  __int64 v67; // [rsp+D8h] [rbp-28h]
  HANDLE *p_Handle; // [rsp+E0h] [rbp-20h]
  __int64 v69; // [rsp+E8h] [rbp-18h]
  struct _EVENT_DATA_DESCRIPTOR v70; // [rsp+F0h] [rbp-10h] BYREF
  __int64 *v71; // [rsp+110h] [rbp+10h]
  __int64 v72; // [rsp+118h] [rbp+18h]
  void **v73; // [rsp+120h] [rbp+20h]
  __int64 v74; // [rsp+128h] [rbp+28h]
  HANDLE *v75; // [rsp+130h] [rbp+30h]
  __int64 v76; // [rsp+138h] [rbp+38h]
  __int64 *v77; // [rsp+140h] [rbp+40h]
  __int64 v78; // [rsp+148h] [rbp+48h]
  __int64 *v79; // [rsp+150h] [rbp+50h]
  __int64 v80; // [rsp+158h] [rbp+58h]
  __int64 *v81; // [rsp+160h] [rbp+60h]
  __int64 v82; // [rsp+168h] [rbp+68h]
  HANDLE *v83; // [rsp+170h] [rbp+70h]
  __int64 v84; // [rsp+178h] [rbp+78h]
  char *v85; // [rsp+180h] [rbp+80h]
  __int64 v86; // [rsp+188h] [rbp+88h]
  bool *v87; // [rsp+190h] [rbp+90h]
  __int64 v88; // [rsp+198h] [rbp+98h]
  bool *v89; // [rsp+1A0h] [rbp+A0h]
  __int64 v90; // [rsp+1A8h] [rbp+A8h]
  HANDLE *p_EventHandle; // [rsp+1B0h] [rbp+B0h]
  __int64 v92; // [rsp+1B8h] [rbp+B8h]
  char *v93; // [rsp+1C0h] [rbp+C0h]
  __int64 v94; // [rsp+1C8h] [rbp+C8h]

  v60 = a4;
  v7 = 0LL;
  v59 = a3;
  v8 = 0LL;
  v58 = a2;
  v9 = 0LL;
  v57 = a1;
  v10 = 0LL;
  EventHandle = 0LL;
  Handle = 0LL;
  v53 = 0LL;
  v55 = 0LL;
  DestinationString = 0LL;
  v62 = 0LL;
  if ( !ForceDumpDisabled && AllowLiveDump )
  {
    if ( ExtraDumpContextEnabled )
      IopLiveDumpTraceIoCaptureLiveDumpEntry(a1, a2, a3, a4, (__int64)a5);
    KeQueryPerformanceCounter(&PerformanceFrequency);
    IopLiveDumpGetMillisecondCounter(1);
    if ( BufferChunkSizeInBytes != MEMORY[0xFFFFF78000000244] )
    {
      BufferChunkSizeInBytes = MEMORY[0xFFFFF78000000244];
      BufferChunkSizeInPages = MEMORY[0xFFFFF78000000244] >> 12;
    }
    IopLiveDumpCaptureDumpStart(a6);
    if ( a7 )
      *a7 = 0LL;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v48 = ExAcquireResourceExclusiveLite(&IopLiveDumpLock, 0);
    if ( v48 != 1 )
    {
      v15 = v53;
      SecureDumpSettings = -1073741267;
      v17 = EventHandle;
      v18 = (int *)(a6 + 24);
      v19 = Handle;
LABEL_38:
      if ( IptInterface )
      {
        guard_dispatch_icall_no_overrides(0LL, v12, v13, v14);
        ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(v9 + 88));
        IptInterface = 0LL;
      }
      if ( v17 )
        ZwClose(v17);
      if ( v19 )
        ZwClose(v19);
      if ( v53 )
        ZwClose(v53);
      if ( (*v18 & 0x10) != 0
        && SecureDumpSettings == -1073741248
        && (unsigned __int8)IopLiveDumpIsTracingEnabled(v15, v12) == 1 )
      {
        IopLiveDumpTraceNoArgs(LIVEDUMP_EVENT_MEMORY_PRESSURE_ABORT);
      }
      if ( v48 )
      {
        IopLiveDumpContext = 0LL;
        ExReleaseResourceLite(&IopLiveDumpLock);
      }
      KeLeaveCriticalRegion();
      if ( SecureDumpSettings >= 0 )
      {
        SecureDumpSettings = SecureDump_GetSecureDumpSettings(v10 + 984);
        if ( SecureDumpSettings >= 0 )
        {
          if ( !*v36
            || (v37 = *(_DWORD *)(v10 + 992)) != 0
            && *(_BYTE *)(v10 + 985)
            && *(_DWORD *)(v10 + 988) == 4096
            && (v37 & 0xFFF) == 0 )
          {
            if ( (*(_DWORD *)(v10 + 40) & 8) != 0 )
            {
              SecureDumpSettings = -1073741802;
              *a7 = v10;
            }
            else
            {
              IopLiveDumpTraceNoArgs(LIVEDUMP_EVENT_WRITE_DUMPDATA_TO_FILE_START);
              MillisecondCounter = IopLiveDumpGetMillisecondCounter(0);
              if ( *(_QWORD *)(v10 + 192) || *(_QWORD *)(v10 + 200) )
                v39 = IopLiveDumpWriteDumpFileWithExtraPages(v10);
              else
                v39 = IopLiveDumpWriteDumpFile(v10);
              SecureDumpSettings = v39;
              v40 = IopLiveDumpGetMillisecondCounter(0);
              if ( (unsigned int)dword_140E06E80 > 5 && tlgKeywordOn((__int64)&dword_140E06E80, 0x400000000000LL) )
              {
                v55 = 0x1000000LL;
                v64 = &v55;
                v41 = *(_QWORD *)(v10 + 560);
                v65 = 8LL;
                v67 = 8LL;
                v69 = 8LL;
                v42 = *(void **)(v41 + 4000);
                v66 = &v53;
                v53 = v42;
                Handle = (HANDLE)(v40 - MillisecondCounter);
                p_Handle = &Handle;
                tlgWriteTransfer_EtwWriteTransfer(
                  (__int64)&dword_140E06E80,
                  (unsigned __int8 *)&dword_1400458AC,
                  (const GUID *)(v10 + 968),
                  (const GUID *)(v10 + 952),
                  5u,
                  v63);
              }
              IopLiveDumpTraceDumpFileWriteEnd(v10, v40 - MillisecondCounter, 0LL, (unsigned int)SecureDumpSettings);
              if ( SecureDumpSettings >= 0 && (*(_DWORD *)(v10 + 80) & 2) != 0 )
                SecureDumpSettings = 261;
            }
          }
          else
          {
            SecureDumpSettings = -1073741823;
          }
        }
      }
      v43 = (void *)IopLiveDumpGetMillisecondCounter(0);
      IopLiveDumpTraceInterfaceEnd(v10, 0LL, (unsigned int)SecureDumpSettings, v43);
      if ( (unsigned int)dword_140E06E80 > 5 && tlgKeywordOn((__int64)&dword_140E06E80, 0x400000000000LL) )
      {
        v44 = *v18;
        v71 = &v55;
        v55 = 0x1000000LL;
        v73 = &v56;
        v53 = (HANDLE)v57;
        v75 = &v53;
        v77 = &v58;
        v79 = &v59;
        v81 = &v60;
        Handle = a5;
        v83 = &Handle;
        v72 = 8LL;
        v48 = (v44 & 8) != 0;
        v85 = &v48;
        v49 = (v44 & 0x10) != 0;
        LODWORD(v56) = SecureDumpSettings;
        v87 = &v49;
        v89 = &v50;
        p_EventHandle = &EventHandle;
        v51 = IOSpaceEnabled;
        v93 = &v51;
        v74 = 4LL;
        v76 = 8LL;
        v78 = 8LL;
        v80 = 8LL;
        v82 = 8LL;
        v84 = 8LL;
        v86 = 1LL;
        v88 = 1LL;
        v50 = (v44 & 0x20) != 0;
        v90 = 1LL;
        EventHandle = v43;
        v92 = 8LL;
        v94 = 1LL;
        if ( v10 )
        {
          v45 = (const GUID *)(v10 + 952);
          v46 = (const GUID *)(v10 + 968);
        }
        else
        {
          v45 = (const GUID *)&v62;
          v46 = (const GUID *)&v62;
        }
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_140E06E80,
          (unsigned __int8 *)&word_1400457A6,
          v46,
          v45,
          0xEu,
          &v70);
      }
      if ( v10 )
      {
        if ( (*(_DWORD *)(v10 + 40) & 8) == 0 )
          EtwActivityIdControl(2u, (LPGUID)(v10 + 952));
        if ( SecureDumpSettings != -1073741802 )
        {
          IopLiveDumpReleaseResources(v10);
          ExFreePoolWithTag((PVOID)v10, 0x706D644Cu);
        }
      }
      return (unsigned int)SecureDumpSettings;
    }
    v9 = KiSupervisorStateExtensionHost;
    if ( KiSupervisorStateExtensionHost )
    {
      IptInterface = ExGetExtensionTable((struct _EX_RUNDOWN_REF *)KiSupervisorStateExtensionHost);
      if ( IptInterface )
      {
        LOBYTE(v21) = 1;
        guard_dispatch_icall_no_overrides(v21, v20, v22, v23);
        if ( !(unsigned __int8)guard_dispatch_icall_no_overrides(v25, v24, v26, v27) )
        {
          guard_dispatch_icall_no_overrides(0LL, v28, v29, v30);
          ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(v9 + 88));
          IptInterface = 0LL;
        }
      }
      v9 &= -(__int64)(IptInterface != 0);
    }
    if ( (*(_DWORD *)(a6 + 24) & 0x10) != 0 )
    {
      RtlInitUnicodeString(&DestinationString, L"\\KernelObjects\\LowNonPagedPoolCondition");
      v7 = IoCreateNotificationEvent(&DestinationString, &EventHandle);
      RtlInitUnicodeString(&DestinationString, L"\\KernelObjects\\LowMemoryCondition");
      v8 = IoCreateNotificationEvent(&DestinationString, &Handle);
      RtlInitUnicodeString(&DestinationString, L"\\KernelObjects\\HighCommitCondition");
      v55 = (__int64)IoCreateNotificationEvent(&DestinationString, &v53);
    }
    Pool2 = ExAllocatePool2(0x40uLL);
    v10 = Pool2;
    if ( !Pool2 )
    {
      v18 = (int *)(a6 + 24);
      v17 = EventHandle;
      SecureDumpSettings = -1073741670;
      v19 = Handle;
      goto LABEL_38;
    }
    v32 = *(_DWORD *)(Pool2 + 80);
    v56 = 0LL;
    v33 = v32 & 0xFFFFFFF3;
    *(_DWORD *)Pool2 = v57;
    *(_QWORD *)(Pool2 + 8) = v58;
    *(_QWORD *)(Pool2 + 16) = v59;
    *(_QWORD *)(Pool2 + 24) = v60;
    *(_QWORD *)(Pool2 + 32) = a5;
    v34 = EventHandle;
    EventHandle = 0LL;
    *(_QWORD *)(v10 + 904) = v34;
    *(_QWORD *)(v10 + 912) = Handle;
    *(_QWORD *)(v10 + 920) = v53;
    v53 = 0LL;
    v35 = v55;
    *(_QWORD *)(v10 + 928) = v7;
    *(_QWORD *)(v10 + 944) = v35;
    LODWORD(v35) = *(_DWORD *)(v10 + 40);
    IopLiveDumpContext = v10;
    *(_QWORD *)(v10 + 936) = v8;
    *(_QWORD *)(v10 + 1096) = 0LL;
    *(_QWORD *)(v10 + 1104) = 0LL;
    *(_DWORD *)(v10 + 80) = v33;
    if ( (v35 & 4) != 0 )
      *(_DWORD *)(v10 + 80) = v33 | 0x18000;
    *(_QWORD *)(v10 + 1208) = v10 + 1200;
    *(_QWORD *)(v10 + 1200) = v10 + 1200;
    IopLiveDumpInitRegistrySettings(v10);
    if ( AllowLiveDump && ((*(_DWORD *)(v10 + 80) & 0x200) == 0 || *(_QWORD *)(v10 + 1144)) )
    {
      EtwActivityIdControl(5u, (LPGUID)(v10 + 952));
      EtwActivityIdControl(1u, (LPGUID)(v10 + 968));
      if ( (unsigned int)dword_140E06E80 > 5 && tlgKeywordOn((__int64)&dword_140E06E80, 0x400000000000LL) )
      {
        v64 = &v55;
        v55 = 0x1000000LL;
        v65 = 8LL;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_140E06E80,
          (unsigned __int8 *)byte_140045905,
          (const GUID *)(v10 + 968),
          (const GUID *)(v10 + 952),
          3u,
          v63);
      }
      SecureDumpSettings = IopLiveDumpValidateParameters(v10, a6);
      v18 = (int *)(a6 + 24);
      if ( SecureDumpSettings < 0 )
        goto LABEL_37;
      v15 = (HANDLE)*(unsigned int *)(v10 + 40);
      if ( ((unsigned __int8)v15 & 4) != 0 )
        *(_DWORD *)(v10 + 80) |= 0x18000u;
      *(_QWORD *)(v10 + 1208) = v10 + 1200;
      *(_QWORD *)(v10 + 1200) = v10 + 1200;
      if ( ((unsigned __int8)v15 & 8) == 0 || a7 )
      {
        IopLiveDumpOpenVMMemoryPartition(v10);
        SecureDumpSettings = IopLiveDumpAllocAndInitResources(v10);
        if ( SecureDumpSettings >= 0 )
          SecureDumpSettings = IopLiveDumpCaptureMemoryPages(v10);
        goto LABEL_37;
      }
    }
    else
    {
      v18 = (int *)(a6 + 24);
    }
    SecureDumpSettings = -1073741811;
LABEL_37:
    v17 = v56;
    v19 = EventHandle;
    goto LABEL_38;
  }
  if ( a7 )
    *a7 = 0LL;
  return 3221225659LL;
}
