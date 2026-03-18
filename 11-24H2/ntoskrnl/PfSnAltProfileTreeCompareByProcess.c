/*
 * XREFs of PfSnAltProfileTreeCompareByProcess @ 0x140939A14
 * Callers:
 *     PfSnSetAltPrefetchParam @ 0x140747784 (PfSnSetAltPrefetchParam.c)
 *     PfSnAltProfileFindByProcess @ 0x140939988 (PfSnAltProfileFindByProcess.c)
 * Callees:
 *     memcmp @ 0x1406BFF10 (memcmp.c)
 */

int __fastcall PfSnAltProfileTreeCompareByProcess(__int64 a1, __int64 a2)
{
  __int64 Buf1; // [rsp+30h] [rbp+8h] BYREF

  Buf1 = a1;
  return memcmp(&Buf1, (const void *)(a2 + 48), 8uLL);
}
