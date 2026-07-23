/*
 * XREFs of IopInitializeBootDrivers @ 0x140C0D35C
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140C0996C (IoInitSystemPreDrivers.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x14029B2A0 (ObfReferenceObjectWithTag.c)
 *     RtlStringCchPrintfExW @ 0x14042CC40 (RtlStringCchPrintfExW.c)
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     PnpDiagnosticTrace @ 0x140463F4C (PnpDiagnosticTrace.c)
 *     PnpRequestDeviceAction @ 0x14046E128 (PnpRequestDeviceAction.c)
 *     PnpUnlockDeviceActionQueue @ 0x140499000 (PnpUnlockDeviceActionQueue.c)
 *     PnpLockDeviceActionQueue @ 0x140499094 (PnpLockDeviceActionQueue.c)
 *     HeadlessKernelAddLogEntry @ 0x1404AC070 (HeadlessKernelAddLogEntry.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     McTemplateK0dzd_EtwWriteTransfer @ 0x14059FDC8 (McTemplateK0dzd_EtwWriteTransfer.c)
 *     PnpBootDeviceWait @ 0x1405A05F8 (PnpBootDeviceWait.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ZwClose @ 0x14069B320 (ZwClose.c)
 *     PnpWaitForEmptyDeviceEventQueue @ 0x1406EEF4C (PnpWaitForEmptyDeviceEventQueue.c)
 *     PipHardwareConfigGetIndex @ 0x14070E038 (PipHardwareConfigGetIndex.c)
 *     PipApplyFunctionToServiceInstances @ 0x1407169C0 (PipApplyFunctionToServiceInstances.c)
 *     PnpWaitForEmptyDeviceActionQueue @ 0x1407212FC (PnpWaitForEmptyDeviceActionQueue.c)
 *     RtlCompareUnicodeString @ 0x140939BB0 (RtlCompareUnicodeString.c)
 *     _PnpCtxRegSetValue @ 0x140950248 (_PnpCtxRegSetValue.c)
 *     PnpUnicodeStringToWstrFree @ 0x140956510 (PnpUnicodeStringToWstrFree.c)
 *     IopGetDriverNameFromKeyNode @ 0x1409B1F94 (IopGetDriverNameFromKeyNode.c)
 *     IopGetRegistryValue @ 0x1409B29DC (IopGetRegistryValue.c)
 *     PiCreateDriverRedirectedStateKey @ 0x1409B2E6C (PiCreateDriverRedirectedStateKey.c)
 *     PnpUnicodeStringToWstr @ 0x1409D04B0 (PnpUnicodeStringToWstr.c)
 *     _PnpCtxRegCloseKey @ 0x140A0E4E4 (_PnpCtxRegCloseKey.c)
 *     IopOpenRegistryKeyEx @ 0x140A3E608 (IopOpenRegistryKeyEx.c)
 *     _PnpCtxRegCreateKey @ 0x140A4E614 (_PnpCtxRegCreateKey.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 *     PnpNotifyEarlyLaunchStatusUpdate @ 0x140BCDB00 (PnpNotifyEarlyLaunchStatusUpdate.c)
 *     IopCreateArcNames @ 0x140C0AB18 (IopCreateArcNames.c)
 *     IopCallBootDriverReinitializationRoutines @ 0x140C0C5F0 (IopCallBootDriverReinitializationRoutines.c)
 *     PipGetDriverTagPriority @ 0x140C0F690 (PipGetDriverTagPriority.c)
 *     PipLookupGroupName @ 0x140C101F8 (PipLookupGroupName.c)
 *     PipUnloadEarlyLaunchDrivers @ 0x140C11358 (PipUnloadEarlyLaunchDrivers.c)
 *     PipWaitCriticalDevices @ 0x140C113FC (PipWaitCriticalDevices.c)
 *     PnpWaitForDevicesToStart @ 0x140C11644 (PnpWaitForDevicesToStart.c)
 *     PiCreateDriverDataDirectoryRoot @ 0x140C116BC (PiCreateDriverDataDirectoryRoot.c)
 *     IopAllocateLegacyBootResources @ 0x140C12E98 (IopAllocateLegacyBootResources.c)
 *     VhdAutoAttachVirtualDisks @ 0x140C4BCCC (VhdAutoAttachVirtualDisks.c)
 *     VhdInitialize @ 0x140C4BF5C (VhdInitialize.c)
 *     CimfsInitialize @ 0x140C4C9EC (CimfsInitialize.c)
 *     RamdiskInitialize @ 0x140C4D2A8 (RamdiskInitialize.c)
 *     CompositefsBootIsEnabled @ 0x140C4D5F4 (CompositefsBootIsEnabled.c)
 *     SbpAddTransportToInstance @ 0x140C4D6B4 (SbpAddTransportToInstance.c)
 *     SbpStartLanman @ 0x140C4D8A0 (SbpStartLanman.c)
 *     SbpWaitForVmbus @ 0x140C4DC78 (SbpWaitForVmbus.c)
 *     PipInitializeCoreDriversAndElam @ 0x140C520B0 (PipInitializeCoreDriversAndElam.c)
 *     PipInitializeDriverDependentDLLs @ 0x140C524C4 (PipInitializeDriverDependentDLLs.c)
 *     PnpInitializeBootStartDriver @ 0x140C5421C (PnpInitializeBootStartDriver.c)
 *     PpInitGetGroupOrderIndex @ 0x140C55ABC (PpInitGetGroupOrderIndex.c)
 *     PipCheckDependencies @ 0x140C56068 (PipCheckDependencies.c)
 */

__int64 __fastcall IopInitializeBootDrivers(__int64 a1)
{
  NTSTATUS RegistryValue; // ebx
  __int64 result; // rax
  _QWORD *v4; // r15
  int GroupOrderIndex; // eax
  char *v6; // rdx
  unsigned int v7; // r8d
  unsigned __int16 i; // cx
  __int64 v9; // rax
  char *v10; // rax
  unsigned __int16 v11; // bx
  unsigned __int16 v12; // di
  __int64 v13; // r14
  UNICODE_STRING *v14; // r14
  UNICODE_STRING *v15; // rbx
  _QWORD *Pool2; // rax
  _QWORD *v17; // rdi
  unsigned int v18; // ebx
  unsigned __int16 DriverTagPriority; // ax
  __int64 **v20; // rdx
  __int64 *j; // rcx
  __int64 *v22; // rax
  __int64 v23; // rcx
  unsigned __int16 v24; // r12
  __int64 v25; // r13
  _QWORD *v26; // rbx
  __int64 v27; // rdi
  _QWORD *v28; // r14
  __int64 v29; // rax
  int started; // eax
  __int64 v31; // rcx
  __int64 v32; // r8
  char v33; // r9
  __int64 v34; // rdx
  __int64 v35; // rax
  int v36; // eax
  __int64 v37; // rax
  __int64 v38; // rcx
  int Index; // r13d
  unsigned __int16 v40; // r12
  void **v41; // rdx
  void *v42; // rbx
  void **v43; // rax
  __int64 v44; // rdi
  ULONG v45; // edx
  PVOID v46; // r14
  void *v47; // rsi
  __int64 v48; // rcx
  __int64 v49; // rcx
  unsigned __int16 *v50; // r8
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  PVOID v54; // r15
  __int64 dwFlags; // [rsp+28h] [rbp-E0h]
  void *v56; // [rsp+38h] [rbp-D0h]
  __int64 v57; // [rsp+38h] [rbp-D0h]
  __int64 v58; // [rsp+48h] [rbp-C0h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp-B8h] BYREF
  PVOID Object; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v61; // [rsp+60h] [rbp-A8h] BYREF
  PVOID P; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v63; // [rsp+70h] [rbp-98h]
  void *v64; // [rsp+78h] [rbp-90h]
  void *v65; // [rsp+80h] [rbp-88h] BYREF
  UNICODE_STRING v66; // [rsp+88h] [rbp-80h] BYREF
  UNICODE_STRING Destination; // [rsp+98h] [rbp-70h] BYREF
  UNICODE_STRING DestinationString; // [rsp+A8h] [rbp-60h] BYREF
  _DWORD v69[2]; // [rsp+B8h] [rbp-50h] BYREF
  const wchar_t *v70; // [rsp+C0h] [rbp-48h]
  UNICODE_STRING String1; // [rsp+C8h] [rbp-40h] BYREF
  __int128 v72; // [rsp+D8h] [rbp-30h] BYREF
  int v73; // [rsp+E8h] [rbp-20h]
  UNICODE_STRING String2; // [rsp+F0h] [rbp-18h] BYREF
  wchar_t pszDest[64]; // [rsp+108h] [rbp+0h] BYREF

  *(_DWORD *)(&Destination.MaximumLength + 1) = 0;
  Handle = 0LL;
  P = 0LL;
  *(_DWORD *)(&v66.MaximumLength + 1) = 0;
  v69[1] = 0;
  String2 = 0LL;
  v65 = 0LL;
  String1 = 0LL;
  v64 = 0LL;
  v61 = 0LL;
  DestinationString = 0LL;
  v73 = 0;
  v72 = 0LL;
  Object = 0LL;
  PnpDiagnosticTrace(&KMPnPEvt_BootStart_Start, 0, 0LL);
  PnpDriverImageLoadPolicy = 3;
  v66.Buffer = L"\\Registry\\Machine\\System\\CurrentControlSet\\Policies\\EarlyLaunch";
  *(_DWORD *)&v66.Length = 8388734;
  if ( IopOpenRegistryKeyEx(&Handle, 0LL, &v66, 0x20019u) >= 0
    || (*(_DWORD *)&v66.Length = 8257660,
        v66.Buffer = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\EarlyLaunch",
        IopOpenRegistryKeyEx(&Handle, 0LL, &v66, 0x20019u) >= 0) )
  {
    RegistryValue = IopGetRegistryValue(Handle, L"DriverLoadPolicy", 0, &P);
    ZwClose(Handle);
    if ( RegistryValue >= 0 )
    {
      if ( *((_DWORD *)P + 1) == 4 && *((_DWORD *)P + 3) >= 4u )
        PnpDriverImageLoadPolicy = *(_DWORD *)((char *)P + *((unsigned int *)P + 2));
      ExFreePoolWithTag(P, 0);
    }
  }
  if ( PnpDriverImageLoadPolicy == 8 )
  {
    PnpDriverImageLoadPolicy = 0;
  }
  else if ( (PnpDriverImageLoadPolicy & 0xFFFFFFF8) != 0 )
  {
    PnpDriverImageLoadPolicy = 3;
  }
  PipInitializeCoreDriversAndElam(a1);
  v69[0] = 2097182;
  v70 = L"\\FileSystem\\RAW";
  *(_DWORD *)&Destination.Length = 0x20000;
  Destination.Buffer = (wchar_t *)&word_140C586E0;
  result = PnpInitializeBootStartDriver(
             (unsigned int)v69,
             (unsigned int)&Destination,
             (unsigned int)RawInitialize,
             0,
             0,
             0);
  v4 = Object;
  if ( !Object )
  {
    LODWORD(IopInitFailCode) = 30;
    return result;
  }
  GroupOrderIndex = (unsigned __int16)PpInitGetGroupOrderIndex(0LL);
  IopGroupIndex = GroupOrderIndex;
  LODWORD(v63) = 0xFFFF;
  if ( (unsigned __int16)GroupOrderIndex == 0xFFFF )
  {
    HeadlessKernelAddLogEntry();
    result = 3221226021LL;
    LODWORD(IopInitFailCode) = 31;
    return result;
  }
  IopGroupTable = (PVOID)ExAllocatePool2(0x100uLL, 16LL * (unsigned __int16)GroupOrderIndex, 0x6E697050uLL);
  v6 = (char *)IopGroupTable;
  if ( !IopGroupTable )
  {
    HeadlessKernelAddLogEntry();
    result = 3221225626LL;
    LODWORD(IopInitFailCode) = 32;
    return result;
  }
  v7 = IopGroupIndex;
  for ( i = 0; i < v7; *(_QWORD *)v10 = v10 )
  {
    v9 = i++;
    v10 = &v6[16 * v9];
    *((_QWORD *)v10 + 1) = v10;
  }
  PipInitializeDriverDependentDLLs(2LL, a1);
  RtlInitUnicodeString(&DestinationString, L"System Reserved");
  RtlInitUnicodeString(&String2, L"Boot Bus Extender");
  v11 = 0;
  v12 = 0;
  if ( !PiInitGroupOrderTableCount )
    goto LABEL_28;
  do
  {
    v13 = 16LL * v12;
    if ( !RtlCompareUnicodeString((PCUNICODE_STRING)((char *)PiInitGroupOrderTable + v13), &DestinationString, 1u) )
      goto LABEL_24;
    if ( !RtlCompareUnicodeString((PCUNICODE_STRING)((char *)PiInitGroupOrderTable + v13), &String2, 1u) )
    {
      LOWORD(v63) = v12;
LABEL_24:
      ++v11;
    }
    if ( v11 >= 2u )
      break;
    ++v12;
  }
  while ( v12 < (unsigned __int16)PiInitGroupOrderTableCount );
  v4 = Object;
LABEL_28:
  v14 = *(UNICODE_STRING **)(a1 + 48);
  while ( v14 != (UNICODE_STRING *)(a1 + 48) )
  {
    v15 = v14;
    v14 = *(UNICODE_STRING **)&v14->Length;
    if ( SLODWORD(v15[3].Buffer) >= 0 )
    {
      Pool2 = (_QWORD *)ExAllocatePool2(0x100uLL, 0x30uLL, 0x6E697050uLL);
      v17 = Pool2;
      if ( Pool2 )
      {
        Pool2[1] = Pool2;
        *Pool2 = Pool2;
        Pool2[3] = v15;
        if ( IopOpenRegistryKeyEx(&Handle, 0LL, v15 + 2, 0x20019u) >= 0 )
        {
          v17[4] = Handle;
          v18 = (unsigned __int16)PpInitGetGroupOrderIndex(Handle);
          DriverTagPriority = PipGetDriverTagPriority(Handle);
          *((_WORD *)v17 + 22) = DriverTagPriority;
          v20 = (__int64 **)((char *)IopGroupTable + 16 * v18);
          for ( j = *v20; j != (__int64 *)v20 && *((_WORD *)j + 22) <= DriverTagPriority; j = (__int64 *)*j )
            ;
          v22 = (__int64 *)j[1];
          v23 = *v22;
          if ( *(__int64 **)(*v22 + 8) != v22 )
            goto LABEL_138;
          *v17 = v23;
          v17[1] = v22;
          *(_QWORD *)(v23 + 8) = v17;
          *v22 = (__int64)v17;
        }
        else
        {
          ExFreePoolWithTag(v17, 0);
        }
      }
    }
  }
  PnpNotifyEarlyLaunchStatusUpdate(1);
  v24 = 0;
  if ( IopGroupIndex )
  {
    while ( 1 )
    {
      v25 = 16LL * v24;
      v26 = *(_QWORD **)((char *)IopGroupTable + v25);
      if ( v26 != (_QWORD *)((char *)IopGroupTable + v25) )
        break;
LABEL_64:
      if ( v24 == (_WORD)v63 )
      {
        IopAllocateLegacyBootResources(0LL, 0LL);
        IopBootConfigsReserved = 1;
        IopAllocateBootResourcesRoutine = (__int64)IopAllocateBootResources;
      }
      if ( ++v24 >= (unsigned int)IopGroupIndex )
        goto LABEL_67;
    }
    v27 = 0LL;
    while ( 2 )
    {
      Handle = (HANDLE)v26[4];
      v28 = (_QWORD *)v26[3];
      Object = v28;
      v29 = v28[6];
      *((_BYTE *)v26 + 47) = 1;
      *(_QWORD *)&DestinationString.Length = v29;
      if ( (int)IopGetDriverNameFromKeyNode(Handle, &Destination) < 0 )
      {
        *((_BYTE *)v26 + 46) = 1;
LABEL_60:
        if ( !*((_BYTE *)v26 + 46) )
        {
          PnpLockDeviceActionQueue();
          PipApplyFunctionToServiceInstances(v31, v4[6] + 24LL, v32, v33, dwFlags, (__int64)v4, v56);
          PnpUnlockDeviceActionQueue();
          PnpWaitForEmptyDeviceActionQueue();
          PnpRequestDeviceAction(0LL, 7u, 0, 0LL, 0LL, 0LL, 0LL);
        }
        if ( PnpWaitForEmptyDeviceEventQueue() < 0 )
        {
          HeadlessKernelAddLogEntry();
          LODWORD(IopInitFailCode) = 33;
          return 3221226621LL;
        }
        v26 = (_QWORD *)*v26;
        if ( v26 == (_QWORD *)((char *)IopGroupTable + v25) )
          goto LABEL_64;
        continue;
      }
      break;
    }
    if ( IopGetRegistryValue(Handle, L"Group", 0, &P) >= 0 )
    {
      v28 = P;
      if ( *((_DWORD *)P + 3) )
      {
        String1.Length = *((_WORD *)P + 6);
        String1.MaximumLength = String1.Length;
        String1.Buffer = (wchar_t *)((char *)P + *((unsigned int *)P + 2));
        v27 = PipLookupGroupName(&String1);
      }
      ExFreePoolWithTag(v28, 0);
      LODWORD(v28) = (_DWORD)Object;
    }
    v4 = 0LL;
    if ( !(unsigned int)PipCheckDependencies(Handle) )
      goto LABEL_58;
    v4 = (_QWORD *)v26[2];
    Object = v4;
    if ( v4 || *((_BYTE *)v26 + 46) )
    {
LABEL_54:
      if ( !v4 )
        goto LABEL_58;
      if ( v27 )
        ++*(_DWORD *)(v27 + 28);
      v26[2] = v4;
    }
    else
    {
      started = PnpInitializeBootStartDriver(
                  (unsigned int)&Destination,
                  (int)v28 + 32,
                  *(_QWORD *)(*(_QWORD *)&DestinationString.Length + 56LL),
                  *(_DWORD *)&DestinationString.Length,
                  0,
                  1);
      v4 = Object;
      *((_DWORD *)v26 + 10) = started;
      if ( v4 )
      {
        ObfReferenceObjectWithTag(v4, 0x746C6644u);
        goto LABEL_54;
      }
LABEL_58:
      *((_BYTE *)v26 + 46) = 1;
    }
    ExFreePoolWithTag(Destination.Buffer, 0);
    v27 = 0LL;
    goto LABEL_60;
  }
LABEL_67:
  PnpNotifyEarlyLaunchStatusUpdate(2);
  PipUnloadEarlyLaunchDrivers(a1);
  PnPBootDriversLoaded = 1;
  PnpRequestDeviceAction(0LL, 0, 0, 0LL, 0LL, 0LL, 0LL);
  if ( !(unsigned int)PnpWaitForDevicesToStart() )
  {
    HeadlessKernelAddLogEntry();
    LODWORD(IopInitFailCode) = 34;
    return 3221226621LL;
  }
  if ( IopCallBootDriverReinitializationRoutines() && !(unsigned int)PnpWaitForDevicesToStart() )
  {
    HeadlessKernelAddLogEntry();
    LODWORD(IopInitFailCode) = 35;
    return 3221226621LL;
  }
  if ( (int)RamdiskInitialize(0LL, a1, &v72) >= 0 )
  {
    if ( !(unsigned int)PnpWaitForDevicesToStart() )
    {
      HeadlessKernelAddLogEntry();
      LODWORD(IopInitFailCode) = 36;
      return 3221226621LL;
    }
    result = RamdiskInitialize(1LL, a1, &v72);
    if ( (int)result < 0 )
    {
      LODWORD(IopInitFailCode) = 46;
      return result;
    }
  }
  if ( (int)VhdInitialize(a1) >= 0 && !(unsigned int)PnpWaitForDevicesToStart() )
  {
    HeadlessKernelAddLogEntry();
    LODWORD(IopInitFailCode) = 37;
    return 3221226621LL;
  }
  LOBYTE(v34) = 1;
  if ( (int)CimfsInitialize(a1, v34) >= 0 && !(unsigned int)PnpWaitForDevicesToStart() )
  {
    HeadlessKernelAddLogEntry();
    LODWORD(IopInitFailCode) = 38;
    return 3221226621LL;
  }
  v35 = *(_QWORD *)(a1 + 240);
  LOBYTE(v58) = 0;
  if ( *(_DWORD *)(v35 + 3952) && ((int)CompositefsBootIsEnabled(&v58) < 0 || (_BYTE)v58) )
  {
    v36 = CompositefsSetBootInformation(a1);
    if ( v36 < 0 )
      KeBugCheckEx(0x7Bu, 1uLL, v36, 0LL, 0LL);
  }
  if ( !(unsigned int)PnpWaitForDevicesToStart() )
  {
    HeadlessKernelAddLogEntry();
    LODWORD(IopInitFailCode) = 44;
    return 3221226621LL;
  }
  result = IopCreateArcNames(a1);
  if ( (int)result >= 0 )
  {
    PnpBootDeviceWait(a1, 1);
    v37 = *(_QWORD *)(a1 + 240);
    PnPBootDriversInitialized = 1;
    if ( (*(_DWORD *)(v37 + 132) & 0x400) != 0
      && ((result = SbpStartLanman(), (int)result < 0)
       || (result = SbpWaitForVmbus(), (int)result < 0)
       || (result = SbpAddTransportToInstance(), (int)result < 0)) )
    {
      LODWORD(IopInitFailCode) = 40;
    }
    else
    {
      result = CimfsInitialize(a1, 0LL);
      if ( (int)result >= 0 )
      {
        VhdAutoAttachVirtualDisks();
        result = PipWaitCriticalDevices(a1);
        if ( (int)result >= 0 )
        {
          result = PiCreateDriverDataDirectoryRoot();
          if ( (int)result >= 0 )
          {
            pszDest[0] = 0;
            Index = PipHardwareConfigGetIndex(v38, (__int64)&v61 + 4);
            if ( Index >= 0 )
            {
              LODWORD(v57) = HIDWORD(v61);
              Index = RtlStringCchPrintfExW(pszDest, 0x40uLL, 0LL, 0LL, 0x800u, L"%d", v57, &Object);
            }
            v40 = 0;
            if ( IopGroupIndex )
            {
              while ( 1 )
              {
                while ( 1 )
                {
                  v41 = (void **)((char *)IopGroupTable + 16 * v40);
                  v42 = *v41;
                  if ( *v41 != v41 )
                    break;
                  if ( ++v40 >= (unsigned int)IopGroupIndex )
                    goto LABEL_109;
                }
                if ( *((void ***)v42 + 1) != v41 )
                  break;
                v43 = *(void ***)v42;
                if ( *(void **)(*(_QWORD *)v42 + 8LL) != v42 )
                  break;
                *v41 = v43;
                v43[1] = v41;
                v44 = *((_QWORD *)v42 + 2);
                if ( Index >= 0
                  && !*((_BYTE *)v42 + 46)
                  && !*(_QWORD *)(v44 + 8)
                  && *(_QWORD *)(*(_QWORD *)(v44 + 48) + 8LL)
                  && (*(_DWORD *)(v44 + 16) & 0x408) == 0
                  && IopGetRegistryValue(*((HANDLE *)v42 + 4), L"Start", 0, &P) >= 0 )
                {
                  v46 = P;
                  if ( *((_DWORD *)P + 1) == 4 && *((_DWORD *)P + 3) >= 4u )
                  {
                    LODWORD(v61) = *(_DWORD *)((char *)P + *((unsigned int *)P + 2));
                    if ( !(_DWORD)v61 )
                    {
                      LODWORD(v61) = 3;
                      if ( (int)PiCreateDriverRedirectedStateKey(
                                  (UNICODE_STRING *)(*(_QWORD *)(v44 + 48) + 24LL),
                                  v45,
                                  &v65) >= 0 )
                      {
                        v47 = v65;
                      }
                      else
                      {
                        v47 = (void *)*((_QWORD *)v42 + 4);
                        v65 = v47;
                      }
                      if ( (int)PnpCtxRegCreateKey(*(__int64 *)&PiPnpRtlCtx, (int)v47, (int)L"StartOverride", 0, 2, 0LL) >= 0 )
                      {
                        PnpCtxRegSetValue(v48, v64, (__int64)pszDest, 4LL, (__int64)&v61, 4u);
                        PnpCtxRegCloseKey(v49, v64);
                        v64 = 0LL;
                        if ( (byte_140EEFA6B & 2) != 0 )
                        {
                          v50 = (unsigned __int16 *)(*(_QWORD *)(v44 + 48) + 24LL);
                          Object = 0LL;
                          if ( (int)PnpUnicodeStringToWstr(&Object, 0LL, v50) >= 0 )
                          {
                            v54 = Object;
                            if ( (byte_140EEFA6B & 2) != 0 )
                              McTemplateK0dzd_EtwWriteTransfer(
                                v52,
                                v51,
                                v53,
                                SHIDWORD(v61),
                                (const wchar_t *)Object,
                                v61);
                            PnpUnicodeStringToWstrFree(v54, *(_QWORD *)(v44 + 48) + 24LL);
                          }
                        }
                      }
                      if ( v47 != *((void **)v42 + 4) )
                      {
                        ZwClose(v47);
                        v65 = 0LL;
                      }
                    }
                  }
                  ExFreePoolWithTag(v46, 0);
                }
                if ( v44 )
                  ObfDereferenceObjectWithTag((PVOID)v44, 0x746C6644u);
                if ( *((_BYTE *)v42 + 46) )
                  *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v42 + 3) + 48LL) + 104LL) |= 0x20000u;
                ZwClose(*((HANDLE *)v42 + 4));
                ExFreePoolWithTag(v42, 0);
              }
LABEL_138:
              __fastfail(3u);
            }
LABEL_109:
            ExFreePoolWithTag(IopGroupTable, 0);
            PnpUnusedBootDriversCleanedUp = 1;
            PnpDiagnosticTrace(&KMPnPEvt_BootStart_Stop, 0, 0LL);
            return 0LL;
          }
          else
          {
            LODWORD(IopInitFailCode) = 43;
          }
        }
        else
        {
          LODWORD(IopInitFailCode) = 42;
        }
      }
      else
      {
        LODWORD(IopInitFailCode) = 41;
      }
    }
  }
  else
  {
    LODWORD(IopInitFailCode) = 39;
  }
  return result;
}
