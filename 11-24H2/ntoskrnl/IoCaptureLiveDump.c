/*
 * XREFs of IoCaptureLiveDump @ 0x1404DC764
 * Callers:
 *     DbgkCaptureLiveKernelDump @ 0x14057BF68 (DbgkCaptureLiveKernelDump.c)
 *     DbgkpWerCaptureLiveFullDump @ 0x140A9642C (DbgkpWerCaptureLiveFullDump.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14020DE50 (ExReleaseRundownProtection_0.c)
 *     ExAcquireResourceExclusiveLite @ 0x14022BF50 (ExAcquireResourceExclusiveLite.c)
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     KeQueryPerformanceCounter @ 0x14036DEF0 (KeQueryPerformanceCounter.c)
 *     ExGetExtensionTable @ 0x140398F94 (ExGetExtensionTable.c)
 *     EtwActivityIdControl @ 0x1404123E0 (EtwActivityIdControl.c)
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     _tlgKeywordOn @ 0x14041A970 (_tlgKeywordOn.c)
 *     IopLiveDumpWriteDumpFile @ 0x1404957D4 (IopLiveDumpWriteDumpFile.c)
 *     IopLiveDumpGetMillisecondCounter @ 0x140495FD4 (IopLiveDumpGetMillisecondCounter.c)
 *     SecureDump_GetSecureDumpSettings @ 0x1404F4998 (SecureDump_GetSecureDumpSettings.c)
 *     IopLiveDumpIsTracingEnabled @ 0x1404F8284 (IopLiveDumpIsTracingEnabled.c)
 *     IopLiveDumpAllocAndInitResources @ 0x140595270 (IopLiveDumpAllocAndInitResources.c)
 *     IopLiveDumpCaptureDumpStart @ 0x140596EEC (IopLiveDumpCaptureDumpStart.c)
 *     IopLiveDumpCaptureMemoryPages @ 0x140596F60 (IopLiveDumpCaptureMemoryPages.c)
 *     IopLiveDumpInitRegistrySettings @ 0x140598764 (IopLiveDumpInitRegistrySettings.c)
 *     IopLiveDumpOpenVMMemoryPartition @ 0x1405993C8 (IopLiveDumpOpenVMMemoryPartition.c)
 *     IopLiveDumpReleaseResources @ 0x140599DDC (IopLiveDumpReleaseResources.c)
 *     IopLiveDumpTraceDumpFileWriteEnd @ 0x14059A9C0 (IopLiveDumpTraceDumpFileWriteEnd.c)
 *     IopLiveDumpTraceInterfaceEnd @ 0x14059AAE4 (IopLiveDumpTraceInterfaceEnd.c)
 *     IopLiveDumpValidateParameters @ 0x14059B550 (IopLiveDumpValidateParameters.c)
 *     IopLiveDumpWriteDumpFileWithExtraPages @ 0x14059B7D0 (IopLiveDumpWriteDumpFileWithExtraPages.c)
 *     IopLiveDumpTraceIoCaptureLiveDumpEntry @ 0x1405A0260 (IopLiveDumpTraceIoCaptureLiveDumpEntry.c)
 *     IopLiveDumpTraceNoArgs @ 0x1405A0300 (IopLiveDumpTraceNoArgs.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     IoCreateNotificationEvent @ 0x140A623D0 (IoCreateNotificationEvent.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
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
  HANDLE v13; // rcx
  int SecureDumpSettings; // edi
  HANDLE v15; // rsi
  int *v16; // r15
  HANDLE v17; // r14
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 Pool2; // rax
  int v24; // ecx
  unsigned int v25; // ecx
  HANDLE v26; // rax
  __int64 v27; // rax
  _BYTE *v28; // rcx
  int v29; // eax
  __int64 MillisecondCounter; // r14
  int v31; // eax
  __int64 v32; // rsi
  __int64 v33; // rax
  void *v34; // rcx
  void *v35; // rsi
  int v36; // ecx
  const GUID *v37; // r9
  const GUID *v38; // r8
  char v40; // [rsp+30h] [rbp-D0h] BYREF
  bool v41; // [rsp+31h] [rbp-CFh] BYREF
  bool v42; // [rsp+32h] [rbp-CEh] BYREF
  char v43; // [rsp+33h] [rbp-CDh] BYREF
  HANDLE EventHandle; // [rsp+38h] [rbp-C8h] BYREF
  HANDLE v45; // [rsp+40h] [rbp-C0h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v47; // [rsp+50h] [rbp-B0h] BYREF
  void *v48; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v49; // [rsp+60h] [rbp-A0h]
  __int64 v50; // [rsp+68h] [rbp-98h] BYREF
  __int64 v51; // [rsp+70h] [rbp-90h] BYREF
  __int64 v52; // [rsp+78h] [rbp-88h] BYREF
  UNICODE_STRING DestinationString; // [rsp+80h] [rbp-80h] BYREF
  __int128 v54; // [rsp+90h] [rbp-70h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v55[2]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 *v56; // [rsp+C0h] [rbp-40h]
  __int64 v57; // [rsp+C8h] [rbp-38h]
  HANDLE *v58; // [rsp+D0h] [rbp-30h]
  __int64 v59; // [rsp+D8h] [rbp-28h]
  HANDLE *p_Handle; // [rsp+E0h] [rbp-20h]
  __int64 v61; // [rsp+E8h] [rbp-18h]
  struct _EVENT_DATA_DESCRIPTOR v62; // [rsp+F0h] [rbp-10h] BYREF
  __int64 *v63; // [rsp+110h] [rbp+10h]
  __int64 v64; // [rsp+118h] [rbp+18h]
  void **v65; // [rsp+120h] [rbp+20h]
  __int64 v66; // [rsp+128h] [rbp+28h]
  HANDLE *v67; // [rsp+130h] [rbp+30h]
  __int64 v68; // [rsp+138h] [rbp+38h]
  __int64 *v69; // [rsp+140h] [rbp+40h]
  __int64 v70; // [rsp+148h] [rbp+48h]
  __int64 *v71; // [rsp+150h] [rbp+50h]
  __int64 v72; // [rsp+158h] [rbp+58h]
  __int64 *v73; // [rsp+160h] [rbp+60h]
  __int64 v74; // [rsp+168h] [rbp+68h]
  HANDLE *v75; // [rsp+170h] [rbp+70h]
  __int64 v76; // [rsp+178h] [rbp+78h]
  char *v77; // [rsp+180h] [rbp+80h]
  __int64 v78; // [rsp+188h] [rbp+88h]
  bool *v79; // [rsp+190h] [rbp+90h]
  __int64 v80; // [rsp+198h] [rbp+98h]
  bool *v81; // [rsp+1A0h] [rbp+A0h]
  __int64 v82; // [rsp+1A8h] [rbp+A8h]
  HANDLE *p_EventHandle; // [rsp+1B0h] [rbp+B0h]
  __int64 v84; // [rsp+1B8h] [rbp+B8h]
  char *v85; // [rsp+1C0h] [rbp+C0h]
  __int64 v86; // [rsp+1C8h] [rbp+C8h]

  v52 = a4;
  v7 = 0LL;
  v51 = a3;
  v8 = 0LL;
  v50 = a2;
  v9 = 0LL;
  v49 = a1;
  v10 = 0LL;
  EventHandle = 0LL;
  Handle = 0LL;
  v45 = 0LL;
  v47 = 0LL;
  DestinationString = 0LL;
  v54 = 0LL;
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
    v40 = ExAcquireResourceExclusiveLite(&IopLiveDumpLock, 0);
    if ( v40 != 1 )
    {
      v13 = v45;
      SecureDumpSettings = -1073741267;
      v15 = EventHandle;
      v16 = (int *)(a6 + 24);
      v17 = Handle;
LABEL_38:
      if ( IptInterface )
      {
        guard_dispatch_icall_no_overrides(0LL, v12);
        ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(v9 + 88));
        IptInterface = 0LL;
      }
      if ( v15 )
        ZwClose(v15);
      if ( v17 )
        ZwClose(v17);
      if ( v45 )
        ZwClose(v45);
      if ( (*v16 & 0x10) != 0
        && SecureDumpSettings == -1073741248
        && (unsigned __int8)IopLiveDumpIsTracingEnabled(v13, v12) == 1 )
      {
        IopLiveDumpTraceNoArgs(LIVEDUMP_EVENT_MEMORY_PRESSURE_ABORT);
      }
      if ( v40 )
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
          if ( !*v28
            || (v29 = *(_DWORD *)(v10 + 992)) != 0
            && *(_BYTE *)(v10 + 985)
            && *(_DWORD *)(v10 + 988) == 4096
            && (v29 & 0xFFF) == 0 )
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
                v31 = IopLiveDumpWriteDumpFileWithExtraPages(v10);
              else
                v31 = IopLiveDumpWriteDumpFile(v10);
              SecureDumpSettings = v31;
              v32 = IopLiveDumpGetMillisecondCounter(0);
              if ( (unsigned int)dword_140E06E80 > 5 && tlgKeywordOn((__int64)&dword_140E06E80, 0x400000000000LL) )
              {
                v47 = 0x1000000LL;
                v56 = &v47;
                v33 = *(_QWORD *)(v10 + 560);
                v57 = 8LL;
                v59 = 8LL;
                v61 = 8LL;
                v34 = *(void **)(v33 + 4000);
                v58 = &v45;
                v45 = v34;
                Handle = (HANDLE)(v32 - MillisecondCounter);
                p_Handle = &Handle;
                tlgWriteTransfer_EtwWriteTransfer(
                  (__int64)&dword_140E06E80,
                  (unsigned __int8 *)&byte_14004621F,
                  (const GUID *)(v10 + 968),
                  (const GUID *)(v10 + 952),
                  5u,
                  v55);
              }
              IopLiveDumpTraceDumpFileWriteEnd(v10, v32 - MillisecondCounter, 0LL, (unsigned int)SecureDumpSettings);
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
      v35 = (void *)IopLiveDumpGetMillisecondCounter(0);
      IopLiveDumpTraceInterfaceEnd(v10, 0LL, (unsigned int)SecureDumpSettings, v35);
      if ( (unsigned int)dword_140E06E80 > 5 && tlgKeywordOn((__int64)&dword_140E06E80, 0x400000000000LL) )
      {
        v36 = *v16;
        v63 = &v47;
        v47 = 0x1000000LL;
        v65 = &v48;
        v45 = (HANDLE)v49;
        v67 = &v45;
        v69 = &v50;
        v71 = &v51;
        v73 = &v52;
        Handle = a5;
        v75 = &Handle;
        v64 = 8LL;
        v40 = (v36 & 8) != 0;
        v77 = &v40;
        v41 = (v36 & 0x10) != 0;
        LODWORD(v48) = SecureDumpSettings;
        v79 = &v41;
        v81 = &v42;
        p_EventHandle = &EventHandle;
        v43 = IOSpaceEnabled;
        v85 = &v43;
        v66 = 4LL;
        v68 = 8LL;
        v70 = 8LL;
        v72 = 8LL;
        v74 = 8LL;
        v76 = 8LL;
        v78 = 1LL;
        v80 = 1LL;
        v42 = (v36 & 0x20) != 0;
        v82 = 1LL;
        EventHandle = v35;
        v84 = 8LL;
        v86 = 1LL;
        if ( v10 )
        {
          v37 = (const GUID *)(v10 + 952);
          v38 = (const GUID *)(v10 + 968);
        }
        else
        {
          v37 = (const GUID *)&v54;
          v38 = (const GUID *)&v54;
        }
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_140E06E80,
          (unsigned __int8 *)&qword_140046278,
          v38,
          v37,
          0xEu,
          &v62);
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
        LOBYTE(v19) = 1;
        guard_dispatch_icall_no_overrides(v19, v18);
        if ( !(unsigned __int8)guard_dispatch_icall_no_overrides(v21, v20) )
        {
          guard_dispatch_icall_no_overrides(0LL, v22);
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
      v47 = (__int64)IoCreateNotificationEvent(&DestinationString, &v45);
    }
    Pool2 = ExAllocatePool2(0x40uLL, 0x4C8uLL, 0x706D644Cu);
    v10 = Pool2;
    if ( !Pool2 )
    {
      v16 = (int *)(a6 + 24);
      v15 = EventHandle;
      SecureDumpSettings = -1073741670;
      v17 = Handle;
      goto LABEL_38;
    }
    v24 = *(_DWORD *)(Pool2 + 80);
    v48 = 0LL;
    v25 = v24 & 0xFFFFFFF3;
    *(_DWORD *)Pool2 = v49;
    *(_QWORD *)(Pool2 + 8) = v50;
    *(_QWORD *)(Pool2 + 16) = v51;
    *(_QWORD *)(Pool2 + 24) = v52;
    *(_QWORD *)(Pool2 + 32) = a5;
    v26 = EventHandle;
    EventHandle = 0LL;
    *(_QWORD *)(v10 + 904) = v26;
    *(_QWORD *)(v10 + 912) = Handle;
    *(_QWORD *)(v10 + 920) = v45;
    v45 = 0LL;
    v27 = v47;
    *(_QWORD *)(v10 + 928) = v7;
    *(_QWORD *)(v10 + 944) = v27;
    LODWORD(v27) = *(_DWORD *)(v10 + 40);
    IopLiveDumpContext = v10;
    *(_QWORD *)(v10 + 936) = v8;
    *(_QWORD *)(v10 + 1096) = 0LL;
    *(_QWORD *)(v10 + 1104) = 0LL;
    *(_DWORD *)(v10 + 80) = v25;
    if ( (v27 & 4) != 0 )
      *(_DWORD *)(v10 + 80) = v25 | 0x18000;
    *(_QWORD *)(v10 + 1208) = v10 + 1200;
    *(_QWORD *)(v10 + 1200) = v10 + 1200;
    IopLiveDumpInitRegistrySettings(v10);
    if ( AllowLiveDump && ((*(_DWORD *)(v10 + 80) & 0x200) == 0 || *(_QWORD *)(v10 + 1144)) )
    {
      EtwActivityIdControl(5u, (LPGUID)(v10 + 952));
      EtwActivityIdControl(1u, (LPGUID)(v10 + 968));
      if ( (unsigned int)dword_140E06E80 > 5 && tlgKeywordOn((__int64)&dword_140E06E80, 0x400000000000LL) )
      {
        v56 = &v47;
        v47 = 0x1000000LL;
        v57 = 8LL;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_140E06E80,
          (unsigned __int8 *)&word_14004637E,
          (const GUID *)(v10 + 968),
          (const GUID *)(v10 + 952),
          3u,
          v55);
      }
      SecureDumpSettings = IopLiveDumpValidateParameters(v10, a6);
      v16 = (int *)(a6 + 24);
      if ( SecureDumpSettings < 0 )
        goto LABEL_37;
      v13 = (HANDLE)*(unsigned int *)(v10 + 40);
      if ( ((unsigned __int8)v13 & 4) != 0 )
        *(_DWORD *)(v10 + 80) |= 0x18000u;
      *(_QWORD *)(v10 + 1208) = v10 + 1200;
      *(_QWORD *)(v10 + 1200) = v10 + 1200;
      if ( ((unsigned __int8)v13 & 8) == 0 || a7 )
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
      v16 = (int *)(a6 + 24);
    }
    SecureDumpSettings = -1073741811;
LABEL_37:
    v15 = v48;
    v17 = EventHandle;
    goto LABEL_38;
  }
  if ( a7 )
    *a7 = 0LL;
  return 3221225659LL;
}
