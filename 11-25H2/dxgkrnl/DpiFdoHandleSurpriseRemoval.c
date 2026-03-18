/*
 * XREFs of DpiFdoHandleSurpriseRemoval @ 0x14023BA80
 * Callers:
 *     <none>
 * Callees:
 *     DpiCheckForOutstandingD3Requests @ 0x14002A148 (DpiCheckForOutstandingD3Requests.c)
 *     DpiFdoIsPostDevice @ 0x14004DB50 (DpiFdoIsPostDevice.c)
 *     DpiFdoHandleStopDevice @ 0x14023B6E0 (DpiFdoHandleStopDevice.c)
 *     DpiFdoIsDevicePresent @ 0x14023D6C0 (DpiFdoIsDevicePresent.c)
 *     DpiDxgkDdiNotifySurpriseRemoval @ 0x14024D938 (DpiDxgkDdiNotifySurpriseRemoval.c)
 *     DpiEnableD3Requests @ 0x1402BA7B0 (DpiEnableD3Requests.c)
 */

NTSTATUS __fastcall DpiFdoHandleSurpriseRemoval(struct _DEVICE_OBJECT *a1, IRP *a2)
{
  __int64 DeviceExtension; // rdi
  int IsDevicePresent; // r14d
  int v6; // eax
  __int64 v7; // rsi
  __int64 v8; // rcx
  bool IsPostDevice; // al
  __int64 v10; // rdx
  __int64 v11; // r8
  int v12; // eax
  int v13; // eax
  bool v14; // zf
  char v16; // [rsp+60h] [rbp+8h] BYREF

  DeviceExtension = (__int64)a1->DeviceExtension;
  IsDevicePresent = 0;
  *(_BYTE *)(DeviceExtension + 1162) = 1;
  KeEnterCriticalRegion();
  if ( *(_BYTE *)(DeviceExtension + 484) )
    DpiCheckForOutstandingD3Requests(DeviceExtension);
  ExAcquireResourceExclusiveLite(*(PERESOURCE *)(DeviceExtension + 168), 1u);
  v6 = *(_DWORD *)(DeviceExtension + 236);
  if ( v6 != 6 )
  {
    v7 = 0LL;
    if ( !*(_DWORD *)(DeviceExtension + 504) || *(_BYTE *)(DeviceExtension + 508) )
    {
      if ( *(_DWORD *)(DeviceExtension + 16) == 1953656900 && *(_DWORD *)(DeviceExtension + 20) == 2 )
        v7 = DeviceExtension;
    }
    else
    {
      v8 = *(_QWORD *)(DeviceExtension + 2832);
      if ( v8 )
        v7 = *(_QWORD *)(v8 + 64);
    }
    if ( !*(_BYTE *)(DeviceExtension + 232)
      && (v6 == 2 || *(_DWORD *)(DeviceExtension + 240) == 2 && ((v6 - 3) & 0xFFFFFFFD) == 0) )
    {
      v16 = 0;
      IsDevicePresent = DpiFdoIsDevicePresent(DeviceExtension, &v16);
      if ( IsDevicePresent < 0
        || !v16
        && (*(_BYTE *)(DeviceExtension + 1160) = 1, v7)
        && (IsDevicePresent = DpiDxgkDdiNotifySurpriseRemoval(
                                *(_QWORD *)(DeviceExtension + 40),
                                *(_QWORD *)(DeviceExtension + 48),
                                v7,
                                1LL),
            IsDevicePresent < 0) )
      {
        *(_BYTE *)(DeviceExtension + 1161) = 1;
        IsPostDevice = DpiFdoIsPostDevice((__int64)a1);
        WdLogSingleEntry5(0LL, 275LL, 25LL, 2LL - IsPostDevice, v11, v10);
        WdLogGlobalForLineNumber = 8220;
      }
    }
    if ( v7 == DeviceExtension )
    {
      KeEnterCriticalRegion();
      ExAcquireResourceExclusiveLite((PERESOURCE)(v7 + 3928), 1u);
      *(_DWORD *)(v7 + 4LL * (*(_DWORD *)(v7 + 276) & 7) + 244) = *(_DWORD *)(v7 + 240);
      v12 = *(_DWORD *)(v7 + 236);
      ++*(_DWORD *)(v7 + 276);
      *(_DWORD *)(v7 + 240) = v12;
      *(_DWORD *)(v7 + 236) = 6;
      ExReleaseResourceLite((PERESOURCE)(v7 + 3928));
      KeLeaveCriticalRegion();
    }
    else
    {
      *(_DWORD *)(DeviceExtension + 4LL * (*(_DWORD *)(DeviceExtension + 276) & 7) + 244) = *(_DWORD *)(DeviceExtension + 240);
      v13 = *(_DWORD *)(DeviceExtension + 236);
      ++*(_DWORD *)(DeviceExtension + 276);
      *(_DWORD *)(DeviceExtension + 240) = v13;
      *(_DWORD *)(DeviceExtension + 236) = 6;
    }
  }
  WdLogSingleEntry1(4LL, a1);
  v14 = *(_BYTE *)(DeviceExtension + 484) == 0;
  WdLogGlobalForLineNumber = 8244;
  if ( !v14 )
    DpiEnableD3Requests(*(_QWORD *)(DeviceExtension + 24));
  ExReleaseResourceLite(*(PERESOURCE *)(DeviceExtension + 168));
  KeLeaveCriticalRegion();
  if ( (unsigned int)(*(_DWORD *)(DeviceExtension + 240) - 1) <= 1 )
    DpiFdoHandleStopDevice(a1, a2);
  ++a2->CurrentLocation;
  ++a2->Tail.Overlay.CurrentStackLocation;
  a2->IoStatus.Status = IsDevicePresent;
  return IofCallDriver(*(PDEVICE_OBJECT *)(DeviceExtension + 160), a2);
}
