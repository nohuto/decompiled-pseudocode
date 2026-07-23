/*
 * XREFs of RtlpUpdateDynamicTimeZones @ 0x14077366C
 * Callers:
 *     ExpRefreshTimeZoneInformation @ 0x140993940 (ExpRefreshTimeZoneInformation.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     RtlpFindRegTziForCurrentYear @ 0x1405DD364 (RtlpFindRegTziForCurrentYear.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ZwClose @ 0x14069B320 (ZwClose.c)
 *     ZwOpenKey @ 0x14069B380 (ZwOpenKey.c)
 *     ZwEnumerateKey @ 0x14069B780 (ZwEnumerateKey.c)
 *     memcmp @ 0x1406B4C10 (memcmp.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     RtlpQueryRegistryValues @ 0x1409B3FD0 (RtlpQueryRegistryValues.c)
 *     RtlpGetRegistryHandle @ 0x1409B44DC (RtlpGetRegistryHandle.c)
 *     RtlWriteRegistryValue @ 0x140A50A70 (RtlWriteRegistryValue.c)
 */

char __fastcall RtlpUpdateDynamicTimeZones(__int16 a1)
{
  ULONG v2; // edi
  char v3; // bl
  ULONG i; // edx
  ULONG ValueData; // [rsp+28h] [rbp-E0h]
  ULONG ResultLength[2]; // [rsp+38h] [rbp-D0h] BYREF
  HANDLE KeyHandle; // [rsp+40h] [rbp-C8h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-C0h] BYREF
  WCHAR *DestinationString; // [rsp+50h] [rbp-B8h] BYREF
  UNICODE_STRING DestinationString_8; // [rsp+58h] [rbp-B0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes_8; // [rsp+68h] [rbp-A0h] BYREF
  int v13[4]; // [rsp+98h] [rbp-70h] BYREF
  const WCHAR *v14; // [rsp+A8h] [rbp-60h]
  __int128 *p_Buf2; // [rsp+B0h] [rbp-58h]
  int v16; // [rsp+B8h] [rbp-50h]
  __int128 Buf2; // [rsp+108h] [rbp+0h] BYREF
  __int128 v18; // [rsp+118h] [rbp+10h]
  __int64 v19; // [rsp+128h] [rbp+20h]
  int v20; // [rsp+130h] [rbp+28h]
  _OWORD Buf1[2]; // [rsp+138h] [rbp+30h] BYREF
  __int64 v22; // [rsp+158h] [rbp+50h]
  int v23; // [rsp+160h] [rbp+58h]
  _BYTE KeyInformation[12]; // [rsp+168h] [rbp+60h] BYREF
  unsigned __int16 v25; // [rsp+174h] [rbp+6Ch]
  char v26; // [rsp+178h] [rbp+70h] BYREF

  Handle = 0LL;
  KeyHandle = 0LL;
  DestinationString = 0LL;
  ResultLength[0] = 0;
  DestinationString_8 = 0LL;
  memset_0(KeyInformation, 0, 0x110uLL);
  v19 = 0LL;
  v20 = 0;
  Buf2 = 0LL;
  v22 = 0LL;
  v18 = 0LL;
  v23 = 0;
  memset(Buf1, 0, sizeof(Buf1));
  memset(&ObjectAttributes_8, 0, 44);
  memset_0(v13, 0, 0x70uLL);
  v13[2] = 292;
  v16 = 50331648;
  v14 = L"TZI";
  p_Buf2 = &Buf2;
  if ( (int)RtlpGetRegistryHandle(3LL, L"Time Zones", 0LL, &Handle) < 0 )
    return 0;
  v2 = 0;
  v3 = 1;
  for ( i = 0; ZwEnumerateKey(Handle, i, KeyBasicInformation, KeyInformation, 0x110u, ResultLength) >= 0; i = v2 )
  {
    *(_DWORD *)(&DestinationString_8.MaximumLength + 1) = 0;
    DestinationString_8.MaximumLength = v25;
    DestinationString_8.Length = v25;
    ObjectAttributes_8.RootDirectory = Handle;
    DestinationString_8.Buffer = (wchar_t *)&v26;
    ObjectAttributes_8.ObjectName = &DestinationString_8;
    ObjectAttributes_8.Length = 48;
    ObjectAttributes_8.Attributes = 576;
    *(_OWORD *)&ObjectAttributes_8.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(&KeyHandle, 0x2000000u, &ObjectAttributes_8) >= 0 )
    {
      RtlInitUnicodeString(&DestinationString_8, L"Dynamic DST");
      ObjectAttributes_8.RootDirectory = KeyHandle;
      ObjectAttributes_8.Length = 48;
      ObjectAttributes_8.ObjectName = &DestinationString_8;
      ObjectAttributes_8.Attributes = 576;
      *(_OWORD *)&ObjectAttributes_8.SecurityDescriptor = 0LL;
      if ( ZwOpenKey((PHANDLE)&DestinationString, 0x20019u, &ObjectAttributes_8) >= 0 )
      {
        Buf2 = 0LL;
        LODWORD(Buf2) = -44;
        v18 = 0LL;
        v19 = 0LL;
        v20 = 0;
        if ( (int)RtlpQueryRegistryValues(0x40000000, (int)KeyHandle, (int)v13, 0, ValueData, 1) >= 0
          && (int)RtlpFindRegTziForCurrentYear(Buf1, DestinationString, a1) >= 0
          && memcmp(Buf1, &Buf2, 0x2CuLL) )
        {
          RtlWriteRegistryValue(0x40000000u, (PCWSTR)KeyHandle, L"TZI", 3u, Buf1, 0x2Cu);
        }
        ZwClose(DestinationString);
      }
      ZwClose(KeyHandle);
    }
    ++v2;
  }
  ZwClose(Handle);
  return v3;
}
