/*
 * XREFs of RtlpFcQueryFeatureConfigurationFromKernel @ 0x1800D2320
 * Callers:
 *     RtlQueryFeatureConfiguration @ 0x1800D1600 (RtlQueryFeatureConfiguration.c)
 *     RtlQueryInternalFeatureConfiguration @ 0x18011AA20 (RtlQueryInternalFeatureConfiguration.c)
 * Callees:
 *     NtQuerySystemInformationEx @ 0x180162E00 (NtQuerySystemInformationEx.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 */

NTSTATUS __fastcall RtlpFcQueryFeatureConfigurationFromKernel(int a1, int a2, _QWORD *a3, _OWORD *a4)
{
  NTSTATUS result; // eax
  __int128 v7; // xmm0
  _DWORD v8[2]; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v9[3]; // [rsp+38h] [rbp-40h] BYREF

  v8[0] = a2;
  v8[1] = a1;
  memset(v9, 0, sizeof(v9));
  result = NtQuerySystemInformationEx(SystemFeatureConfigurationInformation, v8, 8u, v9, 0x18u, 0LL);
  if ( result >= 0 )
  {
    v7 = *(_OWORD *)&v9[1];
    *a3 = v9[0];
    result = 0;
    *a4 = v7;
  }
  else if ( result == -1073741275 || result == -2147483614 )
  {
    *a3 = v9[0];
  }
  return result;
}
