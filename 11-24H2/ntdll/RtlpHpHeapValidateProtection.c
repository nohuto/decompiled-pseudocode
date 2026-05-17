/*
 * XREFs of RtlpHpHeapValidateProtection @ 0x180091990
 * Callers:
 *     RtlpHpSegMgrReserve @ 0x180091724 (RtlpHpSegMgrReserve.c)
 *     RtlpHpLargeAlloc @ 0x180093F08 (RtlpHpLargeAlloc.c)
 *     RtlProtectHeap @ 0x18009C280 (RtlProtectHeap.c)
 * Callees:
 *     RtlpLogHeapFailure @ 0x18002A380 (RtlpLogHeapFailure.c)
 *     RtlpHpEnvQueryVA @ 0x18009386C (RtlpHpEnvQueryVA.c)
 */

__int64 __fastcall RtlpHpHeapValidateProtection(__int64 a1, unsigned int a2)
{
  _OWORD v5[2]; // [rsp+30h] [rbp-38h] BYREF
  __int128 v6; // [rsp+50h] [rbp-18h]

  memset(v5, 0, sizeof(v5));
  v6 = 0LL;
  if ( a2 != 64 || (int)RtlpHpEnvQueryVA(a1, v5) >= 0 && (BYTE4(v6) & 0x60) != 0 && *(_QWORD *)&v5[0] == a1 )
    return a2;
  RtlpLogHeapFailure(0, a1, 1LL, DWORD1(v6), 0LL, 0LL);
  return 4LL;
}
