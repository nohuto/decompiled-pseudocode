/*
 * XREFs of PfSnAsyncPrefetchStep @ 0x1409C7C94
 * Callers:
 *     PfSnAsyncPrefetchWorker @ 0x1408EBF40 (PfSnAsyncPrefetchWorker.c)
 * Callees:
 *     PfSnPrefetchMetadata @ 0x1409C7D14 (PfSnPrefetchMetadata.c)
 *     PfSnPrefetchSections @ 0x1409C8054 (PfSnPrefetchSections.c)
 */

__int64 __fastcall PfSnAsyncPrefetchStep(__int64 a1, int a2, int a3)
{
  int v6; // r9d
  __int64 result; // rax
  int v8; // r9d

  PfSnPrefetchMetadata(a2);
  result = PfSnPrefetchSections(a2, 0, a3, v6, *(_QWORD *)(a1 + 216));
  if ( (int)result >= 0 )
  {
    result = PfSnPrefetchSections(a2, 1, a3, v8, *(_QWORD *)(a1 + 216));
    if ( (int)result >= 0 )
    {
      *(_DWORD *)(a1 + 232) |= a3;
      return 0LL;
    }
  }
  return result;
}
