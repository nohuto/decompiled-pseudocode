/*
 * XREFs of PfSnPrefetchCacheEntryUpdate @ 0x14094A9E4
 * Callers:
 *     PfSnSetPrefetcherInformation @ 0x14094AB4C (PfSnSetPrefetcherInformation.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     PfResourceExclusiveAcquire @ 0x140499D88 (PfResourceExclusiveAcquire.c)
 *     memcmp @ 0x1406C0E10 (memcmp.c)
 *     PfSnPrefetchCacheEntryGet @ 0x140949040 (PfSnPrefetchCacheEntryGet.c)
 */

void __fastcall PfSnPrefetchCacheEntryUpdate(__int64 a1)
{
  _OWORD *v1; // rdi
  unsigned __int8 *v3; // r9
  __int64 v4; // rbp
  __int64 v5; // r10
  __int64 v6; // rax
  __int64 v7; // rbx

  v1 = (_OWORD *)(a1 + 4);
  v3 = (unsigned __int8 *)(a1 + 4);
  v4 = 314159LL;
  v5 = 8LL;
  do
  {
    v6 = *v3;
    v3 += 8;
    v4 = *(v3 - 1)
       + 37
       * (*(v3 - 2)
        + 37
        * (*(v3 - 3) + 37 * (*(v3 - 4) + 37 * (*(v3 - 5) + 37 * (*(v3 - 6) + 37 * (*(v3 - 7) + 37 * (v6 + 37 * v4)))))));
    --v5;
  }
  while ( v5 );
  PfResourceExclusiveAcquire(&stru_140E671F0);
  v7 = qword_140E671E0 - 16;
  if ( !memcmp((const void *)(qword_140E671E0 - 16 + 32), v1, 0x40uLL)
    || (v7 = PfSnPrefetchCacheEntryGet((__int64)&unk_140E671C8, v1, v4, 0LL)) != 0 )
  {
    *(_DWORD *)(v7 + 116) = *(_DWORD *)(a1 + 68);
  }
  ExReleaseResourceLite(&stru_140E671F0);
  KeLeaveCriticalRegion();
}
