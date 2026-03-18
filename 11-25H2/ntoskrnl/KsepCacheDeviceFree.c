/*
 * XREFs of KsepCacheDeviceFree @ 0x14082A3C0
 * Callers:
 *     KseQueryDeviceDataList @ 0x140829150 (KseQueryDeviceDataList.c)
 *     KsepDbCacheReadDevice @ 0x14082A190 (KsepDbCacheReadDevice.c)
 *     KseQueryDeviceData @ 0x14082A670 (KseQueryDeviceData.c)
 * Callees:
 *     KsepPoolFreePaged @ 0x1404A64EC (KsepPoolFreePaged.c)
 *     KsepStringFree @ 0x14082BBBC (KsepStringFree.c)
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
        KsepStringFree(v4 + 2);
        KsepPoolFreePaged(v4[5]);
        KsepPoolFreePaged(v4);
      }
    }
    KsepStringFree(a1 + 5);
    KsepPoolFreePaged(a1);
  }
}
