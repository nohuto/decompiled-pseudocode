/*
 * XREFs of PortGetKeepAliveTimeoutValue @ 0x1401B360C
 * Callers:
 *     NvmeAdapterInitializeFabricProperties @ 0x1400D3774 (NvmeAdapterInitializeFabricProperties.c)
 * Callees:
 *     _wcsnicmp_0 @ 0x1400564AA (_wcsnicmp_0.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 *     PortpOpenParametersKey @ 0x1401B99DC (PortpOpenParametersKey.c)
 */

void __fastcall PortGetKeepAliveTimeoutValue(__int64 a1, _DWORD *a2)
{
  void *v3; // rbx
  int v4; // ecx
  ULONG ResultLength; // [rsp+30h] [rbp-D0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-C8h] BYREF
  _DWORD KeyValueInformation[5]; // [rsp+50h] [rbp-B0h] BYREF
  wchar_t Str1[246]; // [rsp+64h] [rbp-9Ch] BYREF

  if ( a2 )
  {
    ResultLength = 0;
    DestinationString = 0LL;
    v3 = (void *)PortpOpenParametersKey();
    if ( v3 )
    {
      RtlInitUnicodeString(&DestinationString, L"KeepAliveTimeoutInMs");
      if ( ZwQueryValueKey(v3, &DestinationString, KeyValueFullInformation, KeyValueInformation, 0x200u, &ResultLength) >= 0
        && KeyValueInformation[1] == 4
        && KeyValueInformation[3] == 4
        && !wcsnicmp_0(Str1, L"KeepAliveTimeoutInMs", (unsigned __int64)KeyValueInformation[4] >> 1) )
      {
        v4 = *(_DWORD *)((char *)KeyValueInformation + KeyValueInformation[2]);
        if ( v4 != -1 )
          *a2 = v4;
      }
      ZwClose(v3);
    }
  }
}
