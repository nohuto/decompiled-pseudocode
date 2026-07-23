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
  NTSTATUS v9; // eax
  int DriverNameFromKeyNode; // ebx
  wchar_t *v11; // rax
  wchar_t *v12; // rdi
  unsigned int v13; // ebx
  size_t v14; // r8
  wchar_t *v15; // rax
  int v16; // eax
  POBJECT_TYPE v17; // rbx
  struct _LIST_ENTRY *CurrentSilo; // rax
  unsigned __int16 v19; // ax
  PIMAGE_NT_HEADERS v21; // rax
  _QWORD *v22; // rbx
  int v23; // ecx
  __int64 v24; // rax
  char *v25; // rsi
  PVOID v26; // rcx
  PIMAGE_NT_HEADERS v27; // rdx
  char *v28; // rax
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
  PVOID v43; // rdi
  PULONG ResultLength; // [rsp+20h] [rbp-E0h]
  __int16 v45; // [rsp+50h] [rbp-B0h] BYREF
  PVOID Object; // [rsp+58h] [rbp-A8h] BYREF
  ULONG v47; // [rsp+60h] [rbp-A0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp-98h] BYREF
  ULONG Length; // [rsp+78h] [rbp-88h] BYREF
  int v50; // [rsp+80h] [rbp-80h] BYREF
  HANDLE Handlea; // [rsp+88h] [rbp-78h] BYREF
  UNICODE_STRING v52; // [rsp+90h] [rbp-70h] BYREF
  ULONG ReturnLength[2]; // [rsp+A0h] [rbp-60h] BYREF
  UNICODE_STRING Destination; // [rsp+A8h] [rbp-58h] BYREF
  UNICODE_STRING Source; // [rsp+B8h] [rbp-48h] BYREF
  PVOID BaseOfImage; // [rsp+C8h] [rbp-38h] BYREF
  UNICODE_STRING ValueName; // [rsp+D0h] [rbp-30h] BYREF
  int *v58; // [rsp+E0h] [rbp-20h]
  _DWORD v59[2]; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v60; // [rsp+F0h] [rbp-10h]
  UNICODE_STRING *p_Destination; // [rsp+F8h] [rbp-8h]
  int v62; // [rsp+100h] [rbp+0h]
  int v63; // [rsp+104h] [rbp+4h]
  __int128 v64; // [rsp+108h] [rbp+8h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+120h] [rbp+20h] BYREF
  wchar_t *v66; // [rsp+130h] [rbp+30h]
  int v67; // [rsp+138h] [rbp+38h]
  int v68; // [rsp+13Ch] [rbp+3Ch]
  ULONG *v69; // [rsp+140h] [rbp+40h]
  __int64 v70; // [rsp+148h] [rbp+48h]
  ULONG *v71; // [rsp+150h] [rbp+50h]
  __int64 v72; // [rsp+158h] [rbp+58h]
  wchar_t *v73; // [rsp+160h] [rbp+60h]
  int v74; // [rsp+168h] [rbp+68h]
  int v75; // [rsp+16Ch] [rbp+6Ch]
  int *v76; // [rsp+170h] [rbp+70h]
  __int64 v77; // [rsp+178h] [rbp+78h]

  v58 = a4;
  Length = 0;
  v59[1] = 0;
  v63 = 0;
  Object = 0LL;
  *(_QWORD *)ReturnLength = 0LL;
  BaseOfImage = 0LL;
  Pool2 = 0LL;
  Handlea = 0LL;
  DestinationString = 0LL;
  v7 = 0;
  *a4 = 0;
  v52 = 0LL;
  v50 = 0;
  Source = 0LL;
  LOBYTE(v45) = 0;
  Destination = 0LL;
  v8 = a3;
  RtlInitUnicodeString(&DestinationString, 0LL);
  RtlInitUnicodeString(&v52, 0LL);
  RtlInitUnicodeString(&Source, 0LL);
  RtlInitUnicodeString(&Destination, 0LL);
  v9 = NtQueryKey(Handle, KeyBasicInformation, 0LL, 0, &Length);
  if ( v9 != -2147483643 && v9 != -1073741789 )
  {
    DriverNameFromKeyNode = -1073741472;
    goto LABEL_16;
  }
  Pool2 = (unsigned __int16 *)ExAllocatePool2(0x40uLL);
  if ( !Pool2 )
    goto LABEL_77;
  DriverNameFromKeyNode = NtQueryKey(Handle, KeyBasicInformation, Pool2, Length, &Length);
  if ( DriverNameFromKeyNode < 0 )
    goto LABEL_16;
  v11 = (wchar_t *)ExAllocatePool2(0x100uLL);
  v52.Buffer = v11;
  v12 = v11;
  if ( !v11 )
    goto LABEL_77;
  v14 = *((unsigned int *)Pool2 + 3);
  v52.Length = Pool2[6];
  v13 = v52.Length;
  v52.MaximumLength = v52.Length + 2;
  memmove(v11, Pool2 + 8, v14);
  v12[(unsigned __int64)v13 >> 1] = 0;
  DriverNameFromKeyNode = IopBuildFullDriverPath(&v52, Handle, &DestinationString);
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
    PnpDiagnosticTraceObject(&KMPnPEvt_DriverLoad_Start, &v52.Length);
    if ( a2 )
    {
      if ( InitSafeBootMode )
      {
        v47 = 0;
        ValueName = 0LL;
        RtlInitUnicodeString(&ValueName, L"Group");
        memset_0(&UserData, 0, 0x4CuLL);
        if ( NtQueryValueKey(Handle, &ValueName, KeyValuePartialInformation, &UserData, 0x4Cu, &v47) < 0
          || (ValueName.Length = LOWORD(UserData.Size) - 2,
              ValueName.MaximumLength = LOWORD(UserData.Size) - 2,
              ValueName.Buffer = (wchar_t *)&UserData.Reserved,
              !(unsigned __int8)IopSafebootDriverLoad(&ValueName)) )
        {
          if ( !(unsigned __int8)IopSafebootDriverLoad(&Source) )
          {
            IopBootLog(&Source);
            DbgPrint("SAFEBOOT: skipping device = %wZ(%wZ)\n", &Source, &ValueName);
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
      v59[0] = 48;
      v60 = 0LL;
      p_Destination = &Destination;
      v62 = IopCaseInsensitive != 0 ? 592 : 528;
      v64 = 0LL;
      ExAcquireResourceExclusiveLite(&IopDriverLoadResource, 1u);
      v16 = MmLoadSystemImageEx((__int64)&DestinationString, 0LL, 0LL, 0, 0, (__int64 *)&Object, &BaseOfImage);
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
                                  (__int64)v59,
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
        Object = 0LL;
        DriverNameFromKeyNode = ObReferenceObjectByHandle(Handlea, 0, IoDriverObjectType, 0, &Object, 0LL);
        ZwClose(Handlea);
        if ( DriverNameFromKeyNode >= 0 )
        {
          DriverNameFromKeyNode = IopResurrectDriver((__int64)Object);
          ObfDereferenceObject(Object);
LABEL_15:
          ExReleaseResourceLite(&IopDriverLoadResource);
          IopBootLog(&DestinationString);
          goto LABEL_16;
        }
        goto LABEL_66;
      }
      v21 = RtlImageNtHeader(BaseOfImage);
      v7 = v21->OptionalHeader.MinorImageVersion | (v21->OptionalHeader.MajorImageVersion << 16);
      DriverNameFromKeyNode = PnpPrepareDriverLoading((__int64)&v52, Handle, BaseOfImage, v8, &v50, (bool *)&v45);
      if ( DriverNameFromKeyNode < 0
        || (DriverNameFromKeyNode = ObCreateObjectEx(
                                      KeGetCurrentThread()->PreviousMode,
                                      IoDriverObjectType,
                                      (int)v59,
                                      0,
                                      (__int64)ResultLength,
                                      424,
                                      0,
                                      0,
                                      ReturnLength,
                                      0LL),
            DriverNameFromKeyNode < 0) )
      {
        MmUnloadSystemImage((ULONG_PTR)Object);
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
      v25 = (char *)BaseOfImage;
      v26 = BaseOfImage;
      ReturnLength[0] = v24;
      *(_DWORD *)v22 = 22020100;
      v27 = RtlImageNtHeader(v26);
      v28 = &v25[v27->OptionalHeader.AddressOfEntryPoint];
      v7 = v27->OptionalHeader.MinorImageVersion | (v27->OptionalHeader.MajorImageVersion << 16);
      if ( !_bittest16((const signed __int16 *)&v27->OptionalHeader.DllCharacteristics, 0xDu) )
        *((_DWORD *)v22 + 4) |= 2u;
      v22[11] = v28;
      v22[5] = Object;
      v22[3] = v25;
      *((_DWORD *)v22 + 8) = v27->OptionalHeader.SizeOfImage;
      DriverNameFromKeyNode = ObInsertObjectEx((char *)v22, 0LL, 1, 0, 0, 0LL, (__int64)&Handlea);
      ExReleaseResourceLite(&IopDriverLoadResource);
      if ( DriverNameFromKeyNode < 0 )
        goto LABEL_67;
      PreviousMode = KeGetCurrentThread()->PreviousMode;
      Object = 0LL;
      v30 = ObReferenceObjectByHandle(Handlea, 0, IoDriverObjectType, PreviousMode, &Object, 0LL);
      if ( v30 )
        KeBugCheckEx(0x11Fu, (ULONG_PTR)Handlea, v30, (ULONG_PTR)Object, 0LL);
      ZwClose(Handlea);
      v31 = Object;
      *((_QWORD *)Object + 9) = &CmRegistryMachineHardwareDescriptionSystemName;
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
          Buffer = v52.Buffer;
          if ( v52.Buffer )
          {
            MaximumLength = v52.MaximumLength;
            *(_QWORD *)(*((_QWORD *)v31 + 6) + 32LL) = ExAllocatePool2(0x40uLL);
            v40 = *((_QWORD *)v31 + 6);
            if ( *(_QWORD *)(v40 + 32) )
            {
              *(_WORD *)(v40 + 26) = MaximumLength;
              *(_WORD *)(*((_QWORD *)v31 + 6) + 24LL) = v52.Length;
              memmove(*(void **)(*((_QWORD *)v31 + 6) + 32LL), Buffer, MaximumLength);
            }
          }
          if ( (v50 & 1) != 0 )
            *((_DWORD *)v31 + 4) |= 0x100u;
          if ( (_BYTE)v45 )
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
          *v58 = DriverNameFromKeyNode;
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
    Object = 0LL;
    if ( DriverNameFromKeyNode != -1073741554 )
    {
      PnpDriverLoadingFailed(Handle, 0LL);
      if ( DriverNameFromKeyNode != -1073740955 && (int)IopGetRegistryValue(Handle) >= 0 )
      {
        v43 = Object;
        if ( *((_DWORD *)Object + 3) )
          CmBootLastKnownGood(
            *(_DWORD *)((char *)Object + *((unsigned int *)Object + 2)),
            (unsigned __int64)&Destination & -(__int64)(Destination.Buffer != 0LL),
            (unsigned __int64)&DestinationString & -(__int64)(DestinationString.Buffer != 0LL),
            DriverNameFromKeyNode);
        ExFreePoolWithTag(v43, 0);
      }
    }
  }
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  if ( v52.Buffer )
  {
    v45 = v52.Length >> 1;
    UserData.Ptr = (ULONGLONG)&v45;
    v67 = v52.Length;
    v69 = ReturnLength;
    v50 = v7;
    ReturnLength[0] = DriverNameFromKeyNode;
    *(_QWORD *)&UserData.Size = 2LL;
    v66 = v52.Buffer;
    v68 = 0;
    v70 = 4LL;
    if ( Destination.Buffer )
      v19 = Destination.Length >> 1;
    else
      v19 = 0;
    LOWORD(v47) = v19;
    v73 = Destination.Buffer;
    v74 = 2 * v19;
    v76 = &v50;
    v71 = &v47;
    v72 = 2LL;
    v75 = 0;
    v77 = 4LL;
    if ( PnpEtwHandle && EtwEventEnabled(PnpEtwHandle, &KMPnPEvt_DriverLoad_Stop) )
      EtwWrite(PnpEtwHandle, &KMPnPEvt_DriverLoad_Stop, 0LL, 6u, &UserData);
    ExFreePoolWithTag(v52.Buffer, 0);
  }
  if ( Destination.Buffer )
    ExFreePoolWithTag(Destination.Buffer, 0);
  if ( DestinationString.Buffer )
    ExFreePoolWithTag(DestinationString.Buffer, 0);
  ObCloseHandle(Handle, 0);
  return (unsigned int)DriverNameFromKeyNode;
}
