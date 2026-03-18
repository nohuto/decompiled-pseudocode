/*
 * XREFs of PfSnAltProfileTreeCompareByProcess @ 0x14091D448
 * Callers:
 *     PfSnSetAltPrefetchParam @ 0x14073B764 (PfSnSetAltPrefetchParam.c)
 *     PfSnAltProfileFindByProcess @ 0x14091D3BC (PfSnAltProfileFindByProcess.c)
 * Callees:
 *     memcmp @ 0x1406B4C10 (memcmp.c)
 */

int __fastcall PfSnAltProfileTreeCompareByProcess(__int64 a1, __int64 a2)
{
  __int64 Buf1; // [rsp+30h] [rbp+8h] BYREF

  Buf1 = a1;
  return memcmp(&Buf1, (const void *)(a2 + 48), 8uLL);
}
