/*
 * XREFs of IoReportRootDevice @ 0x14071AE90
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14022BF50 (ExAcquireResourceExclusiveLite.c)
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     RtlCopyUnicodeString @ 0x1403FA370 (RtlCopyUnicodeString.c)
 *     RtlAppendUnicodeToString @ 0x140403FC0 (RtlAppendUnicodeToString.c)
 *     RtlStringCchPrintfExW @ 0x140418B60 (RtlStringCchPrintfExW.c)
 *     PnpRequestDeviceAction @ 0x140467508 (PnpRequestDeviceAction.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     IopGetRootDeviceId @ 0x14071B2E4 (IopGetRootDeviceId.c)
 *     _CmDeleteDevice @ 0x1408189D8 (_CmDeleteDevice.c)
 *     _PnpSetObjectProperty @ 0x1408B6258 (_PnpSetObjectProperty.c)
 *     PiPnpRtlBeginOperation @ 0x1408C99A8 (PiPnpRtlBeginOperation.c)
 *     PiPnpRtlEndOperation @ 0x1408C9B88 (PiPnpRtlEndOperation.c)
 *     _CmSetDeviceRegProp @ 0x14097BE58 (_CmSetDeviceRegProp.c)
 *     PnpCleanupDeviceRegistryValues @ 0x1409BB950 (PnpCleanupDeviceRegistryValues.c)
 *     _CmCreateDevice @ 0x1409C4008 (_CmCreateDevice.c)
 *     PpDevNodeLockTree @ 0x140A05140 (PpDevNodeLockTree.c)
 *     PpDevNodeUnlockTree @ 0x140A0D4DC (PpDevNodeUnlockTree.c)
 */

NTSTATUS __stdcall IoReportRootDevice(PDRIVER_OBJECT DriverObject)
{
  PDRIVER_EXTENSION DriverExtension; // r14
  void *v3; // rdi
  NTSTATUS result; // eax
  __int64 v5; // rdx
  __int64 v6; // r8
  int appended; // ebx
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 v9; // rcx
  __int16 v10; // si
  int Device; // eax
  char v12; // si
  int v13; // r8d
  wchar_t *pszFormat; // [rsp+30h] [rbp-D8h]
  unsigned int v15; // [rsp+38h] [rbp-D0h]
  __int64 v16; // [rsp+58h] [rbp-B0h] BYREF
  UNICODE_STRING SourceString; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v18; // [rsp+70h] [rbp-98h] BYREF
  void *v19; // [rsp+78h] [rbp-90h] BYREF
  UNICODE_STRING DestinationString; // [rsp+80h] [rbp-88h] BYREF
  NTSTRSAFE_PWSTR ppszDestEnd; // [rsp+90h] [rbp-78h] BYREF
  PVOID P[2]; // [rsp+98h] [rbp-70h] BYREF
  _WORD v23[200]; // [rsp+A8h] [rbp-60h] BYREF
  char v24; // [rsp+238h] [rbp+130h] BYREF

  DriverExtension = DriverObject->DriverExtension;
  SourceString.Buffer = v23;
  *(_QWORD *)&DestinationString.Length = 26345472LL;
  *(_QWORD *)&SourceString.Length = 26214400LL;
  LODWORD(v18) = 0;
  LOWORD(v16) = 0;
  v3 = 0LL;
  v19 = 0LL;
  DestinationString.Buffer = (wchar_t *)&v24;
  P[0] = 0LL;
  result = IopGetRootDeviceId(&DriverExtension->ServiceKeyName, &SourceString);
  if ( result < 0 )
    return result;
  if ( SourceString.Length > 0x18Eu )
    return -1073741773;
  RtlCopyUnicodeString(&DestinationString, &SourceString);
  appended = PiPnpRtlBeginOperation(P, v5, v6);
  if ( appended >= 0 )
  {
    PpDevNodeLockTree(1LL);
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
    appended = RtlAppendUnicodeToString(&SourceString, L"\\");
    if ( appended < 0 )
    {
      v3 = v19;
      goto LABEL_19;
    }
    ppszDestEnd = &v23[(unsigned __int64)SourceString.Length >> 1];
    RtlStringCchPrintfExW(
      ppszDestEnd,
      (400 - (unsigned __int64)SourceString.Length) >> 1,
      &ppszDestEnd,
      0LL,
      0,
      L"%04u",
      0LL);
    v9 = &ppszDestEnd[-((unsigned __int64)SourceString.Length >> 1)] - v23;
    if ( (_DWORD)v9 == -1 )
      v10 = 400 - SourceString.Length;
    else
      v10 = 2 * v9;
    SourceString.Length += v10;
    Device = CmCreateDevice(PiPnpRtlCtx, SourceString.Buffer, 983103, (unsigned int)&v19, (__int64)&v16, 0);
    v12 = v16;
    appended = Device;
    v3 = v19;
    if ( Device < 0 )
      goto LABEL_16;
    if ( (_BYTE)v16 )
    {
      v13 = (int)v19;
      v15 = DestinationString.Length + 4;
      pszFormat = DestinationString.Buffer;
      *(_DWORD *)&DestinationString.Buffer[((unsigned __int64)v15 >> 1) - 2] = 0;
      appended = CmSetDeviceRegProp(PiPnpRtlCtx, SourceString.Buffer, v13, 2, 7, (__int64)pszFormat, v15, 0);
      if ( appended >= 0 )
      {
        LODWORD(v18) = 32;
        appended = CmSetDeviceRegProp(PiPnpRtlCtx, SourceString.Buffer, (_DWORD)v3, 11, 4, (__int64)&v18, 4, 0);
        if ( appended >= 0 )
        {
          BYTE1(v16) = -1;
          appended = PnpSetObjectProperty(
                       PiPnpRtlCtx,
                       SourceString.Buffer,
                       1,
                       0LL,
                       (__int64)&DEVPKEY_Device_Reported,
                       17,
                       (__int64)&v16 + 1,
                       1,
                       0);
          if ( appended >= 0 )
          {
            appended = CmSetDeviceRegProp(
                         PiPnpRtlCtx,
                         SourceString.Buffer,
                         (_DWORD)v3,
                         5,
                         1,
                         (__int64)DriverExtension->ServiceKeyName.Buffer,
                         (unsigned int)DriverExtension->ServiceKeyName.Length + 2,
                         0);
            if ( appended >= 0 )
            {
              DriverObject->Flags |= 0x800u;
              PnpRequestDeviceAction(*((PVOID *)IopRootDeviceNode + 4), 8u, 0, 0LL, 0LL, 0LL, 0LL);
              goto LABEL_19;
            }
          }
        }
      }
LABEL_16:
      if ( v12 )
      {
        CmDeleteDevice(PiPnpRtlCtx);
        PnpCleanupDeviceRegistryValues(&SourceString);
      }
    }
  }
LABEL_19:
  ExReleaseResourceLite(&PnpRegistryDeviceResource);
  KeLeaveCriticalRegion();
  PpDevNodeUnlockTree(1LL);
  if ( v3 )
    ZwClose(v3);
  if ( P[0] )
    PiPnpRtlEndOperation(P[0]);
  return appended;
}
