/*
 * XREFs of ?DeleteRegistryKeys@DXGADAPTER@@QEAAXXZ @ 0x14018C078
 * Callers:
 *     ?Destroy@DXGADAPTER@@QEAAXXZ @ 0x14018C23C (-Destroy@DXGADAPTER@@QEAAXXZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?RtlUnicodeStringCopy@@YAJPEAU_UNICODE_STRING@@PEBU1@@Z @ 0x14004CEFC (-RtlUnicodeStringCopy@@YAJPEAU_UNICODE_STRING@@PEBU1@@Z.c)
 *     ?RtlUnicodeStringCatString@@YAJPEAU_UNICODE_STRING@@PEBG@Z @ 0x140066604 (-RtlUnicodeStringCatString@@YAJPEAU_UNICODE_STRING@@PEBG@Z.c)
 *     DpiGetRegistryPathFromPDO @ 0x14007C100 (DpiGetRegistryPathFromPDO.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     ?DeleteRegistryKey@DXGADAPTER@@QEAAJPEAU_UNICODE_STRING@@@Z @ 0x14018BCAC (-DeleteRegistryKey@DXGADAPTER@@QEAAJPEAU_UNICODE_STRING@@@Z.c)
 */

void __fastcall DXGADAPTER::DeleteRegistryKeys(DXGADAPTER *this)
{
  struct _DEVICE_OBJECT *v2; // rcx
  struct _DEVICE_OBJECT *DeviceAttachmentBaseRef; // rbx
  __int64 RegistryPathFromPDO; // rsi
  ULONG v5; // r8d
  ULONG v6; // r8d
  int v7; // eax
  ULONG v8; // r8d
  ULONG v9; // r8d
  int v10; // eax
  struct _UNICODE_STRING v11; // [rsp+50h] [rbp-B0h] BYREF
  struct _UNICODE_STRING UnicodeString; // [rsp+60h] [rbp-A0h] BYREF
  char v13; // [rsp+70h] [rbp-90h] BYREF

  v2 = (struct _DEVICE_OBJECT *)*((_QWORD *)this + 27);
  if ( v2 )
  {
    *(_QWORD *)&v11.Length = 34078720LL;
    UnicodeString = 0LL;
    v11.Buffer = (wchar_t *)&v13;
    DeviceAttachmentBaseRef = IoGetDeviceAttachmentBaseRef(v2);
    RegistryPathFromPDO = (int)DpiGetRegistryPathFromPDO(DeviceAttachmentBaseRef, 0, &UnicodeString.Length);
    ObfDereferenceObject(DeviceAttachmentBaseRef);
    if ( (int)RegistryPathFromPDO >= 0 )
    {
      RtlUnicodeStringCopy(&v11, &UnicodeString, v5);
      RtlUnicodeStringCatString(&v11, (wchar_t *)L"\\Classes");
      v7 = DXGADAPTER::DeleteRegistryKey(this, &v11, v6);
      if ( v7 < 0 )
      {
        WdLogSingleEntry1(3LL, v7);
        WdLogGlobalForLineNumber = 12704;
      }
      RtlUnicodeStringCopy(&v11, &UnicodeString, v8);
      RtlUnicodeStringCatString(&v11, (wchar_t *)L"\\MediaFoundation");
      v10 = DXGADAPTER::DeleteRegistryKey(this, &v11, v9);
      if ( v10 < 0 )
      {
        WdLogSingleEntry1(3LL, v10);
        WdLogGlobalForLineNumber = 12713;
      }
      RtlFreeUnicodeString(&UnicodeString);
    }
    else
    {
      WdLogSingleEntry1(2LL, RegistryPathFromPDO);
      WdLogGlobalForLineNumber = 12694;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Failed to read PnP registry key name for DeleteRegistryKeys (status = 0x%I64x).",
        RegistryPathFromPDO,
        0LL,
        0LL,
        0LL,
        0LL);
    }
  }
}
