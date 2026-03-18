/*
 * XREFs of OSReadAcpiConfigurationData @ 0x1400C4D0C
 * Callers:
 *     ACPIInitializeAMLI @ 0x1400C4A38 (ACPIInitializeAMLI.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1400283FC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x14003A7DC (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_SL @ 0x140067324 (WPP_RECORDER_SF_SL.c)
 *     __security_check_cookie @ 0x140070B10 (__security_check_cookie.c)
 *     OSGetRegistryValue @ 0x1400B3AFC (OSGetRegistryValue.c)
 *     OSOpenUnicodeHandle @ 0x1400B71E8 (OSOpenUnicodeHandle.c)
 *     OSCloseHandle @ 0x1400BE908 (OSCloseHandle.c)
 */

__int64 __fastcall OSReadAcpiConfigurationData(_QWORD *a1)
{
  unsigned int v1; // edi
  int v3; // ebx
  int v5; // edx
  ULONG v6; // esi
  int v7; // edx
  int v8; // ebx
  int v9; // r8d
  int v10; // r9d
  HANDLE v11; // rcx
  __int64 v12; // rcx
  wchar_t *v13; // r8
  int v14; // edx
  __int64 v15; // rcx
  BOOLEAN v16; // bl
  NTSTATUS v17; // ebx
  HANDLE KeyHandle; // [rsp+40h] [rbp-9h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-1h] BYREF
  void *v20; // [rsp+58h] [rbp+Fh] BYREF
  UNICODE_STRING String2; // [rsp+60h] [rbp+17h] BYREF
  UNICODE_STRING String1; // [rsp+70h] [rbp+27h] BYREF
  char v23; // [rsp+80h] [rbp+37h] BYREF

  v1 = 0;
  *a1 = 0LL;
  KeyHandle = 0LL;
  v20 = 0LL;
  String1 = 0LL;
  DestinationString = 0LL;
  String2 = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\Hardware\\Description\\System\\MultiFunctionAdapter");
  v3 = OSOpenUnicodeHandle(&DestinationString, 0LL, &v20);
  if ( v3 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_d(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        0x16u,
        0x10u,
        (__int64)&WPP_b53b04e5215c33f856eb87d923c6e01e_Traceguids,
        v3);
    return (unsigned int)v3;
  }
  RtlInitUnicodeString(&String1, L"ACPI BIOS");
  v6 = 0;
  DestinationString.Buffer = (wchar_t *)&v23;
  DestinationString.MaximumLength = 8;
  while ( v6 < 0x3E7 )
  {
    DestinationString.Length = 0;
    RtlIntegerToUnicodeString(v6, 0xAu, &DestinationString);
    v8 = OSOpenUnicodeHandle(&DestinationString, v20, &KeyHandle);
    if ( v8 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_SL(WPP_GLOBAL_Control->DeviceExtension, v7, v9, v10);
      v1 = v8;
LABEL_20:
      OSCloseHandle(v20);
      return v1;
    }
    if ( OSGetRegistryValue(KeyHandle, L"Identifier", a1) < 0 )
    {
      v11 = KeyHandle;
LABEL_10:
      OSCloseHandle(v11);
      goto LABEL_16;
    }
    v12 = *a1;
    v13 = (wchar_t *)(*a1 + 8LL);
    String2.Buffer = v13;
    String2.MaximumLength = *(_WORD *)(v12 + 4);
    v14 = *(_DWORD *)(v12 + 4) >> 1;
    if ( v14 )
    {
      do
      {
        v15 = (unsigned int)(v14 - 1);
        if ( v13[v15] )
          break;
        --v14;
      }
      while ( (_DWORD)v15 );
    }
    String2.Length = 2 * v14;
    v16 = RtlEqualUnicodeString(&String1, &String2, 1u);
    ExFreePoolWithTag((PVOID)*a1, 0);
    v11 = KeyHandle;
    if ( !v16 )
      goto LABEL_10;
    v17 = OSGetRegistryValue(KeyHandle, L"Configuration Data", a1);
    OSCloseHandle(KeyHandle);
    if ( v17 >= 0 )
      goto LABEL_20;
LABEL_16:
    ++v6;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v5) = 2;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v5,
      22,
      18,
      (__int64)&WPP_b53b04e5215c33f856eb87d923c6e01e_Traceguids);
  }
  return 3221225524LL;
}
