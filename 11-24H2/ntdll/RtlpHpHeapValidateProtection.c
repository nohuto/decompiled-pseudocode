/*
 * XREFs of RtlpHpHeapValidateProtection @ 0x18009C520
 * Callers:
 *     RtlProtectHeap @ 0x180028BA0 (RtlProtectHeap.c)
 *     RtlpHpLargeAlloc @ 0x18009A714 (RtlpHpLargeAlloc.c)
 *     RtlpHpSegMgrReserve @ 0x18009C2B0 (RtlpHpSegMgrReserve.c)
 * Callees:
 *     RtlpLogHeapFailure @ 0x180056D80 (RtlpLogHeapFailure.c)
 *     RtlpHpEnvQueryVA @ 0x18009E3FC (RtlpHpEnvQueryVA.c)
 */

__int64 __fastcall RtlpHpHeapValidateProtection(void *a1, unsigned int a2)
{
  _OWORD MemoryInformation[2]; // [rsp+30h] [rbp-38h] BYREF
  __int128 v6; // [rsp+50h] [rbp-18h]

  memset(MemoryInformation, 0, sizeof(MemoryInformation));
  v6 = 0LL;
  if ( a2 != 64
    || (int)RtlpHpEnvQueryVA(a1, MemoryInformation) >= 0
    && (BYTE4(v6) & 0x60) != 0
    && *(void **)&MemoryInformation[0] == a1 )
  {
    return a2;
  }
  RtlpLogHeapFailure(0, (__int64)a1, 1LL, DWORD1(v6), 0LL, 0LL);
  return 4LL;
}
