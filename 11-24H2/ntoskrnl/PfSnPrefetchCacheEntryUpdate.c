/*
 * XREFs of PfSnPrefetchCacheEntryUpdate @ 0x140962F24
 * Callers:
 *     PfSnSetPrefetcherInformation @ 0x14096308C (PfSnSetPrefetcherInformation.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14025A450 (ExReleaseResourceLite.c)
 *     PfResourceExclusiveAcquire @ 0x14049EF58 (PfResourceExclusiveAcquire.c)
 *     memcmp @ 0x1406BFF10 (memcmp.c)
 *     PfSnPrefetchCacheEntryGet @ 0x140961580 (PfSnPrefetchCacheEntryGet.c)
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
  PfResourceExclusiveAcquire(&stru_140E670A0);
  v7 = qword_140E67090 - 16;
  if ( !memcmp((const void *)(qword_140E67090 - 16 + 32), v1, 0x40uLL)
    || (v7 = PfSnPrefetchCacheEntryGet((__int64)&unk_140E67078, v1, v4, 0LL)) != 0 )
  {
    *(_DWORD *)(v7 + 116) = *(_DWORD *)(a1 + 68);
  }
  ExReleaseResourceLite(&stru_140E670A0);
  KeLeaveCriticalRegion();
}
