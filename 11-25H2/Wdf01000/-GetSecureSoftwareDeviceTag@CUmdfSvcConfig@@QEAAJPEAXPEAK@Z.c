/*
 * XREFs of ?GetSecureSoftwareDeviceTag@CUmdfSvcConfig@@QEAAJPEAXPEAK@Z @ 0x14007F9F0
 * Callers:
 *     ?IsCompanionRequiredForDevice@FxCompanionLibrary@@QEAAEPEAVFxDevice@@PEAPEBG@Z @ 0x1400515D4 (-IsCompanionRequiredForDevice@FxCompanionLibrary@@QEAAEPEAVFxDevice@@PEAPEBG@Z.c)
 * Callees:
 *     ?_QueryULong@CUmdfSvcConfig@@CAJPEAXPEBU_UNICODE_STRING@@PEAK@Z @ 0x140079530 (-_QueryULong@CUmdfSvcConfig@@CAJPEAXPEBU_UNICODE_STRING@@PEAK@Z.c)
 *     __security_check_cookie @ 0x1400AC640 (__security_check_cookie.c)
 */

__int64 __fastcall CUmdfSvcConfig::GetSecureSoftwareDeviceTag(
        CUmdfSvcConfig *this,
        void *DeviceKey,
        unsigned int *SoftwareDeviceTag)
{
  NTSTATUS v4; // ebx
  unsigned int swDeviceTag; // [rsp+20h] [rbp-49h] BYREF
  void *hWudfKey; // [rsp+28h] [rbp-41h] BYREF
  _UNICODE_STRING wudfKeyName; // [rsp+30h] [rbp-39h] BYREF
  _UNICODE_STRING softwareDeviceTagKeyName; // [rsp+40h] [rbp-29h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-19h] BYREF
  wchar_t wudfKeyName_buffer[8]; // [rsp+80h] [rbp+17h] BYREF
  wchar_t softwareDeviceTagKeyName_buffer[20]; // [rsp+90h] [rbp+27h] BYREF

  swDeviceTag = 0;
  *(&ObjectAttributes.Length + 1) = 0;
  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  hWudfKey = 0LL;
  wudfKeyName.Buffer = wudfKeyName_buffer;
  wcscpy(wudfKeyName_buffer, L"WUDF");
  softwareDeviceTagKeyName.Buffer = softwareDeviceTagKeyName_buffer;
  wcscpy(softwareDeviceTagKeyName_buffer, L"SoftwareDeviceTag");
  ObjectAttributes.RootDirectory = DeviceKey;
  ObjectAttributes.ObjectName = &wudfKeyName;
  *(_QWORD *)&wudfKeyName.Length = 655368LL;
  *(_QWORD *)&softwareDeviceTagKeyName.Length = 2359330LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  v4 = ZwOpenKey(&hWudfKey, 0x20019u, &ObjectAttributes);
  if ( v4 >= 0 )
  {
    v4 = CUmdfSvcConfig::_QueryULong(hWudfKey, &softwareDeviceTagKeyName, &swDeviceTag);
    if ( v4 >= 0 )
      *SoftwareDeviceTag = swDeviceTag;
  }
  if ( hWudfKey )
    ZwClose(hWudfKey);
  return (unsigned int)v4;
}
