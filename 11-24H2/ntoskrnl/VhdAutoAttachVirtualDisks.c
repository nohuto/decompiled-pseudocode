/*
 * XREFs of VhdAutoAttachVirtualDisks @ 0x140C5F1A4
 * Callers:
 *     IopInitializeBootDrivers @ 0x140C20504 (IopInitializeBootDrivers.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ZwEnumerateKey @ 0x1406A79F0 (ZwEnumerateKey.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     VhdiAutoAttachOneVhd @ 0x14082A69C (VhdiAutoAttachOneVhd.c)
 *     RtlFreeAnsiString @ 0x1408B69C0 (RtlFreeAnsiString.c)
 *     RtlGUIDFromString @ 0x1408C7C70 (RtlGUIDFromString.c)
 *     RtlQueryRegistryValuesEx @ 0x1409B4D70 (RtlQueryRegistryValuesEx.c)
 *     IopOpenRegistryKeyEx @ 0x140A39394 (IopOpenRegistryKeyEx.c)
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
  WCHAR *Path; // [rsp+48h] [rbp-C0h] BYREF
  UNICODE_STRING Path_8; // [rsp+50h] [rbp-B8h] BYREF
  UNICODE_STRING GuidString_8; // [rsp+60h] [rbp-A8h] BYREF
  UNICODE_STRING DestinationString_8; // [rsp+70h] [rbp-98h] BYREF
  GUID Guid_8; // [rsp+80h] [rbp-88h] BYREF
  _BYTE KeyInformation[12]; // [rsp+98h] [rbp-70h] BYREF
  int v14; // [rsp+A4h] [rbp-64h]
  char v15; // [rsp+A8h] [rbp-60h] BYREF
  _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+108h] [rbp+0h] BYREF
  int v17; // [rsp+148h] [rbp+40h]
  const wchar_t *v18; // [rsp+150h] [rbp+48h]
  ULONG *v19; // [rsp+158h] [rbp+50h]
  int v20; // [rsp+160h] [rbp+58h]

  qword_140E651D0 = (__int64)&qword_140E651C8;
  KeyHandle = 0LL;
  qword_140E651C8 = &qword_140E651C8;
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
      Path = 0LL;
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
            && IopOpenRegistryKeyEx((HANDLE *)&Path, KeyHandle, &GuidString_8, 1u) >= 0 )
          {
            memset_0(&QueryTable, 0, 0xA8uLL);
            QueryTable.Name = L"Path";
            ResultLength[1] = 0;
            QueryTable.EntryContext = &Path_8;
            QueryTable.Flags = 292;
            v18 = L"Flags";
            QueryTable.DefaultType = 0x1000000;
            v19 = &ResultLength[1];
            Path_8 = 0LL;
            v17 = 288;
            v20 = 0x4000000;
            if ( RtlQueryRegistryValuesEx(0x40000000u, Path, &QueryTable, 0LL, 0LL) >= 0 )
            {
              Length = Path_8.Length;
              if ( (unsigned __int64)Path_8.Length + 2 <= Path_8.MaximumLength )
              {
                if ( Path_8.Buffer[(unsigned __int64)Path_8.Length >> 1] )
                {
                  Length = Path_8.Length + 2;
                  Path_8.Length += 2;
                }
              }
              VhdiAutoAttachOneVhd(Path_8.Buffer, Length, &Guid_8, ResultLength[1]);
            }
            RtlFreeAnsiString(&Path_8);
            ZwClose(Path);
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
