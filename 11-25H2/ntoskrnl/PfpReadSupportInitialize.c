/*
 * XREFs of PfpReadSupportInitialize @ 0x1404A2160
 * Callers:
 *     PfpPrefetchFiles @ 0x1409C70B8 (PfpPrefetchFiles.c)
 *     PfpPrefetchFilesTrickle @ 0x1409C8848 (PfpPrefetchFilesTrickle.c)
 * Callees:
 *     PfpOpenHandleInitialize @ 0x140A224A8 (PfpOpenHandleInitialize.c)
 */

__int64 __fastcall PfpReadSupportInitialize(__int64 a1)
{
  *(_OWORD *)a1 = 0LL;
  *(_OWORD *)(a1 + 16) = 0LL;
  *(_OWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  return PfpOpenHandleInitialize(a1 + 8);
}
