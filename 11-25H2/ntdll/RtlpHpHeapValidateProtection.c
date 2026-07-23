/*
 * XREFs of RtlpHpHeapValidateProtection @ 0x1800BAD10
 * Callers:
 *     RtlProtectHeap @ 0x180024F60 (RtlProtectHeap.c)
 *     RtlpHpSegMgrReserve @ 0x1800BAAA4 (RtlpHpSegMgrReserve.c)
 *     RtlpHpLargeAlloc @ 0x1800BD0E4 (RtlpHpLargeAlloc.c)
 * Callees:
 *     RtlpLogHeapFailure @ 0x180052E50 (RtlpLogHeapFailure.c)
 *     RtlpHpEnvQueryVA @ 0x1800BCBEC (RtlpHpEnvQueryVA.c)
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
