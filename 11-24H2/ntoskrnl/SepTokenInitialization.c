/*
 * XREFs of SepTokenInitialization @ 0x140C3C9D8
 * Callers:
 *     SepInitializationPhase0 @ 0x140C3BE1C (SepInitializationPhase0.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ObCreateObjectType @ 0x1406F96E0 (ObCreateObjectType.c)
 */

bool SepTokenInitialization()
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-39h] BYREF
  __int16 v2; // [rsp+30h] [rbp-29h] BYREF
  char v3; // [rsp+32h] [rbp-27h]
  int v4; // [rsp+34h] [rbp-25h]
  int v5; // [rsp+38h] [rbp-21h]
  __int128 v6; // [rsp+3Ch] [rbp-1Dh]
  int v7; // [rsp+4Ch] [rbp-Dh]
  int v8; // [rsp+54h] [rbp-5h]
  void (__fastcall *v9)(__int64); // [rsp+78h] [rbp+1Fh]
  int v10; // [rsp+A8h] [rbp+4Fh]

  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"Token");
  memset_0(&v2, 0, 0x80uLL);
  v3 |= 0xEu;
  v2 = 128;
  v4 = 512;
  v5 = 256;
  v8 = 1;
  v7 = 983551;
  v6 = SepTokenMapping;
  v9 = SepTokenDeleteMethod;
  v10 = 1;
  return (int)ObCreateObjectType(&DestinationString, &v2, 0LL, (__int64)&SeTokenObjectType) >= 0;
}
