/*
 * XREFs of PortOpenDeviceKey @ 0x1401B98D0
 * Callers:
 *     PortGetLinkTimeoutValue @ 0x1400422B0 (PortGetLinkTimeoutValue.c)
 *     PortGetRegistrySettings @ 0x1401B969C (PortGetRegistrySettings.c)
 *     PortGetDriverParameters @ 0x1401B972C (PortGetDriverParameters.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x1400375F0 (RtlStringCbPrintfW.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 *     PortpOpenParametersKey @ 0x1401B99DC (PortpOpenParametersKey.c)
 */

void *__fastcall PortOpenDeviceKey(__int64 a1, unsigned int a2)
{
  void *v3; // rdi
  void *KeyHandle; // [rsp+20h] [rbp-89h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+28h] [rbp-81h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+38h] [rbp-71h] BYREF
  wchar_t pszDest[64]; // [rsp+70h] [rbp-39h] BYREF

  *(&ObjectAttributes.Attributes + 1) = 0;
  KeyHandle = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  DestinationString = 0LL;
  v3 = (void *)PortpOpenParametersKey();
  if ( v3 )
  {
    if ( a2 == -1 )
      RtlStringCbPrintfW(pszDest, 0x80uLL, L"Device");
    else
      RtlStringCbPrintfW(pszDest, 0x80uLL, L"Device%d", a2);
    RtlInitUnicodeString(&DestinationString, pszDest);
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.RootDirectory = v3;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
    ZwClose(v3);
  }
  return KeyHandle;
}
