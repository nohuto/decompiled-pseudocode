/*
 * XREFs of IopLoadDriver @ 0x1409B6EEC
 * Callers:
 *     PipCallDriverAddDeviceQueryRoutine @ 0x140982F18 (PipCallDriverAddDeviceQueryRoutine.c)
 *     IopLoadUnloadDriver @ 0x140A66EE0 (IopLoadUnloadDriver.c)
 *     IopInitializeSystemDrivers @ 0x140C64B58 (IopInitializeSystemDrivers.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14022BF50 (ExAcquireResourceExclusiveLite.c)
 *     DbgPrint @ 0x140274290 (DbgPrint.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     PnpDiagnosticTraceObject @ 0x1402F0484 (PnpDiagnosticTraceObject.c)
 *     PsGetCurrentSilo @ 0x1403FCA20 (PsGetCurrentSilo.c)
 *     EtwWrite @ 0x14040FFB0 (EtwWrite.c)
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     RtlImageNtHeader @ 0x140432E80 (RtlImageNtHeader.c)
 *     VfDifCaptureIoCallbacks @ 0x140499158 (VfDifCaptureIoCallbacks.c)
 *     VfDifCaptureDriverEntry @ 0x1404991B8 (VfDifCaptureDriverEntry.c)
 *     PnpDiagnosticTraceObjectWithStatus @ 0x14049AACC (PnpDiagnosticTraceObjectWithStatus.c)
 *     IopResurrectDriver @ 0x1404A2008 (IopResurrectDriver.c)
 *     HeadlessKernelAddLogEntry @ 0x1404A7D40 (HeadlessKernelAddLogEntry.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     wcsrchr @ 0x1404FDA40 (wcsrchr.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     IopCheckIfNotNativeDriver @ 0x14070F824 (IopCheckIfNotNativeDriver.c)
 *     IopLogBlockedDriverEvent @ 0x14071046C (IopLogBlockedDriverEvent.c)
 *     CmBootLastKnownGood @ 0x1407CA3B8 (CmBootLastKnownGood.c)
 *     NtQueryKey @ 0x140845A20 (NtQueryKey.c)
 *     ObReferenceObjectByHandle @ 0x140847200 (ObReferenceObjectByHandle.c)
 *     ObInsertObjectEx @ 0x140853900 (ObInsertObjectEx.c)
 *     ObOpenObjectByNameEx @ 0x1408A41E0 (ObOpenObjectByNameEx.c)
 *     ObCreateObjectEx @ 0x1408A4B90 (ObCreateObjectEx.c)
 *     ObCloseHandle @ 0x1408AB1B0 (ObCloseHandle.c)
 *     KseShimDriverIoCallbacks @ 0x140941BB8 (KseShimDriverIoCallbacks.c)
 *     NtQueryObject @ 0x140951400 (NtQueryObject.c)
 *     IopGetRegistryValue @ 0x1409B5F9C (IopGetRegistryValue.c)
 *     IopGetDriverNameFromKeyNode @ 0x1409B6410 (IopGetDriverNameFromKeyNode.c)
 *     IopBuildFullDriverPath @ 0x1409B78C8 (IopBuildFullDriverPath.c)
 *     MmLoadSystemImageEx @ 0x1409B7B70 (MmLoadSystemImageEx.c)
 *     PnpPrepareDriverLoading @ 0x1409B8F8C (PnpPrepareDriverLoading.c)
 *     PnpCallDriverEntry @ 0x1409B914C (PnpCallDriverEntry.c)
 *     ObMakeTemporaryObject @ 0x1409B9330 (ObMakeTemporaryObject.c)
 *     EtwTiLogDriverObjectLoad @ 0x1409B93E8 (EtwTiLogDriverObjectLoad.c)
 *     MmFreeDriverInitialization @ 0x140A3317C (MmFreeDriverInitialization.c)
 *     IopBootLog @ 0x140A728F8 (IopBootLog.c)
 *     MmUnloadSystemImage @ 0x140A87050 (MmUnloadSystemImage.c)
 *     IopReadyDeviceObjects @ 0x140A8BB04 (IopReadyDeviceObjects.c)
 *     PnpDriverLoadingFailed @ 0x140A9C798 (PnpDriverLoadingFailed.c)
 *     IopSafebootDriverLoad @ 0x140AB4A18 (IopSafebootDriverLoad.c)
 *     NtQueryValueKey @ 0x140AE5AA0 (NtQueryValueKey.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopLoadDriver(HANDLE KeyHandle, char a2, unsigned __int8 a3, int *a4)
{
  unsigned __int16 *Pool2; // r13
  int v7; // r12d
  unsigned int v8; // esi
  NTSTATUS v9; // eax
  int DriverNameFromKeyNode; // ebx
  wchar_t *v11; // rax
  wchar_t *v12; // rdi
  unsigned int v13; // ebx
  size_t v14; // r8
  wchar_t *v15; // rax
  int SystemImage; // eax
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
  _QWORD *v31; // rdi
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
  __int16 v44; // [rsp+50h] [rbp-B0h] BYREF
  PVOID Object; // [rsp+58h] [rbp-A8h] BYREF
  ULONG v46; // [rsp+60h] [rbp-A0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp-98h] BYREF
  ULONG Length; // [rsp+78h] [rbp-88h] BYREF
  int v49; // [rsp+80h] [rbp-80h] BYREF
  HANDLE Handle; // [rsp+88h] [rbp-78h] BYREF
  UNICODE_STRING v51; // [rsp+90h] [rbp-70h] BYREF
  ULONG ReturnLength[2]; // [rsp+A0h] [rbp-60h] BYREF
  UNICODE_STRING Destination; // [rsp+A8h] [rbp-58h] BYREF
  UNICODE_STRING Source; // [rsp+B8h] [rbp-48h] BYREF
  PVOID BaseOfImage; // [rsp+C8h] [rbp-38h] BYREF
  UNICODE_STRING ValueName; // [rsp+D0h] [rbp-30h] BYREF
  int *v57; // [rsp+E0h] [rbp-20h]
  _DWORD v58[2]; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v59; // [rsp+F0h] [rbp-10h]
  UNICODE_STRING *p_Destination; // [rsp+F8h] [rbp-8h]
  int v61; // [rsp+100h] [rbp+0h]
  int v62; // [rsp+104h] [rbp+4h]
  __int128 v63; // [rsp+108h] [rbp+8h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+120h] [rbp+20h] BYREF
  wchar_t *v65; // [rsp+130h] [rbp+30h]
  int v66; // [rsp+138h] [rbp+38h]
  int v67; // [rsp+13Ch] [rbp+3Ch]
  ULONG *v68; // [rsp+140h] [rbp+40h]
  __int64 v69; // [rsp+148h] [rbp+48h]
  ULONG *v70; // [rsp+150h] [rbp+50h]
  __int64 v71; // [rsp+158h] [rbp+58h]
  wchar_t *v72; // [rsp+160h] [rbp+60h]
  int v73; // [rsp+168h] [rbp+68h]
  int v74; // [rsp+16Ch] [rbp+6Ch]
  int *v75; // [rsp+170h] [rbp+70h]
  __int64 v76; // [rsp+178h] [rbp+78h]

  v57 = a4;
  Length = 0;
  v58[1] = 0;
  v62 = 0;
  Object = 0LL;
  *(_QWORD *)ReturnLength = 0LL;
  BaseOfImage = 0LL;
  Pool2 = 0LL;
  Handle = 0LL;
  DestinationString = 0LL;
  v7 = 0;
  *a4 = 0;
  v51 = 0LL;
  v49 = 0;
  Source = 0LL;
  LOBYTE(v44) = 0;
  Destination = 0LL;
  v8 = a3;
  RtlInitUnicodeString(&DestinationString, 0LL);
  RtlInitUnicodeString(&v51, 0LL);
  RtlInitUnicodeString(&Source, 0LL);
  RtlInitUnicodeString(&Destination, 0LL);
  v9 = NtQueryKey(KeyHandle, KeyBasicInformation, 0LL, 0, &Length);
  if ( v9 != -2147483643 && v9 != -1073741789 )
  {
    DriverNameFromKeyNode = -1073741472;
    goto LABEL_16;
  }
  Pool2 = (unsigned __int16 *)ExAllocatePool2(0x40uLL, Length, 0x654B6F49u);
  if ( !Pool2 )
    goto LABEL_77;
  DriverNameFromKeyNode = NtQueryKey(KeyHandle, KeyBasicInformation, Pool2, Length, &Length);
  if ( DriverNameFromKeyNode < 0 )
    goto LABEL_16;
  v11 = (wchar_t *)ExAllocatePool2(0x100uLL, *((unsigned int *)Pool2 + 3) + 2LL, 0x314E6F49u);
  v51.Buffer = v11;
  v12 = v11;
  if ( !v11 )
    goto LABEL_77;
  v14 = *((unsigned int *)Pool2 + 3);
  v51.Length = Pool2[6];
  v13 = v51.Length;
  v51.MaximumLength = v51.Length + 2;
  memmove(v11, Pool2 + 8, v14);
  v12[(unsigned __int64)v13 >> 1] = 0;
  DriverNameFromKeyNode = IopBuildFullDriverPath(&v51, KeyHandle, &DestinationString);
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
    PnpDiagnosticTraceObject(&KMPnPEvt_DriverLoad_Start, &v51.Length);
    if ( a2 )
    {
      if ( InitSafeBootMode )
      {
        v46 = 0;
        ValueName = 0LL;
        RtlInitUnicodeString(&ValueName, L"Group");
        memset_0(&UserData, 0, 0x4CuLL);
        if ( NtQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, &UserData, 0x4Cu, &v46) < 0
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
            ObCloseHandle(KeyHandle, 0);
            return 3221226335LL;
          }
        }
      }
    }
    DriverNameFromKeyNode = IopGetDriverNameFromKeyNode(KeyHandle, &Destination);
    if ( DriverNameFromKeyNode >= 0 )
    {
      v58[0] = 48;
      v59 = 0LL;
      p_Destination = &Destination;
      v61 = IopCaseInsensitive != 0 ? 592 : 528;
      v63 = 0LL;
      ExAcquireResourceExclusiveLite(&IopDriverLoadResource, 1u);
      SystemImage = MmLoadSystemImageEx(
                      (unsigned int)&DestinationString,
                      0,
                      0,
                      0,
                      0,
                      (__int64)&Object,
                      (__int64)&BaseOfImage);
      DriverNameFromKeyNode = SystemImage;
      if ( SystemImage < 0 )
      {
        if ( SystemImage != -1073741554 )
        {
          if ( IopCheckIfNotNativeDriver(SystemImage, (__int64)&DestinationString) == 1 )
          {
            DriverNameFromKeyNode = ((_BYTE)v8 != 0) - 1073740949;
            IopLogBlockedDriverEvent((__int64)&DestinationString, v42, DriverNameFromKeyNode);
          }
          goto LABEL_15;
        }
        v17 = IoDriverObjectType;
        CurrentSilo = PsGetCurrentSilo();
        DriverNameFromKeyNode = ObOpenObjectByNameEx(
                                  (__int64)v58,
                                  (__int64)v17,
                                  0,
                                  0LL,
                                  0,
                                  0LL,
                                  (__int64)CurrentSilo,
                                  &Handle);
        if ( DriverNameFromKeyNode < 0 )
        {
          ExReleaseResourceLite(&IopDriverLoadResource);
          IopBootLog(&DestinationString);
          if ( DriverNameFromKeyNode == -1073741772 )
            DriverNameFromKeyNode = -1073740914;
          goto LABEL_16;
        }
        Object = 0LL;
        DriverNameFromKeyNode = ObReferenceObjectByHandle(Handle, 0, IoDriverObjectType, 0, &Object, 0LL);
        ZwClose(Handle);
        if ( DriverNameFromKeyNode >= 0 )
        {
          DriverNameFromKeyNode = IopResurrectDriver((__int64)Object);
          ObfDereferenceObject(Object);
LABEL_15:
          ExReleaseResourceLite(&IopDriverLoadResource);
          IopBootLog(&DestinationString);
          goto LABEL_16;
        }
        goto LABEL_68;
      }
      v21 = RtlImageNtHeader(BaseOfImage);
      v7 = v21->OptionalHeader.MinorImageVersion | (v21->OptionalHeader.MajorImageVersion << 16);
      DriverNameFromKeyNode = PnpPrepareDriverLoading(&v51, KeyHandle, BaseOfImage, v8);
      if ( DriverNameFromKeyNode < 0
        || (DriverNameFromKeyNode = ObCreateObjectEx(
                                      KeGetCurrentThread()->PreviousMode,
                                      IoDriverObjectType,
                                      (int)v58,
                                      0,
                                      (__int64)&v49,
                                      424,
                                      0,
                                      0,
                                      ReturnLength,
                                      0LL),
            DriverNameFromKeyNode < 0) )
      {
        MmUnloadSystemImage((ULONG_PTR)Object);
LABEL_68:
        ExReleaseResourceLite(&IopDriverLoadResource);
LABEL_69:
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
      DriverNameFromKeyNode = ObInsertObjectEx((struct _FILE_OBJECT *)v22, 0LL, 1, 0, 0, 0LL, (__int64)&Handle);
      ExReleaseResourceLite(&IopDriverLoadResource);
      if ( DriverNameFromKeyNode < 0 )
        goto LABEL_69;
      PreviousMode = KeGetCurrentThread()->PreviousMode;
      Object = 0LL;
      v30 = ObReferenceObjectByHandle(Handle, 0, IoDriverObjectType, PreviousMode, &Object, 0LL);
      if ( v30 )
        KeBugCheckEx(0x11Fu, (ULONG_PTR)Handle, v30, (ULONG_PTR)Object, 0LL);
      ZwClose(Handle);
      v31 = Object;
      *((_QWORD *)Object + 9) = &CmRegistryMachineHardwareDescriptionSystemName;
      v32 = ExAllocatePool2(0x40uLL, Destination.MaximumLength, 0x314E6F49u);
      v31[8] = v32;
      if ( v32 )
      {
        *((_WORD *)v31 + 29) = Destination.MaximumLength;
        *((_WORD *)v31 + 28) = Destination.Length;
        memmove((void *)v31[8], Destination.Buffer, Destination.MaximumLength);
      }
      v33 = (void *)ExAllocatePool2(0x40uLL, 0x1000uLL, 0x20206F49u);
      if ( v33 )
      {
        DriverNameFromKeyNode = NtQueryObject(KeyHandle, ObjectNameInformation, v33, 0x1000u, ReturnLength);
        if ( DriverNameFromKeyNode < 0 )
        {
          ObMakeTemporaryObject(v31);
          ObfDereferenceObject(v31);
          ExFreePoolWithTag(v33, 0);
        }
        else
        {
          Buffer = v51.Buffer;
          if ( v51.Buffer )
          {
            MaximumLength = v51.MaximumLength;
            *(_QWORD *)(v31[6] + 32LL) = ExAllocatePool2(0x40uLL, v51.MaximumLength, 0x314E6F49u);
            v40 = v31[6];
            if ( *(_QWORD *)(v40 + 32) )
            {
              *(_WORD *)(v40 + 26) = MaximumLength;
              *(_WORD *)(v31[6] + 24LL) = v51.Length;
              memmove(*(void **)(v31[6] + 32LL), Buffer, MaximumLength);
            }
          }
          if ( (v49 & 1) != 0 )
            *((_DWORD *)v31 + 4) |= 0x100u;
          if ( (_BYTE)v44 )
            *((_DWORD *)v31 + 4) |= 0x1000u;
          PnpDiagnosticTraceObject(&KMPnPEvt_DriverInit_Start, (unsigned __int16 *)v33);
          VfDifCaptureDriverEntry((__int64)v31);
          DriverNameFromKeyNode = PnpCallDriverEntry(v31, v33);
          if ( DriverNameFromKeyNode >= 0 )
          {
            VfDifCaptureIoCallbacks((__int64)v31);
            KseShimDriverIoCallbacks(v31, v41, (__int64)&DestinationString);
          }
          PnpDiagnosticTraceObjectWithStatus(&KMPnPEvt_DriverInit_Stop, (unsigned __int16 *)v33, DriverNameFromKeyNode);
          v35 = 0;
          v36 = 0;
          v37 = 0;
          *v57 = DriverNameFromKeyNode;
          if ( DriverNameFromKeyNode < 0 )
            DriverNameFromKeyNode = -1073740955;
          v38 = 0LL;
          do
          {
            if ( !v31[v38 + 14] )
            {
              v35 = v36;
              v31[v37 + 14] = IopInvalidDeviceRequest;
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
            MmFreeDriverInitialization(v31[5]);
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
      PnpDriverLoadingFailed(KeyHandle, 0LL);
      if ( DriverNameFromKeyNode != -1073740955 && IopGetRegistryValue(KeyHandle, L"ErrorControl", 0, &Object) >= 0 )
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
  if ( v51.Buffer )
  {
    v44 = v51.Length >> 1;
    UserData.Ptr = (ULONGLONG)&v44;
    v66 = v51.Length;
    v68 = ReturnLength;
    v49 = v7;
    ReturnLength[0] = DriverNameFromKeyNode;
    *(_QWORD *)&UserData.Size = 2LL;
    v65 = v51.Buffer;
    v67 = 0;
    v69 = 4LL;
    if ( Destination.Buffer )
      v19 = Destination.Length >> 1;
    else
      v19 = 0;
    LOWORD(v46) = v19;
    v72 = Destination.Buffer;
    v73 = 2 * v19;
    v75 = &v49;
    v70 = &v46;
    v71 = 2LL;
    v74 = 0;
    v76 = 4LL;
    if ( PnpEtwHandle && EtwEventEnabled(PnpEtwHandle, &KMPnPEvt_DriverLoad_Stop) )
      EtwWrite(PnpEtwHandle, &KMPnPEvt_DriverLoad_Stop, 0LL, 6u, &UserData);
    ExFreePoolWithTag(v51.Buffer, 0);
  }
  if ( Destination.Buffer )
    ExFreePoolWithTag(Destination.Buffer, 0);
  if ( DestinationString.Buffer )
    ExFreePoolWithTag(DestinationString.Buffer, 0);
  ObCloseHandle(KeyHandle, 0);
  return (unsigned int)DriverNameFromKeyNode;
}
