/*
 * XREFs of SepRmVerifyLsaProtectionLevel @ 0x14078EC48
 * Callers:
 *     SepRmLsaConnectRequest @ 0x140A52AA4 (SepRmLsaConnectRequest.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     RtlInitUnicodeString @ 0x1404241A0 (RtlInitUnicodeString.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     ZwQuerySystemEnvironmentValueEx @ 0x1406A91B0 (ZwQuerySystemEnvironmentValueEx.c)
 *     ObReferenceObjectByHandle @ 0x14084AF40 (ObReferenceObjectByHandle.c)
 */

__int64 SepRmVerifyLsaProtectionLevel()
{
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-30h] BYREF
  _DWORD v2[4]; // [rsp+50h] [rbp-20h] BYREF

  v2[0] = 2012912317;
  v2[1] = 1295123289;
  DestinationString = 0LL;
  v2[2] = -198680387;
  v2[3] = 1266192359;
  RtlInitUnicodeString(&DestinationString, L"Kernel_Lsa_Ppl_Config");
  return ZwQuerySystemEnvironmentValueEx((__int64)&DestinationString, (__int64)v2);
}
