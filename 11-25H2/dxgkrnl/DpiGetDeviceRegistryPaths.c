/*
 * XREFs of DpiGetDeviceRegistryPaths @ 0x14007DD24
 * Callers:
 *     DpiAddDevice @ 0x1402329D0 (DpiAddDevice.c)
 * Callees:
 *     DpiGetRegistryPathFromPDO @ 0x14007C100 (DpiGetRegistryPathFromPDO.c)
 *     DpiCopyUnicodeString @ 0x140242DA0 (DpiCopyUnicodeString.c)
 */

__int64 __fastcall DpiGetDeviceRegistryPaths(__int64 a1, struct _DEVICE_OBJECT *a2, __int64 a3)
{
  __int64 v3; // rdi
  unsigned int v4; // esi
  int v5; // ebx
  int RegistryPathFromPDO; // eax
  struct _UNICODE_STRING UnicodeString; // [rsp+20h] [rbp-28h] BYREF

  v3 = *(_QWORD *)(a1 + 64);
  v4 = 0;
  UnicodeString = 0LL;
  v5 = 0;
  while ( v5 != 2 )
  {
    if ( v5 == 1 && *(_BYTE *)(v3 + 480) )
      RegistryPathFromPDO = DpiCopyUnicodeString(&UnicodeString, (PCUNICODE_STRING)(a3 + 40));
    else
      RegistryPathFromPDO = DpiGetRegistryPathFromPDO(a2, v5 == 0, &UnicodeString.Length);
    v4 = RegistryPathFromPDO;
    if ( RegistryPathFromPDO >= 0 )
    {
      if ( v5 )
      {
        *(struct _UNICODE_STRING *)(v3 + 528) = UnicodeString;
        v5 = 2;
      }
      else
      {
        *(struct _UNICODE_STRING *)(v3 + 512) = UnicodeString;
        v5 = 1;
      }
    }
    *(_DWORD *)&UnicodeString.Length = 0;
    UnicodeString.Buffer = 0LL;
    if ( RegistryPathFromPDO < 0 )
    {
      RtlFreeUnicodeString(&UnicodeString);
      RtlFreeUnicodeString((PUNICODE_STRING)(v3 + 512));
      RtlFreeUnicodeString((PUNICODE_STRING)(v3 + 528));
      return v4;
    }
  }
  return v4;
}
