/*
 * XREFs of PfSnAltProfileTreeCompareByProcess @ 0x14094BEF8
 * Callers:
 *     PfSnSetAltPrefetchParam @ 0x140745A74 (PfSnSetAltPrefetchParam.c)
 *     PfSnAltProfileFindByProcess @ 0x14094BE6C (PfSnAltProfileFindByProcess.c)
 * Callees:
 *     memcmp @ 0x1406C0E10 (memcmp.c)
 */

int __fastcall PfSnAltProfileTreeCompareByProcess(__int64 a1, __int64 a2)
{
  __int64 Buf1; // [rsp+30h] [rbp+8h] BYREF

  Buf1 = a1;
  return memcmp(&Buf1, (const void *)(a2 + 48), 8uLL);
}
