/*
 * XREFs of ?LoadReflectorServiceAndOpenInterfaceLocked@FxCompanionLibrary@@AEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x14008EF10
 * Callers:
 *     ?OpenCompanionLibraryInterface@FxCompanionLibrary@@AEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x14008F224 (-OpenCompanionLibraryInterface@FxCompanionLibrary@@AEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 * Callees:
 *     WPP_IFR_SF_D @ 0x14001177C (WPP_IFR_SF_D.c)
 *     __security_check_cookie @ 0x1400AC710 (__security_check_cookie.c)
 */

__int64 __fastcall FxCompanionLibrary::LoadReflectorServiceAndOpenInterfaceLocked(
        FxCompanionLibrary *this,
        _FX_DRIVER_GLOBALS *DriverGlobals)
{
  _FILE_OBJECT *v3; // rdi
  NTSTATUS Status; // ebx
  unsigned __int16 v6; // r9
  NTSTATUS DeviceObjectPointer; // eax
  _IRP *v8; // rax
  _DEVICE_OBJECT *v9; // rax
  __int64 result; // rax
  _DEVICE_OBJECT *rdNonPnPDevice; // [rsp+50h] [rbp-B0h] BYREF
  _FILE_OBJECT *rdNonPnPFile; // [rsp+58h] [rbp-A8h] BYREF
  _UNICODE_STRING wudfRdNonPnPSvcName; // [rsp+60h] [rbp-A0h] BYREF
  _UNICODE_STRING unicodeDeviceName; // [rsp+70h] [rbp-90h] BYREF
  _KEVENT event; // [rsp+80h] [rbp-80h] BYREF
  _IO_STATUS_BLOCK iosb; // [rsp+98h] [rbp-68h] BYREF
  wchar_t wudfRdNonPnPSvcName_buffer[64]; // [rsp+B0h] [rbp-50h] BYREF
  wchar_t unicodeDeviceName_buffer[64]; // [rsp+130h] [rbp+30h] BYREF

  memset(&event, 0, sizeof(event));
  iosb = 0LL;
  v3 = 0LL;
  wcscpy(wudfRdNonPnPSvcName_buffer, L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\WudfPf");
  wcscpy(unicodeDeviceName_buffer, L"\\Device\\WUDFRdNonPnP-01ef3135-0713-470c-95dc-5d1b184938c4");
  wudfRdNonPnPSvcName.Buffer = wudfRdNonPnPSvcName_buffer;
  rdNonPnPFile = 0LL;
  rdNonPnPDevice = 0LL;
  *(_QWORD *)&wudfRdNonPnPSvcName.Length = 7733364LL;
  *(_QWORD *)&unicodeDeviceName.Length = 7602290LL;
  unicodeDeviceName.Buffer = unicodeDeviceName_buffer;
  Status = ZwLoadDriver(&wudfRdNonPnPSvcName);
  if ( (int)(Status + 0x80000000) >= 0 && Status != -1073741554 )
  {
    v6 = 10;
LABEL_8:
    WPP_IFR_SF_D(DriverGlobals, 2u, 0xCu, v6, WPP_FxCompanionLibrary_cpp_Traceguids, Status);
    goto LABEL_13;
  }
  DeviceObjectPointer = IoGetDeviceObjectPointer(&unicodeDeviceName, 0x1F01FFu, &rdNonPnPFile, &rdNonPnPDevice);
  Status = DeviceObjectPointer;
  if ( DeviceObjectPointer >= 0 )
  {
    ObfReferenceObject(rdNonPnPDevice);
    KeInitializeEvent(&event, NotificationEvent, 0);
    v8 = IoBuildDeviceIoControlRequest(
           0x80028400,
           rdNonPnPDevice,
           0LL,
           0,
           &this->m_RdCompanionLibrary,
           8u,
           1u,
           &event,
           &iosb);
    if ( !v8 )
    {
      Status = -1073741670;
      v6 = 12;
      goto LABEL_8;
    }
    Status = IofCallDriver(rdNonPnPDevice, v8);
    if ( Status == 259 )
    {
      KeWaitForSingleObject(&event, Executive, 0, 0, 0LL);
      Status = iosb.Status;
      WPP_IFR_SF_D(DriverGlobals, 2u, 0xCu, 0xDu, WPP_FxCompanionLibrary_cpp_Traceguids, iosb.Status);
    }
    if ( Status >= 0 )
    {
      v3 = rdNonPnPFile;
      v9 = rdNonPnPDevice;
      goto LABEL_19;
    }
  }
  else
  {
    WPP_IFR_SF_D(DriverGlobals, 2u, 0xCu, 0xBu, WPP_FxCompanionLibrary_cpp_Traceguids, DeviceObjectPointer);
  }
LABEL_13:
  if ( rdNonPnPFile )
    ObfDereferenceObject(rdNonPnPFile);
  if ( rdNonPnPDevice )
    ObfDereferenceObject(rdNonPnPDevice);
  v9 = 0LL;
  this->m_RdCompanionLibrary = 0LL;
LABEL_19:
  this->m_RdNonPnPDevice = v9;
  result = (unsigned int)Status;
  this->m_RdNonPnPFile = v3;
  return result;
}
