/*
 * XREFs of BiDeleteEfiVariable @ 0x1409A7A20
 * Callers:
 *     BiExportEfiBootManager @ 0x140AADFCC (BiExportEfiBootManager.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwQuerySystemEnvironmentValueEx @ 0x1406AA150 (ZwQuerySystemEnvironmentValueEx.c)
 *     ZwSetSystemEnvironmentValueEx @ 0x1406AAB10 (ZwSetSystemEnvironmentValueEx.c)
 *     BiLogMessage @ 0x1409A4E48 (BiLogMessage.c)
 *     BiReleasePrivilege @ 0x1409A7288 (BiReleasePrivilege.c)
 *     BiAcquirePrivilege @ 0x1409A72E0 (BiAcquirePrivilege.c)
 */

__int64 __fastcall BiDeleteEfiVariable(PCWSTR SourceString)
{
  NTSTATUS v2; // ebx
  NTSTATUS v3; // eax
  ULONG ValueLength; // [rsp+30h] [rbp-40h] BYREF
  __int64 v6; // [rsp+38h] [rbp-38h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-30h] BYREF
  GUID VendorGuid; // [rsp+50h] [rbp-20h] BYREF

  v6 = 0LL;
  VendorGuid.Data1 = -1947934879;
  *(_DWORD *)&VendorGuid.Data2 = 299013066;
  *(_DWORD *)VendorGuid.Data4 = -536867414;
  DestinationString = 0LL;
  *(_DWORD *)&VendorGuid.Data4[4] = -1943338088;
  v2 = BiAcquirePrivilege(0x16u, (__int64)&v6);
  if ( v2 >= 0 )
  {
    ValueLength = 0;
    RtlInitUnicodeString(&DestinationString, SourceString);
    v3 = ZwQuerySystemEnvironmentValueEx(&DestinationString, &VendorGuid, 0LL, &ValueLength, 0LL);
    v2 = v3;
    if ( v3 == -1073741789 )
    {
      v2 = ZwSetSystemEnvironmentValueEx(&DestinationString, &VendorGuid, 0LL, 0, 1u);
      if ( v2 >= 0 )
      {
LABEL_4:
        BiReleasePrivilege((unsigned int *)&v6);
        return (unsigned int)v2;
      }
    }
    else if ( v3 == -1073741568 )
    {
      v2 = 0;
      goto LABEL_4;
    }
    BiLogMessage();
    goto LABEL_4;
  }
  return (unsigned int)v2;
}
