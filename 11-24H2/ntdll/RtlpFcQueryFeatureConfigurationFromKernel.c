/*
 * XREFs of RtlpFcQueryFeatureConfigurationFromKernel @ 0x1800D6FB0
 * Callers:
 *     RtlQueryFeatureConfiguration @ 0x1800D6290 (RtlQueryFeatureConfiguration.c)
 *     RtlQueryInternalFeatureConfiguration @ 0x18011C7F0 (RtlQueryInternalFeatureConfiguration.c)
 * Callees:
 *     NtQuerySystemInformationEx @ 0x180164A40 (NtQuerySystemInformationEx.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpFcQueryFeatureConfigurationFromKernel(int a1, int a2, _QWORD *a3, _OWORD *a4)
{
  __int64 result; // rax
  __int128 v7; // xmm0
  _DWORD v8[2]; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v9[3]; // [rsp+38h] [rbp-40h] BYREF

  v8[0] = a2;
  v8[1] = a1;
  memset(v9, 0, sizeof(v9));
  result = NtQuerySystemInformationEx(210LL, v8, 8LL, v9, 24, 0LL);
  if ( (int)result >= 0 )
  {
    v7 = *(_OWORD *)&v9[1];
    *a3 = v9[0];
    result = 0LL;
    *a4 = v7;
  }
  else if ( (_DWORD)result == -1073741275 || (_DWORD)result == -2147483614 )
  {
    *a3 = v9[0];
  }
  return result;
}
