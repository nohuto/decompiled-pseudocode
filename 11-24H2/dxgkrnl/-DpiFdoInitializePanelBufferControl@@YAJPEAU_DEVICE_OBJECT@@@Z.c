/*
 * XREFs of ?DpiFdoInitializePanelBufferControl@@YAJPEAU_DEVICE_OBJECT@@@Z @ 0x14007CCA0
 * Callers:
 *     DpiFdoStartAdapter @ 0x140245688 (DpiFdoStartAdapter.c)
 * Callees:
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     DpiQueryMiniportInterface @ 0x14018AFAC (DpiQueryMiniportInterface.c)
 *     DpiIsFeatureEnabled @ 0x14024E064 (DpiIsFeatureEnabled.c)
 */

__int64 __fastcall DpiFdoInitializePanelBufferControl(struct _DEVICE_OBJECT *a1)
{
  char *DeviceExtension; // rbx
  int v3; // edi
  _WORD *v4; // rdi
  int v6; // [rsp+30h] [rbp-49h] BYREF
  ULONG ResultLength; // [rsp+34h] [rbp-45h] BYREF
  void *KeyHandle; // [rsp+38h] [rbp-41h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-39h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+50h] [rbp-29h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-19h] BYREF
  __int128 KeyValueInformation; // [rsp+90h] [rbp+17h] BYREF
  int v13; // [rsp+A0h] [rbp+27h]

  DeviceExtension = (char *)a1->DeviceExtension;
  if ( (DeviceExtension[4040] & 1) == 0 || *(_BYTE *)(*((_QWORD *)DeviceExtension + 5) + 133LL) || DeviceExtension[1158] )
    return 0LL;
  DeviceExtension[6512] = 0;
  v3 = 0;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers");
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  ObjectAttributes.ObjectName = &DestinationString;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  ObjectAttributes.RootDirectory = 0LL;
  KeyHandle = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
  {
    ValueName = 0LL;
    RtlInitUnicodeString(&ValueName, L"DMSSOverride");
    ResultLength = 0;
    v13 = 0;
    KeyValueInformation = 0LL;
    if ( ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, &KeyValueInformation, 0x14u, &ResultLength) >= 0
      && *(_QWORD *)((char *)&KeyValueInformation + 4) == 0x400000004LL )
    {
      v3 = HIDWORD(KeyValueInformation);
    }
    ZwClose(KeyHandle);
  }
  v6 = 0;
  DpiIsFeatureEnabled(a1, 46LL, 0LL, &v6);
  if ( (v6 & 0x10000) == 0 && !v3 )
    return 0LL;
  v4 = DeviceExtension + 6448;
  if ( (int)DpiQueryMiniportInterface((_DWORD)a1, (unsigned int)&GUID_WDDM_INTERFACE_PANEL_BUFFER_CONTROL, 64, 1) < 0 )
    return 0LL;
  if ( *v4 == 64
    && *((_WORD *)DeviceExtension + 3225) == 1
    && *((_QWORD *)DeviceExtension + 810)
    && *((_QWORD *)DeviceExtension + 811)
    && *((_QWORD *)DeviceExtension + 812)
    && *((_QWORD *)DeviceExtension + 813) )
  {
    DeviceExtension[6512] = 1;
    return 0LL;
  }
  WdLogSingleEntry1(2LL, -1073741811LL);
  WdLogGlobalForLineNumber = 13776;
  memset(v4, 0, 0x40uLL);
  return 3221225485LL;
}
