/*
 * XREFs of EtwpInitializeCoverageSampler @ 0x140C40C20
 * Callers:
 *     EtwpInitialize @ 0x140C3F24C (EtwpInitialize.c)
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x1402BB610 (ExWaitForRundownProtectionRelease.c)
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ObCreateObjectType @ 0x1406F96E0 (ObCreateObjectType.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1409EA0B8 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
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
  TraceLoggingRegisterEx_EtwRegister_EtwSetInformation((__int64)&dword_140E09290, 0LL, 0LL);
  EtwpCovSampGlobals = 0LL;
  stru_140EFEFA0.Count = 0LL;
  ExWaitForRundownProtectionRelease(&stru_140EFEFA0);
  _InterlockedExchange64((volatile __int64 *)&stru_140EFEFA0, 1LL);
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
