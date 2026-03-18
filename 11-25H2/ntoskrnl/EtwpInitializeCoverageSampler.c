/*
 * XREFs of EtwpInitializeCoverageSampler @ 0x140C2D7F4
 * Callers:
 *     EtwpInitialize @ 0x140C2BE1C (EtwpInitialize.c)
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x14036DCA0 (ExWaitForRundownProtectionRelease.c)
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     ObCreateObjectType @ 0x1406EFC30 (ObCreateObjectType.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1408B73B4 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 */

__int64 EtwpInitializeCoverageSampler()
{
  __int64 result; // rax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-49h] BYREF
  __int16 v2; // [rsp+40h] [rbp-39h] BYREF
  char v3; // [rsp+42h] [rbp-37h]
  int v4; // [rsp+48h] [rbp-31h]
  int v5; // [rsp+5Ch] [rbp-1Dh]
  int v6; // [rsp+64h] [rbp-15h]
  int v7; // [rsp+68h] [rbp-11h]
  void (__fastcall *v8)(__int64, __int64, __int64, __int64); // [rsp+80h] [rbp+7h]
  void (__fastcall *v9)(__int64); // [rsp+88h] [rbp+Fh]

  DestinationString = 0LL;
  TraceLoggingRegisterEx_EtwRegister_EtwSetInformation((__int64)&dword_140E09140, 0LL, 0LL);
  EtwpCovSampGlobals = 0LL;
  stru_140EFE900.Count = 0LL;
  ExWaitForRundownProtectionRelease(&stru_140EFE900);
  _InterlockedExchange64((volatile __int64 *)&stru_140EFE900, 1LL);
  RtlInitUnicodeString(&DestinationString, L"CoverageSampler");
  memset_0(&v2, 0, 0x78uLL);
  v3 |= 4u;
  v8 = EtwpCoverageSamplerClose;
  v2 = 120;
  v9 = EtwpCoverageSamplerDelete;
  v6 = 1;
  v7 = 1736;
  v4 = 402;
  v5 = 2031617;
  result = ObCreateObjectType(&DestinationString, &v2, 0LL, (__int64)&ObjectType);
  if ( (int)result < 0 )
    KeBugCheckEx(0x5Eu, 0xC0uLL, 0LL, 0LL, 0LL);
  return result;
}
