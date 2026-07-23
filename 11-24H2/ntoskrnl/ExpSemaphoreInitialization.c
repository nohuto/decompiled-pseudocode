/*
 * XREFs of ExpSemaphoreInitialization @ 0x140C45394
 * Callers:
 *     ExpInitSystemPhase1 @ 0x140C42BB4 (ExpInitSystemPhase1.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ObCreateObjectType @ 0x1406F96E0 (ObCreateObjectType.c)
 */

bool ExpSemaphoreInitialization()
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-49h] BYREF
  _WORD v2[2]; // [rsp+30h] [rbp-39h] BYREF
  int v3; // [rsp+34h] [rbp-35h]
  int v4; // [rsp+38h] [rbp-31h]
  __int128 v5; // [rsp+3Ch] [rbp-2Dh]
  int v6; // [rsp+4Ch] [rbp-1Dh]
  int v7; // [rsp+54h] [rbp-15h]
  int v8; // [rsp+5Ch] [rbp-Dh]

  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"Semaphore");
  memset_0(v2, 0, 0x78uLL);
  v2[0] = 120;
  v3 = 8;
  v4 = 256;
  v7 = 512;
  v5 = ExpSemaphoreMapping;
  v8 = 32;
  v6 = 2031619;
  return (int)ObCreateObjectType(&DestinationString, v2, 0LL, (__int64)&ExSemaphoreObjectType) >= 0;
}
