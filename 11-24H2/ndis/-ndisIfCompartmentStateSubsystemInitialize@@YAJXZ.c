/*
 * XREFs of ?ndisIfCompartmentStateSubsystemInitialize@@YAJXZ @ 0x14018EBE0
 * Callers:
 *     ?ndisIfInitializePhase1@@YAJXZ @ 0x14018E8A4 (-ndisIfInitializePhase1@@YAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1400E70B0 (__security_check_cookie.c)
 */

__int64 ndisIfCompartmentStateSubsystemInitialize(void)
{
  _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-A8h] BYREF
  __int128 v2; // [rsp+30h] [rbp-98h] BYREF
  __int128 v3; // [rsp+40h] [rbp-88h]
  __int128 v4; // [rsp+50h] [rbp-78h]
  __int128 v5; // [rsp+60h] [rbp-68h]
  __int64 v6; // [rsp+70h] [rbp-58h]
  __int64 (__fastcall *v7)(__int64); // [rsp+78h] [rbp-50h]
  __int128 v8; // [rsp+80h] [rbp-48h]
  __int128 v9; // [rsp+90h] [rbp-38h]
  __int64 v10; // [rsp+A0h] [rbp-28h]

  v2 = 0LL;
  v4 = 0LL;
  v3 = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  v10 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  BYTE2(v2) = 12;
  LOWORD(v2) = 120;
  HIDWORD(v3) = 983103;
  *(_QWORD *)((char *)&v4 + 4) = 0x1000000200LL;
  v7 = ndisCmDeleteStateObject;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"NdisCmState");
  return ObCreateObjectType(&DestinationString, &v2, 0LL, &qword_14011D518);
}
