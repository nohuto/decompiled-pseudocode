/*
 * XREFs of KsepCacheDeviceFree @ 0x14095C3B0
 * Callers:
 *     KseQueryDeviceDataList @ 0x14095A9E0 (KseQueryDeviceDataList.c)
 *     KsepDbCacheReadDevice @ 0x14095C178 (KsepDbCacheReadDevice.c)
 *     KseQueryDeviceData @ 0x14095C660 (KseQueryDeviceData.c)
 * Callees:
 *     KsepPoolFreePaged @ 0x1404A6F94 (KsepPoolFreePaged.c)
 *     KsepStringFree @ 0x14095B694 (KsepStringFree.c)
 */

void __fastcall KsepCacheDeviceFree(void **a1)
{
  void **v1; // rsi
  void **v3; // rbx
  void **v4; // rbp

  if ( a1 )
  {
    v1 = a1 + 7;
    v3 = (void **)a1[7];
    while ( v3 != v1 )
    {
      v4 = v3;
      v3 = (void **)*v3;
      if ( v4 )
      {
        KsepStringFree((__int64)(v4 + 2));
        KsepPoolFreePaged(v4[5]);
        KsepPoolFreePaged(v4);
      }
    }
    KsepStringFree((__int64)(a1 + 5));
    KsepPoolFreePaged(a1);
  }
}
