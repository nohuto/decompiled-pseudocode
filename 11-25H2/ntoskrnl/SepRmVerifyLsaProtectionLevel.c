/*
 * XREFs of SepRmVerifyLsaProtectionLevel @ 0x14077F988
 * Callers:
 *     SepRmLsaConnectRequest @ 0x140A4F304 (SepRmLsaConnectRequest.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ZwQuerySystemEnvironmentValueEx @ 0x14069DEE0 (ZwQuerySystemEnvironmentValueEx.c)
 *     ObReferenceObjectByHandle @ 0x14084F190 (ObReferenceObjectByHandle.c)
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
