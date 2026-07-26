/*
 * XREFs of ?ndisIsNetSetupV2Interface@@YA_NAEBU_UNICODE_STRING@@@Z @ 0x1401656C0
 * Callers:
 *     ?ndisCheckIfDeviceNeedsPseudoMigration@@YAJAEAVKRegKey@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@AEA_N@Z @ 0x1401655B0 (-ndisCheckIfDeviceNeedsPseudoMigration@@YAJAEAVKRegKey@@AEAV-$unique_ptr@UKString@Rtl@@U-$defaul.c)
 * Callees:
 *     ?RtlStringCchPrintfW@@YAJPEA_W_KPEB_WZZ @ 0x140069B30 (-RtlStringCchPrintfW@@YAJPEA_W_KPEB_WZZ.c)
 *     RtlUnicodeStringInitWorker @ 0x140096778 (RtlUnicodeStringInitWorker.c)
 *     __security_check_cookie @ 0x1400E70B0 (__security_check_cookie.c)
 *     memset @ 0x1400E7500 (memset.c)
 */

char __fastcall ndisIsNetSetupV2Interface(const struct _UNICODE_STRING *a1)
{
  size_t v2; // r8
  ULONG v3; // r9d
  HANDLE KeyHandle; // [rsp+20h] [rbp-268h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+28h] [rbp-260h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+38h] [rbp-250h] BYREF
  wchar_t pszSrc[256]; // [rsp+70h] [rbp-218h] BYREF

  memset(pszSrc, 0, 0x100uLL);
  if ( (int)RtlStringCchPrintfW(
              pszSrc,
              256LL,
              L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\NetworkSetup2\\Interfaces\\%wZ",
              a1) < 0 )
    return 0;
  DestinationString = 0LL;
  if ( RtlUnicodeStringInitWorker(&DestinationString, pszSrc, v2, v3) < 0 )
    return 0;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  KeyHandle = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  ObjectAttributes.ObjectName = &DestinationString;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 1u, &ObjectAttributes) < 0 )
  {
    if ( KeyHandle )
      ZwClose(KeyHandle);
    return 0;
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return 1;
}
