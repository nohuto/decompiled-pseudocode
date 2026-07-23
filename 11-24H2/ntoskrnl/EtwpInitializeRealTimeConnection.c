/*
 * XREFs of EtwpInitializeRealTimeConnection @ 0x140C40B48
 * Callers:
 *     EtwpInitialize @ 0x140C3F24C (EtwpInitialize.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ObCreateObjectType @ 0x1406F96E0 (ObCreateObjectType.c)
 */

__int64 EtwpInitializeRealTimeConnection()
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-49h] BYREF
  __int16 v2; // [rsp+30h] [rbp-39h] BYREF
  char v3; // [rsp+32h] [rbp-37h]
  int v4; // [rsp+38h] [rbp-31h]
  GENERIC_MAPPING v5; // [rsp+3Ch] [rbp-2Dh]
  int v6; // [rsp+4Ch] [rbp-1Dh]
  int v7; // [rsp+54h] [rbp-15h]
  int v8; // [rsp+5Ch] [rbp-Dh]
  __int64 (__fastcall *v9)(int); // [rsp+68h] [rbp-1h]
  __int64 (__fastcall *v10)(__int64, __int64); // [rsp+70h] [rbp+7h]
  LONG_PTR (__fastcall *v11)(HANDLE *); // [rsp+78h] [rbp+Fh]

  DestinationString = 0LL;
  memset_0(&v2, 0, 0x78uLL);
  v3 |= 0x18u;
  v9 = IopOpenIoRing;
  v2 = 120;
  v10 = EtwpCloseRealTimeConnectionObject;
  v4 = 256;
  v11 = EtwpDeleteRealTimeConnectionObject;
  v5 = EtwpGenericMapping;
  v6 = 1024;
  v7 = 512;
  v8 = 160;
  RtlInitUnicodeString(&DestinationString, L"EtwConsumer");
  return ObCreateObjectType(&DestinationString, &v2, 0LL, (__int64)&EtwpRealTimeConnectionObjectType);
}
