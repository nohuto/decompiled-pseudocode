/*
 * XREFs of RaidAdapterStop @ 0x1400403C8
 * Callers:
 *     RaidAdapterDevicePowerstopAdapter @ 0x140034B54 (RaidAdapterDevicePowerstopAdapter.c)
 *     RaidAdapterStopDeviceIrp @ 0x140183020 (RaidAdapterStopDeviceIrp.c)
 *     RaidAdapterReleaseResources @ 0x1401BD580 (RaidAdapterReleaseResources.c)
 * Callees:
 *     RaidIsAdapterControlSupported @ 0x14001C7B0 (RaidIsAdapterControlSupported.c)
 *     RaidAdapterStopAdapter @ 0x1400275F8 (RaidAdapterStopAdapter.c)
 */

__int64 __fastcall RaidAdapterStop(__int64 a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( !*(_QWORD *)(a1 + 608) || !*(_QWORD *)(a1 + 616) )
    return 0LL;
  if ( RaidIsAdapterControlSupported(a1 + 376, 1) )
    return (unsigned int)RaidAdapterStopAdapter(a1);
  return v1;
}
