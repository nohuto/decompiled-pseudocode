/*
 * XREFs of EtwpInitializePrivateSessionDemuxObject @ 0x1407AD2E4
 * Callers:
 *     EtwpInitialize @ 0x140C3D0FC (EtwpInitialize.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1404241A0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     ObCreateObjectTypeEx @ 0x140A9DB20 (ObCreateObjectTypeEx.c)
 */

__int64 EtwpInitializePrivateSessionDemuxObject()
{
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-49h] BYREF
  __int16 Src; // [rsp+40h] [rbp-39h] BYREF
  char v3; // [rsp+42h] [rbp-37h]
  int v4; // [rsp+48h] [rbp-31h]
  GENERIC_MAPPING v5; // [rsp+4Ch] [rbp-2Dh]
  int v6; // [rsp+64h] [rbp-15h]
  int v7; // [rsp+68h] [rbp-11h]
  __int64 (__fastcall *v8)(); // [rsp+78h] [rbp-1h]
  void (__fastcall *v9)(_QWORD *); // [rsp+88h] [rbp+Fh]

  DestinationString = 0LL;
  memset_0(&Src, 0, 0x78uLL);
  v3 |= 0x14u;
  v8 = IopOpenIoRing;
  Src = 120;
  v9 = EtwpDeleteSessionDemuxObject;
  v4 = 256;
  v5 = EtwpGenericMapping;
  v6 = 1;
  v7 = 32;
  RtlInitUnicodeString(&DestinationString, L"EtwSessionDemuxEntry");
  return ObCreateObjectTypeEx(&DestinationString, &Src, (__int64)&EtwpSessionDemuxObjectType);
}
