/*
 * XREFs of VhdAutoAttachVirtualDisks @ 0x140C5D04C
 * Callers:
 *     IopInitializeBootDrivers @ 0x140C1E4C4 (IopInitializeBootDrivers.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1404241A0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A65F0 (ZwClose.c)
 *     ZwEnumerateKey @ 0x1406A6A50 (ZwEnumerateKey.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     VhdiAutoAttachOneVhd @ 0x140829E6C (VhdiAutoAttachOneVhd.c)
 *     RtlFreeAnsiString @ 0x1408A4990 (RtlFreeAnsiString.c)
 *     RtlGUIDFromString @ 0x1408CA240 (RtlGUIDFromString.c)
 *     RtlQueryRegistryValuesEx @ 0x1409CC2F0 (RtlQueryRegistryValuesEx.c)
 *     IopOpenRegistryKeyEx @ 0x140A43B04 (IopOpenRegistryKeyEx.c)
 */

int VhdAutoAttachVirtualDisks()
{
  int result; // eax
  int v1; // ebx
  ULONG v2; // edi
  ULONG i; // edx
  unsigned __int16 Length; // dx
  NTSTATUS v5; // eax
  ULONG ResultLength[2]; // [rsp+38h] [rbp-D0h] BYREF
  HANDLE KeyHandle; // [rsp+40h] [rbp-C8h] BYREF
  HANDLE UnicodeString; // [rsp+48h] [rbp-C0h] BYREF
  UNICODE_STRING UnicodeString_8; // [rsp+50h] [rbp-B8h] BYREF
  UNICODE_STRING GuidString_8; // [rsp+60h] [rbp-A8h] BYREF
  UNICODE_STRING DestinationString_8; // [rsp+70h] [rbp-98h] BYREF
  GUID Guid_8; // [rsp+80h] [rbp-88h] BYREF
  _BYTE KeyInformation[12]; // [rsp+98h] [rbp-70h] BYREF
  int v14; // [rsp+A4h] [rbp-64h]
  char v15; // [rsp+A8h] [rbp-60h] BYREF
  _BYTE v16[8]; // [rsp+108h] [rbp+0h] BYREF
  int v17; // [rsp+110h] [rbp+8h]
  const wchar_t *v18; // [rsp+118h] [rbp+10h]
  UNICODE_STRING *p_UnicodeString_8; // [rsp+120h] [rbp+18h]
  int v20; // [rsp+128h] [rbp+20h]
  int v21; // [rsp+148h] [rbp+40h]
  const wchar_t *v22; // [rsp+150h] [rbp+48h]
  ULONG *v23; // [rsp+158h] [rbp+50h]
  int v24; // [rsp+160h] [rbp+58h]

  qword_140E65050 = (__int64)&qword_140E65048;
  KeyHandle = 0LL;
  qword_140E65048 = &qword_140E65048;
  DestinationString_8 = 0LL;
  RtlInitUnicodeString(
    &DestinationString_8,
    L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\AutoAttachVirtualDisks");
  result = IopOpenRegistryKeyEx(&KeyHandle, 0LL, &DestinationString_8, 8u);
  if ( result >= 0 )
  {
    v1 = 0;
    v2 = 0;
    memset_0(KeyInformation, 0, 0x68uLL);
    for ( i = 0; ; i = v2 )
    {
      ResultLength[0] = 0;
      UnicodeString = 0LL;
      Guid_8 = 0LL;
      GuidString_8 = 0LL;
      v5 = ZwEnumerateKey(KeyHandle, i, KeyBasicInformation, KeyInformation, 0x68u, ResultLength);
      if ( v5 == -2147483622 )
        break;
      if ( v5 != -2147483643 )
      {
        if ( v5 >= 0 )
        {
          GuidString_8.Buffer = (wchar_t *)&v15;
          GuidString_8.Length = v14;
          GuidString_8.MaximumLength = v14;
          if ( RtlGUIDFromString(&GuidString_8, &Guid_8) >= 0
            && IopOpenRegistryKeyEx(&UnicodeString, KeyHandle, &GuidString_8, 1u) >= 0 )
          {
            memset_0(v16, 0, 0xA8uLL);
            v18 = L"Path";
            ResultLength[1] = 0;
            p_UnicodeString_8 = &UnicodeString_8;
            v17 = 292;
            v22 = L"Flags";
            v20 = 0x1000000;
            v23 = &ResultLength[1];
            UnicodeString_8 = 0LL;
            v21 = 288;
            v24 = 0x4000000;
            if ( (int)RtlQueryRegistryValuesEx(0x40000000, (int)UnicodeString, (int)v16, 0) >= 0 )
            {
              Length = UnicodeString_8.Length;
              if ( (unsigned __int64)UnicodeString_8.Length + 2 <= UnicodeString_8.MaximumLength )
              {
                if ( UnicodeString_8.Buffer[(unsigned __int64)UnicodeString_8.Length >> 1] )
                {
                  Length = UnicodeString_8.Length + 2;
                  UnicodeString_8.Length += 2;
                }
              }
              VhdiAutoAttachOneVhd(UnicodeString_8.Buffer, Length, &Guid_8, ResultLength[1]);
            }
            RtlFreeAnsiString(&UnicodeString_8);
            ZwClose(UnicodeString);
          }
        }
        else if ( (unsigned int)++v1 > 0x3E8 )
        {
          return ZwClose(KeyHandle);
        }
      }
      ++v2;
      memset_0(KeyInformation, 0, 0x68uLL);
    }
    return ZwClose(KeyHandle);
  }
  return result;
}
