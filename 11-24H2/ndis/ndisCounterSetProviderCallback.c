/*
 * XREFs of ndisCounterSetProviderCallback @ 0x140159CC0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisPcwEnumerateInstances@@YAJPEAU_PCW_BUFFER@@@Z @ 0x140059C60 (-ndisPcwEnumerateInstances@@YAJPEAU_PCW_BUFFER@@@Z.c)
 *     ?ndisPcwAddCounter@@YAJW4_NDIS_COUNTER_SET_ID@@PEAU_PCW_COUNTER_INFORMATION@@@Z @ 0x14013F488 (-ndisPcwAddCounter@@YAJW4_NDIS_COUNTER_SET_ID@@PEAU_PCW_COUNTER_INFORMATION@@@Z.c)
 *     ?ndisPcwRemoveCounter@@YAJW4_NDIS_COUNTER_SET_ID@@PEAU_PCW_COUNTER_INFORMATION@@@Z @ 0x14013F7E0 (-ndisPcwRemoveCounter@@YAJW4_NDIS_COUNTER_SET_ID@@PEAU_PCW_COUNTER_INFORMATION@@@Z.c)
 *     ?ndisPcwCollectData@@YAJPEAU_PCW_BUFFER@@@Z @ 0x140159D30 (-ndisPcwCollectData@@YAJPEAU_PCW_BUFFER@@@Z.c)
 */

__int64 __fastcall ndisCounterSetProviderCallback(int a1, __int64 a2, unsigned int a3)
{
  int v4; // ecx

  if ( a3 != 1 && a3 != 2 )
    return 3221225485LL;
  if ( a1 == 3 )
    return ndisPcwCollectData(*(PPCW_BUFFER *)(a2 + 24));
  if ( !a1 )
    return ndisPcwAddCounter(a3, a2);
  v4 = a1 - 1;
  if ( !v4 )
    return ndisPcwRemoveCounter(a3, a2);
  if ( v4 == 1 )
    return ndisPcwEnumerateInstances(*(PPCW_BUFFER *)(a2 + 24));
  return 0LL;
}
