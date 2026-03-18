/*
 * XREFs of DpiFdoHandleStartDevice @ 0x1402418B0
 * Callers:
 *     <none>
 * Callees:
 *     DpiCheckForOutstandingD3Requests @ 0x14002A8E8 (DpiCheckForOutstandingD3Requests.c)
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x140041998 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     ?ReleaseMiniportListMutex@@YAXXZ @ 0x1400419DC (-ReleaseMiniportListMutex@@YAXXZ.c)
 *     DpiFdoIsPostDevice @ 0x14004D4F0 (DpiFdoIsPostDevice.c)
 *     DpiFdoIsMsBddAnchoredDevice @ 0x140058E78 (DpiFdoIsMsBddAnchoredDevice.c)
 *     DpiFdoIsMdmDeviceAndOwnsMux @ 0x140088D9C (DpiFdoIsMdmDeviceAndOwnsMux.c)
 *     WindowsQueryLicenseDWORD @ 0x140099178 (WindowsQueryLicenseDWORD.c)
 *     memmove @ 0x1400A1D00 (memmove.c)
 *     DpiDetermineResourceListSize @ 0x140249C70 (DpiDetermineResourceListSize.c)
 *     DpiFilterOutVgaResources @ 0x14024A40C (DpiFilterOutVgaResources.c)
 *     DpiEnableD3Requests @ 0x1402C7FF0 (DpiEnableD3Requests.c)
 *     DpiReadPnpRegistryValue @ 0x14036B708 (DpiReadPnpRegistryValue.c)
 *     ?DxgCreateLiveDumpWithWdLogs@@YAJK_K000T_WD_LIVEREPORT_FLAGS@@@Z @ 0x1403D3630 (-DxgCreateLiveDumpWithWdLogs@@YAJK_K000T_WD_LIVEREPORT_FLAGS@@@Z.c)
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
  PUNICODE_STRING v18; // rcx
  size_t v19; // r12
  void *Pool2; // rax
  unsigned int v21; // eax
  bool v22; // zf
  _WORD *StartContext; // r14
  int v24; // eax
  NTSTATUS v25; // eax
  void *v26; // rdx
  PIRP v27; // rax
  void *v28; // rdx
  PIRP v29; // rax
  unsigned int v31; // eax
  void *v32; // rcx
  unsigned __int8 v33; // [rsp+40h] [rbp-89h] BYREF
  char v34; // [rsp+41h] [rbp-88h]
  unsigned int v35; // [rsp+44h] [rbp-85h] BYREF
  int v36; // [rsp+48h] [rbp-81h] BYREF
  int v37; // [rsp+4Ch] [rbp-7Dh] BYREF
  size_t Size; // [rsp+50h] [rbp-79h] BYREF
  ULONG_PTR v39; // [rsp+58h] [rbp-71h] BYREF
  struct _UNICODE_STRING *v40; // [rsp+60h] [rbp-69h] BYREF
  ULONG_PTR v41; // [rsp+68h] [rbp-61h]
  struct _UNICODE_STRING *FileName; // [rsp+70h] [rbp-59h]
  void *ThreadHandle; // [rsp+78h] [rbp-51h] BYREF
  __int64 v44; // [rsp+80h] [rbp-49h] BYREF
  int v45; // [rsp+88h] [rbp-41h]
  const wchar_t *v46; // [rsp+90h] [rbp-39h]
  int *v47; // [rsp+98h] [rbp-31h]
  int v48; // [rsp+A0h] [rbp-29h]
  int *v49; // [rsp+A8h] [rbp-21h]
  int v50; // [rsp+B0h] [rbp-19h]
  __int64 v51; // [rsp+B8h] [rbp-11h]
  int v52; // [rsp+C0h] [rbp-9h]
  __int64 v53; // [rsp+C8h] [rbp-1h]
  __int128 v54; // [rsp+D0h] [rbp+7h]
  __int128 v55; // [rsp+E0h] [rbp+17h]
  char v57; // [rsp+140h] [rbp+77h]
  unsigned __int8 v58; // [rsp+148h] [rbp+7Fh] BYREF

  DeviceExtension = (unsigned int *)DeviceObject->DeviceExtension;
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v57 = 0;
  v34 = 0;
  v41 = 0LL;
  FileName = 0LL;
  LODWORD(Size) = 0;
  v35 = 0;
  AcquireMiniportListMutex();
  KeEnterCriticalRegion();
  if ( *((_BYTE *)DeviceExtension + 484) )
    DpiCheckForOutstandingD3Requests((__int64)DeviceExtension);
  ExAcquireResourceExclusiveLite(*((PERESOURCE *)DeviceExtension + 21), 1u);
  v7 = WindowsQueryLicenseDWORD(v6, &v35);
  if ( v7 < 0 )
  {
    v8 = 1;
    v35 = 1;
    WdLogSingleEntry1(4LL, v7);
    WdLogGlobalForLineNumber = 7312;
  }
  else
  {
    v8 = v35;
    WdLogSingleEntry1(4LL, v35);
    WdLogGlobalForLineNumber = 7299;
  }
  v36 = 1;
  v44 = 0LL;
  v51 = 0LL;
  v46 = L"MultiMonSupport";
  v52 = 0;
  v53 = 0LL;
  v47 = &v36;
  v49 = &v36;
  v45 = 288;
  v48 = 67108868;
  v50 = 4;
  v54 = 0LL;
  v55 = 0LL;
  RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", &v44, 0LL, 0LL);
  v9 = 0LL;
  if ( !v36 )
    v8 = 0;
  v35 = v8;
  if ( !v8
    && DeviceExtension[4] == 1953656900
    && DeviceExtension[5] == 2
    && !DpiFdoIsPostDevice((__int64)DeviceObject)
    && *((_BYTE *)DeviceExtension + 480) == (_BYTE)v9 )
  {
    v10 = 1;
    LODWORD(Status) = -1071774664;
    WdLogSingleEntry1((unsigned int)(v9 + 3), *((_QWORD *)DeviceExtension + 3));
    WdLogGlobalForLineNumber = 7359;
    goto LABEL_97;
  }
  if ( *((_BYTE *)DeviceExtension + 1158) != (_BYTE)v9 )
  {
    ExEnterCriticalRegionAndAcquireFastMutexUnsafe(&dword_140161320);
    if ( !dword_140161358++ )
      KeClearEvent(&stru_140161360);
    ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(&dword_140161320);
    v9 = 0LL;
    v34 = 1;
  }
  DeviceExtension[678] = v8;
  if ( *((_BYTE *)DeviceExtension + 1155) == 1 )
  {
    SecurityContext = CurrentStackLocation->Parameters.Create.SecurityContext;
    v39 = v9;
    v40 = (struct _UNICODE_STRING *)v9;
    if ( SecurityContext )
    {
      FileName = CurrentStackLocation->Parameters.QueryDirectory.FileName;
      v41 = (ULONG_PTR)SecurityContext;
      DpiFilterOutVgaResources(DeviceExtension, SecurityContext, &v39, 0LL);
      LOBYTE(v14) = 1;
      DpiFilterOutVgaResources(DeviceExtension, CurrentStackLocation->Parameters.QueryDirectory.FileName, &v40, v14);
      if ( v39 )
      {
        v15 = v40;
        if ( v40 )
        {
          CurrentStackLocation->Parameters.WMI.ProviderId = v39;
          CurrentStackLocation->Parameters.QueryDirectory.FileName = v15;
          v57 = 1;
        }
      }
    }
    else
    {
      WdLogSingleEntry1(2LL, 0LL);
      WdLogGlobalForLineNumber = 7427;
    }
  }
  if ( !DpiFdoIsPostDevice((__int64)DeviceObject) && DeviceExtension[4] == 1953656900 && DeviceExtension[5] == 2 )
  {
    v37 = 0;
    v17 = DpiReadPnpRegistryValue(v16, L"DisableNonPOSTDevice", &v37, 4LL, 2);
    if ( v17 >= 0 )
    {
      if ( v37 )
      {
        LODWORD(Status) = -1073741823;
        WdLogSingleEntry1(2LL, -1073741823LL);
        WdLogGlobalForLineNumber = 7476;
LABEL_37:
        v10 = 0;
LABEL_97:
        if ( DeviceExtension[59] == 1 )
        {
          v31 = DeviceExtension[60];
          --DeviceExtension[69];
          DeviceExtension[59] = v31;
          DeviceExtension[60] = DeviceExtension[(DeviceExtension[69] & 7) + 61];
        }
        v32 = (void *)*((_QWORD *)DeviceExtension + 164);
        if ( v32 )
        {
          ExFreePoolWithTag(v32, 0);
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
      WdLogGlobalForLineNumber = 7463;
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
    WdLogGlobalForLineNumber = 7501;
    v10 = (_DWORD)Status == -1073741810
       && *(_BYTE *)(*((_QWORD *)DeviceExtension + 5) + 134LL)
       && RtlCompareMemory(DeviceExtension + 136, &GUID_BUS_TYPE_USB, 0x10uLL) == 16;
    goto LABEL_97;
  }
  v18 = CurrentStackLocation->Parameters.QueryDirectory.FileName;
  if ( v18 )
  {
    DpiDetermineResourceListSize(v18, &Size);
    v19 = (unsigned int)Size;
    Pool2 = (void *)ExAllocatePool2(256LL, (unsigned int)Size, 1953656900LL);
    *((_QWORD *)DeviceExtension + 164) = Pool2;
    if ( !Pool2 )
    {
      LODWORD(Status) = -1073741801;
      WdLogSingleEntry1(6LL, -1073741801LL);
      WdLogGlobalForLineNumber = 7547;
      goto LABEL_37;
    }
    memmove(Pool2, CurrentStackLocation->Parameters.QueryDirectory.FileName, v19);
    if ( v57 == 1 )
    {
      ExFreePoolWithTag(CurrentStackLocation->Parameters.Create.SecurityContext, 0);
      ExFreePoolWithTag(CurrentStackLocation->Parameters.QueryDirectory.FileName, 0);
      CurrentStackLocation->Parameters.WMI.ProviderId = v41;
      CurrentStackLocation->Parameters.QueryDirectory.FileName = FileName;
    }
  }
  DeviceExtension[(DeviceExtension[69] & 7) + 61] = DeviceExtension[60];
  v21 = DeviceExtension[59];
  ++DeviceExtension[69];
  DeviceExtension[60] = v21;
  DeviceExtension[59] = 1;
  if ( DeviceExtension[4] != 1953656900 || DeviceExtension[5] != 2 )
  {
LABEL_48:
    if ( !(_BYTE)word_140160D60 )
      goto LABEL_51;
    goto LABEL_49;
  }
  if ( !*((_BYTE *)DeviceExtension + 2717) )
  {
    HIBYTE(word_140160D60) = 1;
    goto LABEL_48;
  }
  LOBYTE(word_140160D60) = 1;
LABEL_49:
  if ( HIBYTE(word_140160D60) )
    KeSetEvent(&stru_140160D68, 0, 0);
LABEL_51:
  v58 = 0;
  v33 = 0;
  if ( *((_BYTE *)DeviceExtension + 2716)
    || (int)DpiFdoIsMdmDeviceAndOwnsMux((__int64)DeviceObject, &v58, &v33) < 0
    || !v58 )
  {
    if ( qword_140161068 )
      goto LABEL_65;
    if ( DeviceExtension[4] != 1953656900 || DeviceExtension[5] != 2 )
    {
      if ( *(_BYTE *)(*((_QWORD *)DeviceExtension + 21) + 108LL) && *((_QWORD *)DeviceExtension + 354) )
        qword_140161068 = *((_QWORD *)DeviceExtension + 354);
      goto LABEL_65;
    }
    if ( DpiFdoIsPostDevice((__int64)DeviceObject) )
    {
LABEL_61:
      qword_140161068 = (__int64)DeviceObject;
      goto LABEL_65;
    }
    v22 = *(_BYTE *)(*((_QWORD *)DeviceExtension + 21) + 108LL) == 0;
  }
  else
  {
    v22 = v33 == 0;
  }
  if ( !v22 )
    goto LABEL_61;
LABEL_65:
  if ( !*((_BYTE *)DeviceExtension + 480)
    && *((_BYTE *)DeviceExtension + 1153)
    && !DpiFdoIsMsBddAnchoredDevice((__int64)DeviceObject) )
  {
    WdLogSingleEntry1(4LL, DeviceObject);
    WdLogGlobalForLineNumber = 7678;
    v10 = 1;
    LODWORD(Status) = -1071774664;
    goto LABEL_97;
  }
  if ( byte_140160D62 && !*((_BYTE *)DeviceExtension + 1158) )
  {
    ThreadHandle = 0LL;
    StartContext = (_WORD *)ExAllocatePool2(256LL, 1552LL, 1953656900LL);
    if ( !StartContext )
    {
      LODWORD(Status) = -1073741801;
      WdLogSingleEntry1(6LL, -1073741801LL);
      WdLogGlobalForLineNumber = 7722;
LABEL_73:
      v10 = 0;
      goto LABEL_97;
    }
    if ( *(_BYTE *)(*((_QWORD *)DeviceExtension + 21) + 108LL)
      || (v22 = !DpiFdoIsMsBddAnchoredDevice((__int64)DeviceObject), v24 = 0, !v22) )
    {
      v24 = 2;
    }
    *(_DWORD *)StartContext = v24;
    StartContext[2] = 0;
    *((_DWORD *)StartContext + 131) = 0;
    v25 = PsCreateSystemThread(&ThreadHandle, 0x1FFFFFu, 0LL, 0LL, 0LL, DpiFdoStartAdapterThread, StartContext);
    LODWORD(Status) = v25;
    if ( v25 < 0 )
    {
      WdLogSingleEntry1(2LL, v25);
      WdLogGlobalForLineNumber = 7753;
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
    v26 = (void *)*((_QWORD *)DeviceExtension + 686);
    if ( v26 )
    {
      v27 = IoCsqRemoveNextIrp((PIO_CSQ)(DeviceExtension + 1350), v26);
      *((_QWORD *)DeviceExtension + 686) = 0LL;
      if ( v27 )
      {
        *((_BYTE *)DeviceExtension + 5516) = 1;
        v27->IoStatus.Status = 0;
        v27->IoStatus.Information = 0LL;
        IofCompleteRequest(v27, 0);
        IoInvalidateDeviceState(*((PDEVICE_OBJECT *)DeviceExtension + 19));
      }
    }
    v28 = (void *)*((_QWORD *)DeviceExtension + 690);
    if ( v28 )
    {
      v29 = IoCsqRemoveNextIrp((PIO_CSQ)(DeviceExtension + 1350), v28);
      *((_QWORD *)DeviceExtension + 690) = 0LL;
      if ( v29 )
      {
        *((_BYTE *)DeviceExtension + 5548) = 1;
        v29->IoStatus.Status = 0;
        v29->IoStatus.Information = 0LL;
        IofCompleteRequest(v29, 0);
      }
    }
  }
LABEL_89:
  if ( v34 )
  {
    ExEnterCriticalRegionAndAcquireFastMutexUnsafe(&dword_140161320);
    if ( !--dword_140161358 )
      KeSetEvent(&stru_140161360, 0, 0);
    ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(&dword_140161320);
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
