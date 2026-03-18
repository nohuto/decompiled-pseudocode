/*
 * XREFs of DpiFdoHandleStartDevice @ 0x14023ADA0
 * Callers:
 *     <none>
 * Callees:
 *     DpiCheckForOutstandingD3Requests @ 0x14002A148 (DpiCheckForOutstandingD3Requests.c)
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x140042008 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     ?ReleaseMiniportListMutex@@YAXXZ @ 0x14004204C (-ReleaseMiniportListMutex@@YAXXZ.c)
 *     DpiFdoIsPostDevice @ 0x14004DB50 (DpiFdoIsPostDevice.c)
 *     DpiFdoIsMsBddAnchoredDevice @ 0x1400593B8 (DpiFdoIsMsBddAnchoredDevice.c)
 *     DpiFdoIsMdmDeviceAndOwnsMux @ 0x1400886D4 (DpiFdoIsMdmDeviceAndOwnsMux.c)
 *     WindowsQueryLicenseDWORD @ 0x140096EFC (WindowsQueryLicenseDWORD.c)
 *     memmove @ 0x14009F9C0 (memmove.c)
 *     DpiDetermineResourceListSize @ 0x140242E70 (DpiDetermineResourceListSize.c)
 *     DpiFilterOutVgaResources @ 0x1402435FC (DpiFilterOutVgaResources.c)
 *     DpiEnableD3Requests @ 0x1402BA7B0 (DpiEnableD3Requests.c)
 *     DpiReadPnpRegistryValue @ 0x140384310 (DpiReadPnpRegistryValue.c)
 *     ?DxgCreateLiveDumpWithWdLogs@@YAJK_K000T_WD_LIVEREPORT_FLAGS@@@Z @ 0x1403DA520 (-DxgCreateLiveDumpWithWdLogs@@YAJK_K000T_WD_LIVEREPORT_FLAGS@@@Z.c)
 */

__int64 __fastcall DpiFdoHandleStartDevice(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  unsigned int *DeviceExtension; // rdi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r14
  __int64 v6; // rcx
  int v7; // eax
  int v8; // esi
  ULONG_PTR v9; // r8
  bool v10; // r15
  __int64 Status; // rsi
  PIO_SECURITY_CONTEXT SecurityContext; // rdx
  __int64 v14; // r9
  struct _UNICODE_STRING *v15; // rax
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // r9
  PUNICODE_STRING v19; // rcx
  size_t v20; // r12
  __int64 v21; // r9
  void *Pool2; // rax
  unsigned int v23; // eax
  bool v24; // zf
  _WORD *StartContext; // r14
  int v26; // eax
  NTSTATUS v27; // eax
  void *v28; // rdx
  PIRP v29; // rax
  void *v30; // rdx
  PIRP v31; // rax
  unsigned int v33; // eax
  void *v34; // rcx
  unsigned __int8 v35; // [rsp+40h] [rbp-89h] BYREF
  char v36; // [rsp+41h] [rbp-88h]
  unsigned int v37; // [rsp+44h] [rbp-85h] BYREF
  int v38; // [rsp+48h] [rbp-81h] BYREF
  int v39; // [rsp+4Ch] [rbp-7Dh] BYREF
  size_t Size; // [rsp+50h] [rbp-79h] BYREF
  ULONG_PTR v41; // [rsp+58h] [rbp-71h] BYREF
  struct _UNICODE_STRING *v42; // [rsp+60h] [rbp-69h] BYREF
  ULONG_PTR v43; // [rsp+68h] [rbp-61h]
  struct _UNICODE_STRING *FileName; // [rsp+70h] [rbp-59h]
  void *ThreadHandle; // [rsp+78h] [rbp-51h] BYREF
  __int64 v46; // [rsp+80h] [rbp-49h] BYREF
  int v47; // [rsp+88h] [rbp-41h]
  const wchar_t *v48; // [rsp+90h] [rbp-39h]
  int *v49; // [rsp+98h] [rbp-31h]
  int v50; // [rsp+A0h] [rbp-29h]
  int *v51; // [rsp+A8h] [rbp-21h]
  int v52; // [rsp+B0h] [rbp-19h]
  __int64 v53; // [rsp+B8h] [rbp-11h]
  int v54; // [rsp+C0h] [rbp-9h]
  __int64 v55; // [rsp+C8h] [rbp-1h]
  __int128 v56; // [rsp+D0h] [rbp+7h]
  __int128 v57; // [rsp+E0h] [rbp+17h]
  char v59; // [rsp+140h] [rbp+77h]
  unsigned __int8 v60; // [rsp+148h] [rbp+7Fh] BYREF

  DeviceExtension = (unsigned int *)DeviceObject->DeviceExtension;
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v59 = 0;
  v36 = 0;
  v43 = 0LL;
  FileName = 0LL;
  LODWORD(Size) = 0;
  v37 = 0;
  AcquireMiniportListMutex();
  KeEnterCriticalRegion();
  if ( *((_BYTE *)DeviceExtension + 484) )
    DpiCheckForOutstandingD3Requests((__int64)DeviceExtension);
  ExAcquireResourceExclusiveLite(*((PERESOURCE *)DeviceExtension + 21), 1u);
  v7 = WindowsQueryLicenseDWORD(v6, &v37);
  if ( v7 < 0 )
  {
    v8 = 1;
    v37 = 1;
    WdLogSingleEntry1(4LL, v7);
    WdLogGlobalForLineNumber = 7180;
  }
  else
  {
    v8 = v37;
    WdLogSingleEntry1(4LL, v37);
    WdLogGlobalForLineNumber = 7167;
  }
  v38 = 1;
  v46 = 0LL;
  v53 = 0LL;
  v48 = L"MultiMonSupport";
  v54 = 0;
  v55 = 0LL;
  v49 = &v38;
  v51 = &v38;
  v47 = 288;
  v50 = 67108868;
  v52 = 4;
  v56 = 0LL;
  v57 = 0LL;
  RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", &v46, 0LL, 0LL);
  v9 = 0LL;
  if ( !v38 )
    v8 = 0;
  v37 = v8;
  if ( !v8
    && DeviceExtension[4] == 1953656900
    && DeviceExtension[5] == 2
    && !DpiFdoIsPostDevice((__int64)DeviceObject)
    && *((_BYTE *)DeviceExtension + 480) == (_BYTE)v9 )
  {
    v10 = 1;
    LODWORD(Status) = -1071774664;
    WdLogSingleEntry1((unsigned int)(v9 + 3), *((_QWORD *)DeviceExtension + 3));
    WdLogGlobalForLineNumber = 7227;
    goto LABEL_97;
  }
  if ( *((_BYTE *)DeviceExtension + 1158) != (_BYTE)v9 )
  {
    ExEnterCriticalRegionAndAcquireFastMutexUnsafe(&dword_14015E360);
    if ( !dword_14015E398++ )
      KeClearEvent(&Object);
    ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(&dword_14015E360);
    v9 = 0LL;
    v36 = 1;
  }
  DeviceExtension[678] = v8;
  if ( *((_BYTE *)DeviceExtension + 1155) == 1 )
  {
    SecurityContext = CurrentStackLocation->Parameters.Create.SecurityContext;
    v41 = v9;
    v42 = (struct _UNICODE_STRING *)v9;
    if ( SecurityContext )
    {
      FileName = CurrentStackLocation->Parameters.QueryDirectory.FileName;
      v43 = (ULONG_PTR)SecurityContext;
      DpiFilterOutVgaResources(DeviceExtension, SecurityContext, &v41, 0LL);
      LOBYTE(v14) = 1;
      DpiFilterOutVgaResources(DeviceExtension, CurrentStackLocation->Parameters.QueryDirectory.FileName, &v42, v14);
      if ( v41 )
      {
        v15 = v42;
        if ( v42 )
        {
          CurrentStackLocation->Parameters.WMI.ProviderId = v41;
          CurrentStackLocation->Parameters.QueryDirectory.FileName = v15;
          v59 = 1;
        }
      }
    }
    else
    {
      WdLogSingleEntry1(2LL, 0LL);
      WdLogGlobalForLineNumber = 7295;
    }
  }
  if ( !DpiFdoIsPostDevice((__int64)DeviceObject) && DeviceExtension[4] == 1953656900 && DeviceExtension[5] == 2 )
  {
    v39 = 0;
    v17 = DpiReadPnpRegistryValue(v16, L"DisableNonPOSTDevice", &v39, 4LL, 2);
    if ( v17 >= 0 )
    {
      if ( v39 )
      {
        LODWORD(Status) = -1073741823;
        WdLogSingleEntry1(2LL, -1073741823LL);
        WdLogGlobalForLineNumber = 7344;
LABEL_37:
        v10 = 0;
LABEL_97:
        if ( DeviceExtension[59] == 1 )
        {
          v33 = DeviceExtension[60];
          --DeviceExtension[69];
          DeviceExtension[59] = v33;
          DeviceExtension[60] = DeviceExtension[(DeviceExtension[69] & 7) + 61];
        }
        v34 = (void *)*((_QWORD *)DeviceExtension + 164);
        if ( v34 )
        {
          ExFreePoolWithTag(v34, 0);
          *((_QWORD *)DeviceExtension + 164) = 0LL;
        }
        if ( !v10 )
          DxgCreateLiveDumpWithWdLogs(403LL, 2050LL);
        goto LABEL_89;
      }
    }
    else
    {
      WdLogSingleEntry1(4LL, v17);
      WdLogGlobalForLineNumber = 7331;
    }
  }
  IoForwardIrpSynchronously(*((PDEVICE_OBJECT *)DeviceExtension + 20), Irp);
  Status = Irp->IoStatus.Status;
  if ( (int)Status < 0 )
  {
    WdLogSingleEntry5(
      2LL,
      DeviceExtension[136],
      Status,
      DeviceExtension[281],
      DeviceExtension[282],
      *(_QWORD *)(*((_QWORD *)DeviceExtension + 5) + 152LL));
    WdLogGlobalForLineNumber = 7369;
    v10 = (_DWORD)Status == -1073741810
       && *(_BYTE *)(*((_QWORD *)DeviceExtension + 5) + 134LL)
       && RtlCompareMemory(DeviceExtension + 136, &GUID_BUS_TYPE_USB, 0x10uLL) == 16;
    goto LABEL_97;
  }
  v19 = CurrentStackLocation->Parameters.QueryDirectory.FileName;
  if ( v19 )
  {
    DpiDetermineResourceListSize(v19, &Size);
    v20 = (unsigned int)Size;
    Pool2 = (void *)ExAllocatePool2(256LL, (unsigned int)Size, 1953656900LL, v21);
    *((_QWORD *)DeviceExtension + 164) = Pool2;
    if ( !Pool2 )
    {
      LODWORD(Status) = -1073741801;
      WdLogSingleEntry1(6LL, -1073741801LL);
      WdLogGlobalForLineNumber = 7415;
      goto LABEL_37;
    }
    memmove(Pool2, CurrentStackLocation->Parameters.QueryDirectory.FileName, v20);
    if ( v59 == 1 )
    {
      ExFreePoolWithTag(CurrentStackLocation->Parameters.Create.SecurityContext, 0);
      ExFreePoolWithTag(CurrentStackLocation->Parameters.QueryDirectory.FileName, 0);
      CurrentStackLocation->Parameters.WMI.ProviderId = v43;
      CurrentStackLocation->Parameters.QueryDirectory.FileName = FileName;
    }
  }
  DeviceExtension[(DeviceExtension[69] & 7) + 61] = DeviceExtension[60];
  v23 = DeviceExtension[59];
  ++DeviceExtension[69];
  DeviceExtension[60] = v23;
  DeviceExtension[59] = 1;
  if ( DeviceExtension[4] != 1953656900 || DeviceExtension[5] != 2 )
  {
LABEL_48:
    if ( !(_BYTE)word_14015DDA0 )
      goto LABEL_51;
    goto LABEL_49;
  }
  if ( !*((_BYTE *)DeviceExtension + 2717) )
  {
    HIBYTE(word_14015DDA0) = 1;
    goto LABEL_48;
  }
  LOBYTE(word_14015DDA0) = 1;
LABEL_49:
  if ( HIBYTE(word_14015DDA0) )
    KeSetEvent(&stru_14015DDA8, 0, 0);
LABEL_51:
  v60 = 0;
  v35 = 0;
  if ( *((_BYTE *)DeviceExtension + 2716)
    || (int)DpiFdoIsMdmDeviceAndOwnsMux((__int64)DeviceObject, &v60, &v35) < 0
    || !v60 )
  {
    if ( qword_14015E0A8 )
      goto LABEL_65;
    if ( DeviceExtension[4] != 1953656900 || DeviceExtension[5] != 2 )
    {
      if ( *(_BYTE *)(*((_QWORD *)DeviceExtension + 21) + 108LL) && *((_QWORD *)DeviceExtension + 354) )
        qword_14015E0A8 = *((_QWORD *)DeviceExtension + 354);
      goto LABEL_65;
    }
    if ( DpiFdoIsPostDevice((__int64)DeviceObject) )
    {
LABEL_61:
      qword_14015E0A8 = (__int64)DeviceObject;
      goto LABEL_65;
    }
    v24 = *(_BYTE *)(*((_QWORD *)DeviceExtension + 21) + 108LL) == 0;
  }
  else
  {
    v24 = v35 == 0;
  }
  if ( !v24 )
    goto LABEL_61;
LABEL_65:
  if ( !*((_BYTE *)DeviceExtension + 480)
    && *((_BYTE *)DeviceExtension + 1153)
    && !DpiFdoIsMsBddAnchoredDevice((__int64)DeviceObject) )
  {
    WdLogSingleEntry1(4LL, DeviceObject);
    WdLogGlobalForLineNumber = 7546;
    v10 = 1;
    LODWORD(Status) = -1071774664;
    goto LABEL_97;
  }
  if ( byte_14015DDA2 && !*((_BYTE *)DeviceExtension + 1158) )
  {
    ThreadHandle = 0LL;
    StartContext = (_WORD *)ExAllocatePool2(256LL, 1552LL, 1953656900LL, v18);
    if ( !StartContext )
    {
      LODWORD(Status) = -1073741801;
      WdLogSingleEntry1(6LL, -1073741801LL);
      WdLogGlobalForLineNumber = 7590;
LABEL_73:
      v10 = 0;
      goto LABEL_97;
    }
    if ( *(_BYTE *)(*((_QWORD *)DeviceExtension + 21) + 108LL)
      || (v24 = !DpiFdoIsMsBddAnchoredDevice((__int64)DeviceObject), v26 = 0, !v24) )
    {
      v26 = 2;
    }
    *(_DWORD *)StartContext = v26;
    StartContext[2] = 0;
    *((_DWORD *)StartContext + 131) = 0;
    v27 = PsCreateSystemThread(&ThreadHandle, 0x1FFFFFu, 0LL, 0LL, 0LL, DpiFdoStartAdapterThread, StartContext);
    LODWORD(Status) = v27;
    if ( v27 < 0 )
    {
      WdLogSingleEntry1(2LL, v27);
      WdLogGlobalForLineNumber = 7621;
      ExFreePoolWithTag(StartContext, 0x74727044u);
      goto LABEL_73;
    }
    ZwClose(ThreadHandle);
  }
  DeviceExtension[71] = 1;
  DeviceExtension[70] = 1;
  PoSetPowerState(DeviceObject, DevicePowerState, (POWER_STATE)1);
  v10 = 0;
  if ( (int)Status < 0 )
    goto LABEL_97;
  if ( DeviceExtension[4] == 1953656900 && DeviceExtension[5] == 2 )
  {
    v28 = (void *)*((_QWORD *)DeviceExtension + 686);
    if ( v28 )
    {
      v29 = IoCsqRemoveNextIrp((PIO_CSQ)(DeviceExtension + 1350), v28);
      *((_QWORD *)DeviceExtension + 686) = 0LL;
      if ( v29 )
      {
        *((_BYTE *)DeviceExtension + 5516) = 1;
        v29->IoStatus.Status = 0;
        v29->IoStatus.Information = 0LL;
        IofCompleteRequest(v29, 0);
        IoInvalidateDeviceState(*((PDEVICE_OBJECT *)DeviceExtension + 19));
      }
    }
    v30 = (void *)*((_QWORD *)DeviceExtension + 690);
    if ( v30 )
    {
      v31 = IoCsqRemoveNextIrp((PIO_CSQ)(DeviceExtension + 1350), v30);
      *((_QWORD *)DeviceExtension + 690) = 0LL;
      if ( v31 )
      {
        *((_BYTE *)DeviceExtension + 5548) = 1;
        v31->IoStatus.Status = 0;
        v31->IoStatus.Information = 0LL;
        IofCompleteRequest(v31, 0);
      }
    }
  }
LABEL_89:
  if ( v36 )
  {
    ExEnterCriticalRegionAndAcquireFastMutexUnsafe(&dword_14015E360);
    if ( !--dword_14015E398 )
      KeSetEvent(&Object, 0, 0);
    ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(&dword_14015E360);
  }
  if ( *((_BYTE *)DeviceExtension + 484) )
    DpiEnableD3Requests(*((_QWORD *)DeviceExtension + 3));
  ExReleaseResourceLite(*((PERESOURCE *)DeviceExtension + 21));
  KeLeaveCriticalRegion();
  ReleaseMiniportListMutex();
  Irp->IoStatus.Status = Status;
  IofCompleteRequest(Irp, 1);
  return (unsigned int)Status;
}
