/*
 * XREFs of IopLoadDriver @ 0x1409B0D50
 * Callers:
 *     PipCallDriverAddDeviceQueryRoutine @ 0x1409AD954 (PipCallDriverAddDeviceQueryRoutine.c)
 *     IopLoadUnloadDriver @ 0x140ABFF10 (IopLoadUnloadDriver.c)
 *     IopInitializeSystemDrivers @ 0x140C51698 (IopInitializeSystemDrivers.c)
 * Callees:
 *     EtwEventEnabled @ 0x140252BF0 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140257AF0 (EtwWrite.c)
 *     ExAcquireResourceExclusiveLite @ 0x14028A9E0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x140296E10 (ExReleaseResourceLite.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     DbgPrint @ 0x1403A9600 (DbgPrint.c)
 *     PsGetCurrentSilo @ 0x1403FA570 (PsGetCurrentSilo.c)
 *     RtlImageNtHeader @ 0x14043DFA0 (RtlImageNtHeader.c)
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     PnpDiagnosticTraceObject @ 0x140463B34 (PnpDiagnosticTraceObject.c)
 *     VfDifCaptureIoCallbacks @ 0x14049F4E8 (VfDifCaptureIoCallbacks.c)
 *     VfDifCaptureDriverEntry @ 0x14049F548 (VfDifCaptureDriverEntry.c)
 *     PnpDiagnosticTraceObjectWithStatus @ 0x1404A172C (PnpDiagnosticTraceObjectWithStatus.c)
 *     IopResurrectDriver @ 0x1404A6C30 (IopResurrectDriver.c)
 *     HeadlessKernelAddLogEntry @ 0x1404AC070 (HeadlessKernelAddLogEntry.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     wcsrchr @ 0x1404FDA00 (wcsrchr.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ZwClose @ 0x14069B320 (ZwClose.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     IopCheckIfNotNativeDriver @ 0x140705B94 (IopCheckIfNotNativeDriver.c)
 *     IopLogBlockedDriverEvent @ 0x1407067DC (IopLogBlockedDriverEvent.c)
 *     CmBootLastKnownGood @ 0x1407BA6C8 (CmBootLastKnownGood.c)
 *     NtQueryKey @ 0x14084D9C0 (NtQueryKey.c)
 *     ObReferenceObjectByHandle @ 0x14084F190 (ObReferenceObjectByHandle.c)
 *     ObOpenObjectByNameEx @ 0x14085B430 (ObOpenObjectByNameEx.c)
 *     ObCreateObjectEx @ 0x14085BE20 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x1408A05E0 (ObInsertObjectEx.c)
 *     NtQueryObject @ 0x1408BFD10 (NtQueryObject.c)
 *     ObCloseHandle @ 0x1408EFEC0 (ObCloseHandle.c)
 *     IopReadyDeviceObjects @ 0x1409AF208 (IopReadyDeviceObjects.c)
 *     ObMakeTemporaryObject @ 0x1409AF2C0 (ObMakeTemporaryObject.c)
 *     PnpCallDriverEntry @ 0x1409AF444 (PnpCallDriverEntry.c)
 *     PnpPrepareDriverLoading @ 0x1409AFA84 (PnpPrepareDriverLoading.c)
 *     MmLoadSystemImageEx @ 0x1409B0468 (MmLoadSystemImageEx.c)
 *     IopBuildFullDriverPath @ 0x1409B0AA8 (IopBuildFullDriverPath.c)
 *     IopGetDriverNameFromKeyNode @ 0x1409B1F94 (IopGetDriverNameFromKeyNode.c)
 *     IopGetRegistryValue @ 0x1409B29DC (IopGetRegistryValue.c)
 *     MmFreeDriverInitialization @ 0x140A39550 (MmFreeDriverInitialization.c)
 *     KseShimDriverIoCallbacks @ 0x140A500CC (KseShimDriverIoCallbacks.c)
 *     IopBootLog @ 0x140A76824 (IopBootLog.c)
 *     EtwTiLogDriverObjectLoad @ 0x140A7E124 (EtwTiLogDriverObjectLoad.c)
 *     MmUnloadSystemImage @ 0x140A86260 (MmUnloadSystemImage.c)
 *     PnpDriverLoadingFailed @ 0x140A9BB78 (PnpDriverLoadingFailed.c)
 *     IopSafebootDriverLoad @ 0x140AB556C (IopSafebootDriverLoad.c)
 *     NtQueryValueKey @ 0x140AD3580 (NtQueryValueKey.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopLoadDriver(HANDLE Handle, char a2, unsigned __int8 a3, int *a4)
{
  unsigned __int16 *Pool2; // r13
  int v7; // r12d
  int v8; // esi
  int v9; // eax
  int DriverNameFromKeyNode; // ebx
  wchar_t *v11; // rax
  wchar_t *v12; // rdi
  unsigned int Length; // ebx
  size_t v14; // r8
  wchar_t *v15; // rax
  int v16; // eax
  POBJECT_TYPE v17; // rbx
  struct _LIST_ENTRY *CurrentSilo; // rax
  unsigned __int16 v19; // ax
  unsigned __int64 v21; // rax
  _QWORD *v22; // rbx
  int v23; // ecx
  __int64 v24; // rax
  unsigned __int64 v25; // rsi
  unsigned __int64 v26; // rcx
  unsigned __int64 v27; // rdx
  unsigned __int64 v28; // rax
  KPROCESSOR_MODE PreviousMode; // r9
  NTSTATUS v30; // eax
  PVOID v31; // rdi
  __int64 v32; // rax
  void *v33; // r14
  wchar_t *Buffer; // rsi
  int v35; // edx
  int v36; // r8d
  unsigned int v37; // ecx
  __int64 v38; // rax
  size_t MaximumLength; // rbx
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rdx
  int ValueKey; // eax
  PVOID v44; // rdi
  PVOID *Object; // [rsp+20h] [rbp-E0h]
  __int16 v46; // [rsp+50h] [rbp-B0h] BYREF
  PVOID P; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v48; // [rsp+60h] [rbp-A0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp-98h] BYREF
  __int64 v50; // [rsp+78h] [rbp-88h] BYREF
  int v51; // [rsp+80h] [rbp-80h] BYREF
  HANDLE Handlea; // [rsp+88h] [rbp-78h] BYREF
  UNICODE_STRING v53; // [rsp+90h] [rbp-70h] BYREF
  ULONG ReturnLength[2]; // [rsp+A0h] [rbp-60h] BYREF
  UNICODE_STRING Destination; // [rsp+A8h] [rbp-58h] BYREF
  UNICODE_STRING Source; // [rsp+B8h] [rbp-48h] BYREF
  unsigned __int64 v57; // [rsp+C8h] [rbp-38h] BYREF
  UNICODE_STRING v58; // [rsp+D0h] [rbp-30h] BYREF
  int *v59; // [rsp+E0h] [rbp-20h]
  _DWORD v60[2]; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v61; // [rsp+F0h] [rbp-10h]
  UNICODE_STRING *p_Destination; // [rsp+F8h] [rbp-8h]
  int v63; // [rsp+100h] [rbp+0h]
  int v64; // [rsp+104h] [rbp+4h]
  __int128 v65; // [rsp+108h] [rbp+8h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+120h] [rbp+20h] BYREF
  wchar_t *v67; // [rsp+130h] [rbp+30h]
  int v68; // [rsp+138h] [rbp+38h]
  int v69; // [rsp+13Ch] [rbp+3Ch]
  ULONG *v70; // [rsp+140h] [rbp+40h]
  __int64 v71; // [rsp+148h] [rbp+48h]
  __int64 *v72; // [rsp+150h] [rbp+50h]
  __int64 v73; // [rsp+158h] [rbp+58h]
  wchar_t *v74; // [rsp+160h] [rbp+60h]
  int v75; // [rsp+168h] [rbp+68h]
  int v76; // [rsp+16Ch] [rbp+6Ch]
  int *v77; // [rsp+170h] [rbp+70h]
  __int64 v78; // [rsp+178h] [rbp+78h]

  v59 = a4;
  LODWORD(v50) = 0;
  v60[1] = 0;
  v64 = 0;
  P = 0LL;
  *(_QWORD *)ReturnLength = 0LL;
  v57 = 0LL;
  Pool2 = 0LL;
  Handlea = 0LL;
  DestinationString = 0LL;
  v7 = 0;
  *a4 = 0;
  v53 = 0LL;
  v51 = 0;
  Source = 0LL;
  LOBYTE(v46) = 0;
  Destination = 0LL;
  v8 = a3;
  RtlInitUnicodeString(&DestinationString, 0LL);
  RtlInitUnicodeString(&v53, 0LL);
  RtlInitUnicodeString(&Source, 0LL);
  RtlInitUnicodeString(&Destination, 0LL);
  v9 = NtQueryKey(Handle, 0, 0LL, 0, &v50);
  if ( v9 != -2147483643 && v9 != -1073741789 )
  {
    DriverNameFromKeyNode = -1073741472;
    goto LABEL_16;
  }
  Pool2 = (unsigned __int16 *)ExAllocatePool2(0x40uLL);
  if ( !Pool2 )
    goto LABEL_77;
  DriverNameFromKeyNode = NtQueryKey(Handle, 0, (unsigned __int64)Pool2, v50, &v50);
  if ( DriverNameFromKeyNode < 0 )
    goto LABEL_16;
  v11 = (wchar_t *)ExAllocatePool2(0x100uLL);
  v53.Buffer = v11;
  v12 = v11;
  if ( !v11 )
    goto LABEL_77;
  v14 = *((unsigned int *)Pool2 + 3);
  v53.Length = Pool2[6];
  Length = v53.Length;
  v53.MaximumLength = v53.Length + 2;
  memmove(v11, Pool2 + 8, v14);
  v12[(unsigned __int64)Length >> 1] = 0;
  DriverNameFromKeyNode = IopBuildFullDriverPath(&v53, Handle, &DestinationString);
  if ( DriverNameFromKeyNode >= 0 )
  {
    v15 = wcsrchr(DestinationString.Buffer, 0x5Cu);
    if ( v15 )
    {
      Source.Buffer = v15 + 1;
      RtlInitUnicodeString(&Source, v15 + 1);
    }
    else
    {
      Source.Buffer = DestinationString.Buffer;
      Source.Length = DestinationString.Length;
      Source.MaximumLength = DestinationString.MaximumLength;
    }
    HeadlessKernelAddLogEntry();
    PnpDiagnosticTraceObject(&KMPnPEvt_DriverLoad_Start, &v53.Length);
    if ( a2 )
    {
      if ( (_DWORD)InitSafeBootMode )
      {
        LODWORD(v48) = 0;
        v58 = 0LL;
        RtlInitUnicodeString(&v58, L"Group");
        memset_0(&UserData, 0, 0x4CuLL);
        ValueKey = NtQueryValueKey(Handle, 76, (__int64)&v48);
        if ( ValueKey < 0
          || (v58.Length = LOWORD(UserData.Size) - 2,
              v58.MaximumLength = LOWORD(UserData.Size) - 2,
              v58.Buffer = (wchar_t *)&UserData.Reserved,
              !(unsigned __int8)IopSafebootDriverLoad(&v58)) )
        {
          if ( !(unsigned __int8)IopSafebootDriverLoad(&Source) )
          {
            IopBootLog(&Source);
            DbgPrint("SAFEBOOT: skipping device = %wZ(%wZ)\n", &Source, &v58);
            HeadlessKernelAddLogEntry();
            ObCloseHandle(Handle, 0);
            return 3221226335LL;
          }
        }
      }
    }
    DriverNameFromKeyNode = IopGetDriverNameFromKeyNode(Handle, &Destination);
    if ( DriverNameFromKeyNode >= 0 )
    {
      v60[0] = 48;
      v61 = 0LL;
      p_Destination = &Destination;
      v63 = IopCaseInsensitive != 0 ? 592 : 528;
      v65 = 0LL;
      ExAcquireResourceExclusiveLite(&IopDriverLoadResource, 1u);
      v16 = MmLoadSystemImageEx((__int64)&DestinationString, 0LL, 0LL, 0, 0, (__int64 *)&P, &v57);
      DriverNameFromKeyNode = v16;
      if ( v16 < 0 )
      {
        if ( v16 != -1073741554 )
        {
          if ( IopCheckIfNotNativeDriver(v16, (__int64)&DestinationString) == 1 )
          {
            DriverNameFromKeyNode = ((_BYTE)v8 != 0) - 1073740949;
            IopLogBlockedDriverEvent((__int64)&DestinationString, v42, DriverNameFromKeyNode);
          }
          goto LABEL_15;
        }
        v17 = IoDriverObjectType;
        CurrentSilo = PsGetCurrentSilo();
        DriverNameFromKeyNode = ObOpenObjectByNameEx(
                                  (__int64)v60,
                                  (__int64)v17,
                                  0,
                                  0LL,
                                  0,
                                  0,
                                  (__int64)CurrentSilo,
                                  &Handlea);
        if ( DriverNameFromKeyNode < 0 )
        {
          ExReleaseResourceLite(&IopDriverLoadResource);
          IopBootLog(&DestinationString);
          if ( DriverNameFromKeyNode == -1073741772 )
            DriverNameFromKeyNode = -1073740914;
          goto LABEL_16;
        }
        P = 0LL;
        DriverNameFromKeyNode = ObReferenceObjectByHandle(Handlea, 0, IoDriverObjectType, 0, &P, 0LL);
        ZwClose(Handlea);
        if ( DriverNameFromKeyNode >= 0 )
        {
          DriverNameFromKeyNode = IopResurrectDriver((__int64)P);
          ObfDereferenceObject(P);
LABEL_15:
          ExReleaseResourceLite(&IopDriverLoadResource);
          IopBootLog(&DestinationString);
          goto LABEL_16;
        }
        goto LABEL_66;
      }
      v21 = RtlImageNtHeader(v57);
      v7 = *(unsigned __int16 *)(v21 + 70) | (*(unsigned __int16 *)(v21 + 68) << 16);
      DriverNameFromKeyNode = PnpPrepareDriverLoading((__int64)&v53, Handle, v57, v8, &v51, (bool *)&v46);
      if ( DriverNameFromKeyNode < 0
        || (DriverNameFromKeyNode = ObCreateObjectEx(
                                      KeGetCurrentThread()->PreviousMode,
                                      IoDriverObjectType,
                                      (int)v60,
                                      0,
                                      (__int64)Object,
                                      424,
                                      0,
                                      0,
                                      ReturnLength,
                                      0LL),
            DriverNameFromKeyNode < 0) )
      {
        MmUnloadSystemImage((ULONG_PTR)P);
LABEL_66:
        ExReleaseResourceLite(&IopDriverLoadResource);
LABEL_67:
        IopBootLog(&DestinationString);
        goto LABEL_16;
      }
      v22 = *(_QWORD **)ReturnLength;
      memset_0(*(void **)ReturnLength, 0, 0x1A8uLL);
      v23 = 0;
      v22[6] = v22 + 42;
      v22[42] = v22;
      v24 = 0LL;
      do
      {
        v22[v24 + 14] = IopInvalidDeviceRequest;
        v24 = (unsigned int)(v23 + 1);
        v23 = v24;
      }
      while ( (unsigned int)v24 <= 0x1B );
      v25 = v57;
      v26 = v57;
      ReturnLength[0] = v24;
      *(_DWORD *)v22 = 22020100;
      v27 = RtlImageNtHeader(v26);
      v28 = v25 + *(unsigned int *)(v27 + 40);
      v7 = *(unsigned __int16 *)(v27 + 70) | (*(unsigned __int16 *)(v27 + 68) << 16);
      if ( !_bittest16((const signed __int16 *)(v27 + 94), 0xDu) )
        *((_DWORD *)v22 + 4) |= 2u;
      v22[11] = v28;
      v22[5] = P;
      v22[3] = v25;
      *((_DWORD *)v22 + 8) = *(_DWORD *)(v27 + 80);
      DriverNameFromKeyNode = ObInsertObjectEx((char *)v22, 0LL, 1, 0, 0, 0LL, (__int64)&Handlea);
      ExReleaseResourceLite(&IopDriverLoadResource);
      if ( DriverNameFromKeyNode < 0 )
        goto LABEL_67;
      PreviousMode = KeGetCurrentThread()->PreviousMode;
      P = 0LL;
      v30 = ObReferenceObjectByHandle(Handlea, 0, IoDriverObjectType, PreviousMode, &P, 0LL);
      if ( v30 )
        KeBugCheckEx(0x11Fu, (ULONG_PTR)Handlea, v30, (ULONG_PTR)P, 0LL);
      ZwClose(Handlea);
      v31 = P;
      *((_QWORD *)P + 9) = &CmRegistryMachineHardwareDescriptionSystemName;
      v32 = ExAllocatePool2(0x40uLL);
      *((_QWORD *)v31 + 8) = v32;
      if ( v32 )
      {
        *((_WORD *)v31 + 29) = Destination.MaximumLength;
        *((_WORD *)v31 + 28) = Destination.Length;
        memmove(*((void **)v31 + 8), Destination.Buffer, Destination.MaximumLength);
      }
      v33 = (void *)ExAllocatePool2(0x40uLL);
      if ( v33 )
      {
        DriverNameFromKeyNode = NtQueryObject(Handle, ObjectNameInformation, v33, 0x1000u, ReturnLength);
        if ( DriverNameFromKeyNode < 0 )
        {
          ObMakeTemporaryObject(v31);
          ObfDereferenceObject(v31);
          ExFreePoolWithTag(v33, 0);
        }
        else
        {
          Buffer = v53.Buffer;
          if ( v53.Buffer )
          {
            MaximumLength = v53.MaximumLength;
            *(_QWORD *)(*((_QWORD *)v31 + 6) + 32LL) = ExAllocatePool2(0x40uLL);
            v40 = *((_QWORD *)v31 + 6);
            if ( *(_QWORD *)(v40 + 32) )
            {
              *(_WORD *)(v40 + 26) = MaximumLength;
              *(_WORD *)(*((_QWORD *)v31 + 6) + 24LL) = v53.Length;
              memmove(*(void **)(*((_QWORD *)v31 + 6) + 32LL), Buffer, MaximumLength);
            }
          }
          if ( (v51 & 1) != 0 )
            *((_DWORD *)v31 + 4) |= 0x100u;
          if ( (_BYTE)v46 )
            *((_DWORD *)v31 + 4) |= 0x1000u;
          PnpDiagnosticTraceObject(&KMPnPEvt_DriverInit_Start, (unsigned __int16 *)v33);
          VfDifCaptureDriverEntry((__int64)v31);
          DriverNameFromKeyNode = PnpCallDriverEntry((__int64)v31);
          if ( DriverNameFromKeyNode >= 0 )
          {
            VfDifCaptureIoCallbacks((__int64)v31);
            KseShimDriverIoCallbacks(v31, v41, &DestinationString);
          }
          PnpDiagnosticTraceObjectWithStatus(&KMPnPEvt_DriverInit_Stop, (unsigned __int16 *)v33, DriverNameFromKeyNode);
          v35 = 0;
          v36 = 0;
          v37 = 0;
          *v59 = DriverNameFromKeyNode;
          if ( DriverNameFromKeyNode < 0 )
            DriverNameFromKeyNode = -1073740955;
          v38 = 0LL;
          do
          {
            if ( !*((_QWORD *)v31 + v38 + 14) )
            {
              v35 = v36;
              *((_QWORD *)v31 + v37 + 14) = IopInvalidDeviceRequest;
            }
            v38 = (unsigned int)(v35 + 1);
            v37 = v38;
            ++v35;
            v36 = v38;
          }
          while ( (unsigned int)v38 <= 0x1B );
          ExFreePoolWithTag(v33, 0);
          if ( DriverNameFromKeyNode >= 0 )
          {
            IopBootLog(&DestinationString);
            MmFreeDriverInitialization(*((_QWORD *)v31 + 5));
          }
          ObMakeTemporaryObject(v31);
          ObfDereferenceObject(v31);
        }
        goto LABEL_16;
      }
      ObMakeTemporaryObject(v31);
      ObfDereferenceObject(v31);
LABEL_77:
      DriverNameFromKeyNode = -1073741670;
    }
  }
LABEL_16:
  HeadlessKernelAddLogEntry();
  if ( DriverNameFromKeyNode < 0 && DriverNameFromKeyNode != -1073741218 && DriverNameFromKeyNode != -1073740948 )
  {
    P = 0LL;
    if ( DriverNameFromKeyNode != -1073741554 )
    {
      PnpDriverLoadingFailed(Handle, 0LL);
      if ( DriverNameFromKeyNode != -1073740955 && (int)IopGetRegistryValue(Handle) >= 0 )
      {
        v44 = P;
        if ( *((_DWORD *)P + 3) )
          CmBootLastKnownGood(
            *(_DWORD *)((char *)P + *((unsigned int *)P + 2)),
            (unsigned __int64)&Destination & -(__int64)(Destination.Buffer != 0LL),
            (unsigned __int64)&DestinationString & -(__int64)(DestinationString.Buffer != 0LL),
            DriverNameFromKeyNode);
        ExFreePoolWithTag(v44, 0);
      }
    }
  }
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  if ( v53.Buffer )
  {
    v46 = v53.Length >> 1;
    UserData.Ptr = (ULONGLONG)&v46;
    v68 = v53.Length;
    v70 = ReturnLength;
    v51 = v7;
    ReturnLength[0] = DriverNameFromKeyNode;
    *(_QWORD *)&UserData.Size = 2LL;
    v67 = v53.Buffer;
    v69 = 0;
    v71 = 4LL;
    if ( Destination.Buffer )
      v19 = Destination.Length >> 1;
    else
      v19 = 0;
    LOWORD(v48) = v19;
    v74 = Destination.Buffer;
    v75 = 2 * v19;
    v77 = &v51;
    v72 = &v48;
    v73 = 2LL;
    v76 = 0;
    v78 = 4LL;
    if ( PnpEtwHandle && EtwEventEnabled(PnpEtwHandle, &KMPnPEvt_DriverLoad_Stop) )
      EtwWrite(PnpEtwHandle, &KMPnPEvt_DriverLoad_Stop, 0LL, 6u, &UserData);
    ExFreePoolWithTag(v53.Buffer, 0);
  }
  if ( Destination.Buffer )
    ExFreePoolWithTag(Destination.Buffer, 0);
  if ( DestinationString.Buffer )
    ExFreePoolWithTag(DestinationString.Buffer, 0);
  ObCloseHandle(Handle, 0);
  return (unsigned int)DriverNameFromKeyNode;
}
