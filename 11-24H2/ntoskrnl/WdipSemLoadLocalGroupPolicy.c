/*
 * XREFs of WdipSemLoadLocalGroupPolicy @ 0x1407A2B0C
 * Callers:
 *     WdipSemLoadGroupPolicy @ 0x1407A2A64 (WdipSemLoadGroupPolicy.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ZwEnumerateKey @ 0x1406A79F0 (ZwEnumerateKey.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     WdipSemOpenRegistryKey @ 0x1407A3108 (WdipSemOpenRegistryKey.c)
 *     WdipSemQueryValueFromRegistry @ 0x1407A319C (WdipSemQueryValueFromRegistry.c)
 *     RtlGUIDFromString @ 0x1408C7C70 (RtlGUIDFromString.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall WdipSemLoadLocalGroupPolicy(HANDLE KeyHandle)
{
  ULONG v2; // edi
  NTSTATUS v4; // eax
  GUID *v5; // rcx
  unsigned int Data1; // edx
  ULONG ResultLength; // [rsp+40h] [rbp-71h] BYREF
  int v9; // [rsp+44h] [rbp-6Dh] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-69h] BYREF
  GUID Guid; // [rsp+58h] [rbp-59h] BYREF
  _BYTE KeyInformation[12]; // [rsp+68h] [rbp-49h] BYREF
  unsigned int v13; // [rsp+74h] [rbp-3Dh]
  WCHAR SourceString[68]; // [rsp+78h] [rbp-39h] BYREF

  ResultLength = 0;
  v9 = 0;
  v2 = 0;
  DestinationString = 0LL;
  Guid = 0LL;
  if ( KeyHandle )
  {
    while ( 1 )
    {
      memset_0(KeyInformation, 0, 0x98uLL);
      v4 = ZwEnumerateKey(KeyHandle, v2++, KeyBasicInformation, KeyInformation, 0x96u, &ResultLength);
      if ( v4 == -2147483622 )
        break;
      if ( v4 >= 0 )
      {
        if ( v13 >= 0x80 )
          return (unsigned int)-2147483643;
        SourceString[(unsigned __int64)v13 >> 1] = 0;
        RtlInitUnicodeString(&DestinationString, SourceString);
        if ( RtlGUIDFromString(&DestinationString, &Guid) >= 0
          && (int)WdipSemOpenRegistryKey(SourceString) >= 0
          && (int)WdipSemQueryValueFromRegistry(0LL, &v9, (__int64)&ResultLength) >= 0
          && !v9 )
        {
          v5 = (GUID *)WdipSemDisabledScenarioTable;
          if ( !WdipSemDisabledScenarioTable )
          {
            WdipSemDisabledScenarioTable = (PVOID)ExAllocatePool2(0x100uLL, 0x404uLL, 0x73494457u);
            v5 = (GUID *)WdipSemDisabledScenarioTable;
            if ( !WdipSemDisabledScenarioTable )
              return (unsigned int)-1073741670;
          }
          Data1 = v5[64].Data1;
          if ( Data1 >= 0x40 )
            return (unsigned int)-1073741823;
          v5[64].Data1 = Data1 + 1;
          v5[Data1] = Guid;
        }
      }
    }
    return 0;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
}
