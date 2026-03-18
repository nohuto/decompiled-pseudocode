/*
 * XREFs of HalpNumaQueryProximityNode @ 0x140558350
 * Callers:
 *     HalpNumaAddRangeProximity @ 0x140557A80 (HalpNumaAddRangeProximity.c)
 *     HalpNumaGetHmatConfigSize @ 0x140557DF0 (HalpNumaGetHmatConfigSize.c)
 *     HalpNumaQueryMemoryNumaAttributes @ 0x140558110 (HalpNumaQueryMemoryNumaAttributes.c)
 *     HalpNumaQuerySystemLocalityLatencyAndBandwidthInfo @ 0x1405583A0 (HalpNumaQuerySystemLocalityLatencyAndBandwidthInfo.c)
 *     HalpNumaParseHmat @ 0x140C122A0 (HalpNumaParseHmat.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpNumaQueryProximityNode(int a1, unsigned __int16 *a2)
{
  unsigned __int16 i; // r8

  for ( i = 0; (unsigned int)i < *(_DWORD *)(HalpNumaConfig + 56); ++i )
  {
    if ( *(_DWORD *)(*(_QWORD *)(HalpNumaConfig + 24) + 4LL * i) == a1 )
    {
      *a2 = i;
      return 0LL;
    }
  }
  return 3221226021LL;
}
